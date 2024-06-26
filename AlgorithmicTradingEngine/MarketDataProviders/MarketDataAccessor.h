

#ifndef ALGORITHMICTRADINGENGINE_MARKETDATAACCESSOR_H
#define ALGORITHMICTRADINGENGINE_MARKETDATAACCESSOR_H

#include "json/json.h"
#include <string>

class MarketDataAccessor{
public:
    virtual     Json::Value fetchHistoricalData(std::string& instrumentSymbol,
                                                std::string& interval,
                                                std::string& dataType) = 0;
};
#endif //ALGORITHMICTRADINGENGINE_MARKETDATAACCESSOR_H
