// =============================================================================
// TRIGL GL — the hardware side of the renderer
// =============================================================================
//
// See trigl_gl.h.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "renderer/trigl_gl.h"
#include "renderer/trigl_vertex.h"
#include "gl/gl_api.h"
#include "gl/gl_present.h"
#include "core/debug_log.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

extern "C" int nocturne_trigl_vertex_fog = -1;

namespace {

int vertex_fog() {
    if (nocturne_trigl_vertex_fog < 0) {
        const char *env = getenv("NOCTURNE_TRIGL_VERTEX_FOG");
        nocturne_trigl_vertex_fog = (env != nullptr) ? atoi(env) : 0;
    }
    return nocturne_trigl_vertex_fog;
}

// --- the program -------------------------------------------------------------
//
// #version 150 core: the earliest version with `in`/`out` and a declared
// fragment output, which is what a core profile requires. It compiles in a
// compatibility context too, so the renderer does not have to wait for the
// context to be narrowed.
//
// Position arrives premultiplied by w so the perspective divide reproduces the
// engine's own projection while keeping texture coordinates perspective
// correct. The engine has already projected the geometry; all this does is map
// pixels onto clip space.
const char *kVertexSource =
    "#version 150 core\n"
    "in vec4 a_pos;\n"
    "in vec4 a_color;\n"
    "in vec4 a_specular;\n"
    "in vec2 a_uv;\n"
    "uniform mat4 u_projection;\n"
    "out vec4 v_color;\n"
    "out vec4 v_specular;\n"
    "out vec2 v_uv;\n"
    "void main() {\n"
    "    gl_Position = u_projection * a_pos;\n"
    "    v_color     = a_color;\n"
    "    v_specular  = a_specular;\n"
    "    v_uv        = a_uv;\n"
    "}\n";

// The specular carries two unrelated things: RGB is the light level's overflow
// past full brightness, added after texturing, and alpha is the per-vertex fog
// factor, where 1 leaves the fragment alone and 0 replaces it outright.
//
// The alpha test is a fixed one. The engine sets ALPHAFUNC to GREATER and
// ALPHAREF to 0 once at device init and never changes either, so the test is
// always "drop fully transparent fragments" and needs no uniform.
const char *kFragmentSource =
    "#version 150 core\n"
    "uniform sampler2D u_tex;\n"
    "uniform int  u_tex_enabled;\n"
    "uniform int  u_modulate_alpha;\n"
    "uniform int  u_alpha_test;\n"
    "uniform int  u_fog_enabled;\n"
    "uniform vec3 u_fog_color;\n"
    "in vec4 v_color;\n"
    "in vec4 v_specular;\n"
    "in vec2 v_uv;\n"
    "out vec4 o_color;\n"
    "void main() {\n"
    "    vec4 c = v_color;\n"
    "    if (u_tex_enabled != 0) {\n"
    "        vec4 t = texture(u_tex, v_uv);\n"
    "        c.rgb *= t.rgb;\n"
    "        if (u_modulate_alpha != 0) c.a *= t.a;\n"
    "    }\n"
    "    c.rgb += v_specular.rgb;\n"
    "    if (u_alpha_test != 0 && c.a <= 0.0) discard;\n"
    "    if (u_fog_enabled != 0) {\n"
    "        c.rgb = mix(u_fog_color, c.rgb, clamp(v_specular.a, 0.0, 1.0));\n"
    "    }\n"
    "    o_color = c;\n"
    "}\n";

// --- the vertex the hardware sees --------------------------------------------
// Position premultiplied by w, colours normalised from bytes, one texture
// coordinate pair. Laid out once here so the attribute pointers and the packing
// loop cannot disagree.
struct HardwareVertex {
    float x, y, z, w;
    unsigned char diffuse[4];   // R, G, B, A
    unsigned char specular[4];
    float u, v;
};

bool   g_ready   = false;
bool   g_tried   = false;
GLuint g_program = 0;
GLuint g_vao     = 0;
GLuint g_vbo     = 0;
GLuint g_ibo     = 0;
size_t g_vbo_capacity = 0;
size_t g_ibo_capacity = 0;

GLint g_attr_pos      = -1;
GLint g_attr_color    = -1;
GLint g_attr_specular = -1;
GLint g_attr_uv       = -1;

GLint g_loc_projection     = -1;
GLint g_loc_tex            = -1;
GLint g_loc_tex_enabled    = -1;
GLint g_loc_modulate_alpha = -1;
GLint g_loc_alpha_test     = -1;
GLint g_loc_fog_enabled    = -1;
GLint g_loc_fog_color      = -1;

// Scratch for one batch's worth of hardware vertices.
HardwareVertex *g_scratch = nullptr;
size_t g_scratch_capacity = 0;

// The state the hardware currently has, so a run of draws sharing one costs
// nothing to repeat. Initialised to values the first apply cannot match.
NocturneTriglPipelineState g_current;
bool g_current_valid = false;

float g_fog_color[3] = { 0.0f, 0.0f, 0.0f };
bool  g_fog_color_dirty = true;

bool have_entry_points() {
    return gl.CreateShader != nullptr && gl.ShaderSource != nullptr &&
           gl.CompileShader != nullptr && gl.GetShaderiv != nullptr &&
           gl.DeleteShader != nullptr && gl.CreateProgram != nullptr &&
           gl.AttachShader != nullptr && gl.LinkProgram != nullptr &&
           gl.GetProgramiv != nullptr && gl.UseProgram != nullptr &&
           gl.GetUniformLocation != nullptr && gl.Uniform1i != nullptr &&
           gl.Uniform3f != nullptr && gl.UniformMatrix4fv != nullptr &&
           gl.GenBuffers != nullptr && gl.BindBuffer != nullptr &&
           gl.BufferData != nullptr && gl.GetAttribLocation != nullptr &&
           gl.EnableVertexAttribArray != nullptr &&
           gl.VertexAttribPointer != nullptr &&
           gl.GenVertexArrays != nullptr && gl.BindVertexArray != nullptr &&
           gl.ActiveTexture != nullptr && gl.DrawElements != nullptr;
}

GLuint compile_stage(GLenum type, const char *source, const char *label) {
    GLuint shader = gl.CreateShader(type);
    if (shader == 0) {
        DDRAW_LOG("trigl_gl: glCreateShader failed for %s", label);
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
        DDRAW_LOG("trigl_gl: %s failed to compile: %s", label, log);
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
        DDRAW_LOG("trigl_gl: glCreateProgram failed");
        gl.DeleteShader(vs);
        gl.DeleteShader(fs);
        return false;
    }
    gl.AttachShader(program, vs);
    gl.AttachShader(program, fs);
    // Position on attribute 0. In a compatibility context attribute 0 aliases
    // gl_Vertex, and a draw with neither it nor the fixed-function vertex array
    // enabled renders nothing at all, silently and with no GL error.
    if (gl.BindAttribLocation != nullptr) {
        gl.BindAttribLocation(program, 0, "a_pos");
    }
    gl.LinkProgram(program);
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
        DDRAW_LOG("trigl_gl: link failed: %s", log);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        return false;
    }

