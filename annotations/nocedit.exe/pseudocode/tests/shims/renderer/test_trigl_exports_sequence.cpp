// =============================================================================
// TRIGL ENTRY POINTS — ordering invariants over a whole frame
// =============================================================================
//
// The suite beside this one tests the hardware side directly. This one drives
// the renderer the way the engine does — through the APIDLL entry points, in the
// order a frame arrives — and then asks what actually reached the driver.
//
// That distinction is the whole point. A polygon does not draw when it is
// submitted; it waits in the batch until something flushes it, which is usually
// the NEXT draw. So the moment a draw is set up and the moment it goes out are
// different moments, with engine calls in between, and a check made at the first
// cannot see what was true at the second. A live probe written against this
// renderer reported no fault at all for exactly that reason: it asked what was
// bound when each draw was prepared, which was always right, and never asked
// what was bound when the batch left.
//
// So these tests read the recorded call log and, for each DrawElements, look
// back at what the pipeline held at that point. Nothing is asserted about how
// the renderer gets there.

#include "debug/focus_trace.h"
#include "gl_present_support.h"
#include "gl_recorder.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "renderer/builtin_dll.h"
#include "renderer/trigl_device.h"
#include "renderer/trigl_gl.h"
#include "renderer/trigl_state.h"

#include <cstdio>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

namespace {

// --- the engine side, as little of it as a frame needs -----------------------

struct Engine {
    int blend_mode = 0;
    int current_lighting = 0;
    int current_alpha = 255;
    int console_text_color = 0;
    int clip_left = 0, clip_top = 0, clip_right = 640, clip_bottom = 480;
    int texture_filtering = 0;
    int texture_dimension = 64;
    int texture_bits = 8;
    int system_initialized = 0;
    int agp_texture_mode = 0;
    int rendering_quality = 0;
    int zero = 0;
    void *frame_buffer = nullptr;

    CExternalRendererBridge bridge{};

    Engine() {
        // Everything the renderer may read, pointed at real storage. A null here
        // reads as a default and would quietly change what is under test.
        bridge.red_bit_position = &zero;
        bridge.red_scale_factor = &zero;
        bridge.red_dither_shift = &zero;
        bridge.green_bit_position = &zero;
        bridge.green_scale_factor = &zero;
        bridge.green_dither_shift = &zero;
        bridge.blue_bit_position = &zero;
        bridge.blue_scale_factor = &zero;
        bridge.blue_dither_shift = &zero;
        bridge.blend_mode = &blend_mode;
        bridge.current_lighting = &current_lighting;
        bridge.current_alpha = &current_alpha;
        bridge.console_text_color = &console_text_color;
        bridge.clip_left = &clip_left;
        bridge.clip_top = &clip_top;
        bridge.clip_right = &clip_right;
        bridge.clip_bottom = &clip_bottom;
        bridge.texture_filtering = &texture_filtering;
        bridge.texture_dimension = &texture_dimension;
        bridge.texture_bits = &texture_bits;
        bridge.full_screen_quad_depth = &zero;
        bridge.video_memory_size = &zero;
        bridge.max_texture_size = &zero;
        bridge.frame_buffer_ptr = &frame_buffer;
        bridge.system_initialized = &system_initialized;
        bridge.agp_texture_mode = &agp_texture_mode;
        bridge.processor_type = &zero;
        bridge.rendering_quality = &rendering_quality;
    }
};

// --- the entry points, looked up the way the engine looks them up ------------

typedef int(__cdecl *InitFn)(void *, CExternalRendererBridge *);
typedef int(__cdecl *VoidIntFn)(void);
typedef void(__cdecl *VoidFn)(void);
typedef int(__cdecl *SelectTextureFn)(SMRGLTextureBasic *, int, uchar *, uchar *, uchar *);
typedef int(__cdecl *DrawPolyListFn)(SRenderVertex *, SMRGLPrimitiveQuad **, int, int);
typedef int(__cdecl *SetVideoMode2Fn)(int, int, int, void **);

// Declared where the registry declares it, rather than in a header: the table is
// reached by name at runtime, which is the whole point of an export list.
extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count);

void *entry(const char *name) {
    int count = 0;
    const NocturneBuiltinExport *table = nocturne_trigl_native_exports(&count);
    for (int i = 0; i < count; ++i) {
        if (strcmp(table[i].name, name) == 0)
            return table[i].proc;
    }
    return nullptr;
}

// --- a frame's worth of geometry ---------------------------------------------

std::vector<unsigned> image(int dimension) {
    return std::vector<unsigned>((size_t)(dimension * dimension), 0xff336699u);
}

SMRGLTextureBasic named(const char *name) {
    SMRGLTextureBasic info{};
    strncpy(info.texture_name, name, sizeof(info.texture_name) - 1);
    return info;
}

// Four vertices, one quad, at coordinates that survive clipping.
struct Quad {
    SRenderVertex vertices[4]{};
    SMRGLPrimitiveQuad primitive{};
    SMRGLPrimitiveQuad *list[1] = {&primitive};

    Quad() {
        for (int i = 0; i < 4; ++i) {
            const int x = ((i == 1 || i == 2) ? 200 : 100) << 16;
            const int y = ((i >= 2) ? 200 : 100) << 16;
            vertices[i].projected_vertex.screen_x = x;
            vertices[i].projected_vertex.screen_y = y;
            vertices[i].projected_vertex.transformed_z = 0x10000;
            vertices[i].r = vertices[i].g = vertices[i].b = 0xff00;
            vertices[i].a = 0xff00;
        }
        primitive.base.base.count = 4;
        for (int i = 0; i < 4; ++i) {
            primitive.vertices[i].vertex_index = i;
            primitive.vertices[i].texture_u = (i == 1 || i == 2) ? 0x00ffffff : 0;
            primitive.vertices[i].texture_v = (i >= 2) ? 0x00ffffff : 0;
        }
    }
};

