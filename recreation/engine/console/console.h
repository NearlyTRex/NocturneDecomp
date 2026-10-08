#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CConsole {
public:
    CConsole(int width, int height, int screen_x, int screen_y);
    ~CConsole();

    void printf(char *format, ...);
    void reset();
    void render();
};

} // namespace nocturne::engine
