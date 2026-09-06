// =============================================================================
// TRIGL DEVICE — the frame, and the CPU image the engine shares with it
// =============================================================================
//
// See trigl_device.h.

#include "shim_config.h"

#if NOCTURNE_GL_PRESENT

#include "renderer/trigl_device.h"
#include "renderer/trigl_gl.h"
#include "renderer/trigl_batch.h"
#include "gl/gl_api.h"
#include "gl/gl_present.h"
#include "core/debug_log.h"

#include <stdlib.h>
#include <string.h>

namespace {

// The engine composites above 480 lines into a buffer of this size and hands it
// over to be stretched, so it is fixed rather than following the mode.
const int kHoldWidth  = 640;
const int kHoldHeight = 480;

// One batch's worth of geometry. Indices are 16-bit, so a batch can address
// 65536 vertices; half of that is well past what any run of polygons sharing a
// state reaches, and costs about a megabyte.
const int kBatchVertices = 32768;
const int kBatchIndices  = 98304;

struct Device {
    struct CExternalRendererBridge *bridge = nullptr;

    int width  = 0;
    int height = 0;
    int bpp    = 0;

    // The CPU mirror of the target, and one pointer per row for the engine to
    // address it by. The engine keeps the pointer array it is given, so it is
    // owned here for the life of the mode.
    unsigned char *image      = nullptr;
    int            pitch      = 0;
    void         **scanlines  = nullptr;

    unsigned char *hold       = nullptr;
    int            hold_pitch = 0;
    void         **hold_lines = nullptr;

    // The array the engine was handed at setVideoMode2 and goes on addressing
    // the frame through. Locking the hold buffer REPLACES its entries with the
    // hold buffer's rows and unlocking puts the frame's back, which is how the
    // engine composites into one buffer and presents from another without
    // knowing it changed.
    void         **engine_scanlines = nullptr;
    int            engine_scanline_count = 0;

    bool in_scene     = false;
    bool frame_locked = false;
    bool open         = false;

    // Whether the target holds anything the CPU image does not. Set by drawing
    // and by a clear; cleared once the two agree again.
    //
    // This decides whether locking reads the target back, and getting it wrong
    // is invisible in one direction and fatal in the other. The engine draws its
    // 2D straight into the CPU image — g_ScreenBufferArray points at it and is
    // never repointed — so a lock that reads back unconditionally erases
    // whatever was drawn since the last unlock. A screen with no 3D on it, the
    // pause menu among them, would never appear at all.
    bool target_ahead = false;

    NocturneTriglScreenVertex *batch_vertices = nullptr;
    unsigned short            *batch_indices  = nullptr;
    NocturneTriglBatch         batch;
};

Device g_dev;

void free_mode_storage() {
    free(g_dev.image);
    free(g_dev.scanlines);
    free(g_dev.hold);
    free(g_dev.hold_lines);
    g_dev.image      = nullptr;
    g_dev.scanlines  = nullptr;
    g_dev.hold       = nullptr;
    g_dev.hold_lines = nullptr;
    g_dev.engine_scanlines      = nullptr;
    g_dev.engine_scanline_count = 0;
}

bool gl_format_for_bpp(int bpp, GLenum *format, GLenum *type) {
    switch (bpp) {
        case 16: *format = GL_RGB;  *type = GL_UNSIGNED_SHORT_5_6_5; return true;
        case 32: *format = GL_BGRA; *type = GL_UNSIGNED_BYTE;        return true;
        default: return false;
    }
}

// GL reads a target bottom-up; the engine addresses its image top-down.
void flip_rows(unsigned char *base, int pitch, int rows) {
    unsigned char *scratch = (unsigned char *)malloc((size_t)pitch);
    if (scratch == nullptr) return;
    for (int y = 0; y < rows / 2; ++y) {
        unsigned char *top    = base + (size_t)y * (size_t)pitch;
        unsigned char *bottom = base + (size_t)(rows - 1 - y) * (size_t)pitch;
        memcpy(scratch, top, (size_t)pitch);
        memcpy(top, bottom, (size_t)pitch);
        memcpy(bottom, scratch, (size_t)pitch);
    }
    free(scratch);
}

}  // namespace