// TEXTURED | DEPTH_TEST | DEPTH_WRITE — an ordinary opaque world draw.
const int kOpaque = 0x001 | 0x040 | 0x080;

struct Frame {
    Engine engine;
    Quad quad;

    void begin() {
        // Tear the renderer down before installing a fresh recorder, and in that
        // order. The renderer keeps its own record of what the pipeline holds,
        // in statics that outlive a test; a new recorder starts with a pipeline
        // that holds nothing. Leaving the record standing across that boundary
        // lets it agree with a draw about state the new pipeline never had, so
        // the call that would set it is skipped as redundant and the test reads
        // the previous test's leftovers. The teardown runs first because it
        // deletes GL objects and needs the recorder that made them.
        if (void *kill = entry("APIDLLkill"))
            ((VoidFn)kill)();
        nocturne_trigl_gl_shutdown();

        gl_recorder::install();
        CHECK(((InitFn)entry("APIDLLinit"))(nullptr, &engine.bridge) == 1);
        ((SetVideoMode2Fn)entry("APIDLLsetVideoMode2"))(640, 480, 32, nullptr);
        ((VoidIntFn)entry("APIDLLbeginScene"))();
        gl_recorder::state().calls.clear();
    }

    void select(SMRGLTextureBasic *info, std::vector<unsigned> &pixels,
                std::vector<unsigned char> &palette) {
        ((SelectTextureFn)entry("APIDLLselectTexture"))(info, engine.texture_dimension,
                                                        (uchar *)pixels.data(),
                                                        (uchar *)palette.data(), nullptr);
    }

    void draw(int render_flags = kOpaque) {
        ((DrawPolyListFn)entry("APIDLLdrawPolyList"))(quad.vertices, quad.list, 1, render_flags);
    }

    void end() {
        ((VoidIntFn)entry("APIDLLendScene"))();
    }
};

// The texture the renderer resolved for a name, so a test can say what a draw
// SHOULD have gone out with without knowing GL's numbering.
unsigned resolved(const char *name, int dimension) {
    return nocturne_trigl_gl_texture_cached(name, dimension);
}

} // namespace

// -----------------------------------------------------------------------------
// The invariant the live probe could not see: a draw goes out with the image it
// asked for, judged at the flush rather than at the setup.
//
// The failure this catches: naming a texture the cache has not seen uploads it,
// uploading binds, and if that binding is left behind then the polygons still
// waiting in the batch are flushed wearing it.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_draw_goes_out_with_the_texture_it_asked_for) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);

    SMRGLTextureBasic coat = named("coat.raw");
    SMRGLTextureBasic face = named("face.raw");

    frame.begin();

    // A draw is set up and its polygons submitted. Nothing has flushed yet.
    frame.select(&coat, pixels, palette);
    frame.draw();
    const unsigned coat_texture = resolved("coat.raw", 64);
    CHECK(coat_texture != 0);

    // The engine now names a texture the cache has never seen. This uploads,
    // and the coat's polygons are still pending.
    frame.select(&face, pixels, palette);
    const unsigned face_texture = resolved("face.raw", 64);
    CHECK(face_texture != 0);
    CHECK(face_texture != coat_texture);

    // A second draw, which flushes the first.
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    CHECK(log.count("DrawElements") >= 1);

    // Every draw carries the texture that was bound when it went out.
    bool saw_coat = false;
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK(call.a == coat_texture || call.a == face_texture);
        if (call.a == coat_texture)
            saw_coat = true;
    }
    // The coat's polygons must have reached the hardware as the coat. If the
    // upload left its binding, this is the check that fails.
    CHECK(saw_coat);
}

NOCTURNE_TEST(an_upload_between_draws_does_not_reach_the_pending_batch) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);

    SMRGLTextureBasic first = named("first.raw");
    frame.begin();
    frame.select(&first, pixels, palette);
    frame.draw();
    const unsigned first_texture = resolved("first.raw", 64);

    // Several uploads while one draw's polygons wait.
    for (int i = 0; i < 4; ++i) {
        char name[32];
        snprintf(name, sizeof(name), "filler%d.raw", i);
        SMRGLTextureBasic filler = named(name);
        frame.select(&filler, pixels, palette);
    }

    // Put the original back and flush by drawing again.
    frame.select(&first, pixels, palette);
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK_EQ(call.a, first_texture);
    }
}

// -----------------------------------------------------------------------------
// A draw never reaches the hardware with no image while texturing is on. That is
// the shape of a texture that failed to resolve, and it renders as flat white or
// black rather than as an error.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(a_textured_draw_never_goes_out_with_nothing_bound) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);
    SMRGLTextureBasic wall = named("wall.raw");

    frame.begin();
    frame.select(&wall, pixels, palette);
    frame.draw();
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    CHECK(log.count("DrawElements") >= 1);
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK(call.a != 0);
    }
}

// -----------------------------------------------------------------------------
// A draw goes out with a program and a vertex array bound. Either missing draws
// nothing at all, with no GL error to say so.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(every_draw_has_a_program_and_a_vertex_array) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);
    SMRGLTextureBasic wall = named("wall.raw");

    frame.begin();
    frame.select(&wall, pixels, palette);
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    CHECK(log.count("DrawElements") >= 1);
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK(call.c != 0); // program
        CHECK(call.d != 0); // vertex array
    }
}

