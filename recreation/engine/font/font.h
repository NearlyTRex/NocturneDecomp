#pragma once

namespace nocturne::engine {

// What font.cpp keeps for every font: the colour text drawn in colour mode -3 takes, as a pixel of
// the current depth. The drawing surface sets it around its text and puts it back.
class CFontColors {
public:
    [[nodiscard]] int getDefaultTextColor() const;
    void setDefaultTextColor(int text_color);

private:
    int default_text_color_ = 0;
};

} // namespace nocturne::engine
