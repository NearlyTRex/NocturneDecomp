// =============================================================================
// TRIGL EXPORTS — the renderer's entry points, and its row in the DLL registry
// =============================================================================
//
// The engine loads a renderer with LoadLibraryA and GetProcAddress, so a
// renderer is a set of "APIDLL*" functions and nothing else. These are that
// set. Everything below them is the renderer's own: trigl_device owns the frame,
// trigl_gl the hardware, and trigl_state / trigl_vertex / trigl_texture /
// trigl_batch decide what a draw means.
//
// The engine probes 60 of these names and takes a CPU path for any it does not
// find. The 37 implemented here are the ones a shipped renderer answers to, so
// the engine follows exactly the paths it always has.

#include "nocturne.h"

#include "renderer/trigl_batch.h"
#include "renderer/trigl_device.h"
#include "renderer/trigl_gl.h"
#include "renderer/trigl_state.h"
#include "renderer/trigl_texture.h"
#include "renderer/trigl_vertex.h"
#include "renderer/builtin_dll.h"
#include "core/debug_log.h"

#include <stdlib.h>
#include <string.h>

namespace {

// The largest texture the engine works at, so the expansion scratch is
// allocated once rather than per upload.
const int kMaxTextureDimension = 256;

struct Renderer {
    // What selectTexture last named. The image is expanded from these when a
    // texture has to be uploaded.
    const unsigned char *texture_data    = nullptr;
    const unsigned char *texture_palette = nullptr;
    const unsigned char *texture_opacity = nullptr;
    unsigned             texture_object  = 0;

    // The palette an untextured draw takes its colour from, published by
    // setColorTable16 along with the pixel format the engine renders 2D in.
    const unsigned char *color_palette = nullptr;

    int fog_red = 0, fog_green = 0, fog_blue = 0;

    // The state and texture the batch currently holds. A draw that differs from
    // either has to start a new one.
    NocturneTriglPipelineState state;
    unsigned                   state_texture = 0;
    bool                       state_valid   = false;