// -----------------------------------------------------------------------------
// Geometry goes out under the depth state its draw asked for, across a present.
//
// Presenting and uploading the scene both draw with state of their own and put
// none of it back — see gl_present_support.cpp, which misbehaves the same way on
// purpose. A frame once went out with no depth test at all because the record of
// what the pipeline held still said otherwise and the re-enable was skipped as
// redundant. It does not look like a depth fault: a model shows its own far side
// through its near one, and counting what each draw ASKS for says nothing,
// because every draw asks correctly. Only the state at the draw answers it.
// -----------------------------------------------------------------------------

NOCTURNE_TEST(depth_survives_a_present) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);
    SMRGLTextureBasic wall = named("wall.raw");

    frame.begin();
    frame.select(&wall, pixels, palette);
    frame.draw();

    // The engine finishes a frame and puts it on screen. Presenting is
    // APIDLLtoggle, not endScene — endScene only flushes — and it is the present
    // that turns depth testing off behind the renderer's back.
    frame.end();
    ((VoidIntFn)entry("APIDLLtoggle"))();
    ((VoidIntFn)entry("APIDLLbeginScene"))();
    frame.select(&wall, pixels, palette);
    frame.draw();
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();

    // The scenario has to have happened, or the rest of this asserts nothing.
    // Something outside the renderer must have turned depth testing off, and a
    // draw must have gone out after it.
    int disabled_at = -1;
    for (int i = 0; i < (int)log.calls.size(); ++i) {
        const gl_recorder::Call &call = log.calls[(size_t)i];
        if (call.name == "Disable" && call.a == GL_DEPTH_TEST)
            disabled_at = i;
    }
    CHECK(disabled_at >= 0);

    int draws_after = 0;
    for (int i = disabled_at + 1; i < (int)log.calls.size(); ++i) {
        const gl_recorder::Call &call = log.calls[(size_t)i];
        if (call.name != "DrawElements")
            continue;
        ++draws_after;
        // kOpaque asks for depth test and depth write.
        CHECK(call.depth_test != 0);
        CHECK(call.depth_write != 0);
    }
    CHECK(draws_after >= 1);
}

NOCTURNE_TEST(depth_survives_the_frame_being_locked_and_unlocked) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);
    SMRGLTextureBasic wall = named("wall.raw");

    frame.begin();
    frame.select(&wall, pixels, palette);
    frame.draw();

    // The engine takes the frame to write 2D into it and hands it back. The
    // upload that follows disturbs the same state a present does. Locking ends
    // the scene, so drawing again means starting one — which is what the engine
    // does, and without it the draws below are refused and assert nothing.
    ((VoidIntFn)entry("APIDLLlockFrame"))();
    ((VoidIntFn)entry("APIDLLunlockFrame"))();

    ((VoidIntFn)entry("APIDLLbeginScene"))();
    frame.select(&wall, pixels, palette);
    frame.draw();
    frame.draw();
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    CHECK(log.count("DrawElements") >= 1);
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK(call.depth_test != 0);
        CHECK(call.depth_write != 0);
    }
}

// A draw that only tests depth keeps writes off across a depth clear between its
// draws. The clear needs writes on and must not leave them on.
NOCTURNE_TEST(depth_writes_stay_off_across_a_depth_clear) {
    Frame frame;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels = image(64);
    SMRGLTextureBasic wall = named("wall.raw");
    // TEXTURED | DEPTH_TEST, no DEPTH_WRITE.
    const int tested_only = 0x001 | 0x040;

    frame.begin();
    frame.select(&wall, pixels, palette);
    frame.draw(tested_only);
    ((VoidIntFn)entry("APIDLLclearZBuffer"))();
    frame.select(&wall, pixels, palette);
    frame.draw(tested_only);
    frame.end();

    const gl_recorder::State &log = gl_recorder::state();
    CHECK(log.count("DrawElements") >= 2);
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "DrawElements")
            continue;
        CHECK(call.depth_test != 0);
        CHECK(call.depth_write == 0);
    }
}

// The engine names the last row and column it wants cleared, and the shipped
// renderer clears them too.
NOCTURNE_TEST(a_depth_box_clear_includes_its_right_and_bottom_edges) {
    Frame frame;
    frame.begin();
    typedef int(__cdecl * ClearZBoxFn)(int, int, int, int);
    CHECK(((ClearZBoxFn)entry("APIDLLclearZBox"))(10, 19, 20, 29) == 1);

    const gl_recorder::State &log = gl_recorder::state();
    int scissors = 0;
    for (const gl_recorder::Call &call : log.calls) {
        if (call.name != "Scissor")
            continue;
        ++scissors;
        // 480 lines, counted from the bottom: rows 20..29 start at 480 - 30.
        CHECK(call.a == 10);
        CHECK(call.b == 450);
        CHECK(call.c == 10);
        CHECK(call.d == 10);
    }
    CHECK(scissors == 1);
}

// =============================================================================
// Below: every entry point at its edges — no bridge, a bridge with nothing in
// it, arguments the engine does not send but could, and the debugging reports.
// =============================================================================

