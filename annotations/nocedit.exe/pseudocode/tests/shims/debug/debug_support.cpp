// =============================================================================
// DEBUG SUPPORT — see debug_support.h
// =============================================================================

#include "debug_support.h"

#include "core/ui_scale.h"
#include "debug/dump.h"
#include "game/cheats.h"
#include "net/net_session.h"
#include "nocturne.h"
#include "renderer/trigl_gl.h"

#include <SDL.h>
#include <cstdarg>
#include <cstdio>

namespace debug_support {

Stand stand;

namespace {

int g_micro_marker = 0;
int g_small_marker = 0;

} // namespace

CBitFont *micro_font() {
    return (CBitFont *)&g_micro_marker;
}
CBitFont *small_font() {
    return (CBitFont *)&g_small_marker;
}

} // namespace debug_support

using debug_support::stand;

// --- the game's globals ------------------------------------------------------

CSfxSlot g_SfxSlots[64] = {};
CSfxSample g_SfxSamples[64] = {};
IDirectSoundBuffer *g_DirectSoundHardwareSfxBuffers[31] = {};
CConsole *g_CConsolePtr = nullptr;
int g_WindowWidth = 640;
int g_WindowHeight = 480;
CBitFont *g_MicroFont = nullptr;
CBitFont *g_SmallEditorFont = nullptr;
int g_UseExternalRenderer = 0;
CGame *g_CGamePtr = nullptr;
CNetGame *g_CNetGamePtr = nullptr;
int g_FocusRegained = 0;
NocturneTriglStats nocturne_trigl_stats = {};
CHero *g_HeroActors[4] = {};
int g_LocalHeroIndex = 0;
CScript *g_CScriptPtr = nullptr;
CDemonSet *g_CDemonSetPtr = nullptr;

// --- what the netplay view trace calls, where it is compiled in ---------------

CVector3f *__cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor *,
                                                                             CVector3f *out,
                                                                             CVector3f *in) {
    *out = *in;
    return out;
}

int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870(CDemonSet *, CVector3f *) {
    return stand.vdir_zone;
}

int nocturne_net_session_active(void) {
    return stand.session_active;
}
int nocturne_net_session_local_frame(void) {
    return stand.session_frame;
}

// --- the engine's console ----------------------------------------------------

void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *, char *format, ...) {
    char line[512];
    va_list args;
    va_start(args, format);
    vsnprintf(line, sizeof(line), format, args);
    va_end(args);
    stand.console.push_back(line);
}

// --- the shims they call -----------------------------------------------------

int nocturne_cheat_local(int index) {
    return index == NOCTURNE_CHEAT_PERF_STATS ? stand.perf_stats : 0;
}

int nocturne_ui_scale(void) {
    return 1;
}

// Eight pixels a character, ten a line.
int nocturne_ui_text_width(CBitFont *, char *text, int scale) {
    return (int)std::string(text).size() * 8 * scale;
}

int nocturne_ui_char_height(CBitFont *, int, int scale) {
    return 10 * scale;
}

int nocturne_ui_draw_text(CBitFont *font, char *text, int x, int y, int, int, int scale) {
    stand.drawn_font = font;
    stand.drawn.push_back({text, x, y});
    return nocturne_ui_text_width(font, text, scale);
}

int nocturne_dump_frontbuffer(const char *path) {
    stand.dumps.push_back(path);
    return stand.dump_result;
}

// --- the clock perf_overlay.cpp reads ----------------------------------------

extern "C" Uint64 debug_support_SDL_GetPerformanceCounter(void) {
    return stand.counter;
}
extern "C" Uint64 debug_support_SDL_GetPerformanceFrequency(void) {
    return 1000;
}

extern "C" unsigned long long nocturne_gl_swap_ticks(void) {
    return stand.swap_ticks;
}
