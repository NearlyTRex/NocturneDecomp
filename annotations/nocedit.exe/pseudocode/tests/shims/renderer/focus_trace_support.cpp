// =============================================================================
// FOCUS TRACE SUPPORT — the debug trace, stood in for
// =============================================================================
//
// trigl_exports.cpp reports to the focus trace, whose real implementation
// wants SDL and the dump tools. The flag stays zero, so the trace macros never
// call through.

#include "debug/focus_trace.h"

extern "C" {

int g_nocturne_focus_trace_active = 0;
void nocturne_focus_trace_arm(void) {}
void nocturne_focus_trace_event(const char *) {}
void nocturne_focus_trace_presented(void) {}

}  // extern "C"