    g_program       = program;
    g_attr_pos      = gl.GetAttribLocation(program, "a_pos");
    g_attr_color    = gl.GetAttribLocation(program, "a_color");
    g_attr_specular = gl.GetAttribLocation(program, "a_specular");
    g_attr_uv       = gl.GetAttribLocation(program, "a_uv");
    if (g_attr_pos != 0) {
        DDRAW_LOG("trigl_gl: a_pos landed at %d, not 0 — refusing", (int)g_attr_pos);
        if (gl.DeleteProgram != nullptr) gl.DeleteProgram(program);
        g_program = 0;
        return false;
    }

    g_loc_projection     = gl.GetUniformLocation(program, "u_projection");
    g_loc_tex            = gl.GetUniformLocation(program, "u_tex");
    g_loc_tex_enabled    = gl.GetUniformLocation(program, "u_tex_enabled");
    g_loc_modulate_alpha = gl.GetUniformLocation(program, "u_modulate_alpha");
    g_loc_alpha_test     = gl.GetUniformLocation(program, "u_alpha_test");
    g_loc_fog_enabled    = gl.GetUniformLocation(program, "u_fog_enabled");
    g_loc_fog_color      = gl.GetUniformLocation(program, "u_fog_color");

    // The sampler never moves off unit 0, so it is set once.
    gl.UseProgram(program);
    if (g_loc_tex >= 0) gl.Uniform1i(g_loc_tex, 0);
    gl.UseProgram(0);

