// =============================================================================
// GL BLIT — the full-target quad every frame reaches the screen through
// =============================================================================
//
// The presenter draws the CPU framebuffer, and seeds the scene target mid-frame,
// with this one quad. What matters is that it draws the texture it is given,
// the right way up for an image or for a render target, and that a renderer's
// draws after it find their program and vertex array where they left them; and
// that a context which cannot build it says so, once, rather than half drawing.

#include "gl/gl_blit.h"
#include "nocturne_test.h"
#include "shims/renderer/gl_recorder.h"

#include <cstddef>
#include <string>

namespace {

gl_recorder::State &start() {
    nocturne_gl_blit_shutdown();
    gl_recorder::install();
    return gl_recorder::state();
}

// The DrawArrays the blit made: its first vertex.
unsigned drawn_first(const gl_recorder::State &s) {
    const int at = s.index_of_last("DrawArrays");
    return at < 0 ? 999u : s.calls[(size_t)at].b;
}

void APIENTRY no_buffer(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i)
        out[i] = 0;
}

void APIENTRY failed(GLuint, GLenum, GLint *out) {
    *out = GL_FALSE;
}

} // namespace

// The texture is drawn as an image, top row first, from the quad built on the
// first blit; the program and vertex array in use before are put back.
NOCTURNE_TEST(a_blit_draws_the_texture_and_puts_the_pipeline_back) {
    gl_recorder::State &s = start();
    gl.UseProgram(42);
    gl.BindVertexArray(7);
    CHECK_EQ(nocturne_gl_blit_quad(5), 1);
    CHECK_EQ(s.count("BufferData"), 1);
    const gl_recorder::Call &draw = s.calls[(size_t)s.index_of_last("DrawArrays")];
    CHECK_EQ(draw.a, 5u); // the texture
    CHECK_EQ(draw.b, 0u); // from the first vertex, top-down
    CHECK_EQ(draw.c, 4u);
    CHECK_EQ(s.bound_program, 42u);
    CHECK_EQ(s.bound_vao, 7u);

    // A render target is drawn bottom-up, from the same quad, built once.
    CHECK_EQ(nocturne_gl_blit_quad_flipped(6), 1);
    CHECK_EQ(drawn_first(s), 4u);
    CHECK_EQ(s.count("BufferData"), 1);
}

// The quad is let go of whole with the context.
NOCTURNE_TEST(shutting_down_deletes_the_quad_and_builds_it_again_after) {
    gl_recorder::State &s = start();
    CHECK_EQ(nocturne_gl_blit_quad(1), 1);
    nocturne_gl_blit_shutdown();
    CHECK_EQ(s.count("DeleteProgram"), 1);
    CHECK_EQ(s.count("DeleteBuffers"), 1);
    CHECK_EQ(s.count("DeleteVertexArrays"), 1);
    nocturne_gl_blit_shutdown(); // nothing left to delete
    CHECK_EQ(s.count("DeleteProgram"), 1);
    CHECK_EQ(nocturne_gl_blit_quad(1), 1);
    CHECK_EQ(s.count("BufferData"), 2);
}

// Missing any of the entry points it needs, it draws nothing, and does not ask
// again every frame.
NOCTURNE_TEST(without_an_entry_point_it_needs_nothing_is_drawn) {
    // The table's members are distinct function pointer types; each is nulled
    // through its own offset.
    const size_t slots[] = {
        offsetof(NocturneGLApi, CreateShader),
        offsetof(NocturneGLApi, ShaderSource),
        offsetof(NocturneGLApi, CompileShader),
        offsetof(NocturneGLApi, GetShaderiv),
        offsetof(NocturneGLApi, DeleteShader),
        offsetof(NocturneGLApi, CreateProgram),
        offsetof(NocturneGLApi, AttachShader),
        offsetof(NocturneGLApi, LinkProgram),
        offsetof(NocturneGLApi, GetProgramiv),
        offsetof(NocturneGLApi, UseProgram),
        offsetof(NocturneGLApi, DeleteProgram),
        offsetof(NocturneGLApi, GetUniformLocation),
        offsetof(NocturneGLApi, Uniform1i),
        offsetof(NocturneGLApi, GetIntegerv),
        offsetof(NocturneGLApi, GenBuffers),
        offsetof(NocturneGLApi, BindBuffer),
        offsetof(NocturneGLApi, BufferData),
        offsetof(NocturneGLApi, DeleteBuffers),
        offsetof(NocturneGLApi, GetAttribLocation),
        offsetof(NocturneGLApi, BindAttribLocation),
        offsetof(NocturneGLApi, EnableVertexAttribArray),
        offsetof(NocturneGLApi, VertexAttribPointer),
        offsetof(NocturneGLApi, DrawArrays),
        offsetof(NocturneGLApi, GenVertexArrays),
        offsetof(NocturneGLApi, BindVertexArray),
        offsetof(NocturneGLApi, DeleteVertexArrays),
    };
    for (size_t offset : slots) {
        gl_recorder::State &s = start();
        *(void **)((char *)&gl + offset) = nullptr;
        CHECK_AT(nocturne_gl_blit_quad(1) == 0, "slot at " + std::to_string(offset));
        CHECK_EQ(nocturne_gl_blit_quad(1), 0);
        CHECK_EQ(s.count("BufferData"), 0);
    }
}

// A program that will not build, or a buffer or vertex array the driver will
// not make, is no quad, and leaves nothing behind.
NOCTURNE_TEST(a_quad_the_driver_will_not_make_is_none) {
    gl_recorder::State &s = start();
    gl.GetShaderiv = failed;
    CHECK_EQ(nocturne_gl_blit_quad(1), 0);
    CHECK_EQ(s.count("GenBuffers"), 0);

    start();
    gl.GenBuffers = no_buffer;
    CHECK_EQ(nocturne_gl_blit_quad(1), 0);
    CHECK_EQ(s.count("DeleteProgram"), 1);
    CHECK_EQ(s.count("DeleteVertexArrays"), 1); // the array that was made

    start();
    gl.GenVertexArrays = no_buffer;
    CHECK_EQ(nocturne_gl_blit_quad(1), 0);
    CHECK_EQ(s.count("DeleteBuffers"), 1);
    CHECK_EQ(nocturne_gl_blit_quad(1), 0); // and is not tried again
    CHECK_EQ(s.count("GenBuffers"), 1);
}

NOCTURNE_TEST_MAIN()
