// =============================================================================
// GL SHADER SUPPORT — compile/link helper for the shader renderer path
// =============================================================================
//
// See gl_shader.h. Phase 0 of research/17-shader_renderer_migration built this
// as a pass-through that reproduced fixed function exactly; phase 1 adds the one
// thing fixed function cannot express — the engine's per-pixel light/fog grid,
// applied to hardware geometry.
//
// WHY THAT MATTERS. CDemonCamera::compositeLightmapToFramebuffer applies that
// grid to the CPU image before BeginScene, so everything the renderer draws
// afterwards sits on top of it at full brightness. The chapel window is drawn
// BOTH ways — CGlass::renderBackground into the camera framebuffer, then
// CGlass::renderOpaque as hardware geometry — and the accelerated result reads
// mean 20.53 / max 56 where software and retail both read 19.50 / 28. Sampling
// the same grid here gives every pixel the grid exactly once, whichever path
// drew it. See research/12 and shims/lighting_bridge.h.

// NO FILE-LEVEL #if GUARD, deliberately — same as gl_ddraw.cpp beside it.
//
// gl_api.cpp defines the `gl` table in both of its branches: real entry points
// when GL is present, an all-null table when it is not. So this file always
// compiles and links, and degrades at RUNTIME through have_entry_points()
// instead. That single check also covers the cases a compile guard cannot —
// a driver without shader support, and a context that failed to come up — which
// is why gl_ddraw.cpp is written the same way.
//
// A `#if NOCTURNE_GL_PRESENT` here would be actively harmful: tridx7's
// shim_config.h is an empty stub that defines none of nocedit's NOCTURNE_*
// toggles, and CMake only passes NOCTURNE_GL_PRESENT=0 when GL is switched OFF.
// With GL on the macro is undefined, so such a guard compiles the whole file
// away to no-ops — silently, with no warning and no log line to show for it.

#include "gl_shader.h"
#include "gl/gl_api.h"
#include "renderer/lighting_bridge.h"
#include "core/debug_log.h"

#include <stdio.h>
#include <stdlib.h>

// Which debug view the lightmap block paints, live-settable from a debugger so
// one session can capture every view frame-synced instead of one relaunch each:
//   0 off   1 grid coordinate   2 fog   3 gain
// -1 means "not resolved yet"; the first use reads NOCTURNE_GL_LIGHTMAP_DEBUG.
// The uniform is pushed once per frame, so a change lands on the next one.
extern "C" int nocturne_gl_lightmap_debug = -1;

// See gl_shader.h. Default OFF until measured, so this build behaves exactly as
// the fixed-function path does and turning it on is a deliberate experiment.
extern "C" int nocturne_gl_vertex_fog = -1;

// Forces the compatibility (client-array) vertex stage even where the modern one
// is available, so "did moving off client arrays change any pixels?" can be
// answered by capturing one scene both ways instead of comparing across scenes
// and calling the difference unattributable.
extern "C" int nocturne_gl_shader_force_compat = 0;

