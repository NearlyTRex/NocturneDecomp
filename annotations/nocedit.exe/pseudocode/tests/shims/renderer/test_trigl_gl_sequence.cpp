// =============================================================================
// TRIGL GL — ordering invariants
// =============================================================================
//
// The pure suites beside this one test answers. This one tests ORDER, because
// that is where this renderer's faults have actually been: not a function
// returning the wrong number, but a correct call made at a moment when the
// pipeline held something else.
//
// Every case below is a fault that shipped. They are written as properties of
// the call sequence rather than as "call this, expect that", so they keep
// holding when the renderer is restructured — the point is not that an upload
// calls glBindTexture twice, it is that an upload leaves the pipeline as it
// found it, however it chooses to do that.
//
// Runs against gl_recorder.h: no context, no window, no driver.

#include "gl_recorder.h"
#include "nocturne_test.h"
#include "renderer/trigl_batch.h"
#include "renderer/trigl_gl.h"
#include "renderer/trigl_vertex.h"
#include "shim_config.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

namespace {

// A texture's worth of pixels. The content is irrelevant — nothing rasterises.
std::vector<unsigned> image(int dimension) {
    return std::vector<unsigned>((size_t)(dimension * dimension), 0xff204060u);
}

// Brings the renderer up against the recorder and clears the log, so a test
// reads only its own calls and not the shader/VAO construction.
void begin() {
    gl_recorder::install();
    CHECK(nocturne_trigl_gl_init() == 1);
    gl_recorder::state().calls.clear();
}

void end() {
    nocturne_trigl_gl_shutdown();
}

unsigned bound_now() {
    return gl_recorder::state().bound_texture[0];
}

} // namespace

// -----------------------------------------------------------------------------
// The binding bug: an upload must not be a state change.
//
// Polygons do not draw when they are submitted — they sit in the batch until
// the next draw's flush. A selectTexture that misses the cache uploads in
// between, and an upload that leaves its own binding sends that pending run out
// wearing the image just uploaded: a whole contiguous piece of one model
// covered in another's, on frames that upload, gone on the next.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(upload_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned first = nocturne_trigl_gl_texture("first.raw", 64, pixels.data(), 0, 0);
    CHECK(first != 0);

    // Stand where a draw stands: its texture bound, its polygons pending.
    nocturne_trigl_gl_bind_texture(first);
    CHECK_EQ(bound_now(), first);

    // Now the engine names a texture it has not seen, which uploads.
    const unsigned second = nocturne_trigl_gl_texture("second.raw", 64, pixels.data(), 0, 0);
    CHECK(second != 0);
    CHECK(second != first);

    // The pending run must still be pointed at its own image.
    CHECK_EQ(bound_now(), first);
    end();
}

NOCTURNE_TEST(refreshing_a_resident_texture_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned other = nocturne_trigl_gl_texture("other.raw", 64, pixels.data(), 0, 0);
    const unsigned target = nocturne_trigl_gl_texture("target.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_bind_texture(other);

    // updateTexture's path: resident, but re-uploaded because the content moved.
    nocturne_trigl_gl_texture("target.raw", 64, pixels.data(), 0, 1);

    CHECK_EQ(bound_now(), other);
    CHECK(target != other);
    end();
}

NOCTURNE_TEST(reading_a_texture_back_leaves_the_binding_it_found) {
    begin();
    const std::vector<unsigned> pixels = image(64);
    const unsigned other = nocturne_trigl_gl_texture("other.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_texture("dumped.raw", 64, pixels.data(), 0, 0);
    nocturne_trigl_gl_bind_texture(other);

    // The diagnostic dumper binds to read. It is used while a frame is held,
    // which is exactly when a stray binding would decide the next draw.
    nocturne_trigl_gl_dump_texture("dumped.raw", 64, "/dev/null");

    CHECK_EQ(bound_now(), other);
    end();
}

// -----------------------------------------------------------------------------
// The cache identifies a texture by its whole name.
//
// The shipped renderer keeps 64 characters per entry and compares them with
// strcmp. Comparing a fixed 16 makes every pair of names sharing a 16-character
// prefix one texture, and asset names share prefixes constantly.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(names_are_distinguished_past_sixteen_characters) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    const unsigned a =
        nocturne_trigl_gl_texture("characters_hero_body.raw", 64, pixels.data(), 0, 0);
    const unsigned b =
        nocturne_trigl_gl_texture("characters_hero_head.raw", 64, pixels.data(), 0, 0);

    CHECK(a != 0);
    CHECK(b != 0);
    CHECK(a != b);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("characters_hero_body.raw", 64), a);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("characters_hero_head.raw", 64), b);
    end();
}

NOCTURNE_TEST(the_same_name_at_two_dimensions_is_two_textures) {
    begin();
    const std::vector<unsigned> small = image(64);
    const std::vector<unsigned> large = image(256);

    const unsigned a = nocturne_trigl_gl_texture("wall.raw", 64, small.data(), 0, 0);
    const unsigned b = nocturne_trigl_gl_texture("wall.raw", 256, large.data(), 0, 0);
    CHECK(a != b);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("wall.raw", 64), a);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("wall.raw", 256), b);
    end();
}

NOCTURNE_TEST(a_resident_texture_is_not_uploaded_again) {
    begin();
    const std::vector<unsigned> pixels = image(64);

    nocturne_trigl_gl_texture("stone.raw", 64, pixels.data(), 0, 0);
    const int after_first = gl_recorder::state().count("TexImage2D");
    nocturne_trigl_gl_texture("stone.raw", 64, pixels.data(), 0, 0);

    CHECK_EQ(gl_recorder::state().count("TexImage2D"), after_first);
    end();
}

