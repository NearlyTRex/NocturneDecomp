// =============================================================================
// GL BLIT — the full-target textured quad, on a shader instead of glBegin
// =============================================================================
//
// See gl_blit.h for why this belongs to no renderer.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "gl/gl_blit.h"
#include "gl/gl_api.h"
#include "core/debug_log.h"

#include <stdint.h>
#include <stdlib.h>

namespace {

bool   g_tried    = false;   // build attempted; do not retry every frame
GLuint g_program  = 0;
GLuint g_vbo      = 0;
GLuint g_vao      = 0;
GLint  g_loc_tex  = -1;
GLint  g_attr_pos = -1;
GLint  g_attr_uv  = -1;

// #version 150 core: the earliest version with `in`/`out` and a declared
// fragment output, which is what a core profile accepts.
//
// The quad's positions are already in clip space, so there is no projection to
// apply. A unit square under glOrtho(0, 1, 1, 0, -1, 1) maps onto NDC as
// (2x - 1, 1 - 2y) — a top-left origin, so the texture's first row lands at the
// top of the viewport — with z = 0 passing through unchanged. Those four points
// are the vertex buffer below.
const char *kVertexSource =
    "#version 150 core\n"
    "in  vec2 a_pos;\n"
    "in  vec2 a_uv;\n"
    "out vec2 v_uv;\n"
    "void main() {\n"
    "    gl_Position = vec4(a_pos, 0.0, 1.0);\n"
    "    v_uv        = a_uv;\n"
    "}\n";

// The fragment is the texel and nothing else. Alpha comes through as it is,
// which matters for the scene-FBO seed — that target is RGBA8 and keeps what is
// written to it.
const char *kFragmentSource =
    "#version 150 core\n"
    "uniform sampler2D u_tex;\n"
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "void main() {\n"
    "    o_color = texture(u_tex, v_uv);\n"
    "}\n";

// Clip-space x, y then u, v, in GL_TRIANGLE_STRIP order. Two quads: the first
// samples top-down for an uploaded CPU image, the second bottom-up for a render
// target. One buffer, two draw offsets, so the layout is stated once.
const GLfloat kQuad[32] = {
    -1.0f,  1.0f,   0.0f, 0.0f,
     1.0f,  1.0f,   1.0f, 0.0f,
    -1.0f, -1.0f,   0.0f, 1.0f,
     1.0f, -1.0f,   1.0f, 1.0f,

    -1.0f,  1.0f,   0.0f, 1.0f,
     1.0f,  1.0f,   1.0f, 1.0f,
    -1.0f, -1.0f,   0.0f, 0.0f,
     1.0f, -1.0f,   1.0f, 0.0f,
};
const int kQuadTopDown  = 0;
const int kQuadBottomUp = 4;

bool have_entry_points() {
    return gl.CreateShader != nullptr && gl.ShaderSource != nullptr &&
           gl.CompileShader != nullptr && gl.GetShaderiv != nullptr &&
           gl.DeleteShader != nullptr && gl.CreateProgram != nullptr &&
           gl.AttachShader != nullptr && gl.LinkProgram != nullptr &&
           gl.GetProgramiv != nullptr && gl.UseProgram != nullptr &&
           gl.GetUniformLocation != nullptr && gl.Uniform1i != nullptr &&
           gl.GetIntegerv != nullptr &&
           gl.GenBuffers != nullptr && gl.BindBuffer != nullptr &&
           gl.BufferData != nullptr && gl.GetAttribLocation != nullptr &&
           gl.BindAttribLocation != nullptr &&
           gl.EnableVertexAttribArray != nullptr &&
           gl.VertexAttribPointer != nullptr && gl.DrawArrays != nullptr &&
           gl.GenVertexArrays != nullptr && gl.BindVertexArray != nullptr;
}

GLuint compile_stage(GLenum type, const char *source, const char *label) {
    GLuint shader = gl.CreateShader(type);
    if (shader == 0) {
        DLOG("render","gl_blit: glCreateShader failed for %s", label);
        return 0;
    }
    gl.ShaderSource(shader, 1, &source, nullptr);
    gl.CompileShader(shader);

    GLint ok = 0;
    gl.GetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        log[0] = '\0';
        if (gl.GetShaderInfoLog != nullptr) {
            gl.GetShaderInfoLog(shader, (GLsizei)sizeof(log), nullptr, log);
        }
        DLOG("render","gl_blit: %s failed to compile: %s", label, log);
        gl.DeleteShader(shader);
        return 0;
    }
    return shader;
}

