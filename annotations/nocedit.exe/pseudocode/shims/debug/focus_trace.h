#pragma once

// =============================================================================
// FOCUS TRACE (debug)
// =============================================================================
//
// Records what the renderer is asked to do in the frames after the window
// gains focus. Set NOCTURNE_FOCUS_TRACE=<dir> to enable. Each focus gain
// appends to <dir>/focus_trace.txt and, for the next few presents, writes the
// presented image as <dir>/focus_<gain>_<present>.ppm.
//
// Compile-time gated by NOCTURNE_DUMP_TOOLS. Hot paths use the macros, which
// cost one flag test until a focus gain arms the trace, and nothing when the
// tools are compiled out.

#include "shim_config.h"

#ifdef __cplusplus
extern "C" {
#endif

// Nonzero only while presents remain to be traced.
extern int g_nocturne_focus_trace_active;

// Called when the window gains focus.
void nocturne_focus_trace_arm(void);

// One renderer entry point, logged with the draws made since the last event.
void nocturne_focus_trace_event(const char *name);

// After a present has swapped; dumps the image and counts down.
void nocturne_focus_trace_presented(void);

#ifdef __cplusplus
}
#endif

#if NOCTURNE_DUMP_TOOLS
#define NOCTURNE_FOCUS_TRACE_EVENT(name) \
    do { if (g_nocturne_focus_trace_active) nocturne_focus_trace_event(name); } while (0)
#define NOCTURNE_FOCUS_TRACE_PRESENTED() \
    do { if (g_nocturne_focus_trace_active) nocturne_focus_trace_presented(); } while (0)
#else
#define NOCTURNE_FOCUS_TRACE_EVENT(name) ((void)0)
#define NOCTURNE_FOCUS_TRACE_PRESENTED() ((void)0)
#endif
