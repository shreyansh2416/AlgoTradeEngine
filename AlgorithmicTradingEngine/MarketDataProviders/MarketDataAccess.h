

#ifndef ALGORITHMICTRADINGENGINE_MARKETDATAACCESS_H
#define ALGORITHMICTRADINGENGINE_MARKETDATAACCESS_H
#include "MarketDataAccessor.h"

class MarketDataAccess: public MarketDataAccessor {
private:
    std::string providerName, providerApiKey;
public:
    Json::Value fetchHistoricalData(std::string& instrumentSymbol,
                                    std::string& interval,
                                    std::string& dataType) override;

    MarketDataAccess(std::string& marketDataProvider, std::string& apiKey):
        providerName(marketDataProvider),
        providerApiKey(apiKey){}

    void setProvider(const std::string& marketDataProvider){providerName = marketDataProvider;}
    void setApiKey(const std::string& apiKey){providerApiKey = apiKey;};
};


#endif //ALGORITHMICTRADINGENGINE_MARKETDATAACCESS_H