namespace {

typedef int(__cdecl *DrawPolygonFn)(SRenderVertex *, int, int);
typedef int(__cdecl *DrawPolygon2Fn)(SRenderVertex **, int, int);
typedef int(__cdecl *DrawPolyList2Fn)(SRenderVertex *, SInputFace **, int, int);
typedef int(__cdecl *SetVideoModeFn)(void **);
typedef int(__cdecl *IntFn)(int);
typedef int(__cdecl *RestoreZFn)(int, int, int, int, int);
typedef int(__cdecl *ColorTableFn)(uchar *, ushort *);
typedef int(__cdecl *FogFn)(int, int, int);
typedef void(__cdecl *InformationFn)(void *, CExternalRenderer *);
typedef int(__cdecl *CardListFn)(int *, char **, char **, int *, int *);
typedef int(__cdecl *VideoMemoryFn)(int *, int *, int *);
typedef void(__cdecl *GetDcFn)(HDC *);
typedef void(__cdecl *ReleaseDcFn)(HDC);
typedef int(__cdecl *LineFn)(void *, void *, int);
typedef int(__cdecl *ParticleFn)(void *, int);

template <typename Fn>
Fn api(const char *name) {
    return (Fn)entry(name);
}

// Torn down and brought up again with `bridge`, or none, at a mode, in a scene.
void restart(CExternalRendererBridge *bridge, int width = 640, int height = 480, int bpp = 32) {
    api<VoidFn>("APIDLLkill")();
    nocturne_trigl_gl_shutdown();
    gl_recorder::install();
    gl_present_support::presenter.reset();
    CHECK_EQ(api<InitFn>("APIDLLinit")(nullptr, bridge), 1);
    api<SetVideoMode2Fn>("APIDLLsetVideoMode2")(width, height, bpp, nullptr);
    api<VoidIntFn>("APIDLLbeginScene")();
    gl_recorder::state().calls.clear();
}

// `count` vertices around a centre, each at its own depth and coordinates.
std::vector<SRenderVertex> fan(int count) {
    std::vector<SRenderVertex> vertices((size_t)count);
    for (int i = 0; i < count; ++i) {
        SRenderVertex &v = vertices[(size_t)i];
        v.projected_vertex.screen_x = (100 + (i % 7) * 10) << 16;
        v.projected_vertex.screen_y = (100 + (i % 5) * 10) << 16;
        v.projected_vertex.transformed_z = 0x10000 + ((i % 3) - 1) * 0x100;
        v.u = (i % 4) << 20;
        v.v = (i % 3) << 20;
        v.r = v.g = v.b = v.a = 0xff00;
    }
    return vertices;
}

int draws() {
    return gl_recorder::state().count("DrawElements");
}

std::string read_text(const std::string &path) {
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

std::string temp_path(const char *leaf) {
    return std::filesystem::temp_directory_path().string() + "/" + leaf;
}

} // namespace

// -----------------------------------------------------------------------------
// Describing itself
// -----------------------------------------------------------------------------

// What loadExternalRenderer checks before it resolves anything: any API version,
// feature bit 0, interface 1.x, sixteen functions with an empty table.
NOCTURNE_TEST(the_renderer_describes_itself_as_the_engine_checks) {
    api<InformationFn>("APIDLLInformation")(nullptr, nullptr);
    std::vector<unsigned char> storage(sizeof(CExternalRenderer), 0xAB);
    CExternalRenderer *info = (CExternalRenderer *)storage.data();
    api<InformationFn>("APIDLLInformation")(nullptr, info);
    CHECK_EQ((unsigned)info->api_version, 0xffffu);
    CHECK_EQ((unsigned)info->interface_version >> 8, 1u);
    CHECK_EQ(info->feature_flags.dword & 1u, 1u);
    CHECK_EQ(info->function_count, 16u);
    CHECK_EQ(info->function_table[15], 0u);
    CHECK_EQ(std::string(info->description), std::string("OpenGL"));
}

// One card, named by the driver; every answer is optional to ask for.
NOCTURNE_TEST(there_is_one_card_with_room_to_spare) {
    CHECK_EQ(api<CardListFn>("APIDLLbuildCardList")(nullptr, nullptr, nullptr, nullptr, nullptr),
             1);
    int count = 0, vendor = -1, device = -1;
    char *driver = nullptr;
    char *name = nullptr;
    CHECK_EQ(api<CardListFn>("APIDLLbuildCardList")(&count, &driver, &name, &vendor, &device), 1);
    CHECK_EQ(count, 1);
    CHECK_EQ(std::string(driver), std::string("OpenGL"));
    CHECK(name != nullptr);
    CHECK_EQ(vendor, 0);
    CHECK_EQ(device, 0);
    CHECK_EQ(api<IntFn>("APIDLLselectCard")(0), 1);

    CHECK_EQ(api<VideoMemoryFn>("APIDLLgetVideoMemory")(nullptr, nullptr, nullptr), 1);
    int total = 0, available = 0, type = -1;
    CHECK_EQ(api<VideoMemoryFn>("APIDLLgetVideoMemory")(&total, &available, &type), 1);
    CHECK_EQ(total, 256 * 1024 * 1024);
    CHECK_EQ(available, total);
    CHECK_EQ(type, 0);

    // No device context of its own.
    api<GetDcFn>("APIDLLGetDisplayContext")(nullptr);
    HDC dc = (HDC)&dc;
    api<GetDcFn>("APIDLLGetDisplayContext")(&dc);
    CHECK(dc == nullptr);
    api<ReleaseDcFn>("APIDLLReleaseDisplayContext")(nullptr);
}

// The registry row is the same table whether or not its length is asked for.
NOCTURNE_TEST(the_export_table_is_there_without_its_length) {
    int count = 0;
    const NocturneBuiltinExport *counted = nocturne_trigl_native_exports(&count);
    CHECK_EQ(count, 37);
    CHECK(nocturne_trigl_native_exports(nullptr) == counted);
}

// What the shipped renderer accepts and leaves to the engine's CPU path.
NOCTURNE_TEST(lines_particles_and_mip_levels_are_accepted_and_left_to_the_engine) {
    restart(nullptr);
    CHECK_EQ(api<LineFn>("APIDLLadd3dLine")(nullptr, nullptr, 0), 1);
    CHECK_EQ(api<ParticleFn>("APIDLLaddParticle")(nullptr, 0), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLflushLineList")(), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLflushParticleList")(), 1);
    CHECK_EQ(api<IntFn>("APIDLLsetMipMapLevel")(2), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLrestoreVideoMode")(), 1);
    CHECK_EQ(draws(), 0);
    api<VoidFn>("APIDLLkill")();
}

// -----------------------------------------------------------------------------
// Lifecycle and modes
// -----------------------------------------------------------------------------

NOCTURNE_TEST(without_a_device_the_renderer_does_not_start) {
    api<VoidFn>("APIDLLkill")();
    nocturne_trigl_gl_shutdown();
    gl_recorder::install();
    gl_present_support::presenter.reset();
    gl_present_support::presenter.context = 0;
    CHECK_EQ(api<InitFn>("APIDLLinit")(nullptr, nullptr), 0);
    gl_present_support::presenter.reset();
}

// setVideoMode carries only the rows; the size is whatever setVideoMode2 last
// recorded.
NOCTURNE_TEST(set_video_mode_reuses_the_last_recorded_size) {
    Engine engine;
    restart(&engine.bridge, 320, 200, 16);
    std::vector<void *> rows(200, nullptr);
    CHECK_EQ(api<SetVideoModeFn>("APIDLLsetVideoMode")(rows.data()), 1);
    CHECK_EQ(nocturne_trigl_device_width(), 320);
    CHECK_EQ(nocturne_trigl_device_bpp(), 16);
    CHECK(rows[0] != nullptr);
    api<VoidFn>("APIDLLkill")();
}

// The frame, the hold buffer, the clears and master depth reach the device and
// the hardware through these.
NOCTURNE_TEST(the_frame_entry_points_reach_the_device) {
    Engine engine;
    restart(&engine.bridge, 640, 480, 16);
    gl_recorder::State &s = gl_recorder::state();
    CHECK_EQ(api<VoidIntFn>("APIDLLlockFrame")(), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLunlockFrame")(), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLlockHoldBuffer")(), 0); // no rows handed over
    CHECK_EQ(api<VoidIntFn>("APIDLLunlockHoldBuffer")(), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLclear")(), 1);
    CHECK_EQ(api<VoidIntFn>("APIDLLclearZBuffer")(), 1);
    CHECK_EQ(s.count("Clear"), 2);
    CHECK_EQ(api<VoidIntFn>("APIDLLsync")(), 1);

    s.scene_fbo = 7;
    CHECK_EQ(api<IntFn>("APIDLLmasterZBuffer")(0), 1);
    CHECK_EQ(api<RestoreZFn>("APIDLLrestoreZBuffer")(0, 0, 0, 9, 9), 1);
    CHECK_EQ(s.count("BlitFramebuffer"), 2);

    CHECK_EQ(api<VoidIntFn>("APIDLLtoggle")(), 1);
    CHECK_EQ(gl_present_support::presenter.presents, 1);
    // The lock ended the scene to land its geometry, so there is none to end.
    CHECK_EQ(api<VoidIntFn>("APIDLLendScene")(), 0);
    api<VoidFn>("APIDLLkill")();
}

// The focus trace is told of each frame event while it is armed.
NOCTURNE_TEST(an_armed_focus_trace_hears_every_frame_event) {
    Engine engine;
    restart(&engine.bridge);
    g_nocturne_focus_trace_active = 1;
    api<VoidIntFn>("APIDLLlockFrame")();
    api<VoidIntFn>("APIDLLunlockFrame")();
    api<VoidIntFn>("APIDLLlockHoldBuffer")();
    api<VoidIntFn>("APIDLLunlockHoldBuffer")();
    api<VoidIntFn>("APIDLLclear")();
    api<VoidIntFn>("APIDLLclearZBuffer")();
    typedef int(__cdecl * ClearZBoxFn)(int, int, int, int);
    api<ClearZBoxFn>("APIDLLclearZBox")(0, 1, 0, 1);
    api<IntFn>("APIDLLmasterZBuffer")(0);
    api<RestoreZFn>("APIDLLrestoreZBuffer")(0, 0, 0, 1, 1);
    api<VoidIntFn>("APIDLLtoggle")();
    api<VoidIntFn>("APIDLLendScene")();
    api<VoidIntFn>("APIDLLbeginScene")();
    g_nocturne_focus_trace_active = 0;
    api<VoidFn>("APIDLLkill")();
}

// -----------------------------------------------------------------------------
// The colour table
// -----------------------------------------------------------------------------

namespace {

struct PixelFormat {
    int red_pos = -1, green_pos = -1, blue_pos = -1;
    int red_scale = -1, green_scale = -1, blue_scale = -1;
    int red_dither = -1, green_dither = -1, blue_dither = -1;

