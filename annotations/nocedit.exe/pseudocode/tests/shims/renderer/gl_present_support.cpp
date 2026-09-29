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
#include "gl/gl_api.h"

extern "C" {

int nocturne_gl_scene_target_bind(int, int) { return 1; }
int nocturne_gl_scene_target_active(void) { return 1; }
int nocturne_gl_ensure_active(void) { return 1; }
void nocturne_gl_set_logical_size(int, int) {}

// These two leave the pipeline disturbed ON PURPOSE, because the real ones do.
//
// Presenting draws a quad of its own and turns off depth testing, blending,
// culling and the scissor test to do it, and does not put them back. That is
// not a bug to be fixed here — it is the condition the renderer has to survive,
// and it is what a whole frame of geometry once went out with no depth test
// behind: the renderer's record still described depth testing as enabled, the
// next draw agreed, and the call that would have re-enabled it was skipped as
// redundant.
//
// A stub that politely restored what it changed would make the tests pass
// against a renderer that is wrong. So it misbehaves the way the thing it stands
// in for misbehaves, and the tests assert that the renderer copes.
void nocturne_gl_present_scene(void) {
    gl.Disable(GL_DEPTH_TEST);
    gl.Disable(GL_BLEND);
    gl.Disable(GL_CULL_FACE);
    gl.Disable(GL_SCISSOR_TEST);
}

void nocturne_gl_scene_upload(const void *, int, int, int, int) {
    gl.Disable(GL_DEPTH_TEST);
    gl.Disable(GL_BLEND);
}

}  // extern "C"