    unsigned *expanded = nullptr;
    unsigned  packed_palette[256];
};

Renderer g_r;

// The engine builds the bridge ON ITS OWN STACK, inside loadExternalRenderer,
// and passes a pointer to it — which dangles the moment that function returns.
// So it is copied, not kept. Copying is enough because every member is a
// pointer to a live engine global: the values behind them go on changing, and
// only the table of addresses is ours.
CExternalRendererBridge g_bridge;
bool g_bridge_valid = false;

CExternalRendererBridge *bridge() { return g_bridge_valid ? &g_bridge : nullptr; }

int read_bridge(int *slot, int fallback) {
    return (slot != nullptr) ? *slot : fallback;
}

int texture_dimension() {
    CExternalRendererBridge *b = bridge();
    // The dimension a draw works at comes from the engine's own state rather
    // than from the argument selectTexture was called with, which is what the
    // shipped renderer reads too.
    return (b != nullptr) ? read_bridge(b->texture_dimension, 0) : 0;
}

void gather_state(unsigned render_flags, NocturneTriglStateInput *in) {
    CExternalRendererBridge *b = bridge();
    in->render_flags            = render_flags;
    in->blend_mode              = (b != nullptr) ? read_bridge(b->blend_mode, 0) : 0;
    in->texture_opacity_present = (g_r.texture_opacity != nullptr);
    // Premultiplied colour is an ini option the shipped configuration does not
    // set, and the engine zeroes it before reading.
    in->premultiply             = 0;
    // Two bridge fields named for what their read sites do with them: one
    // selects bilinear min/mag filtering, the other a linear mip filter.
    in->bilinear                = (b != nullptr) ? read_bridge(b->system_initialized, 0) : 0;
    in->mipmapped               = (b != nullptr) ? read_bridge(b->rendering_quality, 0) : 0;
}

void gather_vertex_context(unsigned effective_flags, int rhw_scale,
                           NocturneTriglVertexContext *ctx) {
    CExternalRendererBridge *b = bridge();
    ctx->render_flags   = effective_flags;
    ctx->rhw_scale      = (float)rhw_scale;
    ctx->screen_scale_x = 1.0f;
    ctx->screen_scale_y = 1.0f;
    ctx->current_alpha  = (b != nullptr) ? read_bridge(b->current_alpha, 255) : 255;
    ctx->palette_index  = (b != nullptr) ? (read_bridge(b->console_text_color, 0) & 0xff) : 0;
    ctx->palette        = g_r.color_palette;
    ctx->premultiply    = 0;
    ctx->blend_mode     = (b != nullptr) ? read_bridge(b->blend_mode, 0) : 0;
    nocturne_trigl_draw_lighting(effective_flags,
                                 (b != nullptr) ? read_bridge(b->current_lighting, 0) : 0,
                                 &ctx->light);
    // Depth is normalised against the draw distance the engine chose, on the
    // curve its processor setting selects.
    const int far_depth = (b != nullptr) ? read_bridge(b->full_screen_quad_depth, 1) : 1;
    ctx->w_buffer  = (b != nullptr) ? (read_bridge(b->processor_type, 1) == 0) : 0;
    ctx->lod_scale = (far_depth > 0)
                         ? (ctx->w_buffer ? 256.0f / (float)far_depth : 1.0f / (float)far_depth)
                         : 1.0f;
}

// Start a draw: settle the pipeline state and the texture, ending the current
// batch if either has moved, since a batch is one draw with one of each.
void begin_draw(unsigned render_flags, NocturneTriglPipelineState *out_state) {
    NocturneTriglStateInput in;
    gather_state(render_flags, &in);
    nocturne_trigl_pipeline_state(&in, out_state);

    const unsigned texture = out_state->texture_enabled ? g_r.texture_object : 0;
    const bool changed =
        !g_r.state_valid || texture != g_r.state_texture ||
        memcmp(out_state, &g_r.state, sizeof(*out_state)) != 0;
    if (!changed) return;

    nocturne_trigl_device_flush();
    nocturne_trigl_gl_apply_state(out_state);
    nocturne_trigl_gl_bind_texture(texture);
    g_r.state         = *out_state;
    g_r.state_texture = texture;
    g_r.state_valid   = true;
}

// Convert and append one polygon, drawing the batch first if it cannot take it.
void submit_polygon(const NocturneTriglVertexContext *ctx,
                    const NocturneTriglVertexInput *vertices, int count) {
    NocturneTriglBatch *batch = nocturne_trigl_device_batch();
    if (batch == nullptr) return;

    NocturneTriglScreenVertex *slot = nocturne_trigl_batch_add_polygon(batch, count);
    if (slot == nullptr) {
        nocturne_trigl_device_flush();
        slot = nocturne_trigl_batch_add_polygon(batch, count);
        if (slot == nullptr) return;   // larger than the batch can ever hold
    }
    for (int i = 0; i < count; ++i) {
        nocturne_trigl_convert_vertex(ctx, &vertices[i], &slot[i]);
    }
    if (nocturne_trigl_batch_should_flush(batch)) {
        nocturne_trigl_device_flush();
    }
}

void vertex_from_render_vertex(const SRenderVertex *src, NocturneTriglVertexInput *out) {
    out->screen_x      = src->projected_vertex.screen_x;
    out->screen_y      = src->projected_vertex.screen_y;
    out->transformed_z = src->projected_vertex.transformed_z;
    out->u = src->u;
    out->v = src->v;
    out->r = src->r;
    out->g = src->g;
    out->b = src->b;
    out->a = src->a;
}

// Upload the image selectTexture last named, if it is not already resident.
unsigned resolve_texture(SMRGLTextureBasic *info, int refresh) {
    if (info == nullptr || g_r.texture_data == nullptr || g_r.texture_palette == nullptr) {
        return 0;
    }
    const int dimension = texture_dimension();
    if (dimension <= 0 || dimension > kMaxTextureDimension) return 0;

    if (g_r.expanded == nullptr) {
        g_r.expanded = (unsigned *)malloc(sizeof(unsigned) *
                                          (size_t)(kMaxTextureDimension * kMaxTextureDimension));
        if (g_r.expanded == nullptr) return 0;
    }
    nocturne_trigl_pack_palette(g_r.texture_palette, g_r.packed_palette);
    nocturne_trigl_expand_texture(g_r.texture_data, dimension * dimension,
                                  g_r.packed_palette, g_r.texture_opacity, g_r.expanded);

    CExternalRendererBridge *b = bridge();
    const int mipmapped = (b != nullptr) ? read_bridge(b->rendering_quality, 0) : 0;
    return nocturne_trigl_gl_texture(info->texture_name, dimension, g_r.expanded,
                                     mipmapped, refresh);
}

}  // namespace

