// =============================================================================
// DEBUG WINDOW SUPPORT — see debug_window_support.h
// =============================================================================

#include "debug_window_support.h"

#include "core/window_icon.h"

#include <SDL.h>

namespace debug_window_support {

Stand stand;

} // namespace debug_window_support

using debug_window_support::stand;

// --- the game's globals ------------------------------------------------------

CGame *g_CGamePtr = nullptr;
CScript *g_CScriptPtr = nullptr;
int g_BitsPerPixel = 32;
int g_SpotLightCount = 0;
CDemonLight *g_SpotLightList[96] = {};
int g_DynamicLightCount = 0;
CDemonLight *g_DynamicLights[4] = {};
int g_OmniLightCount = 0;

namespace debug_window_support {

// Two spot lights and a dynamic one, five omni lights.
void Stand::reset() {
    *this = Stand();
    g_CGamePtr = &game;
    g_CScriptPtr = &script;
    g_BitsPerPixel = 32;
    g_SpotLightCount = 2;
    g_SpotLightList[0] = &lights[0];
    g_SpotLightList[1] = &lights[1];
    g_DynamicLightCount = 1;
    g_DynamicLights[0] = &lights[2];
    g_OmniLightCount = 5;
}

} // namespace debug_window_support

// --- engine 2D and the views -------------------------------------------------

int __cdecl engine_2d_c_mapFrameBuffer_FUN_00403430(void *frame_buffer, int width, int height,
                                                    int bits_per_pixel, int stride) {
    stand.mapped.push_back({frame_buffer, width, height, bits_per_pixel, stride});
    return 0;
}

void __cdecl engine_2d_c_unmapFrameBuffer_FUN_00403670(void) {
    ++stand.unmapped;
}

void __cdecl core_script_cpp_CScript_renderEditor_FUN_00559d80(CScript *, int left, int top,
                                                               int right, int bottom) {
    stand.editors.push_back({left, top, right, bottom});
    if (!stand.mapped.empty())
        *(unsigned char *)stand.mapped.back().buffer = stand.ink;
}

void __cdecl core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight *light,
                                                                               int screen_x,
                                                                               int screen_y,
                                                                               int display_size) {
    stand.thumbs.push_back({light, screen_x, screen_y, display_size});
}

void __cdecl engine_2d_c_drawText_FUN_00401fd0(char *text, int x, int y) {
    stand.texts.push_back({text, x, y});
}

int __cdecl engine_2d_c_getStringWidth_FUN_004018a0(char *text) {
    return 6 * (int)std::string(text).size();
}

// --- the script's text -------------------------------------------------------

int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList *) {
    return (int)stand.lines.size();
}

char *__cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(CStrList *, int index) {
    return &stand.lines[(size_t)index][0];
}

// --- the game window's icon --------------------------------------------------

void nocturne_apply_window_icon(SDL_Window *window) {
    stand.icons.push_back(window);
}