bool build_program() {
    GLuint vs = compile_stage(GL_VERTEX_SHADER, kVertexSource, "vertex shader");
    if (vs == 0) return false;

    GLuint fs = compile_stage(GL_FRAGMENT_SHADER, kFragmentSource, "fragment shader");
    if (fs == 0) {
        gl.DeleteShader(vs);
        return false;
    }

    GLuint program = gl.CreateProgram();
    if (program == 0) {
        DLOG("render","gl_blit: glCreateProgram failed");
        gl.DeleteShader(vs);
        gl.DeleteShader(fs);
        return false;
    }

    gl.AttachShader(program, vs);
    gl.AttachShader(program, fs);
    // Before linking. Generic attribute 0 aliases gl_Vertex in a compatibility
    // context, and a draw with neither attribute 0 nor the fixed-function vertex
    // array enabled produces no geometry at all — silently, with no GL error.
    // The linker is free to put a_pos anywhere, so pin it rather than hope.
    gl.BindAttribLocation(program, 0, "a_pos");
    gl.LinkProgram(program);

    // Reference-counted by the program now, whether or not the link succeeded.
    gl.DeleteShader(vs);
    gl.DeleteShader(fs);

    GLint linked = 0;
    gl.GetProgramiv(program, GL_LINK_STATUS, &linked);
    if (!linked) {
        char log[1024];
        log[0] = '\0';
        if (gl.GetProgramInfoLog != nullptr) {
            gl.GetProgramInfoLog(program, (GLsizei)sizeof(log), nullptr, log);
        }
        DLOG("render","gl_blit: link failed: %s", log);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    g_loc_tex  = gl.GetUniformLocation(program, "u_tex");
    g_attr_pos = gl.GetAttribLocation(program, "a_pos");
    g_attr_uv  = gl.GetAttribLocation(program, "a_uv");
    if (g_attr_pos != 0) {
        // Anything other than 0 means the bind above did not take. Refuse the
        // path rather than draw through a layout nothing asked for.
        DLOG("render","gl_blit: a_pos landed at %d, not 0 — quad unavailable",
                  (int)g_attr_pos);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    gl.GenBuffers(1, &g_vbo);
    gl.GenVertexArrays(1, &g_vao);
    if (g_vbo == 0 || g_vao == 0) {
        DLOG("render","gl_blit: buffer=%u array=%u — quad unavailable",
                  (unsigned)g_vbo, (unsigned)g_vao);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    // Static: the quad is the same four vertices for the life of the context,
    // and the vertex array records how to read them, so a blit is a bind and a
    // draw. The caller's viewport decides where it lands, not the geometry.
    GLint prev_array  = 0;
    GLint prev_buffer = 0;
    gl.GetIntegerv(GL_VERTEX_ARRAY_BINDING, &prev_array);
    gl.GetIntegerv(GL_ARRAY_BUFFER_BINDING, &prev_buffer);

    gl.BindVertexArray(g_vao);
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)sizeof(kQuad), kQuad, GL_STATIC_DRAW);

    const GLsizei stride = (GLsizei)(4 * sizeof(GLfloat));
    gl.EnableVertexAttribArray((GLuint)g_attr_pos);
    gl.VertexAttribPointer((GLuint)g_attr_pos, 2, GL_FLOAT, GL_FALSE, stride,
                           (const void *)(intptr_t)0);
    if (g_attr_uv >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_uv);
        gl.VertexAttribPointer((GLuint)g_attr_uv, 2, GL_FLOAT, GL_FALSE, stride,
                               (const void *)(intptr_t)(2 * sizeof(GLfloat)));
    }

    gl.BindBuffer(GL_ARRAY_BUFFER, (GLuint)prev_buffer);
    gl.BindVertexArray((GLuint)prev_array);

    g_program = program;
    DLOG("render","gl_blit: program linked (id=%u) attrs pos=%d uv=%d",
              (unsigned)program, (int)g_attr_pos, (int)g_attr_uv);
    return true;
}

int blit_quad(unsigned int texture, int first) {
    if (g_program == 0) {
        if (g_tried) return 0;
        g_tried = true;
        if (!have_entry_points()) {
            DLOG("render","gl_blit: no shader/buffer entry points — quad unavailable");
            return 0;
        }
        if (!build_program()) return 0;
    }

    // Put back whatever the caller had. The scene-FBO seed runs mid-frame
    // between the renderer's own draws, so anything left changed here lands
    // directly on those draws.
    GLint prev_program = 0;
    GLint prev_array   = 0;
    gl.GetIntegerv(GL_CURRENT_PROGRAM, &prev_program);
    gl.GetIntegerv(GL_VERTEX_ARRAY_BINDING, &prev_array);

    gl.UseProgram(g_program);
    // After glUseProgram, never before: glUniform writes to the currently bound
    // program, and setting it earlier leaves the sampler at its default with no
    // error to show for it. The unit is 0, which is the one the caller bound the
    // texture on — nothing here calls glActiveTexture, and the fallback quad
    // assumes the same unit.
    if (g_loc_tex >= 0) gl.Uniform1i(g_loc_tex, 0);
    gl.BindTexture(GL_TEXTURE_2D, (GLuint)texture);

    gl.BindVertexArray(g_vao);
    gl.DrawArrays(GL_TRIANGLE_STRIP, first, 4);

    gl.BindVertexArray((GLuint)prev_array);
    gl.UseProgram((GLuint)prev_program);
    return 1;
}

}  // namespace

extern "C" int nocturne_gl_blit_quad(unsigned int texture) {
    return blit_quad(texture, kQuadTopDown);
}

extern "C" int nocturne_gl_blit_quad_flipped(unsigned int texture) {
    return blit_quad(texture, kQuadBottomUp);
}

extern "C" void nocturne_gl_blit_shutdown(void) {
    if (g_program != 0 && gl.DeleteProgram != nullptr) {
        gl.DeleteProgram(g_program);
    }
    if (g_vbo != 0 && gl.DeleteBuffers != nullptr) {
        gl.DeleteBuffers(1, &g_vbo);
    }
    if (g_vao != 0 && gl.DeleteVertexArrays != nullptr) {
        gl.DeleteVertexArrays(1, &g_vao);
    }
    g_program = 0;
    g_vbo     = 0;
    g_vao     = 0;
    g_tried   = false;
}

#else  // !NOCTURNE_GL_PRESENT

#include "gl/gl_blit.h"

extern "C" int nocturne_gl_blit_quad(unsigned int texture) { (void)texture; return 0; }
extern "C" int nocturne_gl_blit_quad_flipped(unsigned int t) { (void)t; return 0; }
extern "C" void nocturne_gl_blit_shutdown(void) {}

#endif  // NOCTURNE_GL_PRESENT