// =============================================================================
// Lifecycle
// =============================================================================

static int __cdecl trigl_init(HWND window, CExternalRendererBridge *interface) {
    (void)window;
    if (interface != nullptr) {
        g_bridge = *interface;
        g_bridge_valid = true;
    }
    nocturne_trigl_device_set_bridge(g_bridge_valid ? &g_bridge : nullptr);
    if (!nocturne_trigl_device_open()) {
        DDRAW_LOG("trigl: the device could not be opened");
        return 0;
    }
    g_r.state_valid = false;
    return 1;
}

static void __cdecl trigl_kill(void) {
    nocturne_trigl_gl_release_depth();
    nocturne_trigl_device_close();
    free(g_r.expanded);
    g_r.expanded = nullptr;
    g_r.state_valid = false;
}

// The mode the engine last asked for. setVideoMode2 records it and does the
// work; setVideoMode does the same work against whatever was recorded, which is
// the only place the resolution comes from — its own arguments carry the
// scanline array and nothing else.
static int g_mode_width  = 0;
static int g_mode_height = 0;
static int g_mode_bpp    = 0;

static int __cdecl trigl_set_video_mode(void **scanline_ptrs) {
    return nocturne_trigl_device_set_mode(g_mode_width, g_mode_height, g_mode_bpp,
                                          scanline_ptrs);
}

static int __cdecl trigl_set_video_mode2(int width, int height, int bits_per_pixel,
                                         void **screen_buffer_array) {
    g_mode_width  = width;
    g_mode_height = height;
    g_mode_bpp    = bits_per_pixel;
    return trigl_set_video_mode(screen_buffer_array);
}

static int __cdecl trigl_restore_video_mode(void) { return 1; }

static int __cdecl trigl_toggle(void) {
    nocturne_trigl_device_present();
    return 1;
}

static int __cdecl trigl_sync(void) {
    nocturne_trigl_device_flush();
    return 1;
}

// How the renderer describes itself, and the first thing the engine asks for.
// loadExternalRenderer calls this BEFORE resolving a single entry point and
// checks the answer against a reference it builds itself; a renderer that fails
// the check is unloaded and acceleration goes back off, with every APIDLL name
// left unresolved. The reference asks for four things:
//
//   api_version either matching its own 1, or the 0xffff that means "whatever
//   you are running"; feature bit 0 set; an interface version whose high byte
//   is 1; and a function count of exactly 16, with all 16 table entries zero.
//
// Driver version and vendor name are only compared when the reference carries
// them, and it carries neither.
static void __cdecl trigl_information(HMODULE handle, CExternalRenderer *renderer) {
    (void)handle;
    if (renderer == nullptr) return;

    CExternalRenderer info;
    memset(&info, 0, sizeof(info));
    strcpy(info.description, "OpenGL");
    strcpy(info.vendor_name, "Nocturne");
    info.api_version       = 0xffff;
    info.interface_version = 0x100;
    info.driver_version    = 0x100;
    info.function_count    = 0x10;
    info.feature_flags.dword = 3;
    memcpy(renderer, &info, sizeof(info));
}

static int __cdecl trigl_select_card(int card_index) {
    (void)card_index;
    return 1;
}

// One card: the context the process already has.
//
// The name arrays are arrays of POINTERS the renderer fills in with storage of
// its own; the engine does not provide buffers to copy into. Leaving one null
// while reporting a card is what makes the options screen concatenate a null
// string, so the storage is static here and outlives every caller.
static int __cdecl trigl_build_card_list(int *out_count, char **out_drivers, char **out_names,
                                         int *out_vendor_ids, int *out_device_ids) {
    static char driver_name[32] = "OpenGL";
    if (out_count != nullptr) *out_count = 1;
    if (out_drivers != nullptr) out_drivers[0] = driver_name;
    if (out_names != nullptr) out_names[0] = (char *)nocturne_trigl_gl_renderer_name();
    if (out_vendor_ids != nullptr) out_vendor_ids[0] = 0;
    if (out_device_ids != nullptr) out_device_ids[0] = 0;
    return 1;
}

