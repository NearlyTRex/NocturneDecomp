#pragma once

#include "common/video/presentation.h"

#include <cstdint>
#include <string_view>
#include <vector>

namespace nocturne::platform {

// Text as TextOutA draws it: one byte per pixel, rows top first, nonzero where a glyph covers
// the pixel. Edges are hard, because CWinFont colour-keys the result into the framebuffer and a
// blended edge would copy as a fringe.
struct STextMask {
    common::SExtent size;
    std::vector<std::uint8_t> coverage;
};

// A font CreateFontA made, for the CWinFont that holds it. Text is Windows-1252.
class IOsFont {
public:
    virtual ~IOsFont() = default;

    // GetTextExtentPoint32A: the cell the text occupies.
    [[nodiscard]] virtual common::SExtent measureText(std::string_view text) = 0;
    // TextOutA, without the colour: CWinFont applies it as it copies.
    [[nodiscard]] virtual STextMask renderText(std::string_view text) = 0;
};

} // namespace nocturne::platform
