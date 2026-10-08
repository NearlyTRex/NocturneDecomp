#pragma once

#include "shape/fwd.h"

namespace nocturne::shape {

class CEdScrollBar {
public:
    CEdScrollBar();
    ~CEdScrollBar();

    void setPosition(int left_pos, int top_pos, int right_pos, int bottom_pos);
    void render();
    void handleInput();
};

} // namespace nocturne::shape