static int __cdecl trigl_get_video_memory(int *total, int *available, int *type) {
    // The engine sizes its texture cache from this. GL does not report video
    // memory portably, so a figure large enough not to constrain it is the
    // honest answer.
    const int megabytes = 256 * 1024 * 1024;
    if (total != nullptr)     *total = megabytes;
    if (available != nullptr) *available = megabytes;
    if (type != nullptr)      *type = 0;
    return 1;
}

static void __cdecl trigl_get_display_context(HDC *out_hdc) {
    if (out_hdc != nullptr) *out_hdc = nullptr;
}

static void __cdecl trigl_release_display_context(HDC hdc) { (void)hdc; }

// =============================================================================
// Frame
// =============================================================================

static int __cdecl trigl_begin_scene(void) { return nocturne_trigl_device_begin_scene(); }
static int __cdecl trigl_end_scene(void)   { return nocturne_trigl_device_end_scene(); }
static int __cdecl trigl_lock_frame(void)  { return nocturne_trigl_device_lock_frame(); }
static int __cdecl trigl_unlock_frame(void){ return nocturne_trigl_device_unlock_frame(); }

static int __cdecl trigl_lock_hold_buffer(void) {
    CExternalRendererBridge *b = bridge();
    void **scanlines = (b != nullptr) ? (void **)b->frame_buffer_ptr : nullptr;
    return nocturne_trigl_device_lock_hold_buffer(scanlines);
}

static int __cdecl trigl_unlock_hold_buffer(void) {
    return nocturne_trigl_device_unlock_hold_buffer();
}

// =============================================================================
// Clears and depth
// =============================================================================

static int __cdecl trigl_clear(void) {
    nocturne_trigl_device_clear_color();
    return 1;
}

static int __cdecl trigl_clear_z_buffer(void) {
    nocturne_trigl_device_clear_depth();
    return 1;
}

static int __cdecl trigl_clear_z_box(int left, int right, int top, int bottom) {
    nocturne_trigl_device_clear_depth_box(left, right, top, bottom);
    return 1;
}

// The engine renders the static world once, keeps its depth in a numbered slot,
// and restores that region instead of clearing on the frames that follow.
static int __cdecl trigl_master_z_buffer(int slot) {
    nocturne_trigl_device_flush();
    return nocturne_trigl_gl_save_depth(slot, nocturne_trigl_device_width(),
                                        nocturne_trigl_device_height());
}

// The parameter names this entry point was reconstructed with do not describe
// it. Read against the body, the first is the SLOT and the remaining four are
// the rectangle, whose right and bottom edges are inclusive.
static int __cdecl trigl_restore_z_buffer(int slot, int left, int top, int right, int bottom) {
    nocturne_trigl_device_flush();
    return nocturne_trigl_gl_restore_depth(slot, left, top, right + 1, bottom + 1,
                                           nocturne_trigl_device_width(),
                                           nocturne_trigl_device_height());
}

// =============================================================================
// Textures
// =============================================================================

static int __cdecl trigl_select_texture(SMRGLTextureBasic *info, int dimension,
                                        uchar *data, uchar *palette, uchar *opacity) {
    (void)dimension;
    g_r.texture_data    = data;
    g_r.texture_palette = palette;
    g_r.texture_opacity = opacity;
    g_r.texture_object  = resolve_texture(info, 0);
    return 1;
}

static int __cdecl trigl_update_texture(SMRGLTextureBasic *info, int dimension,
                                        uchar *data, uchar *palette, uchar *opacity) {
    (void)dimension;
    g_r.texture_data    = data;
    g_r.texture_palette = palette;
    g_r.texture_opacity = opacity;
    // The engine asks for this when a texture's content has changed under a
    // name it has used before, so the cached image is re-uploaded rather than
    // reused.
    g_r.texture_object  = resolve_texture(info, 1);
    return 1;
}

static int __cdecl trigl_set_mip_map_level(int level) {
    (void)level;
    return 1;
}

