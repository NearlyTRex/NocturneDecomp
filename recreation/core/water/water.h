#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CWater {
public:
    CWater();
    ~CWater();

    void captureTextures();
    void calculateVisibleTiles();
    void process();
    void render(int render_mode);
};

} // namespace nocturne::core