// -----------------------------------------------------------------------------
// A texture with no mip chain has to say so, or a mip-filtered sampler finds it
// incomplete and the draw silently loses its image — no GL error, no warning.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_texture_without_a_chain_declares_one_level) {
    begin();
    const std::vector<unsigned> pixels = image(64);
    nocturne_trigl_gl_texture("flat.raw", 64, pixels.data(), 0, 0);

    bool base = false, max = false;
    for (const gl_recorder::Call &call : gl_recorder::state().calls) {
        if (call.name != "TexParameteri")
            continue;
        if (call.a == GL_TEXTURE_BASE_LEVEL && call.b == 0)
            base = true;
        if (call.a == GL_TEXTURE_MAX_LEVEL && call.b == 0)
            max = true;
    }
    CHECK(base);
    CHECK(max);
    CHECK_EQ(gl_recorder::state().count("GenerateMipmap"), 0);
    end();
}

// -----------------------------------------------------------------------------
// Abandoning the state record has to be observable to everything that keeps its
// own view of it. The entry points hold a second copy and decide from it whether
// a draw needs a new state and texture; without a counter to compare, a draw
// that matches that copy returns before binding anything.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(invalidating_the_state_record_is_observable) {
    begin();
    const unsigned before = nocturne_trigl_gl_state_epoch();
    nocturne_trigl_gl_invalidate_state();
    const unsigned after = nocturne_trigl_gl_state_epoch();
    CHECK(after != before);
    end();
}

// -----------------------------------------------------------------------------
// A depth clear turns writes on, and the record has to know. Left believing they
// are still off, the cache drops the next draw's DepthMask(GL_FALSE) as redundant
// and a draw meant only to test depth writes it as well.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_depth_clear_does_not_leave_writes_on_for_the_next_draw) {
    begin();
    NocturneTriglPipelineState tested_only = {};
    tested_only.depth_test_enabled = 1;
    tested_only.depth_write_enabled = 0;
    tested_only.depth_func = NOCTURNE_TRIGL_DEPTH_LEQUAL;
    nocturne_trigl_gl_apply_state(&tested_only);
    CHECK_EQ(gl_recorder::state().depth_write, 0);

    const unsigned epoch = nocturne_trigl_gl_state_epoch();
    nocturne_trigl_gl_enable_depth_write();
    CHECK_EQ(gl_recorder::state().depth_write, 1);
    CHECK(nocturne_trigl_gl_state_epoch() != epoch);

    nocturne_trigl_gl_apply_state(&tested_only);
    CHECK_EQ(gl_recorder::state().depth_write, 0);
    end();
}

// -----------------------------------------------------------------------------
// A master depth slot has no colour attachment, so its draw and read buffers
// must say NONE or a GL 3.3 core driver reports it incomplete and nothing saves.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_master_depth_slot_names_no_colour_buffer) {
    begin();
    gl_recorder::state().scene_fbo = 99;
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 1);

    const gl_recorder::State &log = gl_recorder::state();
    const int draw_buffer = log.index_of_last("DrawBuffer");
    const int read_buffer = log.index_of_last("ReadBuffer");
    CHECK(draw_buffer >= 0);
    CHECK(read_buffer >= 0);
    CHECK_EQ(log.calls[(size_t)draw_buffer].a, (unsigned)GL_NONE);
    CHECK_EQ(log.calls[(size_t)read_buffer].a, (unsigned)GL_NONE);
    CHECK(draw_buffer < log.index_of_last("BlitFramebuffer"));
    nocturne_trigl_gl_release_depth();
    end();
}

// =============================================================================
// Below: what each call answers at its edges — a driver missing something, a
// switch set from the environment, a cache filling up.
// =============================================================================

namespace {

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value);
#else
    setenv(name, value, 1);
#endif
}

// The last value `pname` was given by glTexParameteri, or -1.
int last_parameter(GLenum pname) {
    const gl_recorder::State &s = gl_recorder::state();
    for (int i = (int)s.calls.size() - 1; i >= 0; --i) {
        const gl_recorder::Call &call = s.calls[(size_t)i];
        if (call.name == "TexParameteri" && call.a == (unsigned)pname)
            return (int)call.b;
    }
    return -1;
}

// The last value uniform `location` was set to with glUniform1i, or -1.
int last_uniform(int location) {
    const gl_recorder::State &s = gl_recorder::state();
    for (int i = (int)s.calls.size() - 1; i >= 0; --i) {
        const gl_recorder::Call &call = s.calls[(size_t)i];
        if (call.name == "Uniform1i" && call.a == (unsigned)location)
            return (int)call.b;
    }
    return -1;
}

// Where the recorder puts the uniforms these read (see its list).
const int kFogEnabledUniform = 5;
const int kDebugUniform = 7;
const int kEnvmapUniform = 100;

NocturneTriglPipelineState plain_state() {
    NocturneTriglPipelineState s = {};
    s.src_blend = NOCTURNE_TRIGL_BLEND_ONE;
    s.dst_blend = NOCTURNE_TRIGL_BLEND_ZERO;
    return s;
}

// Different from plain_state in every field the pipeline or the shader reads.
NocturneTriglPipelineState every_field_changed() {
    NocturneTriglPipelineState s = {};
    s.texture_enabled = 1;
    s.blend_enabled = 1;
    s.alpha_test_enabled = 1;
    s.src_blend = NOCTURNE_TRIGL_BLEND_SRC_ALPHA;
    s.dst_blend = NOCTURNE_TRIGL_BLEND_INV_SRC_ALPHA;
    s.fog_enabled = 1;
    s.depth_test_enabled = 1;
    s.depth_write_enabled = 1;
    s.depth_func = NOCTURNE_TRIGL_DEPTH_LEQUAL;
    s.modulate_texture_alpha = 1;
    return s;
}

void APIENTRY no_names(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i)
        out[i] = 0;
}

int g_buffers_left = 0;
void APIENTRY names_then_none(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i)
        out[i] = (g_buffers_left-- > 0) ? 7u : 0u;
}

void APIENTRY the_same_name(GLsizei n, GLuint *out) {
    for (GLsizei i = 0; i < n; ++i)
        out[i] = 42;
}

