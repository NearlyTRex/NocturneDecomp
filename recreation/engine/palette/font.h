#pragma once

#include "engine/fwd.h"

#include <string_view>

namespace nocturne::engine {

// A font that draws a line of Windows-1252 text by itself, which a bitmap font hands its text to.
class CFont {
public:
    CFont();
    CFont(const CFont &) = delete;
    CFont &operator=(const CFont &) = delete;
    CFont(CFont &&) = delete;
    CFont &operator=(CFont &&) = delete;
    virtual ~CFont();

    // nocedit 0x00544ed0 is a non-virtual wrapper that only makes this call. -1 asks the bitmap
    // font to draw the line itself.
    virtual int drawText(std::string_view text_string, int x, int y, int foreground_color,
                         int background_color) = 0;
    virtual int getStringWidth(std::string_view text_string) = 0;
    virtual int getStringHeight(std::string_view text_string) = 0;
    virtual int getLineSpacing();
};

} // namespace nocturne::engine