    void point(CExternalRendererBridge &b) {
        b.red_bit_position = &red_pos;
        b.green_bit_position = &green_pos;
        b.blue_bit_position = &blue_pos;
        b.red_scale_factor = &red_scale;
        b.green_scale_factor = &green_scale;
        b.blue_scale_factor = &blue_scale;
        b.red_dither_shift = &red_dither;
        b.green_dither_shift = &green_dither;
        b.blue_dither_shift = &blue_dither;
    }
};

} // namespace

// The format the engine draws its 2D in is the CPU image's: RGB565 at 16 bits,
// ARGB8888 otherwise, with the bits each channel loses as its dither shift.
NOCTURNE_TEST(the_colour_table_is_built_in_the_images_format) {
    Engine engine;
    PixelFormat format;
    format.point(engine.bridge);
    std::vector<unsigned char> palette(768, 0);
    palette[3] = 0xF8; // entry 1: red
    palette[4] = 0xFC;
    palette[5] = 0x08;
    std::vector<ushort> table(256, 0);

    restart(&engine.bridge, 640, 480, 16);
    CHECK_EQ(api<ColorTableFn>("APIDLLsetColorTable16")(palette.data(), table.data()), 1);
    CHECK_EQ(format.red_pos, 11);
    CHECK_EQ(format.green_scale, 4);
    CHECK_EQ(format.red_dither, 3);
    CHECK_EQ(format.green_dither, 2);
    CHECK_EQ(format.blue_dither, 3);
    CHECK_EQ((unsigned)table[1], (31u << 11) | (63u << 5) | 1u);

    restart(&engine.bridge, 640, 480, 32);
    CHECK_EQ(api<ColorTableFn>("APIDLLsetColorTable16")(palette.data(), nullptr), 1);
    CHECK_EQ(format.red_pos, 16);
    CHECK_EQ(format.red_scale, 1);
    CHECK_EQ(format.red_dither, 0);

    // No palette, no bridge, or a bridge with nowhere to write: nothing set.
    format = PixelFormat();
    format.point(engine.bridge);
    CHECK_EQ(api<ColorTableFn>("APIDLLsetColorTable16")(nullptr, table.data()), 1);
    CHECK_EQ(format.red_pos, -1);
    CExternalRendererBridge empty{};
    restart(&empty);
    CHECK_EQ(api<ColorTableFn>("APIDLLsetColorTable16")(palette.data(), table.data()), 1);
    restart(nullptr);
    CHECK_EQ(api<ColorTableFn>("APIDLLsetColorTable16")(palette.data(), table.data()), 1);
    api<VoidFn>("APIDLLkill")();
}

NOCTURNE_TEST(the_fog_colour_reaches_the_shader_in_unit_range) {
    Engine engine;
    restart(&engine.bridge);
    CHECK_EQ(api<FogFn>("APIDLLsetFogColor")(255, 0, 51), 1);
    Quad quad;
    api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1,
                                              kOpaque | NOCTURNE_TRIGL_FLAG_SOLIDALPHA);
    api<VoidIntFn>("APIDLLendScene")();
    CHECK(gl_recorder::state().count("Uniform3f") >= 1);
    api<VoidFn>("APIDLLkill")();
}