GLuint APIENTRY no_shader(GLenum) {
    return 0;
}
GLint APIENTRY no_uniforms(GLuint, const GLchar *) {
    return -1;
}
GLint APIENTRY only_a_pos(GLuint, const GLchar *name) {
    return strcmp(name, "a_pos") == 0 ? 0 : -1;
}

GLenum APIENTRY incomplete(GLenum) {
    return 0;
}

// A 4x4 RGBA read-back whose first eight texels are opaque.
void APIENTRY half_opaque(GLenum, GLint, GLenum, GLenum, void *pixels) {
    unsigned char *rgba = (unsigned char *)pixels;
    for (int i = 0; i < 16; ++i)
        rgba[i * 4 + 3] = (i < 8) ? 0xFF : 0x00;
}

const GLubyte *APIENTRY no_string(GLenum) {
    return nullptr;
}
const GLubyte *APIENTRY long_string(GLenum) {
    static const std::string text(200, 'r');
    return (const GLubyte *)text.c_str();
}

// A batch of one triangle.
struct OneTriangle {
    NocturneTriglScreenVertex vertices[3] = {};
    unsigned short indices[3] = {0, 1, 2};
    NocturneTriglBatch batch = {};

    OneTriangle() {
        vertices[0].rhw = 0.5f;
        vertices[1].rhw = 0.0f; // no depth: drawn as at w = 1
        vertices[2].rhw = 2.0f;
        batch.vertices = vertices;
        batch.indices = indices;
        batch.vertex_capacity = 3;
        batch.index_capacity = 3;
        batch.vertex_count = 3;
        batch.index_count = 3;
    }
};

std::string read_file(const std::string &path) {
    std::string text;
    FILE *f = fopen(path.c_str(), "rb");
    if (f == nullptr)
        return text;
    char chunk[512];
    size_t got = 0;
    while ((got = fread(chunk, 1, sizeof(chunk), f)) > 0)
        text.append(chunk, got);
    fclose(f);
    return text;
}

} // namespace

// -----------------------------------------------------------------------------
// Bringing the renderer up
// -----------------------------------------------------------------------------

// Every entry point the renderer cannot do without is checked before anything
// is made, so a driver short of one is a renderer that is not there, not a
// call through null. Each is taken away in turn.
NOCTURNE_TEST(a_driver_missing_any_required_entry_point_brings_up_nothing) {
#define TRIGL_TAKE_AWAY(member)                                                                    \
    gl_recorder::install();                                                                        \
    gl.member = nullptr;                                                                           \
    CHECK_EQ(nocturne_trigl_gl_init(), 0);                                                         \
    CHECK_EQ(gl_recorder::state().count("CreateProgram"), 0);                                      \
    nocturne_trigl_gl_shutdown();
    TRIGL_TAKE_AWAY(CreateShader)
    TRIGL_TAKE_AWAY(ShaderSource)
    TRIGL_TAKE_AWAY(CompileShader)
    TRIGL_TAKE_AWAY(GetShaderiv)
    TRIGL_TAKE_AWAY(DeleteShader)
    TRIGL_TAKE_AWAY(CreateProgram)
    TRIGL_TAKE_AWAY(AttachShader)
    TRIGL_TAKE_AWAY(LinkProgram)
    TRIGL_TAKE_AWAY(GetProgramiv)
    TRIGL_TAKE_AWAY(UseProgram)
    TRIGL_TAKE_AWAY(GetUniformLocation)
    TRIGL_TAKE_AWAY(Uniform1i)
    TRIGL_TAKE_AWAY(Uniform3f)
    TRIGL_TAKE_AWAY(UniformMatrix4fv)
    TRIGL_TAKE_AWAY(GenBuffers)
    TRIGL_TAKE_AWAY(BindBuffer)
    TRIGL_TAKE_AWAY(BufferData)
    TRIGL_TAKE_AWAY(GetAttribLocation)
    TRIGL_TAKE_AWAY(EnableVertexAttribArray)
    TRIGL_TAKE_AWAY(VertexAttribPointer)
    TRIGL_TAKE_AWAY(GenVertexArrays)
    TRIGL_TAKE_AWAY(BindVertexArray)
    TRIGL_TAKE_AWAY(ActiveTexture)
    TRIGL_TAKE_AWAY(DrawElements)
#undef TRIGL_TAKE_AWAY
}

// Up once is up; a failure is not retried until a shutdown says to try again.
NOCTURNE_TEST(bringing_up_is_tried_once_until_shut_down) {
    gl_recorder::install();
    gl.CreateShader = nullptr;
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    gl_recorder::install();
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    CHECK_EQ(nocturne_trigl_gl_ready(), 0);
    nocturne_trigl_gl_shutdown();
    CHECK_EQ(nocturne_trigl_gl_init(), 1);
    CHECK_EQ(nocturne_trigl_gl_init(), 1);
    CHECK_EQ(nocturne_trigl_gl_ready(), 1);
    end();
}

NOCTURNE_TEST(a_program_that_will_not_build_brings_up_nothing) {
    gl_recorder::install();
    gl.CreateShader = no_shader;
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    nocturne_trigl_gl_shutdown();
}

// No vertex array, or either buffer missing, and there is nothing to draw with.
NOCTURNE_TEST(a_vertex_array_or_buffer_not_made_brings_up_nothing) {
    gl_recorder::install();
    gl.GenVertexArrays = no_names;
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    nocturne_trigl_gl_shutdown();

    gl_recorder::install();
    gl.GenBuffers = no_names;
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    nocturne_trigl_gl_shutdown();

    gl_recorder::install();
    g_buffers_left = 1;
    gl.GenBuffers = names_then_none;
    CHECK_EQ(nocturne_trigl_gl_init(), 0);
    nocturne_trigl_gl_shutdown();
}

