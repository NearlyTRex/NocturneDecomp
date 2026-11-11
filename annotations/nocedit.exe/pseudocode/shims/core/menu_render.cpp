// =============================================================================
// MENU RENDER — implementation
// =============================================================================
//
// See menu_render.h, and NOCTURNE_AUTHENTIC_MENU in config/shim_config_authentic.h.
// renderMenuAndGetChoice's keep is the shipped routine this follows.

#include "core/menu_render.h"

#include "core/front_end_layout.h"
#include "core/ui_scale.h"
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

// `text` with its top left at layout (x, y), as large as the layout is drawn.
void draw_text(const NocturneLayout &layout, CBitFont *font, char *text, int x, int y, int colour,
               int shadow) {
    nocturne_ui_draw_text_f(font, text, nocturne_layout_x(layout, x), nocturne_layout_y(layout, y),
                            colour, shadow, layout.scale);
}

void draw_shimmer(const NocturneLayout &layout, CBitFont *font, char *line, int y) {
    for (int i = 0; i < kShimmerCopies; i++) {
        const unsigned dx = nocturne_rng_fx();
        const unsigned dy = nocturne_rng_fx();
        const unsigned alpha = nocturne_rng_fx();
        engine_3d_c_setRenderAlpha_FUN_00406d80((int)(((long long)alpha * kLineAlpha) >> 16));
        draw_text(layout, font, line, (int)(dx & 3) + kShimmerLeft, (int)(dy & 3) - 2 + y,
                  kChosenColour, -1);
    }
}

// The copyright and the version keep to the screen's bottom corners and the
// trademark to the logo; the editor build's lines to the screen's top left.
void draw_corners(const NocturneLayout &layout) {
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    char *copyright = (char *)(g_UseOSFonts == 0 ? kCopyright : kCopyrightOs);
    const int width = nocturne_ui_text_width_f(g_SmallEditorFont, copyright, layout.scale);
    const int height =
        engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(g_SmallEditorFont, copyright);
    const int bottom = nocturne_layout_y(layout, kCornerBottom - height);
    const int right = nocturne_layout_x(layout, kCornerRight) + layout.left;
    nocturne_ui_draw_text_f(g_SmallEditorFont, copyright, right - width, bottom, kLineColour, 0,
                            layout.scale);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kTrademarkAlpha);
    draw_text(layout, g_SmallEditorFont, g_MenuTrademarkGlyph, kTrademarkX, kTrademarkY,
              kLineColour, 0);
    nocturne_ui_draw_text_f(g_SmallEditorFont, (char *)nocturne_version_short(),
                            nocturne_layout_length(layout, kVersionX), bottom, kLineColour, 0,
                            layout.scale);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
#if NOCTURNE_EDITOR_BUILD
    nocturne_ui_draw_text_f(g_SmallEditorFont, (char *)"NON-RELEASE EDITOR BUILD", 0, 0,
                            kLineColour, 0, layout.scale);
    nocturne_ui_draw_text_f(g_SmallEditorFont, (char *)"Press CTRL+D to access the editor menu", 0,
                            nocturne_layout_length(layout, 0x14), kLineColour, 0, layout.scale);
#endif
}

bool taken(EInputCodeType key) {
    return (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, key) != 0;
}

} // namespace

extern "C" int nocturne_menu_render(char **lines, int count, int *selected, int y, char *title) {
    CBitFont *font = g_ThemeFont;
    // The list sits where it does on the layout, `y` and the line heights in
    // its rows.
    const NocturneLayout layout = nocturne_layout();
    if (title != nullptr) {
        draw_text(layout, font, title, kMenuX, y, kTitleColour, 0);
        y += line_height(font) * 2;
    }
    for (int i = 0; i < count; i++) {
        const int height = line_height(font);
        int colour = kLineColour;
        if (i == *selected) {
            colour = kChosenFlatColour;
            if (core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(&g_CMoonInstance) != 0) {
                colour = kChosenColour;
                draw_shimmer(layout, font, lines[i], y);
            }
        }
        engine_3d_c_setRenderAlpha_FUN_00406d80(kLineAlpha);
        draw_text(layout, font, lines[i], kMenuX, y, colour, -1);
        // A titled list is single-spaced.
        y += title != nullptr ? height : height * 2;
    }
    draw_corners(layout);

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
