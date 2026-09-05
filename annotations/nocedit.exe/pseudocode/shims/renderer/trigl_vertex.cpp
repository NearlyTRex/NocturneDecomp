// =============================================================================
// TRIGL VERTEX — engine vertex to screen vertex
// =============================================================================
//
// See trigl_vertex.h. No GL, no globals, no system headers.

#include "renderer/trigl_vertex.h"

namespace {

// The engine's fixed-point scales. Screen coordinates carry 16 fractional bits,
// texture coordinates 24, and colour channels 8.
const float kScreenScale = 1.0f / 65536.0f;
const float kTexcoordScale = 1.0f / 16777216.0f;

// A colour channel packed into a byte position. The mask keeps the exact
// behaviour for a channel that overflows its 8.8 range: the spare bits carry
// into the next field rather than being discarded, which is what the engine's
// own packing does and what a caller feeding an out-of-range channel sees.
unsigned pack_channels(int r, int g, int b) {
    return ((unsigned)(r & 0xffffff00) << 8) |
           ((unsigned)(g & 0xffffff00)) |
           ((unsigned)b >> 8);
}

// A level repeated across R, G and B. Written as the engine writes it, without
// masking to a byte: a level outside 0..255 carries into the neighbouring
// fields instead of wrapping inside its own, and reproducing that costs nothing
// while inventing a mask would be a silent divergence at exactly the inputs
// where the two could differ.
unsigned pack_grey(int level) {
    const unsigned v = (unsigned)level;
    return (v << 16) | (v << 8) | v;
}

}  // namespace

float nocturne_trigl_depth(const NocturneTriglVertexContext *ctx, float eye_z) {
    float scaled = eye_z * ctx->lod_scale;
    if (ctx->w_buffer) {
        // Reciprocal depth: most of the range goes to the near field, where a
        // pixel's depth changes fastest across a triangle. The clamp keeps the
        // reciprocal inside 1/256..1 so the result stays in 0..1 whatever the
        // engine's draw distance is.
        if (scaled < 1.0f) scaled = 1.0f;
        if (scaled > 256.0f) scaled = 256.0f;
        return 1.0f - 1.0f / scaled;
    }
    // Linear in eye space, normalised by the draw distance. Only the far end is
    // clamped: geometry behind the camera has already been rejected, and
    // clamping the near end here would flatten everything in front of it
    // against the same plane.
    if (scaled > 1.0f) scaled = 1.0f;
    return scaled;
}

void nocturne_trigl_convert_vertex(const NocturneTriglVertexContext *ctx,
                                   const NocturneTriglVertexInput *in,
                                   NocturneTriglScreenVertex *out) {
    const unsigned flags = ctx->render_flags;

    out->x = (float)in->screen_x * kScreenScale * ctx->screen_scale_x;
    out->y = (float)in->screen_y * kScreenScale * ctx->screen_scale_y;

    const float eye_z = (float)in->transformed_z;
    out->rhw = ctx->rhw_scale / eye_z;
    out->z   = nocturne_trigl_depth(ctx, eye_z);

    out->u = (float)in->u * kTexcoordScale;
    out->v = (float)in->v * kTexcoordScale;

    // The fog factor rides in the specular alpha: 255 leaves the fragment
    // alone, 0 replaces it with the fog colour outright.
    int fog = 0xff;
    if ((flags & NOCTURNE_TRIGL_FLAG_SOLIDALPHA) != 0) {
        fog = 0xff - (in->a >> 8);
    }

    // A smooth-shaded draw carries a light level per vertex; otherwise every
    // vertex shares the draw's.
    NocturneTriglLighting light = ctx->light;
    nocturne_trigl_vertex_lighting(flags, in->r, &light);

    if ((flags & NOCTURNE_TRIGL_FLAG_TEXTURED) == 0) {
        if ((flags & NOCTURNE_TRIGL_FLAG_VERTEX_COLOR) == 0) {
            // An untextured draw with no colour of its own takes one from the
            // palette, indexed per vertex when smooth-shaded and per draw
            // otherwise.
            unsigned index = (flags & NOCTURNE_TRIGL_FLAG_SMOOTH) != 0
                                 ? (((unsigned)in->u >> 16) & 0xffu)
                                 : (unsigned)(ctx->palette_index & 0xff);
            unsigned rgb = 0;
            if (ctx->palette != nullptr) {
                const unsigned char *entry = ctx->palette + index * 3u;
                rgb = ((unsigned)entry[0] << 16) | ((unsigned)entry[1] << 8) |
                      (unsigned)entry[2];
            }
            out->diffuse = 0xff000000u | rgb;
        } else {
            out->diffuse = 0xff000000u | pack_channels(in->r, in->g, in->b);
        }
        // Nothing modulates an untextured fragment, so the light level's
        // overflow has nowhere to go and the specular carries only the fog.
        out->specular = (unsigned)fog << 24;
        return;
    }

    // Fog in alpha, the light level's overflow across RGB, where it is added
    // to the modulated fragment and blows an over-lit surface toward white.
    out->specular = ((unsigned)fog << 24) | pack_grey(light.overflow);

    // Signed shifts throughout: the channels are signed 8.8, and an out-of-range
    // one has to carry the same way it does in the engine.
    const int alpha = (flags & NOCTURNE_TRIGL_FLAG_VERTEX_ALPHA) != 0
                          ? (in->a >> 8)
                          : ctx->current_alpha;

    if ((flags & NOCTURNE_TRIGL_FLAG_VERTEX_COLOR) != 0) {
        out->diffuse = ((unsigned)alpha << 24) | pack_channels(in->r, in->g, in->b);
        return;
    }

    if (ctx->premultiply && ctx->blend_mode == 1) {
        // Adding premultiplied colour to the destination: the alpha is folded
        // into the light level instead of surviving as alpha, which would scale
        // the contribution a second time.
        const int scaled = (alpha * light.alpha) / 0x100;
        out->diffuse = 0xff000000u | pack_grey(scaled);
        return;
    }
    out->diffuse = ((unsigned)alpha << 24) | pack_grey(light.alpha);
}