// A shutdown releases what it can with what the driver has.
NOCTURNE_TEST(shutting_down_without_the_delete_calls_still_shuts_down) {
    begin();
    nocturne_trigl_gl_texture("held.raw", 64, image(64).data(), 0, 0);
    gl.DeleteVertexArrays = nullptr;
    gl.DeleteBuffers = nullptr;
    gl.DeleteProgram = nullptr;
    gl.DeleteTextures = nullptr;
    end();
    CHECK_EQ(gl_recorder::state().count("DeleteTextures"), 0);
    CHECK_EQ(nocturne_trigl_gl_ready(), 0);
}

// A shader linked without some of its inputs, or a driver that optimised them
// away, still draws: nothing is set on a location that is not there.
NOCTURNE_TEST(inputs_the_program_does_not_have_are_never_set) {
    gl_recorder::install();
    gl.GetUniformLocation = no_uniforms;
    gl.GetAttribLocation = only_a_pos;
    CHECK_EQ(nocturne_trigl_gl_init(), 1);
    gl_recorder::State &s = gl_recorder::state();
    // Position only.
    CHECK_EQ(s.count("EnableVertexAttribArray"), 1);

    nocturne_trigl_gl_set_target_size(64, 64);
    const NocturneTriglPipelineState changed = every_field_changed();
    nocturne_trigl_gl_set_fog_color(1.0f, 0.0f, 0.0f);
    nocturne_trigl_gl_apply_state(&changed);
    nocturne_trigl_paint_texture = 3;
    nocturne_trigl_envmap_pass_begin();
    nocturne_trigl_gl_bind_texture(3);
    nocturne_trigl_envmap_pass_end();
    nocturne_trigl_paint_texture = 0;
    CHECK_EQ(s.count("Uniform1i"), 0);
    CHECK_EQ(s.count("Uniform3f"), 0);
    CHECK_EQ(s.count("UniformMatrix4fv"), 0);
    end();
}

// -----------------------------------------------------------------------------
// The target and the pipeline state
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_target_needs_a_renderer_and_a_size) {
    gl_recorder::install();
    nocturne_trigl_gl_set_target_size(64, 64);
    CHECK_EQ(gl_recorder::state().count("UniformMatrix4fv"), 0);
    begin();
    nocturne_trigl_gl_set_target_size(0, 64);
    nocturne_trigl_gl_set_target_size(64, 0);
    CHECK_EQ(gl_recorder::state().count("UniformMatrix4fv"), 0);
    nocturne_trigl_gl_set_target_size(64, 48);
    CHECK_EQ(gl_recorder::state().count("UniformMatrix4fv"), 1);
    end();
}

// The first state is applied whole; the same again costs no pipeline calls; a
// state changing every field changes each of them.
NOCTURNE_TEST(state_is_applied_whole_then_only_where_it_changed) {
    nocturne_trigl_overlay_bias = 1;
    nocturne_trigl_vertex_fog = 1;
    nocturne_trigl_debug = 0;
    gl_recorder::State &s = gl_recorder::state();
    const NocturneTriglPipelineState plain = plain_state();
    const NocturneTriglPipelineState changed = every_field_changed();

    // Not up: nothing.
    gl_recorder::install();
    nocturne_trigl_gl_apply_state(&plain);
    CHECK(s.calls.empty());

    begin();
    nocturne_trigl_gl_apply_state(&plain);
    CHECK_EQ(s.count("BlendFunc"), 1);
    CHECK_EQ(s.count("DepthFunc"), 1);
    CHECK_EQ(s.depth_test, 0);
    CHECK_EQ(s.blend, 0);
    CHECK_EQ(last_uniform(kFogEnabledUniform), 0);

    s.calls.clear();
    nocturne_trigl_gl_apply_state(&plain);
    CHECK_EQ(s.count("Enable") + s.count("Disable") + s.count("BlendFunc") + s.count("DepthMask") +
                 s.count("DepthFunc"),
             0);

    nocturne_trigl_gl_set_fog_color(0.5f, 0.5f, 0.5f);
    s.calls.clear();
    nocturne_trigl_gl_apply_state(&changed);
    CHECK_EQ(s.blend, 1);
    CHECK_EQ(s.depth_test, 1);
    CHECK_EQ(s.depth_write, 1);
    CHECK_EQ(s.count("BlendFunc"), 1);
    CHECK_EQ(s.count("DepthFunc"), 1);
    // Blended and depth tested is an overlay, biased toward the viewer.
    CHECK_EQ(s.count("PolygonOffset"), 1);
    CHECK_EQ(last_uniform(kFogEnabledUniform), 1);
    CHECK_EQ(s.count("Uniform3f"), 1);

    // The fog colour is sent once per change.
    s.calls.clear();
    nocturne_trigl_gl_apply_state(&changed);
    CHECK_EQ(s.count("Uniform3f"), 0);

    // And back.
    nocturne_trigl_gl_apply_state(&plain);
    CHECK_EQ(s.blend, 0);
    CHECK_EQ(s.depth_test, 0);

    // One blend factor alone is a change; blending without a depth test is not
    // an overlay.
    NocturneTriglPipelineState other_dst = plain;
    other_dst.dst_blend = NOCTURNE_TRIGL_BLEND_ONE;
    other_dst.blend_enabled = 1;
    s.calls.clear();
    nocturne_trigl_gl_apply_state(&other_dst);
    CHECK_EQ(s.count("BlendFunc"), 1);
    CHECK_EQ(s.count("PolygonOffset"), 0);
    end();
}