    DDRAW_LOG("trigl_gl: program linked (id=%u) attrs pos=%d col=%d spec=%d uv=%d",
              (unsigned)program, (int)g_attr_pos, (int)g_attr_color,
              (int)g_attr_specular, (int)g_attr_uv);
    return true;
}

// The vertex array object records the attribute layout once. Everything about
// a draw that is not the buffer contents lives here.
bool build_vertex_array() {
    gl.GenVertexArrays(1, &g_vao);
    gl.GenBuffers(1, &g_vbo);
    gl.GenBuffers(1, &g_ibo);
    if (g_vao == 0 || g_vbo == 0 || g_ibo == 0) {
        DDRAW_LOG("trigl_gl: could not create the vertex array or its buffers");
        return false;
    }

    gl.BindVertexArray(g_vao);
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    gl.BindBuffer(GL_ELEMENT_ARRAY_BUFFER, g_ibo);

    const GLsizei stride = (GLsizei)sizeof(HardwareVertex);
    gl.EnableVertexAttribArray((GLuint)g_attr_pos);
    gl.VertexAttribPointer((GLuint)g_attr_pos, 4, GL_FLOAT, GL_FALSE, stride,
                           (const void *)(intptr_t)offsetof(HardwareVertex, x));
    if (g_attr_color >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_color);
        gl.VertexAttribPointer((GLuint)g_attr_color, 4, GL_UNSIGNED_BYTE, GL_TRUE, stride,
                               (const void *)(intptr_t)offsetof(HardwareVertex, diffuse));
    }
    if (g_attr_specular >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_specular);
        gl.VertexAttribPointer((GLuint)g_attr_specular, 4, GL_UNSIGNED_BYTE, GL_TRUE, stride,
                               (const void *)(intptr_t)offsetof(HardwareVertex, specular));
    }
    if (g_attr_uv >= 0) {
        gl.EnableVertexAttribArray((GLuint)g_attr_uv);
        gl.VertexAttribPointer((GLuint)g_attr_uv, 2, GL_FLOAT, GL_FALSE, stride,
                               (const void *)(intptr_t)offsetof(HardwareVertex, u));
    }
    gl.BindVertexArray(0);
    gl.BindBuffer(GL_ARRAY_BUFFER, 0);
    gl.BindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    return true;
}

GLenum blend_factor(int factor) {
    switch (factor) {
        case NOCTURNE_TRIGL_BLEND_ZERO:          return GL_ZERO;
        case NOCTURNE_TRIGL_BLEND_SRC_ALPHA:     return GL_SRC_ALPHA;
        case NOCTURNE_TRIGL_BLEND_INV_SRC_ALPHA: return GL_ONE_MINUS_SRC_ALPHA;
        default:                                 return GL_ONE;
    }
}

// --- the texture cache -------------------------------------------------------
//
// The engine names a texture with 16 characters and works at one of four
// dimensions; the same name at two dimensions is two textures, which is why the
// original keeps four caches rather than one. Here the dimension is part of the
// key instead.
//
// Open addressing with linear probing. A draw looks a texture up every time it
// changes one, so the linear scan the original does over its entries would cost
// a string compare per cached texture per draw.
const int kTextureSlots = 4096;

struct TextureSlot {
    char     name[16];
    int      dimension;   // 0 marks a free slot
    GLuint   texture;
    unsigned used;        // for eviction when the table fills
};

TextureSlot g_textures[kTextureSlots];
unsigned    g_texture_clock = 0;
int         g_texture_count = 0;

unsigned name_hash(const char *name, int dimension) {
    // FNV-1a over the fixed 16 bytes plus the dimension.
    unsigned h = 2166136261u;
    for (int i = 0; i < 16; ++i) {
        h ^= (unsigned char)name[i];
        h *= 16777619u;
        if (name[i] == '\0') break;
    }
    h ^= (unsigned)dimension;
    h *= 16777619u;
    return h;
}

bool same_name(const char *a, const char *b) {
    for (int i = 0; i < 16; ++i) {
        if (a[i] != b[i]) return false;
        if (a[i] == '\0') return true;
    }
    return true;
}

