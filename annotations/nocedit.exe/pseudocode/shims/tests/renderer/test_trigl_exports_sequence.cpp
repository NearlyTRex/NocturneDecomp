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

#include "nocturne_test.h"
#include "gl_recorder.h"

#include "nocturne.h"
#include "renderer/builtin_dll.h"
#include "renderer/trigl_gl.h"

#include <cstring>
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
        if (strcmp(table[i].name, name) == 0) return table[i].proc;
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
        gl_recorder::install();
        CHECK(((InitFn)entry("APIDLLinit"))(nullptr, &engine.bridge) == 1);
        ((SetVideoMode2Fn)entry("APIDLLsetVideoMode2"))(640, 480, 32, nullptr);
        ((VoidIntFn)entry("APIDLLbeginScene"))();
        gl_recorder::state().calls.clear();
    }

    void select(SMRGLTextureBasic *info, std::vector<unsigned> &pixels,
                std::vector<unsigned char> &palette) {
        ((SelectTextureFn)entry("APIDLLselectTexture"))(
            info, engine.texture_dimension, (uchar *)pixels.data(),
            (uchar *)palette.data(), nullptr);
    }

    void draw() {
        ((DrawPolyListFn)entry("APIDLLdrawPolyList"))(quad.vertices, quad.list, 1, kOpaque);
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

}  // namespace

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
        if (call.name != "DrawElements") continue;
        CHECK(call.a == coat_texture || call.a == face_texture);
        if (call.a == coat_texture) saw_coat = true;
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
        if (call.name != "DrawElements") continue;
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
        if (call.name != "DrawElements") continue;
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
        if (call.name != "DrawElements") continue;
        CHECK(call.c != 0);   // program
        CHECK(call.d != 0);   // vertex array
    }
}

NOCTURNE_TEST_MAIN()
