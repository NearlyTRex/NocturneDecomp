// =============================================================================
// FOCUS TRACE — see focus_trace.h
// =============================================================================

#include "debug/focus_trace.h"
#include "shim_config.h"

#if NOCTURNE_DUMP_TOOLS

#include "nocturne.h"
#include "debug/dump.h"
#include "renderer/trigl_gl.h"
#include <SDL2/SDL.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#if defined(__GLIBC__) || defined(__APPLE__) || defined(__FreeBSD__)
#include <execinfo.h>
#define FOCUS_HAS_EXECINFO 1
#endif

namespace {

const int kPresentsPerGain = 12;

FILE *s_log;
const char *s_dir;
bool s_checked_env;
int s_gains;
int s_presents_left;
int s_present_index;
unsigned s_last_draws, s_last_untextured, s_last_missing;

unsigned delta(unsigned now, unsigned *last)
{
    // The stats reset when the renderer is re-initialised.
    unsigned d = (now >= *last) ? now - *last : now;
    *last = now;
    return d;
}

void log_backtrace(void)
{
#if FOCUS_HAS_EXECINFO
    void *frames[24];
    int n = backtrace(frames, 24);
    fflush(s_log);
    backtrace_symbols_fd(frames, n, fileno(s_log));
#endif
}

} // namespace

int g_nocturne_focus_trace_active = 0;

extern "C" void nocturne_focus_trace_arm(void)
{
    if (!s_checked_env) {
        s_checked_env = true;
        s_dir = getenv("NOCTURNE_FOCUS_TRACE");
        if (s_dir != nullptr) {
            char path[512];
            snprintf(path, sizeof(path), "%s/focus_trace.txt", s_dir);
            s_log = fopen(path, "w");
        }
    }
    if (s_log == nullptr) {
        return;
    }
    s_gains++;
    s_presents_left = kPresentsPerGain;
    s_present_index = 0;
    g_nocturne_focus_trace_active = 1;
    s_last_draws = nocturne_trigl_stats.draws;
    s_last_untextured = nocturne_trigl_stats.untextured_draws;
    s_last_missing = nocturne_trigl_stats.missing_texture_draws;
    fprintf(s_log, "\n=== focus gain %d at %u ms, game frame %d\n", s_gains, SDL_GetTicks(),
            (g_CGamePtr != nullptr) ? g_CGamePtr->frame_counter : -1);
    log_backtrace();
}

extern "C" void nocturne_focus_trace_event(const char *name)
{
    if (s_log == nullptr || s_presents_left <= 0) {
        return;
    }
    unsigned draws = delta(nocturne_trigl_stats.draws, &s_last_draws);
    unsigned untextured = delta(nocturne_trigl_stats.untextured_draws, &s_last_untextured);
    unsigned missing = delta(nocturne_trigl_stats.missing_texture_draws, &s_last_missing);
    if (draws != 0) {
        fprintf(s_log, "    draws=%u untextured=%u missing_tex=%u\n", draws, untextured, missing);
    }
    fprintf(s_log, "  %6u %s\n", SDL_GetTicks(), name);
    if (s_present_index == 0 &&
        (strcmp(name, "masterZBuffer") == 0 || strcmp(name, "toggle") == 0)) {
        log_backtrace();
    }
}

extern "C" void nocturne_focus_trace_presented(void)
{
    if (s_log == nullptr || s_presents_left <= 0) {
        return;
    }
    char path[512];
    snprintf(path, sizeof(path), "%s/focus_%d_%02d.ppm", s_dir, s_gains, s_present_index);
    int ok = nocturne_dump_frontbuffer(path);
    fprintf(s_log, "  -- present %d: game frame %d pending_sim=%d app_active=%d dump=%s\n",
            s_present_index, (g_CGamePtr != nullptr) ? g_CGamePtr->frame_counter : -1,
            (g_CNetGamePtr != nullptr) ? g_CNetGamePtr->has_pending_sim_frame : -1,
            g_ApplicationActive, (ok == 0) ? path : "failed");
    fflush(s_log);
    s_present_index++;
    s_presents_left--;
    g_nocturne_focus_trace_active = (s_presents_left > 0);
}

#else

int g_nocturne_focus_trace_active = 0;

extern "C" void nocturne_focus_trace_arm(void) {}
extern "C" void nocturne_focus_trace_event(const char *) {}
extern "C" void nocturne_focus_trace_presented(void) {}

#endif