void nocturne_trigl_device_set_bridge(struct CExternalRendererBridge *bridge) {
    g_dev.bridge = bridge;
}

struct CExternalRendererBridge *nocturne_trigl_device_bridge(void) {
    return g_dev.bridge;
}

int nocturne_trigl_device_open(void) {
    if (g_dev.open) return 1;
    if (!nocturne_gl_ensure_active()) {
        DLOG("render","trigl_device: no GL context");
        return 0;
    }
    if (!nocturne_trigl_gl_init()) return 0;

    g_dev.batch_vertices = (NocturneTriglScreenVertex *)malloc(
        sizeof(NocturneTriglScreenVertex) * (size_t)kBatchVertices);
    g_dev.batch_indices = (unsigned short *)malloc(
        sizeof(unsigned short) * (size_t)kBatchIndices);
    if (g_dev.batch_vertices == nullptr || g_dev.batch_indices == nullptr) {
        DLOG("render","trigl_device: could not allocate the batch");
        return 0;
    }
    g_dev.batch.vertices        = g_dev.batch_vertices;
    g_dev.batch.indices         = g_dev.batch_indices;
    g_dev.batch.vertex_capacity = kBatchVertices;
    g_dev.batch.index_capacity  = kBatchIndices;
    nocturne_trigl_batch_reset(&g_dev.batch);

    g_dev.open = true;
    return 1;
}

void nocturne_trigl_device_close(void) {
    nocturne_trigl_gl_shutdown();
    free_mode_storage();
    free(g_dev.batch_vertices);
    free(g_dev.batch_indices);
    g_dev.batch_vertices = nullptr;
    g_dev.batch_indices  = nullptr;
    g_dev.in_scene     = false;
    g_dev.frame_locked = false;
    g_dev.open         = false;
    g_dev.width = g_dev.height = g_dev.bpp = 0;
}

int nocturne_trigl_device_set_mode(int width, int height, int bpp, void **scanlines) {
    if (!g_dev.open || width <= 0 || height <= 0) return 0;
    const bool mode_moved =
        (width != g_dev.width) || (height != g_dev.height) || (bpp != g_dev.bpp);
    GLenum format = 0, type = 0;
    if (!gl_format_for_bpp(bpp, &format, &type)) {
        DLOG("render","trigl_device: %d bits per pixel is not a mode this renderer has", bpp);
        return 0;
    }
    if (!nocturne_gl_scene_target_bind(width, height)) {
        DLOG("render","trigl_device: no scene target at %dx%d", width, height);
        return 0;
    }

    free_mode_storage();
    const int bytes = bpp / 8;
    g_dev.width  = width;
    g_dev.height = height;
    g_dev.bpp    = bpp;
    g_dev.pitch  = width * bytes;
    g_dev.image  = (unsigned char *)calloc((size_t)g_dev.pitch * (size_t)height, 1);
    g_dev.scanlines = (void **)calloc((size_t)height, sizeof(void *));
    g_dev.hold_pitch = kHoldWidth * bytes;
    g_dev.hold       = (unsigned char *)calloc((size_t)g_dev.hold_pitch * (size_t)kHoldHeight, 1);
    g_dev.hold_lines = (void **)calloc((size_t)kHoldHeight, sizeof(void *));
    if (g_dev.image == nullptr || g_dev.scanlines == nullptr ||
        g_dev.hold == nullptr || g_dev.hold_lines == nullptr) {
        DLOG("render","trigl_device: could not allocate the %dx%d image", width, height);
        free_mode_storage();
        return 0;
    }
    for (int y = 0; y < height; ++y) {
        g_dev.scanlines[y] = g_dev.image + (size_t)y * (size_t)g_dev.pitch;
    }
    for (int y = 0; y < kHoldHeight; ++y) {
        g_dev.hold_lines[y] = g_dev.hold + (size_t)y * (size_t)g_dev.hold_pitch;
    }
    g_dev.engine_scanlines      = scanlines;
    g_dev.engine_scanline_count = height;
    if (scanlines != nullptr) {
        memcpy(scanlines, g_dev.scanlines, (size_t)height * sizeof(void *));
    }

    nocturne_trigl_gl_set_target_size(width, height);
    nocturne_gl_set_logical_size(width, height);
    // A resolution the engine actually moved to drops the texture cache. The
    // cache is keyed on the engine's name for an image and the dimension it is
    // working at, and neither of those pins the PIXELS: the engine reloads its
    // assets around a resolution change, so a name can come back describing a
    // different image at the same dimension. Serving the resident one then puts
    // somebody else's texture on the geometry.
    //
    // Only when the mode moved. setVideoMode is re-asserted with the mode it
    // already has often enough that dropping the cache every time would
    // re-expand every resident image for nothing.
    if (mode_moved) {
        nocturne_trigl_gl_release_textures();
    }
    DLOG("render","trigl_device: mode %dx%d at %d bpp%s", width, height, bpp,
              mode_moved ? ", textures dropped" : "");
    return 1;
}