// -----------------------------------------------------------------------------
// Textures
// -----------------------------------------------------------------------------

// Nothing to upload without a record, pixels and a palette; nothing at a
// dimension the renderer does not work at.
NOCTURNE_TEST(a_texture_needs_its_pixels_and_a_dimension_in_range) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned char> pixels(256 * 256, 1);
    SMRGLTextureBasic wall = named("wall.raw");
    SelectTextureFn select = api<SelectTextureFn>("APIDLLselectTexture");
    select(nullptr, 64, pixels.data(), palette.data(), nullptr);
    select(&wall, 64, nullptr, palette.data(), nullptr);
    select(&wall, 64, pixels.data(), nullptr, nullptr);
    engine.texture_dimension = 0;
    select(&wall, 0, pixels.data(), palette.data(), nullptr);
    engine.texture_dimension = 512;
    select(&wall, 512, pixels.data(), palette.data(), nullptr);
    CHECK_EQ(gl_recorder::state().count("TexImage2D"), 0);

    // Without a bridge there is no dimension to work at.
    restart(nullptr);
    select(&wall, 64, pixels.data(), palette.data(), nullptr);
    CHECK_EQ(gl_recorder::state().count("TexImage2D"), 0);
    api<VoidFn>("APIDLLkill")();
}

// A resident texture is not expanded again; an update is, and an opacity plane
// gives every texel its own alpha, counted when it is none.
NOCTURNE_TEST(an_update_reuploads_and_opacity_is_counted) {
    Engine engine;
    engine.texture_dimension = 8;
    restart(&engine.bridge);
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned char> pixels(64, 1);
    std::vector<unsigned char> opacity(64, 0xFF);
    for (int i = 0; i < 16; ++i)
        opacity[(size_t)i] = 0;
    SMRGLTextureBasic wall = named("wall.raw");
    SelectTextureFn select = api<SelectTextureFn>("APIDLLselectTexture");
    SelectTextureFn update = api<SelectTextureFn>("APIDLLupdateTexture");

    nocturne_trigl_stats_reset();
    select(&wall, 8, pixels.data(), palette.data(), opacity.data());
    select(&wall, 8, pixels.data(), palette.data(), opacity.data());
    CHECK_EQ(nocturne_trigl_stats.uploads, 1u);
    CHECK_EQ(nocturne_trigl_stats.uploads_with_opacity, 1u);
    CHECK_EQ(nocturne_trigl_stats.texels_keyed, 16u);
    update(&wall, 8, pixels.data(), palette.data(), nullptr);
    CHECK_EQ(nocturne_trigl_stats.uploads, 2u);
    CHECK_EQ(gl_recorder::state().count("TexImage2D"), 2);
    api<VoidFn>("APIDLLkill")();
}

// The name a draw is reported by is kept to an entry's width, even when the
// engine's record runs on past it.
NOCTURNE_TEST(a_long_texture_name_is_kept_to_an_entry) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<unsigned char> record(sizeof(SMRGLTextureBasic) + 128, 0);
    SMRGLTextureBasic *info = (SMRGLTextureBasic *)record.data();
    memset(info->texture_name, 'w', 100);
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned char> pixels(64 * 64, 1);
    api<SelectTextureFn>("APIDLLselectTexture")(info, 64, pixels.data(), palette.data(), nullptr);
    Quad quad;
    api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque);
    const std::string path = temp_path("nocturne_trigl_long_name.txt");
    api<VoidIntFn>("APIDLLendScene")();
    CHECK_EQ(nocturne_trigl_dump_draws(path.c_str()), 1);
    const std::string text = read_text(path);
    remove(path.c_str());
    CHECK(text.find(std::string(63, 'w')) != std::string::npos);
    CHECK(text.find(std::string(64, 'w')) == std::string::npos);
    api<VoidFn>("APIDLLkill")();
}

