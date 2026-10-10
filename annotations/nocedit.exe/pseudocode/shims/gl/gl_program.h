#pragma once

// =============================================================================
// GL — SHADER PROGRAMS
// =============================================================================
//
// Compiling and linking a vertex/fragment pair, as both of this build's GL
// programs need it: the presentation blit (gl_blit.cpp) and the renderer
// (renderer/trigl_gl.cpp). Each caller looks up its own uniforms and
// attributes afterwards.
//
// Position is always on attribute 0. In a compatibility context attribute 0
// aliases gl_Vertex, and a draw with neither it nor the fixed-function vertex
// array enabled produces no geometry at all — silently, with no GL error. The
// linker is free to put a_pos anywhere, so it is bound before the link, and a
// program where the bind did not take is refused rather than drawn through a
// layout nothing asked for.
//
// Reaches GL only through the `gl` table, so the renderer's recorded-call tests
// can link it.

#include "gl/gl_api.h"

#ifdef __cplusplus
extern "C" {
#endif

// The linked program, with "a_pos" on attribute 0, or 0 on any failure, which
// is logged under `label` ("gl_blit", "trigl_gl").
GLuint nocturne_gl_build_program(const char *vertex_source, const char *fragment_source,
                                 const char *label);

#ifdef __cplusplus
}
#endif
