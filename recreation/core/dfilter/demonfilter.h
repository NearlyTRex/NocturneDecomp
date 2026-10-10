#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CDemonFilter {
public:
    CDemonFilter();
    ~CDemonFilter();

    void load(char *filename);
    void init(float init_value, int flags);
};

} // namespace nocturne::core