namespace {

bool   g_enabled   = false;
bool   g_tried     = false;   // compile attempted; do not retry every frame
GLuint g_program   = 0;

GLint  g_loc_tex          = -1;
GLint  g_loc_tex_enabled  = -1;
GLint  g_loc_alpha_test   = -1;
GLint  g_loc_alpha_ref    = -1;
GLint  g_loc_alpha_greater = -1;

GLint  g_loc_lm_on       = -1;
GLint  g_loc_corona      = -1;
GLint  g_loc_plane       = -1;
GLint  g_loc_pal         = -1;
GLint  g_loc_lmtab       = -1;
GLint  g_loc_grid_scale  = -1;
GLint  g_loc_grid_offset = -1;
GLint  g_loc_solid       = -1;
GLint  g_loc_debug       = -1;
GLint  g_loc_vfog_on     = -1;
GLint  g_loc_fog_color   = -1;
GLint  g_loc_projection  = -1;

// Set when the program was built from kVertexSourceModern, i.e. when the draw
// path can feed it a buffer object instead of client arrays.
bool   g_modern          = false;
GLuint g_vbo             = 0;
size_t g_vbo_capacity    = 0;   // bytes currently allocated
GLint  g_attr_pos        = -1;
GLint  g_attr_color      = -1;
GLint  g_attr_secondary  = -1;
GLint  g_attr_uv         = -1;
GLint  g_attr_fog        = -1;

int debug_mode() {
    if (nocturne_gl_lightmap_debug < 0) {
        const char *env = getenv("NOCTURNE_GL_LIGHTMAP_DEBUG");
        nocturne_gl_lightmap_debug = (env != nullptr) ? atoi(env) : 0;
    }
    return nocturne_gl_lightmap_debug;
}

int vertex_fog_mode() {
    if (nocturne_gl_vertex_fog < 0) {
        const char *env = getenv("NOCTURNE_GL_VERTEX_FOG");
        nocturne_gl_vertex_fog = (env != nullptr) ? atoi(env) : 0;
    }
    return nocturne_gl_vertex_fog;
}

// The four lookups the lightmap needs, on units 1..4. Unit 0 stays the draw's
// own texture, which is what gl_ddraw.cpp binds.
enum {
    UNIT_TEX    = 0,
    UNIT_CORONA = 1,
    UNIT_PLANE  = 2,
    UNIT_PAL    = 3,
    UNIT_LMTAB  = 4
};

GLuint g_tex_corona = 0;
GLuint g_tex_plane  = 0;
GLuint g_tex_pal    = 0;
GLuint g_tex_lmtab  = 0;

// The grid the shader is currently carrying. Serial 0 means nothing uploaded;
// the engine's first composite publishes serial 1.
unsigned int g_uploaded_serial = 0;
bool         g_lm_ready        = false;
bool         g_lm_warned       = false;

const int kGridWidth  = 320;
const int kGridHeight = 240;
const int kLmEntries  = 512;
const int kPalEntries = 256;

// Scratch for the two lookup tables, rebuilt each frame. 3 KB total — small
// enough that re-uploading unconditionally costs less than tracking whether the
// engine has repainted a palette.
unsigned char g_lm_pixels[kLmEntries * 4];
unsigned char g_pal_pixels[kPalEntries * 4];

// #version 120 deliberately: the lowest version that has everything needed, so
// the compatibility aliases (gl_Vertex, gl_Color, gl_MultiTexCoord0,
// gl_SecondaryColor, ftransform) are guaranteed present and driver variation is
// minimised. The lightmap is expressed in floats, so nothing here needs the
// integer ops a later version would bring.
const char *kVertexSource =
    "#version 120\n"
    "varying vec4  v_color;\n"
    "varying vec4  v_secondary;\n"
    "varying vec2  v_uv;\n"
    "varying float v_fog;\n"
    "void main() {\n"
    // The DLL submits pre-transformed vertices (x, y, z, rhw) and relies on the
    // fixed-function ortho projection gl_present sets up, so use ftransform()
    // rather than a matrix of our own.
    "    gl_Position = ftransform();\n"
    "    v_color     = gl_Color;\n"
    "    v_secondary = gl_SecondaryColor;\n"
    "    v_uv        = gl_MultiTexCoord0.xy;\n"
    // Not a distance. gl_ddraw puts D3D7's per-vertex fog FACTOR here, straight
    // out of the specular alpha byte, already scaled to 0..1.
    "    v_fog       = gl_FogCoord;\n"
    "}\n";

// The same vertex stage with nothing borrowed from fixed function: named
// attributes fed from a buffer object, and our own projection instead of
// ftransform()'s read of the matrix stack. Preferred whenever the driver has
// buffer objects and generic attributes; kVertexSource above is the fallback.
const char *kVertexSourceModern =
    "#version 120\n"
    "attribute vec4  a_pos;\n"
    "attribute vec4  a_color;\n"
    "attribute vec4  a_secondary;\n"
    "attribute vec2  a_uv;\n"
    "attribute float a_fog;\n"
    "uniform   mat4  u_projection;\n"
    "varying vec4  v_color;\n"
    "varying vec4  v_secondary;\n"
    "varying vec2  v_uv;\n"
    "varying float v_fog;\n"
    "void main() {\n"
    // a_pos arrives already multiplied through by w, so the perspective divide
    // reproduces the engine's own projection while keeping the texture
    // coordinates perspective-correct — see convert_vertices in gl_ddraw.cpp.
    "    gl_Position = u_projection * a_pos;\n"
    "    v_color     = a_color;\n"
    "    v_secondary = a_secondary;\n"
    "    v_uv        = a_uv;\n"
    "    v_fog       = a_fog;\n"
    "}\n";

// The lightmap block is the float form of blendHBilerpLightmapSharedU64toU64p-
// BB12Px2MMX and its three siblings. Their integer pipeline is
//
//     lm    = plane[i] + (corona[i+1] >> 1)          index into g_LightmapData
//     out_c = ((pix_c * pal_c) * (lm_word_c ^ 0x3FC0) >> 16
//              + (solid_c << 6) * lm_word_c >> 16) >> 4      saturated to 255
//
// and every lightmap word is exactly (v << 6) for v in 0..255 (checked at
// upload), so `w ^ 0x3FC0` is (255 - v) << 6 — a plain one-minus. Substituting
// that and dividing through leaves
//
//     out_c = (pix_c * (pal_c / 64) * (1 - v/255) + solid_c * (v/255)) * 16320/16384
//
// which is the mix below, with the trailing constant folded into u_solid.a.
// Two deliberate deviations, both improvements rather than approximations:
// bilinear grid sampling replaces the fixed 2x1 and 2x2 tap patterns of the
// four MMX variants, and the signed 16-bit wrap that turns a heavily overbright
// pixel black is not reproduced.
const char *kFragmentSource =
    "#version 120\n"
    "uniform sampler2D u_tex;\n"
    "uniform int   u_tex_enabled;\n"
    "uniform int   u_alpha_test;\n"
    "uniform float u_alpha_ref;\n"
    "uniform int   u_alpha_greater;\n"
    "uniform int       u_lm_on;\n"
    "uniform sampler2D u_corona;\n"
    "uniform sampler2D u_plane;\n"
    "uniform sampler2D u_pal;\n"
    "uniform sampler2D u_lmtab;\n"
    "uniform vec2      u_grid_scale;\n"
    "uniform vec2      u_grid_offset;\n"
    "uniform vec4      u_solid;\n"
    "uniform int       u_debug;\n"
    "uniform int       u_vfog_on;\n"
    "uniform vec4      u_fog_color;\n"
    "varying vec4  v_color;\n"
    "varying vec4  v_secondary;\n"
    "varying vec2  v_uv;\n"
    "varying float v_fog;\n"
    "void main() {\n"
    "    vec4 c = v_color;\n"
    "    if (u_tex_enabled != 0) {\n"
    // GL_MODULATE: colour and alpha both multiply, which is what the DLL's
    // D3DTSS_COLOROP = MODULATE / TEXTUREMAPBLEND = MODULATEALPHA maps to.
    "        c *= texture2D(u_tex, v_uv);\n"
    "    }\n"
    // Fixed function adds the secondary colour after texturing. Alpha is not
    // part of that add.
    "    c.rgb += v_secondary.rgb;\n"
    "    if (u_alpha_test != 0) {\n"
    // The engine's colorkey is ALPHAFUNC=GREATER with ALPHAREF=0, so texels
    // whose palette entry packs to black (alpha 0) are discarded.
    "        if (u_alpha_greater != 0) { if (!(c.a >  u_alpha_ref)) discard; }\n"
    "        else                      { if (!(c.a >= u_alpha_ref)) discard; }\n"
    "    }\n"
    // Mode 4 bypasses the lightmap entirely, so one session can capture the
    // same geometry with and without it. That A/B is the only way to separate
    // "the lightmap darkens too much" from "the fragment arriving here is
    // already darker than the software rasterizer's" — comparing an accel
    // screenshot against a software one cannot, because the two rasterizers do
    // not sample identically and the background dominates any whole-frame ratio.
    "    if (u_lm_on != 0 && u_debug != 4) {\n"
    "        vec2  g    = gl_FragCoord.xy * u_grid_scale + u_grid_offset;\n"
    "        float t    = texture2D(u_corona, g).r * 255.0;\n"
    "        float l    = texture2D(u_plane,  g).r * 255.0;\n"
    // Debug views. 1 paints the grid coordinate the fragment resolved to, which
    // makes a flipped or mis-scaled mapping obvious at a glance; 2 and 3 paint
    // the fog and the gain the fragment is about to be multiplied by, so they
    // can be read against the grid dumps rather than guessed at from how dark
    // the shaded result came out.
    "        if (u_debug == 1) { gl_FragColor = vec4(g.x, g.y, 0.0, 1.0); return; }\n"
    "        if (u_debug == 2) {\n"
    "            float fg = texture2D(u_lmtab,\n"
    "                                 vec2((l + t * 0.5 + 0.5) / 512.0, 0.5)).r;\n"
    "            gl_FragColor = vec4(fg, fg, fg, 1.0); return;\n"
    "        }\n"
    "        if (u_debug == 3) {\n"
    "            float gn = texture2D(u_pal, vec2((t + 0.5) / 256.0, 0.5)).r\n"
    "                       * (255.0 / 128.0);\n"
    "            gl_FragColor = vec4(gn, gn, gn, 1.0); return;\n"
    "        }\n"
    // Per-channel gain, 64 being unity — the palette entry the corona index
    // selects, already un-swizzled into RGB order at upload.
    "        vec3  gain = texture2D(u_pal, vec2((t + 0.5) / 256.0, 0.5)).rgb\n"
    "                     * (255.0 / 64.0);\n"
    // Per-channel fog fraction, 0 = unfogged, 1 = solid fog colour.
    "        vec3  fog  = texture2D(u_lmtab,\n"
    "                               vec2((l + t * 0.5 + 0.5) / 512.0, 0.5)).rgb;\n"
    "        c.rgb = (c.rgb * gain * (1.0 - fog) + u_solid.rgb * fog) * u_solid.a;\n"
    "    }\n"
    // D3D7 vertex fog, applied last: C = f*C + (1-f)*FOGCOLOR, f from the
    // specular alpha. Alpha is untouched — fog changes what a fragment looks
    // like, not how much of it there is. Fixed function structurally cannot do
    // this, so it is the first thing the shader path can do that the renderer
    // it replaces could not.
    "    if (u_vfog_on != 0) {\n"
    "        c.rgb = mix(u_fog_color.rgb, c.rgb, clamp(v_fog, 0.0, 1.0));\n"
    "    }\n"
    "    gl_FragColor = c;\n"
    "}\n";

bool have_entry_points() {
    return gl.CreateShader != nullptr && gl.ShaderSource != nullptr &&
           gl.CompileShader != nullptr && gl.GetShaderiv != nullptr &&
           gl.CreateProgram != nullptr && gl.AttachShader != nullptr &&
           gl.LinkProgram != nullptr && gl.GetProgramiv != nullptr &&
           gl.UseProgram != nullptr && gl.GetUniformLocation != nullptr &&
           gl.Uniform1i != nullptr && gl.Uniform1f != nullptr &&
           gl.DeleteShader != nullptr;
}

// Buffer objects and generic attributes. Everything here is GL 1.5/2.0, so any
// driver that compiled the shaders almost certainly has it — but "almost
// certainly" is why it is checked rather than assumed, and why the client-array
// path is kept as a fallback rather than deleted.
bool have_modern_entry_points() {
    return gl.GenBuffers != nullptr && gl.BindBuffer != nullptr &&
           gl.BufferData != nullptr && gl.GetAttribLocation != nullptr &&
           gl.BindAttribLocation != nullptr &&
           gl.EnableVertexAttribArray != nullptr &&
           gl.DisableVertexAttribArray != nullptr &&
           gl.VertexAttribPointer != nullptr && gl.UniformMatrix4fv != nullptr;
}

// The lightmap needs multitexture and the vector uniforms on top of the base
// set. A driver missing those still gets the pass-through program.
bool have_lightmap_entry_points() {
    return gl.ActiveTexture != nullptr && gl.Uniform2f != nullptr &&
           gl.Uniform4f != nullptr && gl.GenTextures != nullptr &&
           gl.BindTexture != nullptr && gl.TexImage2D != nullptr &&
           gl.TexParameteri != nullptr && gl.GetIntegerv != nullptr &&
           gl.PixelStorei != nullptr;
}

GLuint compile_stage(GLenum type, const char *source, const char *label) {
    GLuint shader = gl.CreateShader(type);
    if (shader == 0) {
        DLOG("render","gl_shader: glCreateShader failed for %s", label);
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
        DLOG("render","gl_shader: %s failed to compile: %s", label, log);
        gl.DeleteShader(shader);
        return 0;
    }
    return shader;
}

bool build_program() {
    g_modern = have_modern_entry_points() && nocturne_gl_shader_force_compat == 0;

    GLuint vs = compile_stage(GL_VERTEX_SHADER,
                              g_modern ? kVertexSourceModern : kVertexSource,
                              g_modern ? "vertex shader (buffer objects)"
                                       : "vertex shader (client arrays)");
    if (vs == 0 && g_modern) {
        // Fall back rather than lose the shader path entirely.
        DLOG("render","gl_shader: modern vertex stage failed — retrying on client arrays");
        g_modern = false;
        vs = compile_stage(GL_VERTEX_SHADER, kVertexSource, "vertex shader");
    }
    if (vs == 0) return false;

    GLuint fs = compile_stage(GL_FRAGMENT_SHADER, kFragmentSource, "fragment shader");
    if (fs == 0) {
        gl.DeleteShader(vs);
        return false;
    }

    GLuint program = gl.CreateProgram();
    if (program == 0) {
        DLOG("render","gl_shader: glCreateProgram failed");
        gl.DeleteShader(vs);
        gl.DeleteShader(fs);
        return false;
    }

    gl.AttachShader(program, vs);
    gl.AttachShader(program, fs);

    // Before linking, and the reason the first attempt at this drew nothing:
    // generic attribute 0 aliases gl_Vertex in a compatibility context, so a
    // draw where neither attribute 0 nor the fixed-function vertex array is
    // enabled produces no geometry — silently, with no GL error. The linker is
    // free to put a_pos anywhere, so pin it rather than hope.
    if (g_modern) {
        gl.BindAttribLocation(program, 0, "a_pos");
    }

    gl.LinkProgram(program);

    // The stages are reference-counted by the program; drop our references
    // whether or not the link succeeded.
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
        DLOG("render","gl_shader: link failed: %s", log);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    g_program           = program;
    g_loc_tex           = gl.GetUniformLocation(program, "u_tex");
    g_loc_tex_enabled   = gl.GetUniformLocation(program, "u_tex_enabled");
    g_loc_alpha_test    = gl.GetUniformLocation(program, "u_alpha_test");
    g_loc_alpha_ref     = gl.GetUniformLocation(program, "u_alpha_ref");
    g_loc_alpha_greater = gl.GetUniformLocation(program, "u_alpha_greater");
    g_loc_lm_on         = gl.GetUniformLocation(program, "u_lm_on");
    g_loc_corona        = gl.GetUniformLocation(program, "u_corona");
    g_loc_plane         = gl.GetUniformLocation(program, "u_plane");
    g_loc_pal           = gl.GetUniformLocation(program, "u_pal");
    g_loc_lmtab         = gl.GetUniformLocation(program, "u_lmtab");
    g_loc_grid_scale    = gl.GetUniformLocation(program, "u_grid_scale");
    g_loc_grid_offset   = gl.GetUniformLocation(program, "u_grid_offset");
    g_loc_solid         = gl.GetUniformLocation(program, "u_solid");
    g_loc_debug         = gl.GetUniformLocation(program, "u_debug");
    g_loc_vfog_on       = gl.GetUniformLocation(program, "u_vfog_on");
    g_loc_fog_color     = gl.GetUniformLocation(program, "u_fog_color");
    g_loc_projection    = gl.GetUniformLocation(program, "u_projection");

    if (g_modern) {
        g_attr_pos       = gl.GetAttribLocation(program, "a_pos");
        g_attr_color     = gl.GetAttribLocation(program, "a_color");
        g_attr_secondary = gl.GetAttribLocation(program, "a_secondary");
        g_attr_uv        = gl.GetAttribLocation(program, "a_uv");
        g_attr_fog       = gl.GetAttribLocation(program, "a_fog");
        // Position is the one attribute nothing can proceed without; the others
        // may legitimately be optimised away if the fragment stage stops using
        // them, so only this one demotes the path.
        if (g_attr_pos != 0) {
            // Not just "not found": anything other than 0 means the bind above
            // did not take, and the draw would come out empty rather than wrong,
            // which is far harder to recognise. Refuse the path instead.
            DLOG("render","gl_shader: a_pos landed at %d, not 0 — falling back to client arrays",
                      (int)g_attr_pos);
            g_modern = false;
        }
    }

    DLOG("render","gl_shader: program linked (id=%u, %s) attrs pos=%d col=%d sec=%d uv=%d fog=%d",
              (unsigned)program,
              g_modern ? "buffer objects + generic attributes"
                       : "compatibility client arrays",
              (int)g_attr_pos, (int)g_attr_color, (int)g_attr_secondary,
              (int)g_attr_uv, (int)g_attr_fog);
    return true;
}

GLuint make_lookup_texture() {
    GLuint tex = 0;
    gl.GenTextures(1, &tex);
    if (tex == 0) return 0;
    gl.BindTexture(GL_TEXTURE_2D, tex);
    // CLAMP_TO_EDGE, not REPEAT: geometry can extend past the grid's coverage
    // and wrapping there would fold the far edge's lighting onto it.
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    // LINEAR everywhere. On the grids it replaces the fixed tap patterns of the
    // four MMX blend variants with a smooth one; on the two ramp tables it is
    // exactly the horizontal bilerp those variants do between adjacent entries.
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    return tex;
}

bool ensure_lookup_textures() {
    if (g_tex_corona != 0) return true;
    g_tex_corona = make_lookup_texture();
    g_tex_plane  = make_lookup_texture();
    g_tex_pal    = make_lookup_texture();
    g_tex_lmtab  = make_lookup_texture();
    if (g_tex_corona == 0 || g_tex_plane == 0 ||
        g_tex_pal == 0 || g_tex_lmtab == 0) {
        DLOG("render","gl_shader: could not create the lightmap lookup textures");
        return false;
    }
    return true;
}

// g_LightmapData holds four 16-bit words per entry, each observed to be exactly
// (v << 6) with v in 0..255. Carry v as a byte, un-swizzled into RGB order.
// The assumption is checked rather than trusted: if a word ever breaks it the
// shader would silently mis-fog, so say so once and carry the clamped value.
void build_lightmap_table(const NocturneLightingBridge *b) {
    for (int i = 0; i < kLmEntries; ++i) {
        for (int c = 0; c < 3; ++c) {
            const unsigned int word = b->lightmap_table[i * 4 + b->channel_lane[c]];
            unsigned int v = word >> 6;
            if (!g_lm_warned && ((word & 63u) != 0 || v > 255u)) {
                g_lm_warned = true;
                DLOG("render","gl_shader: lightmap word %u at entry %d is not (v << 6) — "
                          "fog will be approximate", word, i);
            }
            if (v > 255u) v = 255u;
            g_lm_pixels[i * 4 + c] = (unsigned char)v;
        }
        g_lm_pixels[i * 4 + 3] = 255;
    }
}

void build_palette_table(const NocturneLightingBridge *b) {
    for (int i = 0; i < kPalEntries; ++i) {
        const unsigned int entry = b->palette[i];
        for (int c = 0; c < 3; ++c) {
            g_pal_pixels[i * 4 + c] =
                (unsigned char)((entry >> (b->channel_lane[c] * 8)) & 0xffu);
        }
        g_pal_pixels[i * 4 + 3] = 255;
    }
}

void upload_grid(GLuint tex, const unsigned char *rows, int pitch, int height) {
    gl.BindTexture(GL_TEXTURE_2D, tex);
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, pitch);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, kGridWidth, height, 0,
                  GL_LUMINANCE, GL_UNSIGNED_BYTE, rows);
    gl.PixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 4);
}

