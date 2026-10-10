#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CAlphaBitmap {
public:
    CAlphaBitmap();
    ~CAlphaBitmap();

    void free();
    void load(char *filename, int width, int height);
    void display(int x, int y, int alpha);
    void render(int dest_x, int dest_y, int left_x, int top_y, int right_x, int bottom_y,
                int global_alpha);
    void scale(int scaleFactorX, int scaleFactorY);
    void initPalette();
};

} // namespace nocturne::engine
