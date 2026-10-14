#include "engine/font/font.h"

namespace nocturne::engine {

// nocedit 0x004ce220
int CFontColors::getDefaultTextColor() const {
    return default_text_color_;
}

// nocedit 0x004ce230
void CFontColors::setDefaultTextColor(int text_color) {
    default_text_color_ = text_color;
}

} // namespace nocturne::engine