TextureSlot *find_slot(const char *name, int dimension) {
    unsigned index = name_hash(name, dimension) & (unsigned)(kTextureSlots - 1);
    for (int probe = 0; probe < kTextureSlots; ++probe) {
        TextureSlot &slot = g_textures[index];
        if (slot.dimension == 0) return nullptr;
        if (slot.dimension == dimension && same_name(slot.name, name)) return &slot;
        index = (index + 1u) & (unsigned)(kTextureSlots - 1);
    }
    return nullptr;
}

void evict_least_recently_used() {
    int oldest = -1;
    for (int i = 0; i < kTextureSlots; ++i) {
        if (g_textures[i].dimension == 0) continue;
        if (oldest < 0 || g_textures[i].used < g_textures[oldest].used) oldest = i;
    }
    if (oldest < 0) return;
    if (g_textures[oldest].texture != 0 && gl.DeleteTextures != nullptr) {
        gl.DeleteTextures(1, &g_textures[oldest].texture);
    }
    // Clearing a slot in an open-addressed table would cut the probe chains
    // that run through it, so the whole table is rebuilt from the survivors.
    TextureSlot *survivors = (TextureSlot *)malloc(sizeof(TextureSlot) * (size_t)kTextureSlots);
    if (survivors == nullptr) return;
    int count = 0;
    for (int i = 0; i < kTextureSlots; ++i) {
        if (i != oldest && g_textures[i].dimension != 0) survivors[count++] = g_textures[i];
    }
    memset(g_textures, 0, sizeof(g_textures));
    g_texture_count = 0;
    for (int i = 0; i < count; ++i) {
        unsigned index = name_hash(survivors[i].name, survivors[i].dimension) &
                         (unsigned)(kTextureSlots - 1);
        while (g_textures[index].dimension != 0) {
            index = (index + 1u) & (unsigned)(kTextureSlots - 1);
        }
        g_textures[index] = survivors[i];
        ++g_texture_count;
    }
    free(survivors);
}

TextureSlot *insert_slot(const char *name, int dimension) {
    if (g_texture_count >= kTextureSlots - 1) {
        evict_least_recently_used();
    }
    unsigned index = name_hash(name, dimension) & (unsigned)(kTextureSlots - 1);
    while (g_textures[index].dimension != 0) {
        index = (index + 1u) & (unsigned)(kTextureSlots - 1);
    }
    TextureSlot &slot = g_textures[index];
    memcpy(slot.name, name, 16);
    slot.dimension = dimension;
    slot.texture   = 0;
    ++g_texture_count;
    return &slot;
}

// --- master depth ------------------------------------------------------------
// One framebuffer per slot, each carrying a depth renderbuffer the size of the
// scene. The engine reads its slot count from an ini key and the shipped
// configuration asks for few, so the table is small and filled lazily.
const int kMasterDepthSlots = 8;

struct MasterDepth {
    GLuint fbo = 0;
    GLuint depth = 0;
    int    width = 0;
    int    height = 0;
};

MasterDepth g_master_depth[kMasterDepthSlots];

MasterDepth *ensure_master_depth(int slot, int width, int height) {
    if (slot < 0 || slot >= kMasterDepthSlots) return nullptr;
    if (gl.GenFramebuffers == nullptr || gl.BindFramebuffer == nullptr ||
        gl.GenRenderbuffers == nullptr || gl.RenderbufferStorage == nullptr ||
        gl.FramebufferRenderbuffer == nullptr || gl.BlitFramebuffer == nullptr) {
        return nullptr;
    }
    MasterDepth &m = g_master_depth[slot];
    if (m.fbo != 0 && m.width == width && m.height == height) return &m;

    if (m.fbo != 0) {
        gl.DeleteFramebuffers(1, &m.fbo);
        gl.DeleteRenderbuffers(1, &m.depth);
        m.fbo = m.depth = 0;
    }
    gl.GenRenderbuffers(1, &m.depth);
    gl.BindRenderbuffer(GL_RENDERBUFFER, m.depth);
    gl.RenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, width, height);
    gl.BindRenderbuffer(GL_RENDERBUFFER, 0);

    gl.GenFramebuffers(1, &m.fbo);
    gl.BindFramebuffer(GL_FRAMEBUFFER, m.fbo);
    gl.FramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, m.depth);
    const GLenum status = (gl.CheckFramebufferStatus != nullptr)
                              ? gl.CheckFramebufferStatus(GL_FRAMEBUFFER)
                              : (GLenum)GL_FRAMEBUFFER_COMPLETE;
    gl.BindFramebuffer(GL_FRAMEBUFFER, (GLuint)nocturne_gl_scene_fbo());
    if (status != GL_FRAMEBUFFER_COMPLETE) {
        DDRAW_LOG("trigl_gl: master depth slot %d incomplete at %dx%d", slot, width, height);
        gl.DeleteFramebuffers(1, &m.fbo);
        gl.DeleteRenderbuffers(1, &m.depth);
        m.fbo = m.depth = 0;
        return nullptr;
    }
    m.width  = width;
    m.height = height;
    return &m;
}