// Map gl_FragCoord to a grid texel. The composite indexes the grid by CAMERA
// framebuffer pixel and writes to the screen at
// (camera_x - shake_x, camera_y + shake_y), so the inverse of that shake is what
// a screen-space fragment needs. The y term is negated because gl_FragCoord
// counts up from the bottom while the engine's row 0 is the top — which is the
// same convention load_screen_projection() gives the DLL's own vertices
// (y_ndc = 1 - 2y/height), so the two agree.
//
// The two axes step by DIFFERENT amounts: rows by 1 << downscale_shift, columns
// by scale_factor. They coincide at 640x480 and need not anywhere else, and
// getting that wrong runs the coordinates past 1.0, where CLAMP_TO_EDGE pins
// most of the screen to a single corner texel.
void compute_grid_mapping(const NocturneLightingBridge *b,
                          float scale[2], float offset[2]) {
    GLint vp[4] = { 0, 0, 1, 1 };
    gl.GetIntegerv(GL_VIEWPORT, vp);
    const float vp_w = (vp[2] > 0) ? (float)vp[2] : 1.0f;
    const float vp_h = (vp[3] > 0) ? (float)vp[3] : 1.0f;

    const float step_x = (float)b->scale_factor;
    const float step_y = (float)(1 << b->downscale_shift);
    const float fb_w   = (float)b->fb_width;
    const float fb_h   = (float)b->fb_height;

    scale[0] =  (fb_w / vp_w) / (step_x * (float)kGridWidth);
    scale[1] = -(fb_h / vp_h) / (step_y * (float)kGridHeight);

    // The +0.5 lands on the texel centre; the viewport origin is folded in so a
    // letterboxed or offset viewport maps as correctly as a full-target one.
    offset[0] = (0.5f - (float)b->shake_x / step_x) / (float)kGridWidth
                - (float)vp[0] * scale[0];
    offset[1] = ((fb_h + (float)b->shake_y) / step_y + 0.5f) / (float)kGridHeight
                - (float)vp[1] * scale[1];
}

