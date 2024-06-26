

#ifndef ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDER_H
#define ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDER_H

#include <json/json.h>
#include <curl/curl.h>
#include <string>
using std::string;
class MarketDataProvider {
public:
    virtual string connect(const string& url);
    virtual Json::Value parseJson(const string& response);
    virtual const Json::Value fetchMarketData(std::string& instrumentSymbol,
                                              std::string& interval,
                                              std::string& dataType,
                                              const std::string& apiKey) = 0;
};


#endif //ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDER_H
