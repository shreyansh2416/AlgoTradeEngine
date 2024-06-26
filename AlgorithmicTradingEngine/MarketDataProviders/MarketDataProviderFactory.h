

#ifndef ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDERFACTORY_H
#define ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDERFACTORY_H
#include "MarketDataProvider.h"

class MarketDataProviderFactory {
public:
    static std::shared_ptr<MarketDataProvider> createProvider(const std::string& providerName);
};


#endif //ALGORITHMICTRADINGENGINE_MARKETDATAPROVIDERFACTORY_H