// Write one grid out as a PGM, so the values the shader is reading can be
// compared against a screenshot pixel for pixel instead of inferred from how
// dark the result looks. Fires once per run, only when NOCTURNE_GL_LIGHTMAP_DUMP
// is set, and only for the extent the composite actually fills.
void dump_grid_pgm(const char *path, const unsigned char *rows, int pitch,
                   int used_w, int used_h) {
    FILE *f = fopen(path, "wb");
    if (f == nullptr) {
        DLOG("render","gl_shader: could not open %s for the grid dump", path);
        return;
    }
    fprintf(f, "P5\n%d %d\n255\n", used_w, used_h);
    for (int y = 0; y < used_h; ++y) {
        fwrite(rows + (size_t)y * pitch, 1, (size_t)used_w, f);
    }
    fclose(f);
    DLOG("render","gl_shader: wrote %s (%dx%d)", path, used_w, used_h);
}

void dump_grids_once(const NocturneLightingBridge *b, int used_w, int used_h) {
    static bool dumped = false;
    if (dumped || getenv("NOCTURNE_GL_LIGHTMAP_DUMP") == nullptr) return;
    dumped = true;
    dump_grid_pgm("lightmap_plane.pgm",  b->plane_grid,  b->grid_pitch, used_w, used_h);
    dump_grid_pgm("lightmap_corona.pgm", b->corona_grid, b->grid_pitch, used_w, used_h);
}

