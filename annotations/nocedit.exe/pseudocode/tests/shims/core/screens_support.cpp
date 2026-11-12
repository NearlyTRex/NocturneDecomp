// =============================================================================
// SCREENS SUPPORT — see screens_support.h
// =============================================================================

#include "screens_support.h"

#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstring>

namespace {

// The clock, the next credits line to read and the file they are read from.
int s_time = 0;
int s_next_line = 0;
_FILE s_file = {};

} // namespace

namespace screens_support {

Stand stand;

namespace {

std::string format(const char *pattern, ...) {
    char text[512];
    va_list args;
    va_start(args, pattern);
    vsnprintf(text, sizeof(text), pattern, args);
    va_end(args);
    return text;
}

int key_state(CKeys *, EInputCodeType code) {
    if (code == DIK_ESCAPE && stand.escape_after >= 0 && stand.swaps >= stand.escape_after)
        return 1;
    return stand.held.count((int)code) != 0 ? 1 : 0;
}

int get_and_clear(CKeys *, EInputCodeType code) {
    const size_t frame = (size_t)stand.swaps - 1;
    if (stand.swaps < 1 || frame >= stand.presses.size() || stand.presses[frame] != (int)code)
        return 0;
    stand.presses[frame] = 0;
    return 1;
}

CKeys_vtable s_keys_vtable = {key_state, get_and_clear, nullptr};
CKeys s_keys;
CGame s_game = {};

} // namespace

void Stand::reset() {
    *this = Stand();
    s_time = 0;
    s_next_line = 0;
    s_file = _FILE();
    s_keys.vtable = &s_keys_vtable;
    g_CKeysPtr = &s_keys;
    s_game = CGame();
    g_CGamePtr = &s_game;
    g_JoyXPos = 0;
    g_JoyYPos = 0;
    g_JoyButtons = 0;
    g_UseOSFonts = 0;
    g_GlobalDeltaTimeInt = 0;
    g_CDemonCameraInstance.framebuffer_width = 640;
    screen(640, 480);
}

void screen(int width, int height) {
    g_WindowWidth = width;
    g_WindowHeight = height;
}

int count(const std::string &prefix) {
    int found = 0;
    for (const std::string &call : stand.calls)
        found += call.rfind(prefix, 0) == 0 ? 1 : 0;
    return found;
}

std::string first(const std::string &prefix) {
    for (const std::string &call : stand.calls) {
        if (call.rfind(prefix, 0) == 0)
            return call;
    }
    return "";
}

} // namespace screens_support

using screens_support::format;
using screens_support::stand;

// --- the game's globals ------------------------------------------------------

int g_WindowWidth = 640;
int g_WindowHeight = 480;
CBitFont s_theme_font = {};
CBitFont s_medium_font = {};
CBitFont s_small_font = {};
CBitFont *g_ThemeFont = &s_theme_font;
CBitFont *g_MediumFont = &s_medium_font;
CBitFont *g_SmallEditorFont = &s_small_font;
int g_UseOSFonts = 0;
CAlphaBitmap g_LoadingScreenBitmap1 = {};
CAlphaBitmap g_LoadingScreenBitmap2 = {};
CKeyFramedModel g_LoadingMoonModel = {};
SMRGLTextureBasic g_LoadingMoonGlowTexture = {};
CDemonRenderer *g_CDemonRendererPtr2 = nullptr;
int g_GlobalDeltaTimeInt = 0;
CKeys *g_CKeysPtr = nullptr;
char g_ActStatsTextBuffer1[5120] = {};
char g_ActStatsTextBuffer2[5120] = {};
CDemonCamera g_CDemonCameraInstance = {};
CGame *g_CGamePtr = nullptr;
CMoon g_CMoonInstance = {};
CAlphaBitmap g_CalibrationBitmap = {};
DWORD g_JoyXPos = 0;
DWORD g_JoyYPos = 0;
DWORD g_JoyButtons = 0;

// --- the layout, its pictures and its text ---------------------------------------

NocturneLayout nocturne_layout(void) {
    return stand.layout;
}

void nocturne_layout_display(struct CAlphaBitmap *, int x, int y, int alpha) {
    stand.calls.push_back(format("display %d %d %x", x, y, alpha));
}

void nocturne_alpha_display_scaled(struct CAlphaBitmap *, int x, int y, int width, int height,
                                   int alpha, int filter) {
    stand.calls.push_back(format("scaled %d %d %dx%d %x %d", x, y, width, height, alpha, filter));
}

// Smooth but at a whole scale.
int nocturne_layout_filter(float scale) {
    return std::floor(scale) == scale ? 0 : 1;
}

int nocturne_ui_draw_text_f(struct CBitFont *font, char *text, int x, int y, int color_mode, int,
                            float scale) {
    const char *which = font == g_MediumFont        ? "medium"
                        : font == g_SmallEditorFont ? "small"
                                                    : "theme";
    stand.calls.push_back(
        format("text %s %s %d %d %d %g", which, text, x, y, color_mode, (double)scale));
    return 0;
}

int nocturne_ui_text_width_f(struct CBitFont *, char *text, float scale) {
    return (int)std::lround((float)(std::strlen(text) * 8) * scale);
}

int nocturne_ui_char_height_f(struct CBitFont *font, int, float scale) {
    stand.calls.push_back(font == g_MediumFont ? "height medium" : "height other");
    return (int)std::lround((float)stand.char_height * scale);
}

