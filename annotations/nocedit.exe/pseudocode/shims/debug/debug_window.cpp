// =============================================================================
// DEBUG WINDOW — implementation
// =============================================================================
//
// See debug_window.h.

#include "debug/debug_window.h"

#include "core/window_icon.h"
#include "nocturne.h"

#include <SDL.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

namespace {

const int kDefaultWidth = 1280;
const int kDefaultHeight = 720;
// renderLightDebugView's display size, and the room between thumbnails.
const int kThumbSize = 0x80;
const int kGap = 4;
// Beside the script, two columns of thumbnails; the script's lines are long.
const int kLightsBesideScript = kGap + 2 * (kThumbSize + kGap);
// The two count lines under the thumbnails, 0xb apart as shipped.
const int kLineHeight = 0xb;
// renderEditor's text column, after the line numbers.
const int kScriptTextLeft = 0x1e;
// The narrowest the window opens at, however short the script's lines.
const int kMinWidth = 640;

SDL_Window *s_window = nullptr;
std::vector<unsigned char> s_pixels;

void close_window() {
    if (s_window == nullptr) {
        return;
    }
    SDL_DestroyWindow(s_window);
    s_window = nullptr;
    s_pixels.clear();
}

// The script pane's width for its widest line, measured as engine 2D draws it.
int script_pane_width() {
    CStrList *text = &g_CScriptPtr->script_text;
    const int count = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(text);
    int widest = 0;

    for (int i = 0; i < count; i++) {
        widest =
            SDL_max(widest, engine_2d_c_getStringWidth_FUN_004018a0(
                                shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(text, i)));
    }
    return kScriptTextLeft + widest + 2 * kGap;
}

// Wide enough for the script's widest line beside the lights, within the
// screen. The lights alone open at the default.
int opening_width(bool script, bool lights) {
    if (!script) {
        return kDefaultWidth;
    }
    SDL_Rect usable = {0, 0, INT32_MAX, INT32_MAX};
    SDL_GetDisplayUsableBounds(0, &usable);
    const int wanted = script_pane_width() + (lights ? kLightsBesideScript : 0);
    return SDL_min(SDL_max(wanted, kMinWidth), usable.w);
}

// Shown without taking focus from the game window.
bool open_window(bool script, bool lights) {
    if (s_window != nullptr) {
        return true;
    }
    // On Linux SDL backs a window surface with an accelerated SDL_Renderer
    // unless told not to, and that renderer's GL context, made current, takes
    // the game window's presenter off its own. SDL decides once, at the first
    // SDL_GetWindowSurface, and this window is the only one that asks.
    SDL_SetHint(SDL_HINT_FRAMEBUFFER_ACCELERATION, "0");
    s_window = SDL_CreateWindow("Nocturne debug", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                opening_width(script, lights), kDefaultHeight,
                                SDL_WINDOW_HIDDEN | SDL_WINDOW_RESIZABLE);
    if (s_window == nullptr) {
        return false;
    }
    // The game window's icon, which a desktop may show for both.
    nocturne_apply_window_icon(s_window);
    SDL_SetHint(SDL_HINT_WINDOW_NO_ACTIVATION_WHEN_SHOWN, "1");
    SDL_ShowWindow(s_window);
    SDL_SetHint(SDL_HINT_WINDOW_NO_ACTIVATION_WHEN_SHOWN, "0");
    return true;
}

// renderLightDebugView's lights and counts, with the thumbnails in a grid
// across [left, right) rather than at its six fixed 640x480 places.
void draw_lights(int left, int right, int height) {
    char line[64];
    const int columns = SDL_max(1, (right - left - kGap) / (kThumbSize + kGap));
    const int lights = g_SpotLightCount + g_DynamicLightCount;

    if (g_BitsPerPixel == 32) {
        for (int i = 0; i < lights; i++) {
            CDemonLight *light =
                (i < g_SpotLightCount) ? g_SpotLightList[i] : g_DynamicLights[i - g_SpotLightCount];
            core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(
                light, left + kGap + (i % columns) * (kThumbSize + kGap),
                kGap + (i / columns) * (kThumbSize + kGap), kThumbSize);
        }
    }
    std::snprintf(line, sizeof(line), "%d omni lights", g_OmniLightCount);
    engine_2d_c_drawText_FUN_00401fd0(line, left + kGap, height - 2 * kLineHeight - kGap);
    std::snprintf(line, sizeof(line), "%d spot lights", g_SpotLightCount);
    engine_2d_c_drawText_FUN_00401fd0(line, left + kGap, height - kLineHeight - kGap);
}

// The window's surface, filled from the buffer in the game's own format: the
// DirectDraw shim's RGB565, or its ARGB8888 read as XRGB8888, since the game
// leaves alpha at 0 and a blit would blend that away. SDL_BlitSurface refuses
// a missing surface on its own.
void present(int width, int height, int bpp) {
    SDL_Surface *source = SDL_CreateRGBSurfaceWithFormatFrom(
        s_pixels.data(), width, height, bpp, width * (bpp / 8),
        (bpp == 16) ? SDL_PIXELFORMAT_RGB565 : SDL_PIXELFORMAT_RGB888);

    SDL_BlitSurface(source, nullptr, SDL_GetWindowSurface(s_window), nullptr);
    SDL_UpdateWindowSurface(s_window);
    SDL_FreeSurface(source);
}

} // namespace

extern "C" unsigned int nocturne_debug_window_id(void) {
    return (s_window != nullptr) ? SDL_GetWindowID(s_window) : 0u;
}

extern "C" void nocturne_debug_window_close(void) {
    close_window();
    if (g_CGamePtr != nullptr) {
        g_CGamePtr->subtitle_system_enabled = 0;
        g_CGamePtr->screen_clear_enabled = 0;
    }
    if ((g_CScriptPtr != nullptr) && (g_CScriptPtr->script_state != 0)) {
        g_CScriptPtr->script_state = 0;
    }
}

extern "C" void nocturne_debug_window_frame(void) {
    int width;
    int height;
    const int bpp = g_BitsPerPixel;

    if (g_CGamePtr == nullptr) {
        return;
    }
    const bool script = (g_CGamePtr->subtitle_system_enabled != 0) && (g_CScriptPtr != nullptr);
    const bool lights = g_CGamePtr->screen_clear_enabled != 0;
    if (!script && !lights) {
        close_window();
        return;
    }
    if (((bpp != 16) && (bpp != 32)) || !open_window(script, lights)) {
        return;
    }
    SDL_GetWindowSize(s_window, &width, &height);
    // mapFrameBuffer's own limit.
    height = SDL_min(height, GAME_SCREEN_MAX_HEIGHT);
    s_pixels.assign((size_t)width * (size_t)height * (size_t)(bpp / 8), 0);

    // With both, the lights take two columns, or half a narrow window.
    const int split =
        !lights ? width : (!script ? 0 : SDL_max(width - kLightsBesideScript, width / 2));
    engine_2d_c_mapFrameBuffer_FUN_00403430(s_pixels.data(), width, height, bpp, 0);
    if (script) {
        core_script_cpp_CScript_renderEditor_FUN_00559d80(g_CScriptPtr, 0, 0, split - 1,
                                                          height - 1);
    }
    if (lights) {
        draw_lights(split, width, height);
    }
    engine_2d_c_unmapFrameBuffer_FUN_00403670();
    present(width, height, bpp);
}
