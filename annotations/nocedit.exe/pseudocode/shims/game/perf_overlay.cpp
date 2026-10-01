// =============================================================================
// PERF OVERLAY — see perf_overlay.h
// =============================================================================

#include "game/perf_overlay.h"
#include "shim_config.h"

#if !NOCTURNE_AUTHENTIC_CHEAT_MENU

#include "nocturne.h"
#include "game/cheats.h"
#include "game/ui_scale.h"

#include <SDL.h>
#include <cstdio>

namespace {

// How long each published figure averages over.
const double kWindowSeconds = 0.5;

// Gap between the text and the screen edges, in 640x480 pixels.
const int kMargin = 4;

Uint64 s_last;              // counter at the previous call, 0 before the first
Uint64 s_window_start;
int    s_window_frames;
double s_window_worst;      // seconds

// What is on screen, refreshed once per window.
double s_fps;
double s_mean_ms;
double s_worst_ms;

void reset(Uint64 now)
{
    s_last = now;
    s_window_start = now;
    s_window_frames = 0;
    s_window_worst = 0.0;
}

void sample(void)
{
    const Uint64 now = SDL_GetPerformanceCounter();
    const double freq = (double)SDL_GetPerformanceFrequency();
    if (s_last == 0) {
        reset(now);
        return;
    }

    const double frame = (double)(now - s_last) / freq;
    s_last = now;
    s_window_frames++;
    if (frame > s_window_worst) s_window_worst = frame;

    const double elapsed = (double)(now - s_window_start) / freq;
    if (elapsed >= kWindowSeconds) {
        s_fps = (double)s_window_frames / elapsed;
        s_mean_ms = elapsed * 1000.0 / (double)s_window_frames;
        s_worst_ms = s_window_worst * 1000.0;
        s_window_start = now;
        s_window_frames = 0;
        s_window_worst = 0.0;
    }
}

} // namespace

extern "C" void nocturne_perf_overlay_render(void)
{
    if (nocturne_cheat_local(NOCTURNE_CHEAT_PERF_STATS) == 0) {
        // Restart the measurement when shown again, rather than reporting the
        // gap while it was hidden as one long frame.
        s_last = 0;
        return;
    }
    sample();

    // The HUD's own choice of font, so the readout sits with the rest of it.
    CBitFont *font = (g_WindowHeight < 384) ? g_MicroFont : g_SmallEditorFont;
    if (font == (CBitFont *)0) return;

    char lines[3][64];
    snprintf(lines[0], sizeof(lines[0]), "%.0f FPS", s_fps);
    snprintf(lines[1], sizeof(lines[1]), "%.1f ms avg  %.1f max", s_mean_ms, s_worst_ms);
    snprintf(lines[2], sizeof(lines[2]), "%dx%d %s", g_WindowWidth, g_WindowHeight,
             (g_UseExternalRenderer != 0) ? "hardware" : "software");

    const int ui = nocturne_ui_scale();
    const int margin = kMargin * ui;
    int y = margin;
    for (int i = 0; i < 3; i++) {
        const int w = nocturne_ui_text_width(font, lines[i], ui);
        nocturne_ui_draw_text(font, lines[i], g_WindowWidth - margin - w, y, 0xf8, 0, ui);
        y += nocturne_ui_char_height(font, 'X', ui) + ui;
    }
}

#else

extern "C" void nocturne_perf_overlay_render(void)
{
}

#endif