bool ensure_scratch(size_t vertices) {
    if (vertices <= g_scratch_capacity) return true;
    HardwareVertex *grown =
        (HardwareVertex *)realloc(g_scratch, sizeof(HardwareVertex) * vertices);
    if (grown == nullptr) return false;
    g_scratch = grown;
    g_scratch_capacity = vertices;
    return true;
}

}  // namespace

int nocturne_trigl_gl_init(void) {
    if (g_ready) return 1;
    if (g_tried) return 0;
    g_tried = true;

    if (!have_entry_points()) {
        DDRAW_LOG("trigl_gl: the driver is missing entry points the renderer needs");
        return 0;
    }
    if (!build_program()) return 0;
    if (!build_vertex_array()) return 0;

    memset(g_textures, 0, sizeof(g_textures));
    g_texture_count = 0;
    g_current_valid = false;
    g_ready = true;
    return 1;
}

int nocturne_trigl_gl_ready(void) { return g_ready ? 1 : 0; }

void nocturne_trigl_gl_shutdown(void) {
    nocturne_trigl_gl_release_textures();
    if (g_vao != 0 && gl.DeleteVertexArrays != nullptr) gl.DeleteVertexArrays(1, &g_vao);
    if (g_vbo != 0 && gl.DeleteBuffers != nullptr) gl.DeleteBuffers(1, &g_vbo);
    if (g_ibo != 0 && gl.DeleteBuffers != nullptr) gl.DeleteBuffers(1, &g_ibo);
    if (g_program != 0 && gl.DeleteProgram != nullptr) gl.DeleteProgram(g_program);
    free(g_scratch);
    g_scratch = nullptr;
    g_scratch_capacity = 0;
    g_vao = g_vbo = g_ibo = g_program = 0;
    g_vbo_capacity = g_ibo_capacity = 0;
    g_ready = false;
    g_tried = false;
    g_current_valid = false;
}

void nocturne_trigl_gl_set_target_size(int width, int height) {
    if (!g_ready || width <= 0 || height <= 0) return;
    // Pixels to clip space, column major. x grows right from 0, y grows DOWN
    // from 0 as the engine reports it, and depth arrives already normalised to
    // 0..1 where clip space wants -1..1.
    const float m[16] = {
        2.0f / (float)width,  0.0f,                   0.0f,  0.0f,
        0.0f,                -2.0f / (float)height,   0.0f,  0.0f,
        0.0f,                 0.0f,                   2.0f,  0.0f,
       -1.0f,                 1.0f,                  -1.0f,  1.0f,
    };
    gl.UseProgram(g_program);
    if (g_loc_projection >= 0) gl.UniformMatrix4fv(g_loc_projection, 1, GL_FALSE, m);
    gl.UseProgram(0);
}

void nocturne_trigl_gl_set_fog_color(float r, float g, float b) {
    g_fog_color[0] = r;
    g_fog_color[1] = g;
    g_fog_color[2] = b;
    g_fog_color_dirty = true;
}

