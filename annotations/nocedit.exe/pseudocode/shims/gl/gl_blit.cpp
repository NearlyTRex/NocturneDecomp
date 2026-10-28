// =============================================================================
// GL BLIT — the full-target textured quad, on a shader instead of glBegin
// =============================================================================
//
// See gl_blit.h for why this belongs to no renderer.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "core/debug_log.h"
#include "gl/gl_api.h"
#include "gl/gl_blit.h"
#include "gl/gl_program.h"
#include "gl/upscale_shaders.h"
#include "gl/upscaler.h"

#include <stdint.h>
#include <stdlib.h>

namespace {

bool g_tried = false; // build attempted; do not retry every frame
GLuint g_program = 0;
GLuint g_vbo = 0;
GLuint g_vao = 0;
GLint g_loc_tex = -1;
GLint g_attr_uv = -1;

// Pinned by nocturne_gl_build_program.
const GLuint kAttrPos = 0;

// #version 150 core: the earliest version with `in`/`out` and a declared
// fragment output, which is what a core profile accepts. `#version 300 es`
// under NOCTURNE_GLES (gl/gl_api.h).
//
// The quad's positions are already in clip space, so there is no projection to
// apply. A unit square under glOrtho(0, 1, 1, 0, -1, 1) maps onto NDC as
// (2x - 1, 1 - 2y) — a top-left origin, so the texture's first row lands at the
// top of the viewport — with z = 0 passing through unchanged. Those four points
// are the vertex buffer below.
const char *kVertexSource = NOCTURNE_GLSL_VERSION "in  vec2 a_pos;\n"
                                                  "in  vec2 a_uv;\n"
                                                  "out vec2 v_uv;\n"
                                                  "void main() {\n"
                                                  "    gl_Position = vec4(a_pos, 0.0, 1.0);\n"
                                                  "    v_uv        = a_uv;\n"
                                                  "}\n";

// The fragment is the texel and nothing else. Alpha comes through as it is,
// which matters for the scene-FBO seed — that target is RGBA8 and keeps what is
// written to it.
const char *kFragmentSource = NOCTURNE_GLSL_VERSION "uniform sampler2D u_tex;\n"
                                                    "in  vec2 v_uv;\n"
                                                    "out vec4 o_color;\n"
                                                    "void main() {\n"
                                                    "    o_color = texture(u_tex, v_uv);\n"
                                                    "}\n";

// Clip-space x, y then u, v, in GL_TRIANGLE_STRIP order. Two quads: the first
// samples top-down for an uploaded CPU image, the second bottom-up for a render
// target. One buffer, two draw offsets, so the layout is stated once.
const GLfloat kQuad[32] = {
    -1.0f, 1.0f,  0.0f, 0.0f, 1.0f, 1.0f,  1.0f, 0.0f,
    -1.0f, -1.0f, 0.0f, 1.0f, 1.0f, -1.0f, 1.0f, 1.0f,

    -1.0f, 1.0f,  0.0f, 1.0f, 1.0f, 1.0f,  1.0f, 1.0f,
    -1.0f, -1.0f, 0.0f, 0.0f, 1.0f, -1.0f, 1.0f, 0.0f,
};
const int kQuadTopDown = 0;
const int kQuadBottomUp = 4;

// One upscaler's program, built from gl/upscale_shaders.h on its first use
// over the plain quad's vertex shader, so it reads the same vertex array.
struct UpscaleProgram {
    bool tried; // as g_tried, for this filter
    GLuint program;
    GLint loc_tex;
    GLint loc_src;
    GLint loc_sharp; // -1 where the filter does not read it, which GL ignores
};

UpscaleProgram g_upscale[NOCTURNE_UPSCALER_COUNT];

bool have_entry_points() {
    return gl.CreateShader != nullptr && gl.ShaderSource != nullptr &&
           gl.CompileShader != nullptr && gl.GetShaderiv != nullptr && gl.DeleteShader != nullptr &&
           gl.CreateProgram != nullptr && gl.AttachShader != nullptr && gl.LinkProgram != nullptr &&
           gl.GetProgramiv != nullptr && gl.UseProgram != nullptr && gl.DeleteProgram != nullptr &&
           gl.GetUniformLocation != nullptr && gl.Uniform1i != nullptr &&
           gl.GetIntegerv != nullptr && gl.GenBuffers != nullptr && gl.BindBuffer != nullptr &&
           gl.BufferData != nullptr && gl.DeleteBuffers != nullptr &&
           gl.GetAttribLocation != nullptr && gl.BindAttribLocation != nullptr &&
           gl.EnableVertexAttribArray != nullptr && gl.VertexAttribPointer != nullptr &&
           gl.DrawArrays != nullptr && gl.GenVertexArrays != nullptr &&
           gl.BindVertexArray != nullptr && gl.DeleteVertexArrays != nullptr;
}

// Both shaders read what they declare, so the linker keeps u_tex and a_uv and
// neither location is ever -1.
bool build_program() {
    GLuint program = nocturne_gl_build_program(kVertexSource, kFragmentSource, "gl_blit");
    if (program == 0) {
        return false;
    }

    g_loc_tex = gl.GetUniformLocation(program, "u_tex");
    g_attr_uv = gl.GetAttribLocation(program, "a_uv");

    gl.GenBuffers(1, &g_vbo);
    gl.GenVertexArrays(1, &g_vao);
    if (g_vbo == 0 || g_vao == 0) {
        DLOG("render", "gl_blit: buffer=%u array=%u — quad unavailable", (unsigned)g_vbo,
             (unsigned)g_vao);
        // Whichever was made goes too; GL ignores the name 0.
        gl.DeleteProgram(program);
        gl.DeleteBuffers(1, &g_vbo);
        gl.DeleteVertexArrays(1, &g_vao);
        g_vbo = 0;
        g_vao = 0;
        return false;
    }

    // Static: the quad is the same four vertices for the life of the context,
    // and the vertex array records how to read them, so a blit is a bind and a
    // draw. The caller's viewport decides where it lands, not the geometry.
    GLint prev_array = 0;
    GLint prev_buffer = 0;
    gl.GetIntegerv(GL_VERTEX_ARRAY_BINDING, &prev_array);
    gl.GetIntegerv(GL_ARRAY_BUFFER_BINDING, &prev_buffer);

    gl.BindVertexArray(g_vao);
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)sizeof(kQuad), kQuad, GL_STATIC_DRAW);

    const GLsizei stride = (GLsizei)(4 * sizeof(GLfloat));
    gl.EnableVertexAttribArray(kAttrPos);
    gl.VertexAttribPointer(kAttrPos, 2, GL_FLOAT, GL_FALSE, stride, (const void *)(intptr_t)0);
    gl.EnableVertexAttribArray((GLuint)g_attr_uv);
    gl.VertexAttribPointer((GLuint)g_attr_uv, 2, GL_FLOAT, GL_FALSE, stride,
                           (const void *)(intptr_t)(2 * sizeof(GLfloat)));

    gl.BindBuffer(GL_ARRAY_BUFFER, (GLuint)prev_buffer);
    gl.BindVertexArray((GLuint)prev_array);

    g_program = program;
    DLOG("render", "gl_blit: program linked (id=%u) attrs pos=%u uv=%d", (unsigned)program,
         kAttrPos, (int)g_attr_uv);
    return true;
}