// Publishes the pixel format the engine renders its 2D in, and converts its
// palette into the 16-bit table it draws with. The format is that of the CPU
// image the engine shares with the device, so it is stated here rather than
// queried from a surface.
static int __cdecl trigl_set_color_table16(uchar *source_palette, ushort *color_table) {
    g_r.color_palette = source_palette;

    CExternalRendererBridge *b = bridge();
    if (b == nullptr || source_palette == nullptr) return 1;

    int red_pos, green_pos, blue_pos, red_scale, green_scale, blue_scale;
    if (nocturne_trigl_device_bpp() == 16) {
        red_pos = 11; green_pos = 5; blue_pos = 0;      // RGB565
        red_scale = 8; green_scale = 4; blue_scale = 8;
    } else {
        red_pos = 16; green_pos = 8; blue_pos = 0;      // ARGB8888
        red_scale = 1; green_scale = 1; blue_scale = 1;
    }
    // The dither shift is the whole-number log2 of the scale: how many bits of
    // a channel the format cannot represent.
    int red_dither = 0, green_dither = 0, blue_dither = 0;
    for (int v = red_scale;   v > 1; v >>= 1) ++red_dither;
    for (int v = green_scale; v > 1; v >>= 1) ++green_dither;
    for (int v = blue_scale;  v > 1; v >>= 1) ++blue_dither;

    if (b->red_bit_position   != nullptr) *b->red_bit_position   = red_pos;
    if (b->green_bit_position != nullptr) *b->green_bit_position = green_pos;
    if (b->blue_bit_position  != nullptr) *b->blue_bit_position  = blue_pos;
    if (b->red_scale_factor   != nullptr) *b->red_scale_factor   = red_scale;
    if (b->green_scale_factor != nullptr) *b->green_scale_factor = green_scale;
    if (b->blue_scale_factor  != nullptr) *b->blue_scale_factor  = blue_scale;
    if (b->red_dither_shift   != nullptr) *b->red_dither_shift   = red_dither;
    if (b->green_dither_shift != nullptr) *b->green_dither_shift = green_dither;
    if (b->blue_dither_shift  != nullptr) *b->blue_dither_shift  = blue_dither;

    if (color_table != nullptr) {
        const uchar *entry = source_palette;
        for (int i = 0; i < 256; ++i) {
            color_table[i] = (ushort)((((unsigned)entry[0] / (unsigned)red_scale) << red_pos) |
                                      (((unsigned)entry[1] / (unsigned)green_scale) << green_pos) |
                                      (((unsigned)entry[2] / (unsigned)blue_scale) << blue_pos));
            entry += 3;
        }
    }
    return 1;
}

static int __cdecl trigl_set_fog_color(int red, int green, int blue) {
    g_r.fog_red = red; g_r.fog_green = green; g_r.fog_blue = blue;
    nocturne_trigl_gl_set_fog_color((float)red / 255.0f, (float)green / 255.0f,
                                    (float)blue / 255.0f);
    return 1;
}

// =============================================================================
// Draws
// =============================================================================

static int __cdecl trigl_draw_polygon2(SRenderVertex **vertex_array, int vertex_count,
                                       int render_flags) {
    if (!nocturne_trigl_device_in_scene() || vertex_count <= 0) return 0;

    NocturneTriglPipelineState state;
    begin_draw((unsigned)render_flags, &state);

    // One reciprocal-w scale for the whole polygon, from its farthest vertex.
    int depths[64];
    int scale;
    if (vertex_count <= (int)(sizeof(depths) / sizeof(depths[0]))) {
        for (int i = 0; i < vertex_count; ++i) {
            depths[i] = vertex_array[i]->projected_vertex.transformed_z;
        }
        scale = nocturne_trigl_max_depth(depths, vertex_count);
    } else {
        scale = vertex_array[0]->projected_vertex.transformed_z;
        for (int i = 1; i < vertex_count; ++i) {
            const int z = vertex_array[i]->projected_vertex.transformed_z;
            if (z > scale) scale = z;
        }
    }

    NocturneTriglStateInput in;
    gather_state((unsigned)render_flags, &in);
    NocturneTriglVertexContext ctx;
    gather_vertex_context(nocturne_trigl_effective_flags(&in), scale, &ctx);

    NocturneTriglVertexInput converted[64];
    NocturneTriglVertexInput *inputs = converted;
    if (vertex_count > (int)(sizeof(converted) / sizeof(converted[0]))) {
        inputs = (NocturneTriglVertexInput *)malloc(sizeof(NocturneTriglVertexInput) *
                                                    (size_t)vertex_count);
        if (inputs == nullptr) return 0;
    }
    for (int i = 0; i < vertex_count; ++i) {
        vertex_from_render_vertex(vertex_array[i], &inputs[i]);
    }
    submit_polygon(&ctx, inputs, vertex_count);
    if (inputs != converted) free(inputs);
    return 1;
}

