#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CGround {
public:
    CGround(int width, int height);
    ~CGround();

    void init();
    void free();
    void load(char *filename);
    void render();
    int getHeightAtPosition(int world_x, int world_z);
};

} // namespace nocturne::core
