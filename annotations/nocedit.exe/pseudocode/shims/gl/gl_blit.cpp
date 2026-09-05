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

// See gl_blit.h. -1 means "not resolved yet"; the first blit reads the env var.
extern "C" int nocturne_gl_blit_shader = -1;

namespace {

bool   g_tried    = false;   // build attempted; do not retry every frame
GLuint g_program  = 0;
GLuint g_vbo      = 0;
GLint  g_loc_tex  = -1;
GLint  g_attr_pos = -1;
GLint  g_attr_uv  = -1;

int shader_mode() {
    if (nocturne_gl_blit_shader < 0) {
        const char *env = getenv("NOCTURNE_GL_BLIT_SHADER");
        nocturne_gl_blit_shader = (env != nullptr) ? atoi(env) : 1;
    }
    return nocturne_gl_blit_shader;
}

// #version 120: the lowest version that has everything needed, so driver
// variation is minimised. Nothing here needs more.
//
// The quad's positions are already in clip space, so there is no projection to
// apply. The fallback quad's glOrtho(0, 1, 1, 0, -1, 1) maps the unit square
// onto NDC as (2x - 1, 1 - 2y) — a top-left origin, so the texture's first row
// lands at the top of the viewport — with z = 0 passing through unchanged.
// Those four points are the vertex buffer below.
const char *kVertexSource =
    "#version 120\n"
    "attribute vec2 a_pos;\n"
    "attribute vec2 a_uv;\n"
    "varying   vec2 v_uv;\n"
    "void main() {\n"
    "    gl_Position = vec4(a_pos, 0.0, 1.0);\n"
    "    v_uv        = a_uv;\n"
    "}\n";

// GL_REPLACE, exactly: the fragment is the texel and the primary colour is
// ignored. Alpha comes through as it did, which matters for the scene-FBO seed
// — that target is RGBA8 and keeps what is written to it.
const char *kFragmentSource =
    "#version 120\n"
    "uniform sampler2D u_tex;\n"
    "varying   vec2    v_uv;\n"
    "void main() {\n"
    "    gl_FragColor = texture2D(u_tex, v_uv);\n"
    "}\n";

// Clip-space x, y then u, v. GL_TRIANGLE_STRIP order, the same winding the
// immediate-mode quad used.
const GLfloat kQuad[16] = {
    -1.0f,  1.0f,   0.0f, 0.0f,
     1.0f,  1.0f,   1.0f, 0.0f,
    -1.0f, -1.0f,   0.0f, 1.0f,
     1.0f, -1.0f,   1.0f, 1.0f,
};

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
           gl.DisableVertexAttribArray != nullptr &&
           gl.VertexAttribPointer != nullptr && gl.DrawArrays != nullptr;
}

GLuint compile_stage(GLenum type, const char *source, const char *label) {
    GLuint shader = gl.CreateShader(type);
    if (shader == 0) {
        DDRAW_LOG("gl_blit: glCreateShader failed for %s", label);
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
        DDRAW_LOG("gl_blit: %s failed to compile: %s", label, log);
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
        DDRAW_LOG("gl_blit: glCreateProgram failed");
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
        DDRAW_LOG("gl_blit: link failed: %s", log);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    g_loc_tex  = gl.GetUniformLocation(program, "u_tex");
    g_attr_pos = gl.GetAttribLocation(program, "a_pos");
    g_attr_uv  = gl.GetAttribLocation(program, "a_uv");
    if (g_attr_pos != 0) {
        // Anything other than 0 means the bind above did not take, and the blit
        // would come out empty rather than wrong — a black screen, which is a far
        // worse diagnostic than a wrong-looking one. Refuse the path instead.
        DDRAW_LOG("gl_blit: a_pos landed at %d, not 0 — staying on fixed function",
                  (int)g_attr_pos);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    gl.GenBuffers(1, &g_vbo);
    if (g_vbo == 0) {
        DDRAW_LOG("gl_blit: glGenBuffers failed — staying on fixed function");
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }
    // Static: the quad is the same four vertices for the life of the context.
    // The caller's viewport decides where it lands, not the geometry.
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)sizeof(kQuad), kQuad, GL_STATIC_DRAW);
    gl.BindBuffer(GL_ARRAY_BUFFER, 0);

    g_program = program;
    DDRAW_LOG("gl_blit: program linked (id=%u) attrs pos=%d uv=%d",
              (unsigned)program, (int)g_attr_pos, (int)g_attr_uv);
    return true;
}

}  // namespace

extern "C" int nocturne_gl_blit_quad(unsigned int texture) {
    if (shader_mode() == 0) return 0;

    if (g_program == 0) {
        if (g_tried) return 0;
        g_tried = true;
        if (!have_entry_points()) {
            DDRAW_LOG("gl_blit: no shader/buffer entry points — blit stays on fixed function");
            return 0;
        }
        if (!build_program()) return 0;
    }

    // Put back whatever the caller had. glPushAttrib does not cover either of
    // these, and the scene-FBO seed runs mid-frame between the renderer DLL's
    // own draws, so leaving them changed would land directly on those draws.
    GLint prev_program = 0;
    GLint prev_buffer  = 0;
    gl.GetIntegerv(GL_CURRENT_PROGRAM, &prev_program);
    gl.GetIntegerv(GL_ARRAY_BUFFER_BINDING, &prev_buffer);

    gl.UseProgram(g_program);
    // After glUseProgram, never before: glUniform writes to the currently bound
    // program, and setting it earlier leaves the sampler at its default with no
    // error to show for it. The unit is 0, which is the one the caller bound the
    // texture on — nothing here calls glActiveTexture, and the fallback quad
    // assumes the same unit.
    if (g_loc_tex >= 0) gl.Uniform1i(g_loc_tex, 0);
    gl.BindTexture(GL_TEXTURE_2D, (GLuint)texture);

    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    const GLsizei stride = (GLsizei)(4 * sizeof(GLfloat));
    gl.EnableVertexAttribArray((GLuint)g_attr_pos);
    gl.VertexAttribPointer((GLuint)g_attr_pos, 2, GL_FLOAT, GL_FALSE, stride,
                           (const void *)(intptr_t)0);
    if (g_attr_uv >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_uv);
        gl.VertexAttribPointer((GLuint)g_attr_uv, 2, GL_FLOAT, GL_FALSE, stride,
                               (const void *)(intptr_t)(2 * sizeof(GLfloat)));
    }

    gl.DrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    gl.DisableVertexAttribArray((GLuint)g_attr_pos);
    if (g_attr_uv >= 0) gl.DisableVertexAttribArray((GLuint)g_attr_uv);
    gl.BindBuffer(GL_ARRAY_BUFFER, (GLuint)prev_buffer);
    gl.UseProgram((GLuint)prev_program);
    return 1;
}

extern "C" void nocturne_gl_blit_shutdown(void) {
    if (g_program != 0 && gl.DeleteProgram != nullptr) {
        gl.DeleteProgram(g_program);
    }
    if (g_vbo != 0 && gl.DeleteBuffers != nullptr) {
        gl.DeleteBuffers(1, &g_vbo);
    }
    g_program = 0;
    g_vbo     = 0;
    g_tried   = false;
}

#else  // !NOCTURNE_GL_PRESENT

#include "gl/gl_blit.h"

extern "C" int nocturne_gl_blit_shader = 0;
extern "C" int nocturne_gl_blit_quad(unsigned int texture) { (void)texture; return 0; }
extern "C" void nocturne_gl_blit_shutdown(void) {}

#endif  // NOCTURNE_GL_PRESENT
