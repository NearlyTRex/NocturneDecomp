// =============================================================================
// UI SUPPORT — see ui_support.h
// =============================================================================

#include "ui_support.h"

#include "core/console.h"

#include <cstdio>
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
    for (int y = 0; y < GAME_SCREEN_MAX_HEIGHT; y++) {
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
void *g_ScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};
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
int g_CurrentRenderColor = -1;
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

void __cdecl engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap *, int x, int y,
                                                                   int) {
    stand.displayed.push_back("display");
    stand.displayed_at.push_back(x);
    stand.displayed_at.push_back(y);
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

namespace {

// What one character of `font`'s text is wide: its OS font's height, if it
// draws through one.
int character_width(const CBitFont *font) {
    if (font != nullptr && font->win_font_enabled != 0 && font->win_font_helper != nullptr)
        return font->win_font_helper->cached_string_height;
    return 8;
}

} // namespace

int __cdecl engine_font_cpp_CBitFont_drawText_FUN_004cda80(CBitFont *font, char *text, int x, int y,
                                                           int, int) {
    stand.drawn.push_back(text);
    if (character_width(font) != 8) {
        char drawn[160];
        std::snprintf(drawn, sizeof(drawn), "%s %d %d %d", text, x, y,
                      font->win_font_helper->cached_string_height);
        stand.os_drawn.emplace_back(drawn);
    }
    return (int)std::strlen(text) * character_width(font);
}

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont *font, char *text) {
    return (int)std::strlen(text) * character_width(font);
}

// --- OS fonts ---------------------------------------------------------------------

CWinFont *g_MediumWinFont = nullptr;
CWinFont *g_TinyWinFont = nullptr;
CWinFont *g_ThemeWinFont = nullptr;
CWinFont *g_DebugWinFont = nullptr;
char g_OSFontName[128] = "Arial";

// The height kept where the stand's text routines read it.
CWinFont *__cdecl engine_winfont_cpp_CWinFont_ctor_FUN_005f22e0(CWinFont *this_ptr, char *,
                                                                int font_height, int y_offset1,
                                                                int y_offset2) {
    this_ptr->cached_string_height = font_height;
    this_ptr->y_offset1 = y_offset1;
    this_ptr->y_offset2 = y_offset2;
    char made[48];
    std::snprintf(made, sizeof(made), "%d %d %d", font_height, y_offset1, y_offset2);
    stand.os_fonts.emplace_back(made);
    return this_ptr;
}

CWinFont *__cdecl engine_winfont_cpp_CWinFont_dtor_FUN_005f2390(CWinFont *this_ptr, uint) {
    stand.os_fonts_freed++;
    return this_ptr;
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

int g_UseDirect3D = 0;
int g_UseExternalRenderer = 1;
CDemonRenderer *g_CDemonRendererPtr2 = nullptr;

void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer *, int, int,
                                                                         int width, int) {
    stand.viewports.push_back(width);
}

void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(CDemonRenderer *) {
    stand.viewports.push_back(-1);
}

extern "C" int nocturne_trigl_device_begin_overlay(float scale_x, float scale_y, float, float) {
    stand.overlays.push_back(scale_x);
    stand.overlays_y.push_back(scale_y);
    return stand.overlay_opens;
}

// --- the front end's mode and its fangs ------------------------------------------

SAlphaEntry g_AlphaTable[256] = {};
int g_BlendMode = 0;
uint g_Hardware32BitPalette[256] = {};
CDemonMission *g_CDemonMissionPtr = nullptr;

extern "C" int nocturne_upscaler_get(void) {
    return stand.upscaler;
}

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width, int height,
                                                                 int bits_per_pixel) {
    stand.modes.push_back(std::to_string(width) + "x" + std::to_string(height) + "x" +
                          std::to_string(bits_per_pixel));
    if (stand.refused.count(width) != 0)
        return 0;
    ui_support::screen(width, height, bits_per_pixel);
    return 1;
}

void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80(void) {
    stand.resets++;
}

void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void) {
    stand.clears++;
}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {
    stand.swaps++;
}

CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *bitmap) {
    *bitmap = CAlphaBitmap();
    return bitmap;
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap *bitmap,
                                                                char *filename, int width,
                                                                int height) {
    // Opaque, every pixel index 1; one picture loaded at a time.
    static std::vector<char> s_raw;
    static std::vector<char> s_opa;
    stand.loaded.push_back(std::string(filename) + " " + std::to_string(width) + "x" +
                           std::to_string(height));
    s_raw.assign((size_t)width * (size_t)height, 1);
    s_opa.assign((size_t)width * (size_t)height, (char)0xff);
    bitmap->raw = s_raw.data();
    bitmap->opa = s_opa.data();
    bitmap->width = width;
    bitmap->height = height;
}

CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *bitmap,
                                                                         uint) {
    stand.freed++;
    return bitmap;
}

extern "C" void nocturne_trigl_device_end_overlay(void) {
    stand.overlays.push_back(0.0f);
}

// --- the shims they call -----------------------------------------------------------

int nocturne_mouse_wheel_take(void) {
    if (stand.wheel.empty())
        return 0;
    const int notches = stand.wheel.front();
    stand.wheel.erase(stand.wheel.begin());
    return notches;
}