// The quad and its program, built on first use and once only.
bool ensure_quad() {
    if (g_program != 0)
        return true;
    if (g_tried)
        return false;
    g_tried = true;
    if (!have_entry_points()) {
        DLOG("render", "gl_blit: no shader/buffer entry points — quad unavailable");
        return false;
    }
    return build_program();
}

// Draws the quad with `program` and puts back whatever the caller had. The
// scene-FBO seed runs mid-frame between the renderer's own draws, so anything
// left changed here lands directly on those draws. `set_uniforms` gives the
// program anything beyond its sampler.
void draw_quad(GLuint program, GLint loc_tex, unsigned int texture, int first,
               void (*set_uniforms)(const void *), const void *uniforms) {
    GLint prev_program = 0;
    GLint prev_array = 0;
    gl.GetIntegerv(GL_CURRENT_PROGRAM, &prev_program);
    gl.GetIntegerv(GL_VERTEX_ARRAY_BINDING, &prev_array);

    gl.UseProgram(program);
    // After glUseProgram, never before: glUniform writes to the currently bound
    // program, and setting it earlier leaves the sampler at its default with no
    // error to show for it. The unit is 0, which is the one the caller bound the
    // texture on — nothing here calls glActiveTexture, and the fallback quad
    // assumes the same unit.
    gl.Uniform1i(loc_tex, 0);
    if (set_uniforms != nullptr)
        set_uniforms(uniforms);
    gl.BindTexture(GL_TEXTURE_2D, (GLuint)texture);

    gl.BindVertexArray(g_vao);
    gl.DrawArrays(GL_TRIANGLE_STRIP, first, 4);

    gl.BindVertexArray((GLuint)prev_array);
    gl.UseProgram((GLuint)prev_program);
}

int blit_quad(unsigned int texture, int first) {
    if (!ensure_quad())
        return 0;
    draw_quad(g_program, g_loc_tex, texture, first, nullptr, nullptr);
    return 1;
}