int nocturne_trigl_device_width(void)  { return g_dev.width; }
int nocturne_trigl_device_height(void) { return g_dev.height; }
int nocturne_trigl_device_bpp(void)    { return g_dev.bpp; }

int nocturne_trigl_device_begin_scene(void) {
    if (!g_dev.open || g_dev.in_scene) return 0;
    g_dev.in_scene = true;
    return 1;
}

int nocturne_trigl_device_end_scene(void) {
    if (!g_dev.in_scene) return 0;
    nocturne_trigl_device_flush();
    g_dev.in_scene = false;
    return 1;
}

int nocturne_trigl_device_in_scene(void) { return g_dev.in_scene ? 1 : 0; }

void nocturne_trigl_device_flush(void) {
    if (g_dev.batch.index_count <= 0) {
        nocturne_trigl_batch_reset(&g_dev.batch);
        return;
    }
    nocturne_trigl_gl_draw_batch(&g_dev.batch);
    nocturne_trigl_batch_reset(&g_dev.batch);
    g_dev.target_ahead = true;
}

int nocturne_trigl_device_lock_frame(void) {
    if (!g_dev.open || g_dev.image == nullptr) return 0;
    // Geometry has to have landed before the target can be read.
    if (g_dev.in_scene) nocturne_trigl_device_end_scene();

    // Nothing has been drawn since the two last agreed, so the CPU image is the
    // newer of the pair and reading the target back would overwrite it.
    if (!g_dev.target_ahead) {
        g_dev.frame_locked = true;
        return 1;
    }

    GLenum format = 0, type = 0;
    if (!gl_format_for_bpp(g_dev.bpp, &format, &type)) return 0;

    gl.PixelStorei(GL_PACK_ALIGNMENT, 1);
    gl.PixelStorei(GL_PACK_ROW_LENGTH, g_dev.pitch / (g_dev.bpp / 8));
    // With a scene target bound the frame is in its colour attachment; GL_BACK
    // means the default framebuffer and would read the previous present.
    gl.ReadBuffer(nocturne_gl_scene_target_active() ? GL_COLOR_ATTACHMENT0 : GL_BACK);
    gl.ReadPixels(0, 0, (GLsizei)g_dev.width, (GLsizei)g_dev.height, format, type,
                  g_dev.image);
    gl.PixelStorei(GL_PACK_ROW_LENGTH, 0);
    flip_rows(g_dev.image, g_dev.pitch, g_dev.height);

    g_dev.target_ahead = false;
    g_dev.frame_locked = true;
    return 1;
}