// -----------------------------------------------------------------------------
// Draws
// -----------------------------------------------------------------------------

// Outside a scene, or with nothing to draw, nothing is drawn.
NOCTURNE_TEST(a_draw_needs_a_scene_and_something_to_draw) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<SRenderVertex> vertices = fan(4);
    SRenderVertex *pointers[4] = {&vertices[0], &vertices[1], &vertices[2], &vertices[3]};
    Quad quad;
    SInputFace face{};
    SInputFace *faces[1] = {&face};

    CHECK_EQ(api<DrawPolygonFn>("APIDLLdrawPolygon")(nullptr, 4, kOpaque), 0);
    CHECK_EQ(api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 0, kOpaque), 0);
    CHECK_EQ(api<DrawPolygon2Fn>("APIDLLdrawPolygon2")(pointers, 0, kOpaque), 0);
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(nullptr, quad.list, 1, kOpaque), 0);
    CHECK_EQ(api<DrawPolyList2Fn>("APIDLLdrawPolyList2")(nullptr, faces, 1, kOpaque), 0);

    api<VoidIntFn>("APIDLLendScene")();
    CHECK_EQ(api<DrawPolygon2Fn>("APIDLLdrawPolygon2")(pointers, 4, kOpaque), 0);
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque), 0);
    CHECK_EQ(api<DrawPolyList2Fn>("APIDLLdrawPolyList2")(quad.vertices, faces, 1, kOpaque), 0);
    CHECK_EQ(draws(), 0);
    api<VoidFn>("APIDLLkill")();
}

// Every polygon form draws, at any vertex count, and a list skips the entries
// that are not polygons.
NOCTURNE_TEST(every_polygon_form_draws) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<SRenderVertex> vertices = fan(70);
    CHECK_EQ(api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 70, kOpaque), 1);
    CHECK_EQ(api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 5, kOpaque), 1);

    // A record listing six vertices where its type declares four.
    std::vector<unsigned char> record(sizeof(SMRGLPrimitiveQuad) + 2 * sizeof(SMRGLVertex), 0);
    SMRGLPrimitiveQuad *six = (SMRGLPrimitiveQuad *)record.data();
    six->base.base.count = 6;
    SMRGLVertex *listed = six->vertices;
    for (int i = 0; i < 6; ++i)
        listed[i].vertex_index = i;
    SMRGLPrimitiveQuad two{};
    two.base.base.count = 2;
    SMRGLPrimitiveQuad *list[3] = {six, nullptr, &two};
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(vertices.data(), list, 3, kOpaque), 1);

    SInputFace face{};
    face.vertex_indices.vertex_index_1 = 1;
    face.vertex_indices.vertex_index_2 = 2;
    face.u_coord_1 = 0x100;
    SInputFace *faces[2] = {&face, nullptr};
    CHECK_EQ(api<DrawPolyList2Fn>("APIDLLdrawPolyList2")(vertices.data(), faces, 2, kOpaque), 1);
    api<VoidIntFn>("APIDLLendScene")();
    CHECK_EQ(nocturne_trigl_stats.polygons, 4u);
    CHECK(draws() >= 1);
    api<VoidFn>("APIDLLkill")();
}

// A polygon that does not fit what is queued draws the queue first; one larger
// than a batch can ever hold is dropped rather than overrun it.
NOCTURNE_TEST(a_polygon_too_big_for_the_batch_draws_it_first_or_is_dropped) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<SRenderVertex> vertices = fan(40000);
    api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 3, kOpaque);
    CHECK_EQ(draws(), 0);
    // The queue first, then the polygon itself, which leaves no room for another.
    api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 32767, kOpaque);
    CHECK_EQ(draws(), 2);
    nocturne_trigl_stats_reset();
    api<DrawPolygonFn>("APIDLLdrawPolygon")(vertices.data(), 40000, kOpaque);
    CHECK_EQ(nocturne_trigl_stats.polygons, 0u);
    api<VoidFn>("APIDLLkill")();
}

// No bridge, or one with nothing behind it, reads every engine value as its
// default; neither stops a draw.
NOCTURNE_TEST(a_draw_without_engine_values_takes_the_defaults) {
    Quad quad;
    restart(nullptr);
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque), 1);
    CExternalRendererBridge empty{};
    restart(&empty, 800, 600, 32);
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque), 1);
    api<VoidIntFn>("APIDLLendScene")();
    CHECK_EQ(draws(), 1);
    api<VoidFn>("APIDLLkill")();
}

// The depth curve follows the processor setting when the engine gives a draw
// distance: a w-buffer on one, z on the other.
NOCTURNE_TEST(depth_is_scaled_to_the_draw_distance_on_either_curve) {
    Engine engine;
    int far_depth = 4096;
    int processor = 0;
    engine.bridge.full_screen_quad_depth = &far_depth;
    engine.bridge.processor_type = &processor;
    Quad quad;
    restart(&engine.bridge);
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque), 1);
    processor = 1;
    CHECK_EQ(api<DrawPolyListFn>("APIDLLdrawPolyList")(quad.vertices, quad.list, 1, kOpaque), 1);
    api<VoidIntFn>("APIDLLendScene")();
    CHECK(draws() >= 1);
    api<VoidFn>("APIDLLkill")();
}