// One log line whenever the mapping changes — resolution, camera, or shake. The
// grid statistics are what make it worth having: they say whether a too-dark
// frame is the engine genuinely asking for heavy fog or this file sampling the
// wrong part of the grid, which is otherwise a guess.
void log_mapping_if_changed(const NocturneLightingBridge *b,
                            const float scale[2], const float offset[2],
                            int used_w, int used_h) {
    static int last_w = -1, last_h = -1, last_shift = -1, last_scale = -1;
    static int last_shake_x = 0, last_shake_y = 0;

    if (b->fb_width == last_w && b->fb_height == last_h &&
        b->downscale_shift == last_shift && b->scale_factor == last_scale &&
        b->shake_x == last_shake_x && b->shake_y == last_shake_y) {
        return;
    }
    last_w = b->fb_width;   last_h = b->fb_height;
    last_shift = b->downscale_shift;  last_scale = b->scale_factor;
    last_shake_x = b->shake_x;  last_shake_y = b->shake_y;

    GLint vp[4] = { 0, 0, 0, 0 };
    gl.GetIntegerv(GL_VIEWPORT, vp);

    // Sample only the extent the composite actually fills. Anything past it is
    // last scene's leftovers and would skew the range.
    int p_min = 255, p_max = 0, c_min = 255, c_max = 0;
    long p_sum = 0, c_sum = 0;
    const int count = (used_w > 0 && used_h > 0) ? used_w * used_h : 0;
    for (int y = 0; y < used_h; ++y) {
        const unsigned char *prow = b->plane_grid  + (size_t)y * b->grid_pitch;
        const unsigned char *crow = b->corona_grid + (size_t)y * b->grid_pitch;
        for (int x = 0; x < used_w; ++x) {
            const int p = prow[x], c = crow[x];
            if (p < p_min) p_min = p;
            if (p > p_max) p_max = p;
            if (c < c_min) c_min = c;
            if (c > c_max) c_max = c;
            p_sum += p;
            c_sum += c;
        }
    }

    DLOG("render","gl_shader: lightmap map fb=%dx%d vp=%d,%d,%dx%d scale=%d shift=%d "
              "shake=%d,%d grid_used=%dx%d uv_scale=%.6f,%.6f uv_off=%.4f,%.4f",
              b->fb_width, b->fb_height, vp[0], vp[1], vp[2], vp[3],
              b->scale_factor, b->downscale_shift, b->shake_x, b->shake_y,
              used_w, used_h, scale[0], scale[1], offset[0], offset[1]);
    if (count > 0) {
        // Corona is a gain where 64 is unity; plane drives fog, saturating the
        // 512-entry table at 255. Reading near 255 across the board means the
        // fragment is being told the scene is solid fog.
        DLOG("render","gl_shader: lightmap grids plane min/mean/max=%d/%ld/%d "
                  "corona min/mean/max=%d/%ld/%d solid=%.0f,%.0f,%.0f",
                  p_min, p_sum / count, p_max,
                  c_min, c_sum / count, c_max,
                  b->solid_rgb[0], b->solid_rgb[1], b->solid_rgb[2]);
    }
}