void nocturne_trigl_gl_apply_state(const NocturneTriglPipelineState *state) {
    if (!g_ready) return;
    const bool first = !g_current_valid;

    if (first || state->blend_enabled != g_current.blend_enabled) {
        if (state->blend_enabled) gl.Enable(GL_BLEND); else gl.Disable(GL_BLEND);
    }
    if (first || state->src_blend != g_current.src_blend ||
        state->dst_blend != g_current.dst_blend) {
        gl.BlendFunc(blend_factor(state->src_blend), blend_factor(state->dst_blend));
    }
    if (first || state->depth_test_enabled != g_current.depth_test_enabled) {
        if (state->depth_test_enabled) gl.Enable(GL_DEPTH_TEST);
        else                           gl.Disable(GL_DEPTH_TEST);
    }
    if (first || state->depth_write_enabled != g_current.depth_write_enabled) {
        gl.DepthMask(state->depth_write_enabled ? GL_TRUE : GL_FALSE);
    }
    if (first || state->depth_func != g_current.depth_func) {
        gl.DepthFunc(state->depth_func == NOCTURNE_TRIGL_DEPTH_LEQUAL ? GL_LEQUAL : GL_ALWAYS);
    }

    // Shading, texture enable, alpha test and fog are the shader's business,
    // not the pipeline's.
    gl.UseProgram(g_program);
    if (first || state->texture_enabled != g_current.texture_enabled) {
        if (g_loc_tex_enabled >= 0) gl.Uniform1i(g_loc_tex_enabled, state->texture_enabled);
    }
    if (first || state->modulate_texture_alpha != g_current.modulate_texture_alpha) {
        if (g_loc_modulate_alpha >= 0) {
            gl.Uniform1i(g_loc_modulate_alpha, state->modulate_texture_alpha);
        }
    }
    if (first || state->alpha_test_enabled != g_current.alpha_test_enabled) {
        if (g_loc_alpha_test >= 0) gl.Uniform1i(g_loc_alpha_test, state->alpha_test_enabled);
    }
    const int fog = state->fog_enabled && vertex_fog();
    if (first || fog != (g_current.fog_enabled && vertex_fog())) {
        if (g_loc_fog_enabled >= 0) gl.Uniform1i(g_loc_fog_enabled, fog);
    }
    if (g_fog_color_dirty && g_loc_fog_color >= 0) {
        gl.Uniform3f(g_loc_fog_color, g_fog_color[0], g_fog_color[1], g_fog_color[2]);
        g_fog_color_dirty = false;
    }

    g_current = *state;
    g_current_valid = true;
}

unsigned nocturne_trigl_gl_texture(const char *name, int dimension,
                                   const unsigned *rgba, int mipmapped,
                                   int refresh) {
    if (!g_ready || name == nullptr || dimension <= 0) return 0;

    TextureSlot *slot = find_slot(name, dimension);
    const bool fresh = (slot == nullptr);
    if (fresh) {
        slot = insert_slot(name, dimension);
        if (slot == nullptr) return 0;
    }
    slot->used = ++g_texture_clock;
    if (!fresh && !refresh) return slot->texture;
    if (rgba == nullptr) return slot->texture;

    if (slot->texture == 0) {
        gl.GenTextures(1, &slot->texture);
        if (slot->texture == 0) return 0;
    }

    gl.ActiveTexture(GL_TEXTURE0);
    gl.BindTexture(GL_TEXTURE_2D, slot->texture);
    gl.PixelStorei(GL_UNPACK_ALIGNMENT, 4);
    // The expansion produces 0xAARRGGBB words, which on a little-endian host is
    // B,G,R,A in memory — GL_BGRA, not GL_RGBA.
    gl.TexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, dimension, dimension, 0,
                  GL_BGRA, GL_UNSIGNED_BYTE, rgba);
    if (mipmapped && gl.GenerateMipmap != nullptr) {
        gl.GenerateMipmap(GL_TEXTURE_2D);
    } else {
        // Without a chain the texture must say so, or a mip-filtered sampler
        // finds it incomplete and the draw silently loses its texture.
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0);
    }
    return slot->texture;
}

void nocturne_trigl_gl_bind_texture(unsigned texture) {
    if (!g_ready) return;
    gl.ActiveTexture(GL_TEXTURE0);
    gl.BindTexture(GL_TEXTURE_2D, (GLuint)texture);
    if (texture != 0) {
        const GLint min_filter =
            (g_current.mip_filter == NOCTURNE_TRIGL_MIP_LINEAR)
                ? (g_current.min_filter == NOCTURNE_TRIGL_FILTER_LINEAR
                       ? GL_LINEAR_MIPMAP_LINEAR : GL_NEAREST_MIPMAP_LINEAR)
                : (g_current.min_filter == NOCTURNE_TRIGL_FILTER_LINEAR
                       ? GL_LINEAR : GL_NEAREST);
        const GLint mag_filter =
            (g_current.mag_filter == NOCTURNE_TRIGL_FILTER_LINEAR) ? GL_LINEAR : GL_NEAREST;
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, min_filter);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, mag_filter);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        gl.TexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    }
}