// The counters say how many draws blended, went untextured, or asked for a
// texture and had none.
NOCTURNE_TEST(the_draw_counters_say_what_each_draw_was) {
    Engine engine;
    Quad quad;
    restart(&engine.bridge);
    nocturne_trigl_stats_reset();
    DrawPolyListFn draw = api<DrawPolyListFn>("APIDLLdrawPolyList");
    draw(quad.vertices, quad.list, 1, kOpaque); // textured, nothing selected
    draw(quad.vertices, quad.list, 1, kOpaque & ~NOCTURNE_TRIGL_FLAG_TEXTURED);
    draw(quad.vertices, quad.list, 1, kOpaque | NOCTURNE_TRIGL_FLAG_BLEND);
    CHECK_EQ(nocturne_trigl_stats.draws, 3u);
    CHECK_EQ(nocturne_trigl_stats.missing_texture_draws, 2u);
    CHECK_EQ(nocturne_trigl_stats.untextured_draws, 1u);
    CHECK(nocturne_trigl_stats.blended_draws >= 1u);
    api<VoidFn>("APIDLLkill")();
}

// The marked texture can be let through the depth comparison, to see what an
// overlay that loses it would have covered. Only the marked one, and only when
// asked.
NOCTURNE_TEST(the_marked_texture_can_skip_the_depth_comparison) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned char> pixels(64 * 64, 1);
    SMRGLTextureBasic wall = named("wall.raw");
    api<SelectTextureFn>("APIDLLselectTexture")(&wall, 64, pixels.data(), palette.data(), nullptr);
    const unsigned texture = resolved("wall.raw", 64);
    Quad quad;
    DrawPolyListFn draw = api<DrawPolyListFn>("APIDLLdrawPolyList");
    gl_recorder::State &s = gl_recorder::state();

    nocturne_trigl_paint_depth = 1;
    draw(quad.vertices, quad.list, 1, kOpaque); // nothing marked
    nocturne_trigl_paint_texture = (int)(texture + 1);
    draw(quad.vertices, quad.list, 1, kOpaque | NOCTURNE_TRIGL_FLAG_BLEND); // another marked
    nocturne_trigl_paint_texture = (int)texture;
    s.calls.clear();
    draw(quad.vertices, quad.list, 1, kOpaque);
    CHECK_EQ(s.calls[(size_t)s.index_of_last("DepthFunc")].a, (unsigned)GL_ALWAYS);
    nocturne_trigl_paint_depth = 0;
    draw(quad.vertices, quad.list, 1, kOpaque | NOCTURNE_TRIGL_FLAG_BLEND);
    nocturne_trigl_paint_texture = 0;
    api<VoidFn>("APIDLLkill")();
}

// -----------------------------------------------------------------------------
// The draw trace
// -----------------------------------------------------------------------------

// One line per draw, with the span of the image it sampled when it drew
// anything, and a mark on a textured draw that had nothing bound.
NOCTURNE_TEST(the_draw_trace_describes_the_frame_being_built) {
    Engine engine;
    restart(&engine.bridge);
    std::vector<SRenderVertex> vertices = fan(6);
    DrawPolygonFn polygon = api<DrawPolygonFn>("APIDLLdrawPolygon");
    polygon(vertices.data(), 6, kOpaque);
    polygon(vertices.data() + 1, 5, kOpaque);
    SMRGLPrimitiveQuad *none[1] = {nullptr};
    api<DrawPolyListFn>("APIDLLdrawPolyList")(vertices.data(), none, 1,
                                              NOCTURNE_TRIGL_FLAG_DEPTH_TEST);

    const std::string path = temp_path("nocturne_trigl_draws_test.txt");
    CHECK_EQ(nocturne_trigl_dump_draws(path.c_str()), 2);
    const std::string text = read_text(path);
    remove(path.c_str());
    CHECK(text.find("draws in the frame: 2") != std::string::npos);
    CHECK(text.find("<- nothing bound") != std::string::npos);
    CHECK(text.find("texture cache") != std::string::npos);

    // No path is the temporary directory's; a path that cannot be written is
    // nothing written.
    CHECK_EQ(nocturne_trigl_dump_draws(nullptr), 2);
    remove(temp_path("trigl_draws.txt").c_str());
    CHECK_EQ(nocturne_trigl_dump_draws(temp_path("no/such/dir/x.txt").c_str()), 0);
    api<VoidFn>("APIDLLkill")();
}

// A draw continuing the last frame's state starts no new entry, and a frame of
// more draws than the trace holds says how many it lost.
NOCTURNE_TEST(the_draw_trace_is_per_frame_and_bounded) {
    Engine engine;
    Quad quad;
    restart(&engine.bridge);
    DrawPolyListFn draw = api<DrawPolyListFn>("APIDLLdrawPolyList");
    draw(quad.vertices, quad.list, 1, kOpaque);
    api<VoidIntFn>("APIDLLendScene")();
    api<VoidIntFn>("APIDLLbeginScene")();
    draw(quad.vertices, quad.list, 1, kOpaque);
    CHECK_EQ(nocturne_trigl_dump_draws(temp_path("nocturne_trigl_trace_a.txt").c_str()), 0);
    remove(temp_path("nocturne_trigl_trace_a.txt").c_str());

    for (int i = 0; i < 520; ++i) {
        draw(quad.vertices, quad.list, 1, (i % 2) ? kOpaque : (kOpaque & ~0x080));
    }
    const std::string path = temp_path("nocturne_trigl_trace_b.txt");
    CHECK_EQ(nocturne_trigl_dump_draws(path.c_str()), 512);
    const std::string text = read_text(path);
    remove(path.c_str());
    CHECK(text.find("(+8 past the end of the trace)") != std::string::npos);
    api<VoidFn>("APIDLLkill")();
}

NOCTURNE_TEST_MAIN()