static int __cdecl trigl_draw_polygon(SRenderVertex *vertices, int vertex_count,
                                      int render_flags) {
    if (vertices == nullptr || vertex_count <= 0) return 0;
    SRenderVertex *stack_pointers[64];
    SRenderVertex **pointers = stack_pointers;
    if (vertex_count > (int)(sizeof(stack_pointers) / sizeof(stack_pointers[0]))) {
        pointers = (SRenderVertex **)malloc(sizeof(SRenderVertex *) * (size_t)vertex_count);
        if (pointers == nullptr) return 0;
    }
    for (int i = 0; i < vertex_count; ++i) pointers[i] = &vertices[i];
    const int result = trigl_draw_polygon2(pointers, vertex_count, render_flags);
    if (pointers != stack_pointers) free(pointers);
    return result;
}

// The list forms submit a reciprocal-w scale of 256 rather than the polygon's
// farthest depth. Both are uniform across a polygon, and a uniform scale cancels
// in the perspective divide, so the two differ only in the precision they keep.
static const int kListRhwScale = 0x100;

static int __cdecl trigl_draw_poly_list(SRenderVertex *vertex_buffer,
                                        SMRGLPrimitiveQuad **polygons,
                                        int polygon_count, int render_flags) {
    if (!nocturne_trigl_device_in_scene() || vertex_buffer == nullptr) return 0;

    NocturneTriglPipelineState state;
    begin_draw((unsigned)render_flags, &state);

    NocturneTriglStateInput in;
    gather_state((unsigned)render_flags, &in);
    NocturneTriglVertexContext ctx;
    gather_vertex_context(nocturne_trigl_effective_flags(&in), kListRhwScale, &ctx);

    for (int p = 0; p < polygon_count; ++p) {
        SMRGLPrimitiveQuad *poly = polygons[p];
        if (poly == nullptr) continue;
        const int count = poly->base.base.count;
        if (count < 3) continue;

        NocturneTriglVertexInput inputs[64];
        const int used = (count > 64) ? 64 : count;
        for (int i = 0; i < used; ++i) {
            const SMRGLVertex &pv = poly->vertices[i];
            vertex_from_render_vertex(&vertex_buffer[pv.vertex_index], &inputs[i]);
            // A polygon carries its own texture coordinates, overriding whatever
            // the shared vertex holds — the same position appears in several
            // polygons with different ones.
            inputs[i].u = pv.texture_u;
            inputs[i].v = pv.texture_v;
        }
        submit_polygon(&ctx, inputs, used);
    }
    return 1;
}

static int __cdecl trigl_draw_poly_list2(SRenderVertex *vertex_buffer, SInputFace **polygons,
                                         int polygon_count, int render_flags) {
    if (!nocturne_trigl_device_in_scene() || vertex_buffer == nullptr) return 0;

    NocturneTriglPipelineState state;
    begin_draw((unsigned)render_flags, &state);

    NocturneTriglStateInput in;
    gather_state((unsigned)render_flags, &in);
    NocturneTriglVertexContext ctx;
    gather_vertex_context(nocturne_trigl_effective_flags(&in), kListRhwScale, &ctx);

    for (int p = 0; p < polygon_count; ++p) {
        SInputFace *face = polygons[p];
        if (face == nullptr) continue;

        // Texture coordinates arrive as 16-bit here and as 8.24 elsewhere, so
        // they are shifted into the same scale before conversion.
        const int indices[3] = { (int)face->vertex_indices.vertex_index_0,
                                 (int)face->vertex_indices.vertex_index_1,
                                 (int)face->vertex_indices.vertex_index_2 };
        const int us[3] = { (int)face->u_coord_0 << 8, (int)face->u_coord_1 << 8,
                            (int)face->u_coord_2 << 8 };
        const int vs[3] = { (int)face->v_coord_0 << 8, (int)face->v_coord_1 << 8,
                            (int)face->v_coord_2 << 8 };

        NocturneTriglVertexInput inputs[3];
        for (int i = 0; i < 3; ++i) {
            vertex_from_render_vertex(&vertex_buffer[indices[i]], &inputs[i]);
            inputs[i].u = us[i];
            inputs[i].v = vs[i];
        }
        submit_polygon(&ctx, inputs, 3);
    }
    nocturne_trigl_device_flush();
    return 1;
}

