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
#include <cstring>
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

// The plain quad's program is the first made, FSR's the second.
const unsigned kFsrProgram = 2;

void APIENTRY fsr_fails_to_link(GLuint program, GLenum, GLint *out) {
    *out = program == kFsrProgram ? GL_FALSE : GL_TRUE;
}

// a_uv where the recorder puts it, except in the FSR program.
GLint APIENTRY uv_moves_in_fsr(GLuint program, const GLchar *name) {
    if (std::strcmp(name, "a_uv") != 0)
        return 0;
    return program == kFsrProgram ? 5 : 3;
}

// The last call named `name`: what it was given.
const gl_recorder::Call &last(const gl_recorder::State &s, const char *name) {
    return s.calls[(size_t)s.index_of_last(name)];
}

// How many times `program` was made current.
int used(const gl_recorder::State &s, unsigned program) {
    int n = 0;
    for (const gl_recorder::Call &c : s.calls) {
        if (c.name == "UseProgram" && c.a == program)
            ++n;
    }
    return n;
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

// FSR draws the texture with a program of its own over the plain quad's
// buffer, told the source size and how hard to sharpen: a quarter at the soft
// end, all of it at the other. The pipeline before is put back.
NOCTURNE_TEST(fsr_draws_through_its_own_program_and_puts_the_pipeline_back) {
    gl_recorder::State &s = start();
    gl.UseProgram(42);
    gl.BindVertexArray(7);
    CHECK_EQ(nocturne_gl_blit_quad_fsr(5, 0, 640, 480, 0.0f), 1);
    CHECK_EQ(s.count("CreateProgram"), 2);
    CHECK_EQ(s.count("BufferData"), 1);
    CHECK_EQ(used(s, kFsrProgram), 1);
    CHECK_EQ(last(s, "DrawArrays").a, 5u);
    CHECK_EQ(drawn_first(s), 0u);
    CHECK_EQ(last(s, "Uniform2f").b, 640u);
    CHECK_EQ(last(s, "Uniform2f").c, 480u);
    CHECK_EQ(last(s, "Uniform1f").b, 250u);
    CHECK_EQ(s.bound_program, 42u);
    CHECK_EQ(s.bound_vao, 7u);

    // A render target bottom-up, at the strongest, from what was built.
    CHECK_EQ(nocturne_gl_blit_quad_fsr(6, 1, 320, 240, 1.0f), 1);
    CHECK_EQ(drawn_first(s), 4u);
    CHECK_EQ(last(s, "Uniform1f").b, 1000u);
    CHECK_EQ(s.count("CreateProgram"), 2);
}

// Without the uniforms it sets, there is no FSR, and it is not asked for
// again; the plain quad is unaffected.
NOCTURNE_TEST(without_its_uniforms_there_is_no_fsr) {
    for (int which = 0; which < 2; ++which) {
        gl_recorder::State &s = start();
        if (which == 0)
            gl.Uniform1f = nullptr;
        else
            gl.Uniform2f = nullptr;
        CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
        CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
        CHECK_EQ(s.count("CreateProgram"), 1);
        CHECK_EQ(nocturne_gl_blit_quad(1), 1);
    }
}

// An FSR program that will not link, or that reads its coordinates from
// somewhere the quad's vertex array does not feed, is none.
NOCTURNE_TEST(an_fsr_program_that_will_not_serve_is_none) {
    gl_recorder::State &s = start();
    gl.GetProgramiv = fsr_fails_to_link;
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
    CHECK_EQ(s.count("CreateProgram"), 2);
    CHECK_EQ(nocturne_gl_blit_quad(1), 1);

    start();
    gl.GetAttribLocation = uv_moves_in_fsr;
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
    CHECK_EQ(s.count("DeleteProgram"), 1);
    CHECK_EQ(used(s, kFsrProgram), 0);
}

// No plain quad, no FSR: it draws over the quad's buffer.
NOCTURNE_TEST(without_the_quad_there_is_no_fsr) {
    gl_recorder::State &s = start();
    gl.GenBuffers = no_buffer;
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 0);
    CHECK_EQ(s.count("CreateProgram"), 1);
}

// FSR's program goes with the quad, and both are built again after.
NOCTURNE_TEST(shutting_down_lets_fsr_go_too) {
    gl_recorder::State &s = start();
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 1);
    nocturne_gl_blit_shutdown();
    CHECK_EQ(s.count("DeleteProgram"), 2);
    CHECK_EQ(nocturne_gl_blit_quad_fsr(1, 0, 640, 480, 0.5f), 1);
    CHECK_EQ(s.count("CreateProgram"), 4);
}

NOCTURNE_TEST_MAIN()