// An upscaler's program reads the plain quad's vertex array, which recorded
// a_uv at the plain program's location. Only the position is pinned, so the
// linker could put a_uv elsewhere here; drawing then would read the wrong
// attribute, so such a program is refused rather than used.
bool build_upscale_program(int mode, UpscaleProgram *out) {
    const char *fragment = nocturne_upscale_fragment_source(mode);
    if (fragment == nullptr)
        return false;
    if (gl.Uniform1f == nullptr || gl.Uniform2f == nullptr) {
        DLOG("render", "gl_blit: no Uniform1f/Uniform2f — upscaler %d unavailable", mode);
        return false;
    }
    GLuint program = nocturne_gl_build_program(kVertexSource, fragment, "gl_blit_upscale");
    if (program == 0) {
        return false;
    }
    if (gl.GetAttribLocation(program, "a_uv") != g_attr_uv) {
        DLOG("render", "gl_blit: upscaler %d put a_uv elsewhere — unavailable", mode);
        gl.DeleteProgram(program);
        return false;
    }
    out->loc_tex = gl.GetUniformLocation(program, "u_tex");
    out->loc_src = gl.GetUniformLocation(program, "u_src");
    out->loc_sharp = gl.GetUniformLocation(program, "u_sharp");
    out->program = program;
    DLOG("render", "gl_blit: upscaler %d linked (id=%u)", mode, (unsigned)program);
    return true;
}

UpscaleProgram *ensure_upscale(int mode) {
    if (mode < 0 || mode >= NOCTURNE_UPSCALER_COUNT)
        return nullptr;
    UpscaleProgram *up = &g_upscale[mode];
    if (up->program != 0)
        return up;
    if (up->tried)
        return nullptr;
    up->tried = true;
    return build_upscale_program(mode, up) ? up : nullptr;
}

struct UpscaleUniforms {
    const UpscaleProgram *program;
    GLfloat src_w, src_h, sharp;
};

void set_upscale_uniforms(const void *uniforms) {
    const UpscaleUniforms *u = (const UpscaleUniforms *)uniforms;
    gl.Uniform2f(u->program->loc_src, u->src_w, u->src_h);
    gl.Uniform1f(u->program->loc_sharp, u->sharp);
}

} // namespace

extern "C" int nocturne_gl_blit_quad(unsigned int texture) {
    return blit_quad(texture, kQuadTopDown);
}

extern "C" int nocturne_gl_blit_quad_flipped(unsigned int texture) {
    return blit_quad(texture, kQuadBottomUp);
}

// The plain quad first: its buffer and vertex array are the ones drawn.
extern "C" int nocturne_gl_blit_quad_upscaled(int mode, unsigned int texture, int flipped,
                                              int src_w, int src_h, float sharpness) {
    if (!ensure_quad())
        return 0;
    const UpscaleProgram *up = ensure_upscale(mode);
    if (up == nullptr)
        return 0;
    const UpscaleUniforms uniforms = {up, (GLfloat)src_w, (GLfloat)src_h, sharpness};
    draw_quad(up->program, up->loc_tex, texture, flipped ? kQuadBottomUp : kQuadTopDown,
              set_upscale_uniforms, &uniforms);
    return 1;
}

// Only a built program has anything to delete; a failed build leaves nothing.
extern "C" void nocturne_gl_blit_shutdown(void) {
    for (UpscaleProgram &up : g_upscale) {
        if (up.program != 0)
            gl.DeleteProgram(up.program);
        up = UpscaleProgram();
    }
    if (g_program != 0) {
        gl.DeleteProgram(g_program);
        gl.DeleteBuffers(1, &g_vbo);
        gl.DeleteVertexArrays(1, &g_vao);
    }
    g_program = 0;
    g_vbo = 0;
    g_vao = 0;
    g_tried = false;
}

#else // !NOCTURNE_GL_PRESENT

#include "gl/gl_blit.h"

extern "C" int nocturne_gl_blit_quad(unsigned int texture) {
    (void)texture;
    return 0;
}
extern "C" int nocturne_gl_blit_quad_flipped(unsigned int t) {
    (void)t;
    return 0;
}
extern "C" int nocturne_gl_blit_quad_upscaled(int mode, unsigned int t, int flipped, int w, int h,
                                              float s) {
    (void)mode;
    (void)t;
    (void)flipped;
    (void)w;
    (void)h;
    (void)s;
    return 0;
}
extern "C" void nocturne_gl_blit_shutdown(void) {}

#endif // NOCTURNE_GL_PRESENT