int nocturne_trigl_device_unlock_frame(void) {
    if (!g_dev.frame_locked) return 0;
    g_dev.frame_locked = false;
    // The CPU image is now the composited truth: the 3D read back at lock with
    // the engine's 2D drawn over it. It goes back so the target stays the one
    // place the finished frame lives.
    nocturne_gl_scene_upload(g_dev.image, g_dev.width, g_dev.height,
                             g_dev.pitch, g_dev.bpp);
    nocturne_trigl_gl_invalidate_state();
    g_dev.target_ahead = false;
    return 1;
}

int nocturne_trigl_device_frame_locked(void) { return g_dev.frame_locked ? 1 : 0; }

// The picture held across a mode change, and the mode it describes.
static unsigned char *g_saved_screen        = nullptr;
static int            g_saved_width         = 0;
static int            g_saved_height        = 0;
static int            g_saved_bpp           = 0;
static int            g_saved_pitch         = 0;

int nocturne_trigl_device_save_screen(void) {
    if (!g_dev.open || g_dev.image == nullptr || g_dev.height <= 0) return 0;
    const size_t bytes = (size_t)g_dev.pitch * (size_t)g_dev.height;
    unsigned char *copy = (unsigned char *)malloc(bytes);
    if (copy == nullptr) return 0;
    memcpy(copy, g_dev.image, bytes);
    free(g_saved_screen);
    g_saved_screen = copy;
    g_saved_width  = g_dev.width;
    g_saved_height = g_dev.height;
    g_saved_bpp    = g_dev.bpp;
    g_saved_pitch  = g_dev.pitch;
    DLOG("render","trigl_device: holding a %dx%d screen across the mode change",
              g_saved_width, g_saved_height);
    return 1;
}

int nocturne_trigl_device_restore_screen(void) {
    if (g_saved_screen == nullptr || !g_dev.open || g_dev.image == nullptr) return 0;
    if (g_saved_width != g_dev.width || g_saved_height != g_dev.height ||
        g_saved_bpp != g_dev.bpp || g_saved_pitch != g_dev.pitch) {
        DLOG("render","trigl_device: the held screen is %dx%d at %d bpp and the mode is "
                  "%dx%d at %d bpp, so it no longer describes the screen",
                  g_saved_width, g_saved_height, g_saved_bpp,
                  g_dev.width, g_dev.height, g_dev.bpp);
        return 0;
    }
    memcpy(g_dev.image, g_saved_screen, (size_t)g_dev.pitch * (size_t)g_dev.height);
    // Both halves, or the next lock reads a target that disagrees with the CPU
    // image and the picture comes back only to be overwritten.
    nocturne_gl_scene_upload(g_dev.image, g_dev.width, g_dev.height,
                             g_dev.pitch, g_dev.bpp);
    nocturne_trigl_gl_invalidate_state();
    g_dev.target_ahead = false;
    return 1;
}

int nocturne_trigl_device_lock_hold_buffer(void) {
    if (!g_dev.open || g_dev.hold == nullptr) return 0;
    if (g_dev.in_scene) nocturne_trigl_device_end_scene();
    if (g_dev.engine_scanlines == nullptr) return 0;

    // Never more rows than the engine's array holds. The hold buffer is only
    // reached above 480 lines, so it always fits, but the array's length is the
    // engine's to decide and writing past it lands in whatever global follows.
    int rows = kHoldHeight;
    if (rows > g_dev.engine_scanline_count) rows = g_dev.engine_scanline_count;
    memcpy(g_dev.engine_scanlines, g_dev.hold_lines, (size_t)rows * sizeof(void *));
    return 1;
}

int nocturne_trigl_device_unlock_hold_buffer(void) {
    if (!g_dev.open || g_dev.hold == nullptr) return 0;
    if (g_dev.engine_scanlines != nullptr) {
        memcpy(g_dev.engine_scanlines, g_dev.scanlines,
               (size_t)g_dev.engine_scanline_count * sizeof(void *));
    }
    // Drawn across the whole target, which is the stretch the engine's own blit
    // performs from a 640x480 hold buffer to a larger screen.
    nocturne_gl_scene_upload(g_dev.hold, kHoldWidth, kHoldHeight,
                             g_dev.hold_pitch, g_dev.bpp);
    nocturne_trigl_gl_invalidate_state();
    g_dev.target_ahead = false;
    return 1;
}