const char *nocturne_trigl_gl_renderer_name(void) {
    static char name[128] = "";
    if (name[0] == '\0' && gl.GetString != nullptr) {
        const char *reported = (const char *)gl.GetString(GL_RENDERER);
        if (reported != nullptr) {
            size_t n = 0;
            while (reported[n] != '\0' && n + 1 < sizeof(name)) {
                name[n] = reported[n];
                ++n;
            }
            name[n] = '\0';
        }
    }
    return (name[0] != '\0') ? name : "OpenGL";
}

void nocturne_trigl_gl_release_textures(void) {
    for (int i = 0; i < kTextureSlots; ++i) {
        if (g_textures[i].texture != 0 && gl.DeleteTextures != nullptr) {
            gl.DeleteTextures(1, &g_textures[i].texture);
        }
    }
    memset(g_textures, 0, sizeof(g_textures));
    g_texture_count = 0;
    g_texture_clock = 0;
}

int nocturne_trigl_gl_save_depth(int slot, int width, int height) {
    if (!g_ready) return 0;
    const GLuint scene = (GLuint)nocturne_gl_scene_fbo();
    if (scene == 0) return 0;
    MasterDepth *m = ensure_master_depth(slot, width, height);
    if (m == nullptr) return 0;

    gl.BindFramebuffer(GL_READ_FRAMEBUFFER, scene);
    gl.BindFramebuffer(GL_DRAW_FRAMEBUFFER, m->fbo);
    gl.BlitFramebuffer(0, 0, width, height, 0, 0, width, height,
                       GL_DEPTH_BUFFER_BIT, GL_NEAREST);
    gl.BindFramebuffer(GL_FRAMEBUFFER, scene);
    return 1;
}

int nocturne_trigl_gl_restore_depth(int slot, int left, int top, int right, int bottom,
                                    int width, int height) {
    if (!g_ready) return 0;
    const GLuint scene = (GLuint)nocturne_gl_scene_fbo();
    if (scene == 0) return 0;
    if (slot < 0 || slot >= kMasterDepthSlots) return 0;
    MasterDepth &m = g_master_depth[slot];
    if (m.fbo == 0) return 0;

    // Top-down to bottom-up. An empty rectangle is nothing to do rather than a
    // failure — the engine asks for one when nothing moved.
    const GLint x0 = left;
    const GLint x1 = right;
    const GLint y0 = height - bottom;
    const GLint y1 = height - top;
    if (x1 <= x0 || y1 <= y0) return 1;
    (void)width;

    gl.BindFramebuffer(GL_READ_FRAMEBUFFER, m.fbo);
    gl.BindFramebuffer(GL_DRAW_FRAMEBUFFER, scene);
    gl.BlitFramebuffer(x0, y0, x1, y1, x0, y0, x1, y1,
                       GL_DEPTH_BUFFER_BIT, GL_NEAREST);
    gl.BindFramebuffer(GL_FRAMEBUFFER, scene);
    return 1;
}

void nocturne_trigl_gl_release_depth(void) {
    for (int i = 0; i < kMasterDepthSlots; ++i) {
        MasterDepth &m = g_master_depth[i];
        if (m.fbo != 0 && gl.DeleteFramebuffers != nullptr) gl.DeleteFramebuffers(1, &m.fbo);
        if (m.depth != 0 && gl.DeleteRenderbuffers != nullptr) gl.DeleteRenderbuffers(1, &m.depth);
        m.fbo = m.depth = 0;
        m.width = m.height = 0;
    }
}