// The switches are read from the environment the first time they are asked
// for, unless something has set them already.
NOCTURNE_TEST(switches_come_from_the_environment_once) {
    gl_recorder::State &s = gl_recorder::state();
    NocturneTriglPipelineState fogged = plain_state();
    fogged.fog_enabled = 1;

    // Vertex fog: on by default, off when the environment says 0.
    nocturne_trigl_vertex_fog = -1;
    begin();
    nocturne_trigl_gl_apply_state(&fogged);
    CHECK_EQ(last_uniform(kFogEnabledUniform), 1);
    end();
    nocturne_trigl_vertex_fog = -1;
    set_env("NOCTURNE_TRIGL_VERTEX_FOG", "0");
    begin();
    nocturne_trigl_gl_apply_state(&fogged);
    CHECK_EQ(last_uniform(kFogEnabledUniform), 0);
    // Asked for again, it is still off and not said again.
    s.calls.clear();
    nocturne_trigl_gl_apply_state(&fogged);
    CHECK_EQ(last_uniform(kFogEnabledUniform), -1);
    end();

    // The debug view.
    nocturne_trigl_debug = -1;
    set_env("NOCTURNE_TRIGL_DEBUG", "4");
    begin();
    nocturne_trigl_gl_apply_state(&fogged);
    CHECK_EQ(last_uniform(kDebugUniform), 4);
    end();
    nocturne_trigl_debug = 0;

    // The overlay bias, off.
    nocturne_trigl_overlay_bias = -1;
    set_env("NOCTURNE_TRIGL_OVERLAY_BIAS", "0");
    begin();
    const NocturneTriglPipelineState overlay = every_field_changed();
    nocturne_trigl_gl_apply_state(&overlay);
    CHECK_EQ(s.count("PolygonOffset"), 0);
    end();
    nocturne_trigl_overlay_bias = 1;

    // Mipmaps, on: a mipmapped upload builds its chain.
    nocturne_trigl_mipmaps = -1;
    set_env("NOCTURNE_TRIGL_MIPMAPS", "1");
    begin();
    nocturne_trigl_gl_texture("chain.raw", 64, image(64).data(), 1, 0);
    nocturne_trigl_gl_texture("chain2.raw", 64, image(64).data(), 1, 0);
    CHECK_EQ(s.count("GenerateMipmap"), 2);
    // Not when the driver cannot, which then has to declare one level.
    gl.GenerateMipmap = nullptr;
    nocturne_trigl_gl_texture("chain3.raw", 64, image(64).data(), 1, 0);
    CHECK_EQ(last_parameter(GL_TEXTURE_MAX_LEVEL), 0);
    end();
    nocturne_trigl_mipmaps = 0;
    nocturne_trigl_vertex_fog = 1;
}

// -----------------------------------------------------------------------------
// Binding: the marked texture, reflections, and the filters
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_marked_texture_is_painted_and_the_rest_are_not) {
    begin();
    nocturne_trigl_gl_bind_texture(9);
    CHECK_EQ(last_uniform(kDebugUniform), -1);
    nocturne_trigl_paint_texture = 9;
    nocturne_trigl_paint_view = 6;
    nocturne_trigl_gl_bind_texture(9);
    CHECK_EQ(last_uniform(kDebugUniform), 6);
    nocturne_trigl_paint_view = 7;
    nocturne_trigl_gl_bind_texture(9);
    CHECK_EQ(last_uniform(kDebugUniform), 7);
    nocturne_trigl_gl_bind_texture(3);
    CHECK_EQ(last_uniform(kDebugUniform), 0);
    nocturne_trigl_paint_texture = 0;
    nocturne_trigl_paint_view = 6;
    end();

    // Not up: no binding at all.
    gl_recorder::install();
    nocturne_trigl_gl_bind_texture(9);
    CHECK(gl_recorder::state().calls.empty());
}

// Inside a reflection pass the shader is told so, and the one texture asked to
// be blurred gets a chain, once, which an upload then takes away again.
NOCTURNE_TEST(a_reflection_is_told_to_the_shader_and_blurred_once) {
    begin();
    gl_recorder::State &s = gl_recorder::state();
    const unsigned reflection = nocturne_trigl_gl_texture("sky.raw", 64, image(64).data(), 0, 0);
    nocturne_trigl_envmap = 3;

    nocturne_trigl_envmap_pass_begin();
    nocturne_trigl_gl_bind_texture(reflection);
    CHECK_EQ(last_uniform(kEnvmapUniform), 3);
    CHECK_EQ(s.count("GenerateMipmap"), 1);
    CHECK_EQ(last_parameter(GL_TEXTURE_MAX_LEVEL), 1000);
    // Blurred, so filtered across the chain whatever the state says.
    nocturne_trigl_gl_bind_texture(reflection);
    CHECK_EQ(s.count("GenerateMipmap"), 1);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_LINEAR_MIPMAP_LINEAR);
    CHECK_EQ(last_parameter(GL_TEXTURE_MAG_FILTER), GL_LINEAR);

    // No texture, no blur asked for, or no way to build one: no chain.
    nocturne_trigl_gl_bind_texture(0);
    nocturne_trigl_envmap = 1;
    nocturne_trigl_gl_bind_texture(reflection + 1);
    CHECK_EQ(last_uniform(kEnvmapUniform), 1);
    nocturne_trigl_envmap = 3;
    gl.GenerateMipmap = nullptr;
    nocturne_trigl_gl_bind_texture(reflection + 2);
    CHECK_EQ(s.count("GenerateMipmap"), 1);
    gl_recorder::install();

    // A fresh upload of the blurred image takes its chain, so the next bind
    // builds it again.
    nocturne_trigl_gl_texture("sky.raw", 64, image(64).data(), 0, 1);
    nocturne_trigl_gl_bind_texture(reflection);
    CHECK_EQ(s.count("GenerateMipmap"), 1);

    // Out of the pass, and ending one too many changes nothing.
    nocturne_trigl_envmap_pass_end();
    nocturne_trigl_envmap_pass_end();
    nocturne_trigl_gl_bind_texture(reflection);
    CHECK_EQ(last_uniform(kEnvmapUniform), 0);
    nocturne_trigl_envmap = NOCTURNE_AUTHENTIC_ENVMAP_SHADING ? 0 : 3;
    end();
}