void nocturne_trigl_device_clear_color(void) {
    nocturne_trigl_device_flush();
    gl.ClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    // Colour only: the depth buffer has its own clear, and the engine calls
    // them separately because it often keeps depth across a colour clear.
    gl.Clear(GL_COLOR_BUFFER_BIT);
    g_dev.target_ahead = true;
}

void nocturne_trigl_device_clear_depth(void) {
    nocturne_trigl_device_flush();
    // Depth writes have to be on for a clear to land, and a draw may have left
    // them off.
    gl.DepthMask(GL_TRUE);
    gl.ClearDepth(1.0);
    gl.Clear(GL_DEPTH_BUFFER_BIT);
}

void nocturne_trigl_device_clear_depth_box(int left, int right, int top, int bottom) {
    if (right <= left || bottom <= top) return;
    nocturne_trigl_device_flush();
    // Scissor rather than a quad: a clear respects it, and the engine's own
    // box clear is a rectangle fill of the depth surface.
    const int y = g_dev.height - bottom;
    gl.Enable(GL_SCISSOR_TEST);
    gl.Scissor(left, y, right - left, bottom - top);
    gl.DepthMask(GL_TRUE);
    gl.ClearDepth(1.0);
    gl.Clear(GL_DEPTH_BUFFER_BIT);
    gl.Disable(GL_SCISSOR_TEST);
}

void nocturne_trigl_device_present(void) {
    if (g_dev.in_scene) nocturne_trigl_device_end_scene();
    nocturne_trigl_device_flush();
    nocturne_gl_present_scene();
    // Presenting draws a quad of its own with depth testing, blending and
    // culling turned off, and does not put them back. The cache has to be told,
    // or it compares the next draw against a state the pipeline no longer holds
    // and skips the call that would restore it.
    nocturne_trigl_gl_invalidate_state();
}

// The batch is reached by the draw entry points, which live beside this.
NocturneTriglBatch *nocturne_trigl_device_batch(void) {
    return g_dev.open ? &g_dev.batch : nullptr;
}

#else  // !NOCTURNE_GL_PRESENT

#include "renderer/trigl_device.h"
#include "renderer/trigl_batch.h"

int  nocturne_trigl_device_open(void) { return 0; }
void nocturne_trigl_device_close(void) {}
int  nocturne_trigl_device_set_mode(int, int, int, void **) { return 0; }
int  nocturne_trigl_device_width(void)  { return 0; }
int  nocturne_trigl_device_height(void) { return 0; }
int  nocturne_trigl_device_bpp(void)    { return 0; }
int  nocturne_trigl_device_begin_scene(void) { return 0; }
int  nocturne_trigl_device_end_scene(void) { return 0; }
int  nocturne_trigl_device_in_scene(void) { return 0; }
void nocturne_trigl_device_flush(void) {}
int  nocturne_trigl_device_lock_frame(void) { return 0; }
int  nocturne_trigl_device_unlock_frame(void) { return 0; }
int  nocturne_trigl_device_frame_locked(void) { return 0; }
int  nocturne_trigl_device_lock_hold_buffer(void) { return 0; }
int  nocturne_trigl_device_unlock_hold_buffer(void) { return 0; }
void nocturne_trigl_device_clear_color(void) {}
void nocturne_trigl_device_clear_depth(void) {}
void nocturne_trigl_device_clear_depth_box(int, int, int, int) {}
void nocturne_trigl_device_present(void) {}
int  nocturne_trigl_device_save_screen(void) { return 0; }
int  nocturne_trigl_device_restore_screen(void) { return 0; }
void nocturne_trigl_device_set_bridge(struct CExternalRendererBridge *) {}
struct CExternalRendererBridge *nocturne_trigl_device_bridge(void) { return nullptr; }
NocturneTriglBatch *nocturne_trigl_device_batch(void) { return nullptr; }

#endif  // NOCTURNE_GL_PRESENT