extern "C" unsigned int nocturne_rng_fx(void) {
    return stand.random;
}

// --- the engine ----------------------------------------------------------------

void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void) {
    stand.calls.push_back("clear");
}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {
    stand.swaps++;
    stand.calls.push_back("swap");
}

int __cdecl wincore_winrun_cpp_getTime_FUN_005f2dc0(void) {
    s_time += stand.time_step;
    return s_time;
}

int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_005f2e90(void) {
    stand.calls.push_back("keypress");
    return 0;
}

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void) {
    stand.calls.push_back("input");
}

void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, int color) {
    stand.calls.push_back(format("fill %d %d %d %d %d", x1, y1, x2, y2, color));
}

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha) {
    stand.calls.push_back(format("alpha %x", alpha));
    return 0;
}

void __cdecl core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel *, char *filename) {
    stand.calls.push_back(format("model %s", filename));
}

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer *,
                                                                           SMRGLTextureBasic *) {
    stand.calls.push_back("glow");
}

CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *bitmap) {
    *bitmap = CAlphaBitmap();
    return bitmap;
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap *bitmap,
                                                                char *filename, int width,
                                                                int height) {
    bitmap->width = width;
    bitmap->height = height;
    stand.calls.push_back(format("load %s %dx%d", filename, width, height));
}

CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *bitmap,
                                                                         uint) {
    stand.calls.push_back("dtor");
    return bitmap;
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *bitmap) {
    stand.calls.push_back(bitmap == &g_LoadingScreenBitmap1 ? "free 1" : "free 2");
}

// Each key comes back as itself.
char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont *, int) {
    return stand.char_height;
}

// The text split at each newline, the last one's empty remainder dropped, one
// line a stride.
int __cdecl engine_font_cpp_CBitFont_wrapText_FUN_004d0010(CBitFont *, char *text, char *lines,
                                                           int max_lines, int stride,
                                                           int max_pixel_width) {
    stand.wrap_text = text;
    stand.wrap_width = max_pixel_width;
    int count = 0;
    const char *start = text;
    while (*start != '\0' && count < max_lines) {
        const char *end = std::strchr(start, '\n');
        const size_t length = end != nullptr ? (size_t)(end - start) : std::strlen(start);
        std::memcpy(lines + count * stride, start, length);
        lines[count * stride + (int)length] = '\0';
        count++;
        start += length + (end != nullptr ? 1 : 0);
    }
    return count;
}

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text, int x, int y) {
    stand.calls.push_back(format("readout %s %d %d", text, x, y));
}

// The frame's moon, and the stick where the test has it this frame.
void __cdecl core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(CMoon *) {
    stand.calls.push_back("moon");
    const size_t frame = (size_t)stand.swaps;
    if (frame < stand.sticks.size()) {
        g_JoyXPos = (DWORD)stand.sticks[frame].first;
        g_JoyYPos = (DWORD)stand.sticks[frame].second;
    }
}

// --- the game ------------------------------------------------------------------

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(CGame *) {
    stand.calls.push_back("reset keys");
}

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *) {
    stand.calls.push_back("clock");
}

void __cdecl core_game_cpp_CGame_updateDT_FUN_004d7d90(CGame *game) {
    game->delta_time_float = stand.delta;
}

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *) {
    stand.calls.push_back("credits");
}

// --- the credits file ------------------------------------------------------------

_FILE *__cdecl engine_dosio_cpp_getFile_FUN_00481a50(char *directory, char *filename, char *) {
    stand.calls.push_back(format("open %s %s", directory, filename));
    return stand.credits_file ? &s_file : nullptr;
}

// The next line, as fgets reads it: the last sets end of file. Past the end
// the buffer is left as it was.
char *_fgets(char *s, int n, _FILE *f) {
    if (s_next_line >= (int)stand.credits.size()) {
        f->_flag |= 0x10;
        return nullptr;
    }
    std::snprintf(s, (size_t)n, "%s", stand.credits[(size_t)s_next_line].c_str());
    s_next_line++;
    if (s_next_line >= (int)stand.credits.size())
        f->_flag |= 0x10;
    return s;
}

int _strcmp(char *s1, char *s2) {
    return std::strcmp(s1, s2);
}

int _sprintf(void *buffer, const char *pattern, ...) {
    va_list args;
    va_start(args, pattern);
    const int written = std::vsprintf((char *)buffer, pattern, args);
    va_end(args);
    return written;
}

int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(_FILE *, char *, int) {
    stand.calls.push_back("close");
    return 0;
}

// --- the sound -------------------------------------------------------------------

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void) {
    stand.calls.push_back("sound reset");
    return 0;
}
int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0(void) {
    stand.calls.push_back("sound on");
    return 0;
}
int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index) {
    return channel_index == stand.music_channel ? 1 : 0;
}
void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void) {
    stand.calls.push_back("sfx push");
}
void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index) {
    stand.calls.push_back(format("sfx channel %d", channel_index));
}
void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags) {
    stand.calls.push_back(format("sfx flags %u", flags));
}
uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename) {
    stand.calls.push_back(format("music %s", filename));
    return 7;
}
void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void) {
    stand.calls.push_back("sfx pop");
}
int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint) {
    if (stand.music_frames == 0)
        return 0;
    stand.music_frames--;
    return 1;
}
