// =============================================================================
// TRIGL — a canonical frame, written down
// =============================================================================
//
// One frame with the shapes a real one has: an opaque textured draw, a second
// texture that arrives mid-frame and uploads, a blended draw, the frame locked
// for the engine's 2D and handed back, and a present. Every call the renderer
// makes is recorded in order and compared against a file in the source tree.
//
// This asserts nothing about whether the frame is right. It asserts that what
// the renderer does to the driver has not changed without someone saying so. The
// invariant suites beside it cover faults already understood; this covers the
// ones nobody has thought of yet, by making any change in behaviour arrive as a
// diff on a readable file instead of as a different picture six weeks later.
//
// When a change is intended:
//
//     NOCTURNE_GOLDEN_UPDATE=1 ctest -R golden
//
// and commit the rewritten trace with the code that caused it.

#include "nocturne_test.h"
#include "gl_recorder.h"
#include "golden_trace.h"

#include "nocturne.h"
#include "renderer/builtin_dll.h"
#include "renderer/trigl_gl.h"

#include <cstring>
#include <vector>

namespace {

extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count);

typedef int(__cdecl *InitFn)(void *, CExternalRendererBridge *);
typedef int(__cdecl *VoidIntFn)(void);
typedef void(__cdecl *VoidFn)(void);
typedef int(__cdecl *SelectTextureFn)(SMRGLTextureBasic *, int, uchar *, uchar *, uchar *);
typedef int(__cdecl *DrawPolyListFn)(SRenderVertex *, SMRGLPrimitiveQuad **, int, int);
typedef int(__cdecl *SetVideoMode2Fn)(int, int, int, void **);

void *entry(const char *name) {
    int count = 0;
    const NocturneBuiltinExport *table = nocturne_trigl_native_exports(&count);
    for (int i = 0; i < count; ++i) {
        if (strcmp(table[i].name, name) == 0) return table[i].proc;
    }
    return nullptr;
}

struct Engine {
    int blend_mode = 0, current_lighting = 0, current_alpha = 255;
    int console_text_color = 0;
    int clip_left = 0, clip_top = 0, clip_right = 640, clip_bottom = 480;
    int texture_filtering = 0, texture_dimension = 64, texture_bits = 8;
    int system_initialized = 0, agp_texture_mode = 0, rendering_quality = 0;
    int zero = 0;
    void *frame_buffer = nullptr;
    CExternalRendererBridge bridge{};

    Engine() {
        bridge.red_bit_position = bridge.red_scale_factor = bridge.red_dither_shift = &zero;
        bridge.green_bit_position = bridge.green_scale_factor = &zero;
        bridge.green_dither_shift = bridge.blue_bit_position = &zero;
        bridge.blue_scale_factor = bridge.blue_dither_shift = &zero;
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

struct Quad {
    SRenderVertex vertices[4]{};
    SMRGLPrimitiveQuad primitive{};
    SMRGLPrimitiveQuad *list[1] = {&primitive};

    Quad() {
        for (int i = 0; i < 4; ++i) {
            vertices[i].projected_vertex.screen_x = ((i == 1 || i == 2) ? 200 : 100) << 16;
            vertices[i].projected_vertex.screen_y = ((i >= 2) ? 200 : 100) << 16;
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

SMRGLTextureBasic named(const char *name) {
    SMRGLTextureBasic info{};
    strncpy(info.texture_name, name, sizeof(info.texture_name) - 1);
    return info;
}

// TEXTURED | DEPTH_TEST | DEPTH_WRITE, and the same with BLEND.
const int kOpaque  = 0x001 | 0x040 | 0x080;
const int kBlended = 0x001 | 0x002 | 0x040;

}  // namespace

NOCTURNE_TEST(a_frame_calls_the_driver_the_way_it_always_has) {
    Engine engine;
    Quad quad;
    std::vector<unsigned char> palette(768, 0x40);
    std::vector<unsigned> pixels((size_t)(64 * 64), 0xff336699u);

    SMRGLTextureBasic wall = named("wall.raw");
    SMRGLTextureBasic glass = named("glass.raw");

    // Teardown first, then a fresh recorder: the renderer's record of the
    // pipeline outlives a test and would otherwise agree with a draw about state
    // the new pipeline never had.
    if (void *kill = entry("APIDLLkill")) ((VoidFn)kill)();
    nocturne_trigl_gl_shutdown();
    gl_recorder::install();

    // Bringing the device up is part of the trace on purpose. Building the
    // program and the vertex array is behaviour too, and a change to either
    // should be as visible as a change to a draw.
    CHECK(((InitFn)entry("APIDLLinit"))(nullptr, &engine.bridge) == 1);
    ((SetVideoMode2Fn)entry("APIDLLsetVideoMode2"))(640, 480, 32, nullptr);

    ((VoidIntFn)entry("APIDLLbeginScene"))();

    // An opaque draw.
    ((SelectTextureFn)entry("APIDLLselectTexture"))(
        &wall, 64, (uchar *)pixels.data(), (uchar *)palette.data(), nullptr);
    ((DrawPolyListFn)entry("APIDLLdrawPolyList"))(quad.vertices, quad.list, 1, kOpaque);

    // A second texture arriving mid-frame, which uploads while the first draw's
    // polygons are still pending.
    ((SelectTextureFn)entry("APIDLLselectTexture"))(
        &glass, 64, (uchar *)pixels.data(), (uchar *)palette.data(), nullptr);
    ((DrawPolyListFn)entry("APIDLLdrawPolyList"))(quad.vertices, quad.list, 1, kBlended);

    // The engine takes the frame to draw its 2D into and hands it back.
    ((VoidIntFn)entry("APIDLLlockFrame"))();
    ((VoidIntFn)entry("APIDLLunlockFrame"))();

    // And the frame goes to the screen.
    ((VoidIntFn)entry("APIDLLtoggle"))();

    CHECK(golden::matches("frame_basic", golden::render(gl_recorder::state())));
}

NOCTURNE_TEST_MAIN()
