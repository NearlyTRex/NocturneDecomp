// =============================================================================
// UI SUPPORT — see ui_support.h
// =============================================================================

#include "ui_support.h"

#include "core/console.h"

#include <cstring>

namespace ui_support {

Stand stand;

namespace {

std::vector<unsigned> s_pixels;
int s_width = 0;

int key_state(CKeys *, EInputCodeType code) {
    return stand.pressed.count((int)code) != 0;
}

int key_take(CKeys *keys, EInputCodeType code) {
    const int was = key_state(keys, code);
    stand.pressed.erase((int)code);
    return was;
}

CKeys_vtable s_keys_vtable = {key_state, key_take, nullptr};
CKeys s_keys;

} // namespace

void Stand::reset() {
    *this = Stand();
}

void screen(int width, int height, int bits) {
    s_width = width;
    s_pixels.assign((size_t)width * (size_t)height, 0u);
    for (int y = 0; y < 1200; y++) {
        g_ScreenBufferArray[y] = (y < height) ? (void *)&s_pixels[(size_t)y * width] : nullptr;
    }
    g_WindowWidth = width;
    g_WindowHeight = height;
    g_BitsPerPixel = bits;
    g_ClipLeft = 0;
    g_ClipTop = 0;
    g_ClipRight = width - 1;
    g_ClipBottom = height - 1;
    s_keys.vtable = &s_keys_vtable;
    g_CKeysPtr = &s_keys;
}

unsigned pixel32(int x, int y) {
    return ((unsigned *)g_ScreenBufferArray[y])[x];
}
unsigned pixel16(int x, int y) {
    return ((unsigned short *)g_ScreenBufferArray[y])[x];
}

} // namespace ui_support

using ui_support::stand;

// --- the game's globals ------------------------------------------------------

int g_WindowWidth = 640;
int g_WindowHeight = 480;
int g_BitsPerPixel = 32;
void *g_ScreenBufferArray[1200] = {};
SFontGlyph g_FontTable[224] = {};
int g_ClipLeft = 0;
int g_ClipTop = 0;
int g_ClipRight = 639;
int g_ClipBottom = 479;
ushort g_ColorTable16[256] = {};
uint g_ColorTable32[448] = {};
CBitFont *g_EditorFont = nullptr;
int g_EditorFontMaxCharWidth = 0;
int g_EditorFontLineHeight = 0;
_MMX_INTEGER g_RedMask16 = {};
_MMX_INTEGER g_GreenMask16 = {};
_MMX_INTEGER g_BlueMask16 = {};
_BIT_INTEGER32 g_RedBitPosition = {};
_BIT_INTEGER32 g_GreenBitPosition = {};
_BIT_INTEGER32 g_BlueBitPosition = {};
_BIT_INTEGER32 g_RedDitherShift = {};
_BIT_INTEGER32 g_GreenDitherShift = {};
_BIT_INTEGER32 g_BlueDitherShift = {};
int g_RedScaleFactor = 1;
int g_GreenScaleFactor = 1;
int g_BlueScaleFactor = 1;
ushort g_ShadowColor16 = 0;
int g_ShadowColor32 = 0;
int g_DefaultTextColor = 0;
int g_CurrentAlphaValue = 256;
CBitFont *g_ThemeFont = nullptr;
CBitFont *g_SmallEditorFont = nullptr;
int g_UseOSFonts = 0;
int g_InputDisabled = 0;
CMoon g_CMoonInstance = {};
CGame *g_CGamePtr = nullptr;
CKeys *g_CKeysPtr = nullptr;

// --- the engine's bitmap and text routines -------------------------------------

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *) {
    stand.palettes++;
}

void __cdecl engine_special_cpp_renderAlphaRow32_FUN_005b555c(uint *destPixels, uchar *srcIndices,
                                                              uchar *, int globalAlpha,
                                                              int pixelCount) {
    stand.rows32.push_back({destPixels, pixelCount, globalAlpha, srcIndices[0]});
}

void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels, uchar *srcIndices,
                                                              uchar *, int globalAlpha,
                                                              int pixelCount) {
    stand.rows16.push_back({destPixels, pixelCount, globalAlpha, srcIndices[0]});
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap *, int, int, int) {
    stand.displayed.push_back("display");
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(CAlphaBitmap *, int, int, int,
                                                                  int, int, int, int) {
    stand.displayed.push_back("render");
}

void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240(uint *dest_buffer, uchar *, uint *,
                                                                 int pixel_count,
                                                                 uint blend_color) {
    stand.blended.push_back({dest_buffer, pixel_count, 0, blend_color});
}

int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004d0010(CBitFont *, char *, char *, int, int,
                                                           int max_pixel_width) {
    stand.wraps++;
    stand.wrap_width = max_pixel_width;
    return 2;
}

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004cda80(CBitFont *, char *text, int, int, int,
                                                           int) {
    stand.drawn.push_back(text);
    return (int)std::strlen(text) * 8;
}

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *, char *text) {
    return (int)std::strlen(text) * 8;
}

int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40(CBitFont *, char *) {
    return stand.char_height;
}

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont *, int) {
    return stand.char_height;
}

// --- the menu backdrop -----------------------------------------------------------

void __cdecl core_game_cpp_CGame_updateDT_FUN_004d7d90(CGame *) {
    stand.updates++;
}
void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *, float) {
    stand.moon_frames++;
}
void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *) {}

// --- the shims they call -----------------------------------------------------------

int nocturne_mouse_wheel_take(void) {
    if (stand.wheel.empty())
        return 0;
    const int notches = stand.wheel.front();
    stand.wheel.erase(stand.wheel.begin());
    return notches;
}
