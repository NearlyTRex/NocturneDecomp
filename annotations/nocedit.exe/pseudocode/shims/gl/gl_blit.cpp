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

// -----------------------------------------------------------------------------
// FSR: an edge-aware upscale and a contrast-adaptive sharpen in one draw
// -----------------------------------------------------------------------------
//
// After AMD FidelityFX Super Resolution 1: EASU, which weights the twelve texels
// around a point with a lanczos-like kernel stretched along the local edge, and
// RCAS, which sharpens as far as the neighbourhood's contrast allows without
// clipping. The reference runs RCAS as a second pass over EASU's output; here
// its four neighbours are bilinear samples one output pixel away, which keeps it
// one draw into the window with no target of its own. EASU reads with
// texelFetch, so only RCAS sees the texture's filter, which the caller sets to
// linear.
//
// FidelityFX Super Resolution 1 is
//   Copyright (c) 2021 Advanced Micro Devices, Inc. All rights reserved.
//
//   Permission is hereby granted, free of charge, to any person obtaining a
//   copy of this software and associated documentation files (the "Software"),
//   to deal in the Software without restriction, including without limitation
//   the rights to use, copy, modify, merge, publish, distribute, sublicense,
//   and/or sell copies of the Software, and to permit persons to whom the
//   Software is furnished to do so, subject to the following conditions: The
//   above copyright notice and this permission notice shall be included in all
//   copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//   DEALINGS IN THE SOFTWARE.
const char *kFsrFragmentSource = NOCTURNE_GLSL_VERSION
    "uniform sampler2D u_tex;\n"
    "uniform vec2  u_src;\n"   // source size in texels
    "uniform float u_sharp;\n" // RCAS strength, 0.25 (soft) to 1.0 (strongest)
    "in  vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "vec3 fetch(ivec2 p) {\n"
    "    return texelFetch(u_tex, clamp(p, ivec2(0), ivec2(u_src) - ivec2(1)), 0).rgb;\n"
    "}\n"
    "float luma(vec3 c) { return c.b * 0.5 + (c.r * 0.5 + c.g); }\n"
    // One of the four bilinear corners' say in the edge's direction and length.
    "void easuSet(inout vec2 dir, inout float len, float w,\n"
    "             float lA, float lB, float lC, float lD, float lE) {\n"
    "    float lenX = max(abs(lD - lC), abs(lC - lB));\n"
    "    float dirX = lD - lB;\n"
    "    dir.x += dirX * w;\n"
    "    lenX = clamp(abs(dirX) / max(lenX, 1e-6), 0.0, 1.0);\n"
    "    len += lenX * lenX * w;\n"
    "    float lenY = max(abs(lE - lC), abs(lC - lA));\n"
    "    float dirY = lE - lA;\n"
    "    dir.y += dirY * w;\n"
    "    lenY = clamp(abs(dirY) / max(lenY, 1e-6), 0.0, 1.0);\n"
    "    len += lenY * lenY * w;\n"
    "}\n"
    // One texel's weight under the kernel rotated onto the edge.
    "void easuTap(inout vec3 aC, inout float aW, vec2 off, vec2 dir, vec2 len,\n"
    "             float lob, float clp, vec3 c) {\n"
    "    vec2 v = vec2(off.x * dir.x + off.y * dir.y, off.x * -dir.y + off.y * dir.x) * len;\n"
    "    float d2 = min(dot(v, v), clp);\n"
    "    float wB = 0.4 * d2 - 1.0;\n"
    "    float wA = lob * d2 - 1.0;\n"
    "    wB *= wB;\n"
    "    wA *= wA;\n"
    "    float w = (1.5625 * wB - 0.5625) * wA;\n"
    "    aC += c * w;\n"
    "    aW += w;\n"
    "}\n"
    "vec3 easu(vec2 uv) {\n"
    "    vec2 pp = uv * u_src - 0.5;\n"
    "    vec2 fpf = floor(pp);\n"
    "    ivec2 fp = ivec2(fpf);\n"
    "    pp -= fpf;\n"
    // The texels around f, the nearest:  b c
    //                                  e f g h
    //                                  i j k l
    //                                    n o
    "    vec3 b = fetch(fp + ivec2( 0,-1)), c = fetch(fp + ivec2( 1,-1));\n"
    "    vec3 e = fetch(fp + ivec2(-1, 0)), f = fetch(fp);\n"
    "    vec3 g = fetch(fp + ivec2( 1, 0)), h = fetch(fp + ivec2( 2, 0));\n"
    "    vec3 i = fetch(fp + ivec2(-1, 1)), j = fetch(fp + ivec2( 0, 1));\n"
    "    vec3 k = fetch(fp + ivec2( 1, 1)), l = fetch(fp + ivec2( 2, 1));\n"
    "    vec3 n = fetch(fp + ivec2( 0, 2)), o = fetch(fp + ivec2( 1, 2));\n"
    "    float bL = luma(b), cL = luma(c), eL = luma(e), fL = luma(f), gL = luma(g);\n"
    "    float hL = luma(h), iL = luma(i), jL = luma(j), kL = luma(k), lL = luma(l);\n"
    "    float nL = luma(n), oL = luma(o);\n"
    "    vec2 dir = vec2(0.0);\n"
    "    float len = 0.0;\n"
    "    easuSet(dir, len, (1.0 - pp.x) * (1.0 - pp.y), bL, eL, fL, gL, jL);\n"
    "    easuSet(dir, len,        pp.x  * (1.0 - pp.y), cL, fL, gL, hL, kL);\n"
    "    easuSet(dir, len, (1.0 - pp.x) *        pp.y,  fL, iL, jL, kL, nL);\n"
    "    easuSet(dir, len,        pp.x  *        pp.y,  gL, jL, kL, lL, oL);\n"
    "    float dirR = dot(dir, dir);\n"
    "    bool level = dirR < (1.0 / 32768.0);\n" // no edge to follow
    "    dir = level ? vec2(1.0, dir.y) : dir * inversesqrt(dirR);\n"
    "    len = 0.25 * len * len;\n"
    "    float stretch = dot(dir, dir) / max(abs(dir.x), abs(dir.y));\n"
    "    vec2 len2 = vec2(1.0 + (stretch - 1.0) * len, 1.0 - 0.5 * len);\n"
    "    float lob = 0.5 - 0.29 * len;\n"
    "    float clp = 1.0 / lob;\n"
    "    vec3 aC = vec3(0.0);\n"
    "    float aW = 0.0;\n"
    "    easuTap(aC, aW, vec2( 0.0,-1.0) - pp, dir, len2, lob, clp, b);\n"
    "    easuTap(aC, aW, vec2( 1.0,-1.0) - pp, dir, len2, lob, clp, c);\n"
    "    easuTap(aC, aW, vec2(-1.0, 1.0) - pp, dir, len2, lob, clp, i);\n"
    "    easuTap(aC, aW, vec2( 0.0, 1.0) - pp, dir, len2, lob, clp, j);\n"
    "    easuTap(aC, aW, vec2( 0.0, 0.0) - pp, dir, len2, lob, clp, f);\n"
    "    easuTap(aC, aW, vec2(-1.0, 0.0) - pp, dir, len2, lob, clp, e);\n"
    "    easuTap(aC, aW, vec2( 1.0, 1.0) - pp, dir, len2, lob, clp, k);\n"
    "    easuTap(aC, aW, vec2( 2.0, 1.0) - pp, dir, len2, lob, clp, l);\n"
    "    easuTap(aC, aW, vec2( 2.0, 0.0) - pp, dir, len2, lob, clp, h);\n"
    "    easuTap(aC, aW, vec2( 1.0, 0.0) - pp, dir, len2, lob, clp, g);\n"
    "    easuTap(aC, aW, vec2( 1.0, 2.0) - pp, dir, len2, lob, clp, o);\n"
    "    easuTap(aC, aW, vec2( 0.0, 2.0) - pp, dir, len2, lob, clp, n);\n"
    // No ringing: kept inside the four nearest texels' range.
    "    vec3 lo = min(min(f, g), min(j, k));\n"
    "    vec3 hi = max(max(f, g), max(j, k));\n"
    "    return clamp(aC / aW, lo, hi);\n"
    "}\n"
    "void main() {\n"
    "    vec3 e = easu(v_uv);\n"
    "    vec2 px = vec2(abs(dFdx(v_uv.x)), abs(dFdy(v_uv.y)));\n" // one output pixel
    "    vec3 b = texture(u_tex, v_uv + vec2(0.0, -px.y)).rgb;\n"
    "    vec3 d = texture(u_tex, v_uv + vec2(-px.x, 0.0)).rgb;\n"
    "    vec3 f = texture(u_tex, v_uv + vec2( px.x, 0.0)).rgb;\n"
    "    vec3 h = texture(u_tex, v_uv + vec2(0.0,  px.y)).rgb;\n"
    "    vec3 mn = min(min(b, d), min(f, h));\n"
    "    vec3 mx = max(max(b, d), max(f, h));\n"
    "    vec3 hitMin = mn / (4.0 * max(mx, vec3(1e-4)));\n"
    "    vec3 hitMax = (vec3(1.0) - mx) / min(4.0 * mn - vec3(4.0), vec3(-1e-4));\n"
    "    vec3 lobeRGB = max(-hitMin, hitMax);\n"
    "    float lobe = max(-0.1875, min(max(lobeRGB.r, max(lobeRGB.g, lobeRGB.b)), 0.0)) * "
    "u_sharp;\n"
    "    o_color = vec4(clamp((lobe * (b + d + f + h) + e) / (4.0 * lobe + 1.0), 0.0, 1.0), 1.0);\n"
    "}\n";

// RCAS strength at sharpness 0 and 1: two stops below the strongest, and the
// strongest.
const float kFsrSoftest = 0.25f;
const float kFsrStrongest = 1.0f;

bool g_fsr_tried = false; // as g_tried, for the FSR program
GLuint g_fsr_program = 0;
GLint g_fsr_loc_tex = -1;
GLint g_fsr_loc_src = -1;
GLint g_fsr_loc_sharp = -1;

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

// The FSR program reads the plain quad's vertex array, which recorded a_uv at
// the plain program's location. Only the position is pinned, so the linker
// could put a_uv elsewhere here; drawing then would read the wrong attribute,
// so such a program is refused rather than used.
bool build_fsr_program() {
    if (gl.Uniform1f == nullptr || gl.Uniform2f == nullptr) {
        DLOG("render", "gl_blit: no Uniform1f/Uniform2f — FSR unavailable");
        return false;
    }
    GLuint program = nocturne_gl_build_program(kVertexSource, kFsrFragmentSource, "gl_blit_fsr");
    if (program == 0) {
        return false;
    }
    if (gl.GetAttribLocation(program, "a_uv") != g_attr_uv) {
        DLOG("render", "gl_blit: FSR program put a_uv elsewhere — FSR unavailable");
        gl.DeleteProgram(program);
        return false;
    }
    g_fsr_loc_tex = gl.GetUniformLocation(program, "u_tex");
    g_fsr_loc_src = gl.GetUniformLocation(program, "u_src");
    g_fsr_loc_sharp = gl.GetUniformLocation(program, "u_sharp");
    g_fsr_program = program;
    DLOG("render", "gl_blit: FSR program linked (id=%u)", (unsigned)program);
    return true;
}

bool ensure_fsr() {
    if (g_fsr_program != 0)
        return true;
    if (g_fsr_tried)
        return false;
    g_fsr_tried = true;
    return build_fsr_program();
}

struct FsrUniforms {
    GLfloat src_w, src_h, sharp;
};

void set_fsr_uniforms(const void *uniforms) {
    const FsrUniforms *u = (const FsrUniforms *)uniforms;
    gl.Uniform2f(g_fsr_loc_src, u->src_w, u->src_h);
    gl.Uniform1f(g_fsr_loc_sharp, u->sharp);
}

} // namespace