// The filters follow the state. A mip filter is only asked for when there is a
// chain to filter across.
NOCTURNE_TEST(filters_follow_the_state_and_the_chain) {
    begin();
    NocturneTriglPipelineState state = plain_state();
    state.min_filter = NOCTURNE_TRIGL_FILTER_LINEAR;
    state.mag_filter = NOCTURNE_TRIGL_FILTER_LINEAR;
    nocturne_trigl_gl_apply_state(&state);
    nocturne_trigl_gl_bind_texture(4);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_LINEAR);
    CHECK_EQ(last_parameter(GL_TEXTURE_MAG_FILTER), GL_LINEAR);
    CHECK_EQ(last_parameter(GL_TEXTURE_WRAP_S), GL_CLAMP_TO_EDGE);

    // A mip filter in the state, without mipmaps: still one level.
    state.mip_filter = NOCTURNE_TRIGL_MIP_LINEAR;
    nocturne_trigl_mipmaps = 0;
    nocturne_trigl_gl_apply_state(&state);
    nocturne_trigl_gl_bind_texture(4);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_LINEAR);

    nocturne_trigl_mipmaps = 1;
    nocturne_trigl_gl_bind_texture(4);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_LINEAR_MIPMAP_LINEAR);

    state.min_filter = NOCTURNE_TRIGL_FILTER_NEAREST;
    state.mag_filter = NOCTURNE_TRIGL_FILTER_NEAREST;
    nocturne_trigl_gl_apply_state(&state);
    nocturne_trigl_gl_bind_texture(4);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_NEAREST_MIPMAP_LINEAR);
    CHECK_EQ(last_parameter(GL_TEXTURE_MAG_FILTER), GL_NEAREST);

    nocturne_trigl_mipmaps = 0;
    nocturne_trigl_gl_bind_texture(4);
    CHECK_EQ(last_parameter(GL_TEXTURE_MIN_FILTER), GL_NEAREST);
    end();
}

// -----------------------------------------------------------------------------
// The texture cache
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_cache_answers_nothing_for_nothing) {
    const std::vector<unsigned> pixels = image(64);
    gl_recorder::install();
    CHECK_EQ(nocturne_trigl_gl_texture("a.raw", 64, pixels.data(), 0, 0), 0u);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("a.raw", 64), 0u);
    begin();
    CHECK_EQ(nocturne_trigl_gl_texture(nullptr, 64, pixels.data(), 0, 0), 0u);
    CHECK_EQ(nocturne_trigl_gl_texture("a.raw", 0, pixels.data(), 0, 0), 0u);
    CHECK_EQ(nocturne_trigl_gl_texture_cached(nullptr, 64), 0u);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("a.raw", 0), 0u);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("a.raw", 64), 0u);
    // A name with no pixels yet is held, with no texture to show for it.
    CHECK_EQ(nocturne_trigl_gl_texture("a.raw", 64, nullptr, 0, 0), 0u);
    CHECK_EQ(gl_recorder::state().count("GenTextures"), 0);
    end();
}

// A refresh uploads into the texture already there; a driver that hands out no
// name is no texture; one with no way to read the binding back has it put
// back as none.
NOCTURNE_TEST(a_refresh_reuses_the_texture_it_has) {
    const std::vector<unsigned> pixels = image(64);
    begin();
    gl_recorder::State &s = gl_recorder::state();
    const unsigned first = nocturne_trigl_gl_texture("a.raw", 64, pixels.data(), 0, 0);
    CHECK_EQ(nocturne_trigl_gl_texture("a.raw", 64, pixels.data(), 0, 1), first);
    CHECK_EQ(s.count("GenTextures"), 1);
    CHECK_EQ(s.count("TexImage2D"), 2);

    gl.GenTextures = no_names;
    CHECK_EQ(nocturne_trigl_gl_texture("b.raw", 64, pixels.data(), 0, 0), 0u);

    gl_recorder::install();
    gl.GetIntegerv = nullptr;
    s.bound_texture[0] = 5;
    nocturne_trigl_gl_texture("c.raw", 64, pixels.data(), 0, 0);
    CHECK_EQ(s.bound_texture[0], 0u);
    end();
}

// A name longer than an entry holds is the same texture each time it is asked
// for, and two names that agree for as long as an entry holds are one texture.
NOCTURNE_TEST(a_name_longer_than_an_entry_is_still_found) {
    const std::vector<unsigned> pixels = image(64);
    begin();
    const std::string long_name(70, 'q');
    const unsigned first = nocturne_trigl_gl_texture(long_name.c_str(), 64, pixels.data(), 0, 0);
    CHECK(first != 0);
    CHECK_EQ(nocturne_trigl_gl_texture(long_name.c_str(), 64, pixels.data(), 0, 0), first);
    CHECK_EQ(nocturne_trigl_gl_texture_cached(long_name.c_str(), 64), first);
    CHECK_EQ(gl_recorder::state().count("TexImage2D"), 1);

    const std::string same_as_far_as_kept = std::string(63, 'q') + "different";
    CHECK_EQ(nocturne_trigl_gl_texture_cached(same_as_far_as_kept.c_str(), 64), first);
    end();
}

