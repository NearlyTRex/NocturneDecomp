// =============================================================================
// MENU RENDER SUPPORT — see menu_render_support.h
// =============================================================================

#include "menu_render_support.h"

#include <cstring>

CBitFont *g_ThemeFont = (CBitFont *)0x10;
CBitFont *g_SmallEditorFont = (CBitFont *)0x20;
int g_UseOSFonts = 0;
CMoon g_CMoonInstance = {};
CKeys *g_CKeysPtr = nullptr;
int g_MenuInputHappened = 0;
int g_MenuLeftRightPressed = 0;

namespace menu_render_support {

Stand stand;

namespace {

int key_take(CKeys *, EInputCodeType code) {
    return stand.pressed.erase((int)code) != 0;
}

CKeys_vtable s_keys_vtable = {nullptr, key_take, nullptr};
CKeys s_keys = {&s_keys_vtable};

} // namespace

void Stand::reset() {
    *this = Stand();
    g_CKeysPtr = &s_keys;
    g_UseOSFonts = 0;
    g_MenuInputHappened = 0;
    g_MenuLeftRightPressed = 0;
}

std::vector<Drawn> Stand::of(const std::string &text) const {
    std::vector<Drawn> found;
    for (const Drawn &d : drawn) {
        if (d.text == text)
            found.push_back(d);
    }
    return found;
}

} // namespace menu_render_support

using menu_render_support::stand;

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004cda80(CBitFont *, char *text, int x, int y,
                                                           int color_mode, int) {
    stand.drawn.push_back({text, x, y, color_mode, stand.alpha});
    return 0;
}

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *, char *text) {
    return (int)std::strlen(text) * 8;
}

int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont *, char *) {
    return 10;
}

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont *, int) {
    return 10;
}

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value) {
    stand.alpha = alpha_color_value;
    return 0;
}

int __cdecl core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon *) {
    return stand.first_half;
}

unsigned int nocturne_rng_fx(void) {
    if (stand.rng.empty())
        return 0;
    const unsigned value = stand.rng.front();
    stand.rng.pop_front();
    return value;
}

const char *nocturne_version_short(void) {
    return "v1.2.3";
}

NocturneLayout nocturne_layout(void) {
    return stand.layout;
}

// The engine's text at the scale: 8 a character wide, each scaled.
int nocturne_ui_draw_text_f(struct CBitFont *, char *text, int x, int y, int color_mode, int,
                            float scale) {
    stand.drawn.push_back({text, x, y, color_mode, stand.alpha, scale});
    return 0;
}

int nocturne_ui_text_width_f(struct CBitFont *font, char *text, float scale) {
    return (int)lroundf(
        (float)engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)font, text) * scale);
}
