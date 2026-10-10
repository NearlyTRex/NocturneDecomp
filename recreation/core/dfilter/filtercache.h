#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CFilterCache {
public:
    CFilterCache();
    ~CFilterCache();

    void free();
    CDemonFilter *getFilter(char *filter_name, int blend_filter);
    CDemonFilter *findFilter(char *filter_name);
};

} // namespace nocturne::core