// The cache holds all but one of its slots; the next new name pushes out the
// one used longest ago, and every other name stays where it can be found.
NOCTURNE_TEST(a_full_cache_lets_go_of_the_least_recently_used) {
    const std::vector<unsigned> pixels = image(8);
    begin();
    gl_recorder::State &s = gl_recorder::state();
    const int kHeld = 4095;
    char name[32];
    // Every seventh at another dimension, so a probe passes slots of both.
    auto dimension_of = [](int i) { return (i % 7 == 0) ? 8 : 4; };
    std::vector<unsigned> textures((size_t)kHeld, 0u);
    for (int i = 0; i < kHeld; ++i) {
        snprintf(name, sizeof(name), "n%d", i);
        // The second oldest is a name held without an image.
        textures[(size_t)i] = nocturne_trigl_gl_texture(name, dimension_of(i),
                                                        (i == 1) ? nullptr : pixels.data(), 0, 0);
    }

    // The oldest goes, and its texture with it.
    s.calls.clear();
    nocturne_trigl_gl_texture("x", 4, nullptr, 0, 0);
    CHECK_EQ(s.count("DeleteTextures"), 1);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("DeleteTextures")].b, textures[0]);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("n0", 8), 0u);

    // The next has no texture, so there is nothing to delete.
    s.calls.clear();
    nocturne_trigl_gl_texture("y", 4, nullptr, 0, 0);
    CHECK_EQ(s.count("DeleteTextures"), 0);

    // And with no way to delete, the slot is still let go.
    gl.DeleteTextures = nullptr;
    nocturne_trigl_gl_texture("z", 4, nullptr, 0, 0);
    CHECK_EQ(nocturne_trigl_gl_texture_cached("n2", 4), 0u);

    // Every survivor is still found where it was.
    int found = 0;
    for (int i = 3; i < kHeld; ++i) {
        snprintf(name, sizeof(name), "n%d", i);
        if (nocturne_trigl_gl_texture_cached(name, dimension_of(i)) == textures[(size_t)i])
            ++found;
    }
    CHECK_EQ(found, kHeld - 3);
    gl_recorder::install();
    end();
}

NOCTURNE_TEST(the_renderer_is_named_by_the_driver_once) {
    gl_recorder::install();
    gl.GetString = nullptr;
    CHECK_EQ(std::string(nocturne_trigl_gl_renderer_name()), std::string("OpenGL"));
    gl.GetString = no_string;
    CHECK_EQ(std::string(nocturne_trigl_gl_renderer_name()), std::string("OpenGL"));
    // Kept to the buffer, and kept.
    gl.GetString = long_string;
    CHECK_EQ(std::string(nocturne_trigl_gl_renderer_name()), std::string(127, 'r'));
    gl.GetString = no_string;
    CHECK_EQ(std::string(nocturne_trigl_gl_renderer_name()), std::string(127, 'r'));
}

// -----------------------------------------------------------------------------
// The debugging reports
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_texture_is_dumped_as_the_image_gl_holds) {
    const std::vector<unsigned> pixels = image(4);
    const std::string dir = std::filesystem::temp_directory_path().string();
    const std::string path = dir + "/nocturne_trigl_dump_test.ppm";

    gl_recorder::install();
    CHECK_EQ(nocturne_trigl_gl_dump_texture("t.raw", 4, path.c_str()), 0);
    begin();
    nocturne_trigl_gl_texture("t.raw", 4, pixels.data(), 0, 0);
    nocturne_trigl_gl_texture("empty.raw", 4, nullptr, 0, 0);
    CHECK_EQ(nocturne_trigl_gl_dump_texture(nullptr, 4, path.c_str()), 0);
    CHECK_EQ(nocturne_trigl_gl_dump_texture("missing.raw", 4, path.c_str()), 0);
    CHECK_EQ(nocturne_trigl_gl_dump_texture("empty.raw", 4, path.c_str()), 0);
    CHECK_EQ(nocturne_trigl_gl_dump_texture("t.raw", 4, (dir + "/no/such/dir/x.ppm").c_str()), 0);

    // Half the texels opaque, and the comment counts the other half.
    gl.GetTexImage = half_opaque;
    CHECK_EQ(nocturne_trigl_gl_dump_texture("t.raw", 4, path.c_str()), 4);
    const std::string written = read_file(path);
    CHECK(written.compare(0, 3, "P6\n") == 0);
    CHECK(written.find("t.raw dim=4 transparent_texels=8") != std::string::npos);
    remove(path.c_str());

    // No path is the temporary directory's.
    CHECK_EQ(nocturne_trigl_gl_dump_texture("t.raw", 4, nullptr), 4);
    remove((dir + "/trigl_texture.ppm").c_str());

    gl.GetTexImage = nullptr;
    CHECK_EQ(nocturne_trigl_gl_dump_texture("t.raw", 4, path.c_str()), 0);
    end();
}

// Two names on one GL texture is the shape of a model wearing another's image,
// so the report calls it out.
NOCTURNE_TEST(the_cache_report_lists_every_entry_and_any_shared_texture) {
    const std::vector<unsigned> pixels = image(4);
    const std::string path =
        std::filesystem::temp_directory_path().string() + "/nocturne_trigl_report_test.txt";
    nocturne_trigl_gl_report_textures(nullptr);

    begin();
    nocturne_trigl_gl_texture("plain.raw", 4, nullptr, 0, 0);
    gl.GenTextures = the_same_name;
    nocturne_trigl_gl_texture("one.raw", 4, pixels.data(), 0, 0);
    nocturne_trigl_gl_texture("two.raw", 4, pixels.data(), 0, 0);
    FILE *out = fopen(path.c_str(), "wb");
    CHECK(out != nullptr);
    if (out == nullptr)
        return;
    nocturne_trigl_gl_report_textures(out);
    fclose(out);
    const std::string text = read_file(path);
    remove(path.c_str());
    CHECK(text.find("3 of 4096 resident") != std::string::npos);
    CHECK(text.find("plain.raw") != std::string::npos);
    CHECK(text.find("SHARED gl=42") != std::string::npos);
    gl_recorder::install();
    end();
}

// -----------------------------------------------------------------------------
// Master depth
// -----------------------------------------------------------------------------

NOCTURNE_TEST(depth_is_saved_only_to_a_slot_that_can_be_made) {
    gl_recorder::State &s = gl_recorder::state();
    gl_recorder::install();
    s.scene_fbo = 99;
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 0);
    begin();
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 0); // no scene target
    s.scene_fbo = 99;
    CHECK_EQ(nocturne_trigl_gl_save_depth(-1, 64, 64), 0);
    CHECK_EQ(nocturne_trigl_gl_save_depth(8, 64, 64), 0);