// Refresh the four lookups and the mapping uniforms for this frame's grid.
// Called with the draw program already bound.
void refresh_lightmap() {
    const NocturneLightingBridge *b = nocturne_lighting_bridge();
    if (b == nullptr || !b->valid || b->corona_grid == nullptr ||
        b->plane_grid == nullptr || b->lightmap_table == nullptr ||
        b->palette == nullptr) {
        g_lm_ready = false;
        return;
    }

    // The engine bumps the serial once per composite, so everything below runs
    // once a frame however many draws the renderer makes. Uniform values live
    // in the program object, so they survive the UseProgram(0) between draws and
    // do not need re-pushing either.
    if (b->serial == g_uploaded_serial) return;

    if (!ensure_lookup_textures()) {
        g_lm_ready = false;
        return;
    }

    const int rows = (b->grid_rows < kGridHeight) ? b->grid_rows : kGridHeight;
    gl.ActiveTexture(GL_TEXTURE0 + UNIT_CORONA);
    upload_grid(g_tex_corona, b->corona_grid, b->grid_pitch, rows);
    gl.ActiveTexture(GL_TEXTURE0 + UNIT_PLANE);
    upload_grid(g_tex_plane, b->plane_grid, b->grid_pitch, rows);

    build_palette_table(b);
    gl.ActiveTexture(GL_TEXTURE0 + UNIT_PAL);
    gl.BindTexture(GL_TEXTURE_2D, g_tex_pal);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, kPalEntries, 1, 0,
                  GL_RGBA, GL_UNSIGNED_BYTE, g_pal_pixels);

    build_lightmap_table(b);
    gl.ActiveTexture(GL_TEXTURE0 + UNIT_LMTAB);
    gl.BindTexture(GL_TEXTURE_2D, g_tex_lmtab);
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, kLmEntries, 1, 0,
                  GL_RGBA, GL_UNSIGNED_BYTE, g_lm_pixels);

    // Leave the selector where gl_ddraw.cpp expects it: it drives unit 0 only
    // and never calls glActiveTexture itself.
    gl.ActiveTexture(GL_TEXTURE0 + UNIT_TEX);

    g_uploaded_serial = b->serial;
    g_lm_ready        = true;

    float scale[2], offset[2];
    compute_grid_mapping(b, scale, offset);
    {
        int used_w = b->fb_width / b->scale_factor;
        int used_h = b->fb_height >> b->downscale_shift;
        if (used_w > kGridWidth)  used_w = kGridWidth;
        if (used_h > rows)        used_h = rows;
        log_mapping_if_changed(b, scale, offset, used_w, used_h);
        dump_grids_once(b, used_w, used_h);
    }
    if (g_loc_grid_scale >= 0)  gl.Uniform2f(g_loc_grid_scale, scale[0], scale[1]);
    if (g_loc_grid_offset >= 0) gl.Uniform2f(g_loc_grid_offset, offset[0], offset[1]);
    if (g_loc_solid >= 0) {
        // w carries the blend's own 16320/16384 scale — the >>16 and >>4 of the
        // integer pipeline do not quite divide out. Folding it here keeps it out
        // of the shader as a bare magic number.
        gl.Uniform4f(g_loc_solid,
                     b->solid_rgb[0] / 255.0f,
                     b->solid_rgb[1] / 255.0f,
                     b->solid_rgb[2] / 255.0f,
                     16320.0f / 16384.0f);
    }
    if (g_loc_debug >= 0)  gl.Uniform1i(g_loc_debug, debug_mode());
    if (g_loc_corona >= 0) gl.Uniform1i(g_loc_corona, UNIT_CORONA);
    if (g_loc_plane >= 0)  gl.Uniform1i(g_loc_plane,  UNIT_PLANE);
    if (g_loc_pal >= 0)    gl.Uniform1i(g_loc_pal,    UNIT_PAL);
    if (g_loc_lmtab >= 0)  gl.Uniform1i(g_loc_lmtab,  UNIT_LMTAB);
}

}  // namespace

