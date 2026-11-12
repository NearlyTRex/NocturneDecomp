// =============================================================================
// OS FONT SCALE — implementation
// =============================================================================
//
// See os_font_scale.h. initFonts' keep makes the four OS fonts this follows.

#include "core/os_font_scale.h"

#include "nocturne.h"

#include <cmath>

namespace {

// A scale this close to another is the same.
const float kSameScale = 0.001f;

// Each OS font initFonts makes: its height and its two offsets, in pixels.
struct Size {
    CWinFont **made;
    int height;
    int y_offset1;
    int y_offset2;
};

const Size kSizes[] = {
    {&g_MediumWinFont, 14, 2, 2},
    {&g_ThemeWinFont, 18, 0, 0},
    {&g_TinyWinFont, 12, 0, 0},
    {&g_DebugWinFont, 10, 0, 0},
};
const int kSizeCount = (int)(sizeof(kSizes) / sizeof(kSizes[0]));

// One of them made at a scale, and which it was made from.
struct Scaled {
    CWinFont *from = nullptr;
    float scale = 0.0f;
    bool made = false;
    CWinFont font = {};
};

Scaled s_scaled[kSizeCount];

int at_scale(int length, float scale) {
    return (int)std::lround((float)length * scale);
}

} // namespace

extern "C" struct CWinFont *nocturne_os_font_scaled(struct CBitFont *font, float scale) {
    if (font == nullptr || font->win_font_enabled == 0 || font->win_font_helper == nullptr ||
        std::fabs(scale - 1.0f) < kSameScale)
        return nullptr;
    CWinFont *from = font->win_font_helper;
    for (int i = 0; i < kSizeCount; i++) {
        if (*kSizes[i].made != from)
            continue;
        Scaled &scaled = s_scaled[i];
        if (!scaled.made || scaled.from != from || std::fabs(scaled.scale - scale) >= kSameScale) {
            if (scaled.made)
                engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(&scaled.font, 0);
            engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(
                &scaled.font, g_OSFontName, at_scale(kSizes[i].height, scale),
                at_scale(kSizes[i].y_offset1, scale), at_scale(kSizes[i].y_offset2, scale));
            scaled.made = true;
            scaled.from = from;
            scaled.scale = scale;
        }
        return &scaled.font;
    }
    return nullptr;
}