// =============================================================================
// Lines and particles
// =============================================================================
//
// The engine batches these itself and flushes through the two entry points
// below; the shipped renderer draws neither, and the engine's own CPU path
// covers them.

static int __cdecl trigl_add_3d_line(void *start, void *end, int style) {
    (void)start; (void)end; (void)style;
    return 1;
}

static int __cdecl trigl_add_particle(void *data, int type) {
    (void)data; (void)type;
    return 1;
}

static int __cdecl trigl_flush_line_list(void) { return 1; }
static int __cdecl trigl_flush_particle_list(void) { return 1; }

// =============================================================================
// The registry row
// =============================================================================

static const NocturneBuiltinExport g_TriglExports[] = {
    { "APIDLLGetDisplayContext",     (void *)trigl_get_display_context },
    { "APIDLLInformation",           (void *)trigl_information },
    { "APIDLLReleaseDisplayContext", (void *)trigl_release_display_context },
    { "APIDLLadd3dLine",             (void *)trigl_add_3d_line },
    { "APIDLLaddParticle",           (void *)trigl_add_particle },
    { "APIDLLbeginScene",            (void *)trigl_begin_scene },
    { "APIDLLbuildCardList",         (void *)trigl_build_card_list },
    { "APIDLLclear",                 (void *)trigl_clear },
    { "APIDLLclearZBox",             (void *)trigl_clear_z_box },
    { "APIDLLclearZBuffer",          (void *)trigl_clear_z_buffer },
    { "APIDLLdrawPolyList",          (void *)trigl_draw_poly_list },
    { "APIDLLdrawPolyList2",         (void *)trigl_draw_poly_list2 },
    { "APIDLLdrawPolygon",           (void *)trigl_draw_polygon },
    { "APIDLLdrawPolygon2",          (void *)trigl_draw_polygon2 },
    { "APIDLLendScene",              (void *)trigl_end_scene },
    { "APIDLLflushLineList",         (void *)trigl_flush_line_list },
    { "APIDLLflushParticleList",     (void *)trigl_flush_particle_list },
    { "APIDLLgetVideoMemory",        (void *)trigl_get_video_memory },
    { "APIDLLinit",                  (void *)trigl_init },
    { "APIDLLkill",                  (void *)trigl_kill },
    { "APIDLLlockFrame",             (void *)trigl_lock_frame },
    { "APIDLLlockHoldBuffer",        (void *)trigl_lock_hold_buffer },
    { "APIDLLmasterZBuffer",         (void *)trigl_master_z_buffer },
    { "APIDLLrestoreVideoMode",      (void *)trigl_restore_video_mode },
    { "APIDLLrestoreZBuffer",        (void *)trigl_restore_z_buffer },
    { "APIDLLselectCard",            (void *)trigl_select_card },
    { "APIDLLselectTexture",         (void *)trigl_select_texture },
    { "APIDLLsetColorTable16",       (void *)trigl_set_color_table16 },
    { "APIDLLsetFogColor",           (void *)trigl_set_fog_color },
    { "APIDLLsetMipMapLevel",        (void *)trigl_set_mip_map_level },
    { "APIDLLsetVideoMode",          (void *)trigl_set_video_mode },
    { "APIDLLsetVideoMode2",         (void *)trigl_set_video_mode2 },
    { "APIDLLsync",                  (void *)trigl_sync },
    { "APIDLLtoggle",                (void *)trigl_toggle },
    { "APIDLLunlockFrame",           (void *)trigl_unlock_frame },
    { "APIDLLunlockHoldBuffer",      (void *)trigl_unlock_hold_buffer },
    { "APIDLLupdateTexture",         (void *)trigl_update_texture },
};

extern "C" const NocturneBuiltinExport *nocturne_trigl_native_exports(int *count) {
    if (count != nullptr) {
        *count = (int)(sizeof(g_TriglExports) / sizeof(g_TriglExports[0]));
    }
    return g_TriglExports;
}