extern "C" int nocturne_gl_blit_quad(unsigned int texture) {
    return blit_quad(texture, kQuadTopDown);
}

extern "C" int nocturne_gl_blit_quad_flipped(unsigned int texture) {
    return blit_quad(texture, kQuadBottomUp);
}

// The plain quad first: its buffer and vertex array are the ones drawn.
extern "C" int nocturne_gl_blit_quad_fsr(unsigned int texture, int flipped, int src_w, int src_h,
                                         float sharpness) {
    if (!ensure_quad() || !ensure_fsr())
        return 0;
    // Squared, so the steps near the soft end are the finer ones.
    const FsrUniforms uniforms = {(GLfloat)src_w, (GLfloat)src_h,
                                  kFsrSoftest +
                                      (kFsrStrongest - kFsrSoftest) * sharpness * sharpness};
    draw_quad(g_fsr_program, g_fsr_loc_tex, texture, flipped ? kQuadBottomUp : kQuadTopDown,
              set_fsr_uniforms, &uniforms);
    return 1;
}

// Only a built program has anything to delete; a failed build leaves nothing.
extern "C" void nocturne_gl_blit_shutdown(void) {
    if (g_fsr_program != 0) {
        gl.DeleteProgram(g_fsr_program);
    }
    if (g_program != 0) {
        gl.DeleteProgram(g_program);
        gl.DeleteBuffers(1, &g_vbo);
        gl.DeleteVertexArrays(1, &g_vao);
    }
    g_fsr_program = 0;
    g_fsr_tried = false;
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
extern "C" int nocturne_gl_blit_quad_fsr(unsigned int t, int flipped, int w, int h, float s) {
    (void)t;
    (void)flipped;
    (void)w;
    (void)h;
    (void)s;
    return 0;
}
extern "C" void nocturne_gl_blit_shutdown(void) {}

#endif // NOCTURNE_GL_PRESENT
