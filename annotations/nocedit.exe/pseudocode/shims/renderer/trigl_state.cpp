// =============================================================================
// TRIGL STATE — render flags to pipeline state
// =============================================================================
//
// See trigl_state.h. No GL, no globals, no system headers.

#include "renderer/trigl_state.h"

unsigned nocturne_trigl_effective_flags(const NocturneTriglStateInput *in) {
    unsigned flags = in->render_flags;

    // An opacity table makes every textured draw a blended one that scales by
    // its own alpha, whatever the caller asked for.
    if (in->texture_opacity_present && (flags & NOCTURNE_TRIGL_FLAG_TEXTURED) != 0) {
        flags |= NOCTURNE_TRIGL_FLAG_BLEND | NOCTURNE_TRIGL_FLAG_SRCALPHA;
    }
    // Scaling by source alpha and carrying a per-vertex fog factor both claim
    // the source's alpha channel. Source alpha wins.
    if ((flags & NOCTURNE_TRIGL_FLAG_SRCALPHA) != 0) {
        flags &= ~(unsigned)NOCTURNE_TRIGL_FLAG_SOLIDALPHA;
    }
    return flags;
}

void nocturne_trigl_pipeline_state(const NocturneTriglStateInput *in,
                                   NocturneTriglPipelineState *out) {
    const unsigned flags = nocturne_trigl_effective_flags(in);

    out->texture_enabled = (flags & NOCTURNE_TRIGL_FLAG_TEXTURED) != 0;
    out->smooth_shading  = (flags & NOCTURNE_TRIGL_FLAG_SMOOTH) != 0;
    out->fog_enabled     = (flags & NOCTURNE_TRIGL_FLAG_SOLIDALPHA) != 0;

    // Blending and alpha testing move together: a draw that blends also drops
    // fully transparent fragments rather than paying for them, and it is the
    // same flag that turns the texture's alpha into the fragment's. The engine
    // really does set all three from one condition — ALPHABLENDENABLE,
    // ALPHATESTENABLE and TEXTUREMAPBLEND (MODULATE against MODULATEALPHA) — so
    // a draw that does not blend keeps the texture's colour and none of its
    // alpha, and nothing is discarded.
    out->blend_enabled          = (flags & NOCTURNE_TRIGL_FLAG_BLEND) != 0;
    out->alpha_test_enabled     = out->blend_enabled;
    out->modulate_texture_alpha = out->blend_enabled;

    out->src_blend = (flags & NOCTURNE_TRIGL_FLAG_SRCALPHA) != 0
                         ? NOCTURNE_TRIGL_BLEND_SRC_ALPHA
                         : NOCTURNE_TRIGL_BLEND_ONE;
    // blend_mode 0 leaves room for what is already there in proportion to the
    // source's alpha; blend_mode 1 adds. Premultiplied colour has already been
    // scaled by alpha, so the source factor stops scaling it a second time.
    if (in->blend_mode == 0) {
        out->dst_blend = NOCTURNE_TRIGL_BLEND_INV_SRC_ALPHA;
        if (in->premultiply) out->src_blend = NOCTURNE_TRIGL_BLEND_SRC_ALPHA;
    } else {
        out->dst_blend = NOCTURNE_TRIGL_BLEND_ONE;
        if (in->premultiply) out->src_blend = NOCTURNE_TRIGL_BLEND_ONE;
    }

    // The two depth bits are independent: test without write is how transparent
    // geometry sorts against the world without occluding the rest of itself,
    // and write without test is how a backdrop seeds the buffer. Neither bit
    // means depth plays no part at all, and the compare has to pass for the
    // write bit to still mean something.
    out->depth_test_enabled  = (flags & (NOCTURNE_TRIGL_FLAG_DEPTH_TEST |
                                         NOCTURNE_TRIGL_FLAG_DEPTH_WRITE)) != 0;
    out->depth_write_enabled = (flags & NOCTURNE_TRIGL_FLAG_DEPTH_WRITE) != 0;
    out->depth_func = (flags & NOCTURNE_TRIGL_FLAG_DEPTH_TEST) != 0
                          ? NOCTURNE_TRIGL_DEPTH_LEQUAL
                          : NOCTURNE_TRIGL_DEPTH_ALWAYS;

    out->min_filter = in->bilinear ? NOCTURNE_TRIGL_FILTER_LINEAR
                                   : NOCTURNE_TRIGL_FILTER_NEAREST;
    out->mag_filter = out->min_filter;
    out->mip_filter = in->mipmapped ? NOCTURNE_TRIGL_MIP_LINEAR
                                    : NOCTURNE_TRIGL_MIP_NONE;
}

namespace {

// A light level arrives as 8.8 fixed point biased by one unit, so unbiasing and
// scaling to 0..255 is a subtract and a shift. Anything past full brightness
// becomes the additive overflow instead of being clamped away.
void split_light(int raw_light, NocturneTriglLighting *out) {
    int alpha = (raw_light - 0x100) >> 4;
    if (alpha > 0xff) {
        int overflow = alpha - 0x100;
        if (overflow > 0xff) overflow = 0xff;
        out->alpha    = 0xff;
        out->overflow = overflow;
        return;
    }
    out->alpha    = alpha;
    out->overflow = 0;
}

}  // namespace

void nocturne_trigl_draw_lighting(unsigned render_flags, int current_lighting,
                                  NocturneTriglLighting *out) {
    if ((render_flags & NOCTURNE_TRIGL_FLAG_LIGHTING) == 0) {
        out->alpha    = 0xff;
        out->overflow = 0;
        return;
    }
    split_light(current_lighting, out);
}

int nocturne_trigl_vertex_lighting(unsigned render_flags, int vertex_red,
                                   NocturneTriglLighting *out) {
    if ((render_flags & NOCTURNE_TRIGL_FLAG_SMOOTH) == 0) {
        return 0;
    }
    if ((render_flags & NOCTURNE_TRIGL_FLAG_VERTEX_COLOR) != 0) {
        out->alpha    = 0xff;
        out->overflow = 0;
        return 1;
    }
    split_light(vertex_red, out);
    return 1;
}