#define TRIGL_DEPTH_NEEDS(member)                                                                  \
    {                                                                                              \
        auto kept = gl.member;                                                                     \
        gl.member = nullptr;                                                                       \
        CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 0);                                      \
        gl.member = kept;                                                                          \
    }
    TRIGL_DEPTH_NEEDS(GenFramebuffers)
    TRIGL_DEPTH_NEEDS(BindFramebuffer)
    TRIGL_DEPTH_NEEDS(GenRenderbuffers)
    TRIGL_DEPTH_NEEDS(RenderbufferStorage)
    TRIGL_DEPTH_NEEDS(FramebufferRenderbuffer)
    TRIGL_DEPTH_NEEDS(BlitFramebuffer)
#undef TRIGL_DEPTH_NEEDS

    // An incomplete framebuffer is let go.
    gl.CheckFramebufferStatus = incomplete;
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 0);
    CHECK_EQ(s.count("DeleteFramebuffers"), 1);

    // Made once per size: the same size again reuses it, a new one replaces it.
    // A driver that cannot report completeness is taken at its word.
    gl.CheckFramebufferStatus = nullptr;
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 1);
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 64), 1);
    CHECK_EQ(s.count("GenFramebuffers"), 2);
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 64, 32), 1);
    CHECK_EQ(nocturne_trigl_gl_save_depth(0, 32, 32), 1);
    CHECK_EQ(s.count("GenFramebuffers"), 4);
    CHECK_EQ(s.count("DeleteFramebuffers"), 3);

    gl.DeleteFramebuffers = nullptr;
    gl.DeleteRenderbuffers = nullptr;
    nocturne_trigl_gl_release_depth();
    gl_recorder::install();
    end();
}

// A restore copies the box back, flipped to GL's rows; an empty box is done
// already; a slot never saved has nothing to give.
NOCTURNE_TEST(depth_is_restored_from_a_saved_slot_in_a_box) {
    gl_recorder::State &s = gl_recorder::state();
    gl_recorder::install();
    s.scene_fbo = 99;
    CHECK_EQ(nocturne_trigl_gl_restore_depth(0, 0, 0, 8, 8, 64, 64), 0);
    begin();
    CHECK_EQ(nocturne_trigl_gl_restore_depth(0, 0, 0, 8, 8, 64, 64), 0);
    s.scene_fbo = 99;
    CHECK_EQ(nocturne_trigl_gl_restore_depth(-1, 0, 0, 8, 8, 64, 64), 0);
    CHECK_EQ(nocturne_trigl_gl_restore_depth(8, 0, 0, 8, 8, 64, 64), 0);
    CHECK_EQ(nocturne_trigl_gl_restore_depth(1, 0, 0, 8, 8, 64, 64), 0);

    CHECK_EQ(nocturne_trigl_gl_save_depth(1, 64, 64), 1);
    nocturne_trigl_stats_reset();
    s.calls.clear();
    CHECK_EQ(nocturne_trigl_gl_restore_depth(1, 4, 2, 20, 10, 64, 64), 1);
    CHECK_EQ(s.count("BlitFramebuffer"), 1);
    CHECK_EQ(nocturne_trigl_stats.depth_rect_max_x, 20);
    CHECK_EQ(nocturne_trigl_stats.depth_rect_max_y, 10);
    // A smaller box leaves the high-water marks where they were.
    CHECK_EQ(nocturne_trigl_gl_restore_depth(1, 0, 0, 2, 2, 64, 64), 1);
    CHECK_EQ(nocturne_trigl_stats.depth_rect_max_x, 20);
    CHECK_EQ(nocturne_trigl_stats.depth_rect_max_y, 10);

    s.calls.clear();
    CHECK_EQ(nocturne_trigl_gl_restore_depth(1, 5, 0, 5, 8, 64, 64), 1);
    CHECK_EQ(nocturne_trigl_gl_restore_depth(1, 0, 6, 8, 6, 64, 64), 1);
    CHECK_EQ(s.count("BlitFramebuffer"), 0);
    nocturne_trigl_gl_release_depth();
    end();
}

// -----------------------------------------------------------------------------
// Drawing a batch
// -----------------------------------------------------------------------------

// Nothing to draw is no draw, and a renderer that is not up draws nothing.
NOCTURNE_TEST(an_empty_batch_is_no_draw) {
    OneTriangle one;
    gl_recorder::install();
    nocturne_trigl_gl_draw_batch(&one.batch);
    CHECK(gl_recorder::state().calls.empty());
    begin();
    one.batch.vertex_count = 0;
    nocturne_trigl_gl_draw_batch(&one.batch);
    one.batch.vertex_count = 3;
    one.batch.index_count = 0;
    nocturne_trigl_gl_draw_batch(&one.batch);
    CHECK_EQ(gl_recorder::state().count("DrawElements"), 0);
    end();
}

// The buffers grow to the largest batch and are reused, orphaned first, for any
// smaller one after; a driver without glBufferSubData refills them whole. The
// viewport is the target's once there is one.
NOCTURNE_TEST(a_batch_reuses_its_buffers_once_they_are_big_enough) {
    OneTriangle one;
    begin();
    gl_recorder::State &s = gl_recorder::state();
    nocturne_trigl_gl_draw_batch(&one.batch);
    CHECK_EQ(s.count("Viewport"), 0);
    CHECK_EQ(s.count("BufferData"), 2);
    CHECK_EQ(s.count("BufferSubData"), 0);

    nocturne_trigl_gl_set_target_size(64, 48);
    s.calls.clear();
    nocturne_trigl_gl_draw_batch(&one.batch);
    CHECK_EQ(s.count("Viewport"), 1);
    CHECK_EQ(s.count("BufferSubData"), 2);

    gl.BufferSubData = nullptr;
    s.calls.clear();
    nocturne_trigl_gl_draw_batch(&one.batch);
    CHECK_EQ(s.count("BufferData"), 4);
    CHECK_EQ(s.count("DrawElements"), 1);
    end();
}

NOCTURNE_TEST_MAIN()