void nocturne_trigl_gl_draw_batch(const NocturneTriglBatch *batch) {
    if (!g_ready || batch->vertex_count <= 0 || batch->index_count <= 0) return;
    if (!ensure_scratch((size_t)batch->vertex_count)) return;

    // Premultiply by w so the perspective divide reproduces the engine's own
    // projection and leaves the texture coordinates perspective correct.
    for (int i = 0; i < batch->vertex_count; ++i) {
        const NocturneTriglScreenVertex &src = batch->vertices[i];
        HardwareVertex &dst = g_scratch[i];
        const float w = (src.rhw != 0.0f) ? (1.0f / src.rhw) : 1.0f;
        dst.x = src.x * w;
        dst.y = src.y * w;
        dst.z = src.z * w;
        dst.w = w;
        dst.diffuse[0]  = (unsigned char)((src.diffuse >> 16) & 0xff);
        dst.diffuse[1]  = (unsigned char)((src.diffuse >> 8) & 0xff);
        dst.diffuse[2]  = (unsigned char)(src.diffuse & 0xff);
        dst.diffuse[3]  = (unsigned char)((src.diffuse >> 24) & 0xff);
        dst.specular[0] = (unsigned char)((src.specular >> 16) & 0xff);
        dst.specular[1] = (unsigned char)((src.specular >> 8) & 0xff);
        dst.specular[2] = (unsigned char)(src.specular & 0xff);
        dst.specular[3] = (unsigned char)((src.specular >> 24) & 0xff);
        dst.u = src.u;
        dst.v = src.v;
    }

    gl.BindVertexArray(g_vao);

    const size_t vertex_bytes = sizeof(HardwareVertex) * (size_t)batch->vertex_count;
    gl.BindBuffer(GL_ARRAY_BUFFER, g_vbo);
    if (vertex_bytes > g_vbo_capacity) {
        gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)vertex_bytes, g_scratch, GL_STREAM_DRAW);
        g_vbo_capacity = vertex_bytes;
    } else {
        // Orphan first: a fresh allocation lets the driver write without
        // waiting on the previous draw to retire.
        gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)g_vbo_capacity, nullptr, GL_STREAM_DRAW);
        if (gl.BufferSubData != nullptr) {
            gl.BufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)vertex_bytes, g_scratch);
        } else {
            gl.BufferData(GL_ARRAY_BUFFER, (GLsizeiptr)vertex_bytes, g_scratch, GL_STREAM_DRAW);
        }
    }

    const size_t index_bytes = sizeof(unsigned short) * (size_t)batch->index_count;
    gl.BindBuffer(GL_ELEMENT_ARRAY_BUFFER, g_ibo);
    if (index_bytes > g_ibo_capacity) {
        gl.BufferData(GL_ELEMENT_ARRAY_BUFFER, (GLsizeiptr)index_bytes, batch->indices,
                      GL_STREAM_DRAW);
        g_ibo_capacity = index_bytes;
    } else {
        gl.BufferData(GL_ELEMENT_ARRAY_BUFFER, (GLsizeiptr)g_ibo_capacity, nullptr,
                      GL_STREAM_DRAW);
        if (gl.BufferSubData != nullptr) {
            gl.BufferSubData(GL_ELEMENT_ARRAY_BUFFER, 0, (GLsizeiptr)index_bytes,
                             batch->indices);
        } else {
            gl.BufferData(GL_ELEMENT_ARRAY_BUFFER, (GLsizeiptr)index_bytes, batch->indices,
                          GL_STREAM_DRAW);
        }
    }

    gl.UseProgram(g_program);
    gl.DrawElements(GL_TRIANGLES, (GLsizei)batch->index_count, GL_UNSIGNED_SHORT, nullptr);

    gl.BindVertexArray(0);
    gl.UseProgram(0);
}

#else  // !NOCTURNE_GL_PRESENT

#include "renderer/trigl_gl.h"

extern "C" int nocturne_trigl_vertex_fog = 0;
int  nocturne_trigl_gl_init(void) { return 0; }
int  nocturne_trigl_gl_ready(void) { return 0; }
void nocturne_trigl_gl_shutdown(void) {}
void nocturne_trigl_gl_set_target_size(int, int) {}
void nocturne_trigl_gl_set_fog_color(float, float, float) {}
void nocturne_trigl_gl_apply_state(const NocturneTriglPipelineState *) {}
unsigned nocturne_trigl_gl_texture(const char *, int, const unsigned *, int, int) { return 0; }
void nocturne_trigl_gl_bind_texture(unsigned) {}
void nocturne_trigl_gl_release_textures(void) {}
const char *nocturne_trigl_gl_renderer_name(void) { return "OpenGL"; }
int  nocturne_trigl_gl_save_depth(int, int, int) { return 0; }
int  nocturne_trigl_gl_restore_depth(int, int, int, int, int, int, int) { return 0; }
void nocturne_trigl_gl_release_depth(void) {}
void nocturne_trigl_gl_draw_batch(const NocturneTriglBatch *) {}

#endif  // NOCTURNE_GL_PRESENT
