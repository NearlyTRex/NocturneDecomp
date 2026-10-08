#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CExternalRenderer {
public:
    CExternalRenderer();

    int validate(CExternalRenderer *capabilities);
};

} // namespace nocturne::engine