extern "C" void nocturne_gl_shader_set_enabled(int enabled) {
    g_enabled = (enabled != 0);
    DLOG("render","gl_shader: shader path %s", g_enabled ? "ENABLED" : "disabled");
}

extern "C" int nocturne_gl_shader_active(void) {
    return (g_enabled && g_program != 0) ? 1 : 0;
}

extern "C" int nocturne_gl_shader_ensure(void) {
    if (!g_enabled) return 0;
    if (g_program != 0) return 1;
    if (g_tried) return 0;

    g_tried = true;
    if (!have_entry_points()) {
        DLOG("render","gl_shader: driver has no shader entry points — staying on fixed function");
        return 0;
    }
    if (!build_program()) {
        DLOG("render","gl_shader: build failed — staying on fixed function");
        return 0;
    }
    if (!have_lightmap_entry_points()) {
        DLOG("render","gl_shader: no multitexture — shading without the per-pixel lightmap");
    }
    return 1;
}

extern "C" void nocturne_gl_shader_begin_draw(int texture_enabled,
                                              int alpha_test_enabled,
                                              float alpha_ref,
                                              int alpha_func_greater,
                                              int lightmap) {
    if (!nocturne_gl_shader_active()) return;

    gl.UseProgram(g_program);
    // Unit 0 is the only stage the DLL drives.
    if (g_loc_tex >= 0)           gl.Uniform1i(g_loc_tex, UNIT_TEX);
    if (g_loc_tex_enabled >= 0)   gl.Uniform1i(g_loc_tex_enabled, texture_enabled ? 1 : 0);
    if (g_loc_alpha_test >= 0)    gl.Uniform1i(g_loc_alpha_test, alpha_test_enabled ? 1 : 0);
    if (g_loc_alpha_ref >= 0)     gl.Uniform1f(g_loc_alpha_ref, alpha_ref);
    if (g_loc_alpha_greater >= 0) gl.Uniform1i(g_loc_alpha_greater, alpha_func_greater ? 1 : 0);

    if (lightmap && have_lightmap_entry_points()) {
        refresh_lightmap();
    } else {
        g_lm_ready = false;
    }
    if (g_loc_lm_on >= 0) gl.Uniform1i(g_loc_lm_on, g_lm_ready ? 1 : 0);
}

extern "C" void nocturne_gl_shader_set_vertex_fog(int enabled,
                                                  const float fog_color[3]) {
    if (!nocturne_gl_shader_active()) return;

    // The caller says whether the DRAW is in the vertex-fog mode; the toggle
    // says whether we act on it. Both must agree, so an A/B can turn the whole
    // term off without disturbing how the draw was set up.
    const int on = (enabled && vertex_fog_mode() != 0) ? 1 : 0;
    if (g_loc_vfog_on >= 0) gl.Uniform1i(g_loc_vfog_on, on);
    if (on && g_loc_fog_color >= 0 && fog_color != nullptr) {
        gl.Uniform4f(g_loc_fog_color, fog_color[0], fog_color[1], fog_color[2], 1.0f);
    }
}

extern "C" int nocturne_gl_shader_modern_path(void) {
    return (nocturne_gl_shader_active() && g_modern) ? 1 : 0;
}

extern "C" void nocturne_gl_shader_rebuild(void) {
    if (g_program != 0 && gl.DeleteProgram != nullptr) gl.DeleteProgram(g_program);
    g_program = 0;
    g_tried   = false;
    g_modern  = false;
    // The buffer survives: it holds no program state, and the compatibility path
    // simply stops using it.
    DLOG("render","gl_shader: rebuild requested (force_compat=%d)",
              nocturne_gl_shader_force_compat);
}

