// =============================================================================
// MENU RENDER — implementation
// =============================================================================
//
// See menu_render.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.
// renderMenuAndGetChoice's keep is the shipped routine this follows.

#include "core/menu_render.h"

#include "nocturne.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

// Where the lines go, and how they are drawn.
const int kMenuX = 0xa0;
const int kTitleColour = 7;
const int kLineColour = 0xf8;
const int kChosenColour = 7;        // the moon's animation in its first half
const int kChosenFlatColour = 0xff; // and in its second
const int kLineAlpha = 48000;
const int kOpaque = 0xffff;

// The chosen line's shimmer: copies a few pixels off, each at a random alpha.
const int kShimmerCopies = 5;
const int kShimmerLeft = 0x9e;

// The bottom-right corner the copyright sits in, the bottom-left one the
// version takes, and the trademark beside the logo.
const int kCornerRight = 0x27f;
const int kCornerBottom = 0x1df;
const int kVersionX = 4;
const int kTrademarkX = 0x206;
const int kTrademarkY = 99;
const int kTrademarkAlpha = 0x8000;

const char kCopyright[] = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
const char kCopyrightOs[] = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";

int line_height(CBitFont *font) {
    return engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(font, 'X');
}

void draw_shimmer(CBitFont *font, char *line, int y) {
    for (int i = 0; i < kShimmerCopies; i++) {
        const unsigned dx = nocturne_rng_fx();
        const unsigned dy = nocturne_rng_fx();
        const unsigned alpha = nocturne_rng_fx();
        engine_3d_c_setRenderAlpha_FUN_00406d80((int)(((long long)alpha * kLineAlpha) >> 16));
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, line, (int)(dx & 3) + kShimmerLeft,
                                                       (int)(dy & 3) - 2 + y, kChosenColour, -1);
    }
}

void draw_corners() {
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    char *copyright = (char *)(g_UseOSFonts == 0 ? kCopyright : kCopyrightOs);
    const int width =
        engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_SmallEditorFont, copyright);
    const int height =
        engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_SmallEditorFont, copyright);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(
        g_SmallEditorFont, copyright, kCornerRight - width, kCornerBottom - height, kLineColour, 0);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kTrademarkAlpha);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_SmallEditorFont, g_MenuTrademarkGlyph,
                                                   kTrademarkX, kTrademarkY, kLineColour, 0);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_SmallEditorFont,
                                                   (char *)nocturne_version_short(), kVersionX,
                                                   kCornerBottom - height, kLineColour, 0);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
#if NOCTURNE_EDITOR_BUILD
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(
        g_SmallEditorFont, (char *)"NON-RELEASE EDITOR BUILD", 0, 0, kLineColour, 0);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(g_SmallEditorFont,
                                                   (char *)"Press CTRL+D to access the editor menu",
                                                   0, 0x14, kLineColour, 0);
#endif
}

bool taken(EInputCodeType key) {
    return (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, key) != 0;
}

} // namespace

extern "C" int nocturne_menu_render(char **lines, int count, int *selected, int y, char *title) {
    CBitFont *font = g_ThemeFont;
    if (title != nullptr) {
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, title, kMenuX, y, kTitleColour, 0);
        y += line_height(font) * 2;
    }
    for (int i = 0; i < count; i++) {
        const int height = line_height(font);
        int colour = kLineColour;
        if (i == *selected) {
            colour = kChosenFlatColour;
            if (core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance) != 0) {
                colour = kChosenColour;
                draw_shimmer(font, lines[i], y);
            }
        }
        engine_3d_c_setRenderAlpha_FUN_00406d80(kLineAlpha);
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, lines[i], kMenuX, y, colour, -1);
        // A titled list is single-spaced.
        y += title != nullptr ? height : height * 2;
    }
    draw_corners();

    // The line the cursor was on decides whether left and right answer it.
    const bool has_value = strchr(lines[*selected], ':') != nullptr;
    g_MenuInputHappened = 0;
    if (taken(DIK_NUMPAD8)) {
        g_MenuInputHappened = 1;
        *selected = *selected == 0 ? count - 1 : *selected - 1;
    }
    if (taken(DIK_NUMPAD2)) {
        g_MenuInputHappened = 1;
        *selected = *selected + 1 >= count ? 0 : *selected + 1;
    }
    if (has_value) {
        g_MenuLeftRightPressed = 0;
        if (taken(DIK_NUMPAD4)) {
            g_MenuLeftRightPressed = 1;
            return *selected;
        }
        if (taken(DIK_NUMPAD6))
            return *selected;
    }
    return taken(DIK_RETURN) ? *selected : -1;
}

#endif // !NOCTURNE_AUTHENTIC_MENU
