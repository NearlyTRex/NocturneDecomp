// =============================================================================
// PRESENT SUPPORT — the window side, stood in for
// =============================================================================
//
// The device layer talks to the presenter to get the scene target bound, to
// hand it the CPU image and to put a finished frame on screen. None of that is
// what an ordering test is asking about, and all of it wants a window.
//
// So these answer the way a working presenter would with a scene target present
// and nothing to show: bound, active, and no framebuffer of its own. They record
// nothing — the calls that matter to these tests are the ones the renderer makes
// of the driver, and those go through gl_recorder.
//
// Kept apart from gl_recorder.cpp because this is a different seam: one stands
// in for OpenGL, this stands in for our own presenter. A test that starts caring
// which of the two it is talking to will want them separable.

#include "gl/gl_present.h"

extern "C" {

int nocturne_gl_scene_target_bind(int, int) { return 1; }
int nocturne_gl_scene_target_active(void) { return 1; }
int nocturne_gl_ensure_active(void) { return 1; }
void nocturne_gl_set_logical_size(int, int) {}
void nocturne_gl_present_scene(void) {}
void nocturne_gl_scene_upload(const void *, int, int, int, int) {}

}  // extern "C"