extern "C" void nocturne_gl_shader_set_projection(const float matrix[16]) {
    if (!nocturne_gl_shader_modern_path() || matrix == nullptr) return;
    if (g_loc_projection < 0) return;

    gl.UniformMatrix4fv(g_loc_projection, 1, GL_FALSE, matrix);

    // Check the first few, then stop. GL reports a uniform written with no
    // program bound as GL_INVALID_OPERATION and otherwise says nothing at all:
    // the uniform silently stays zero, every vertex collapses to the origin and
    // the screen simply loses all geometry with no error anywhere. That cost a
    // full test cycle to find by inspection, so it is worth catching by name.
    static int checks_left = 4;
    if (checks_left > 0 && gl.GetError != nullptr) {
        checks_left--;
        const GLenum err = gl.GetError();
        if (err != GL_NO_ERROR) {
            DLOG("render","gl_shader: GL error 0x%x setting the projection — is a "
                      "program bound? uniforms go to the CURRENT program",
                      (unsigned)err);
        }
    }
}

extern "C" int nocturne_gl_shader_bind_vertices(const void *base, int count,
                                                const NocturneGLVertexLayout *layout) {
    if (!nocturne_gl_shader_modern_path() || base == nullptr ||
        layout == nullptr || count <= 0) {
        return 0;
    }

    if (g_vbo == 0) {
        gl.GenBuffers(1, &g_vbo);
        if (g_vbo == 0) {
            DLOG("render","gl_shader: glGenBuffers failed — falling back to client arrays");
            g_modern = false;
            return 0;
        }
    }

    const size_t bytes = (size_t)count * (size_t)layout->stride;
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    if (bytes > g_vbo_capacity) {
        // Grow in one step and orphan the old storage. STREAM_DRAW because this
        // is rewritten every draw and never read back.
        gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)bytes, base, GL_STREAM_DRAW);
        g_vbo_capacity = bytes;
    } else if (gl.BufferSubData != nullptr) {
        // Orphan first: handing the driver a fresh allocation lets it write
        // without waiting on the previous frame's draw to retire.
        gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)g_vbo_capacity, nullptr, GL_STREAM_DRAW);
        gl.BufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)bytes, base);
    } else {
        gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)bytes, base, GL_STREAM_DRAW);
    }

    const GLsizei stride = (GLsizei)layout->stride;
    // Offsets are byte offsets into the bound buffer, which is what
    // VertexAttribPointer wants once ARRAY_BUFFER is non-zero.
    gl.EnableVertexAttribArray((GLuint)g_attr_pos);
    gl.VertexAttribPointer((GLuint)g_attr_pos, 4, GL_FLOAT, GL_FALSE, stride,
                           (const void *)(intptr_t)layout->pos);
    if (g_attr_color >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_color);
        gl.VertexAttribPointer((GLuint)g_attr_color, 4, GL_UNSIGNED_BYTE, GL_TRUE,
                               stride, (const void *)(intptr_t)layout->color);
    }
    if (g_attr_secondary >= 0) {
        // Three components on purpose: the 4th byte is the fog factor, not alpha.
        gl.EnableVertexAttribArray((GLuint)g_attr_secondary);
        gl.VertexAttribPointer((GLuint)g_attr_secondary, 3, GL_UNSIGNED_BYTE, GL_TRUE,
                               stride, (const void *)(intptr_t)layout->secondary);
    }
    if (g_attr_uv >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_uv);
        gl.VertexAttribPointer((GLuint)g_attr_uv, 2, GL_FLOAT, GL_FALSE, stride,
                               (const void *)(intptr_t)layout->uv);
    }
    if (g_attr_fog >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_fog);
        gl.VertexAttribPointer((GLuint)g_attr_fog, 1, GL_FLOAT, GL_FALSE, stride,
                               (const void *)(intptr_t)layout->fog);
    }
    return 1;
}

extern "C" void nocturne_gl_shader_unbind_vertices(void) {
    if (!nocturne_gl_shader_modern_path()) return;

    if (g_attr_pos >= 0)       gl.DisableVertexAttribArray((GLuint)g_attr_pos);
    if (g_attr_color >= 0)     gl.DisableVertexAttribArray((GLuint)g_attr_color);
    if (g_attr_secondary >= 0) gl.DisableVertexAttribArray((GLuint)g_attr_secondary);
    if (g_attr_uv >= 0)        gl.DisableVertexAttribArray((GLuint)g_attr_uv);
    if (g_attr_fog >= 0)       gl.DisableVertexAttribArray((GLuint)g_attr_fog);
    // Back to client-array addressing, so the present blit and anything else
    // outside this path is not silently reading from our buffer.
    gl.BindBuffer(GL_ARRAY_BUFFER, 0);
}

extern "C" void nocturne_gl_shader_end_draw(void) {
    if (!nocturne_gl_shader_active()) return;
    gl.UseProgram(0);
}

extern "C" void nocturne_gl_shader_shutdown(void) {
    if (g_program != 0 && gl.DeleteProgram != nullptr) {
        gl.DeleteProgram(g_program);
    }
    g_program = 0;
    g_tried   = false;

    if (g_tex_corona != 0 && gl.DeleteTextures != nullptr) {
        const GLuint textures[4] = { g_tex_corona, g_tex_plane, g_tex_pal, g_tex_lmtab };
        gl.DeleteTextures(4, textures);
    }
    g_tex_corona = 0;
    g_tex_plane  = 0;
    g_tex_pal    = 0;
    g_tex_lmtab  = 0;

    if (g_vbo != 0 && gl.DeleteBuffers != nullptr) {
        gl.DeleteBuffers(1, &g_vbo);
    }
    g_vbo          = 0;
    g_vbo_capacity = 0;
    g_modern       = false;

    g_uploaded_serial = 0;
    g_lm_ready        = false;
}
