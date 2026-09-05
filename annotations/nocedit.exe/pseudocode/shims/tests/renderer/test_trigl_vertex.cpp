// =============================================================================
// Engine vertex to screen vertex
// =============================================================================
//
// Checked the same way as the state mapping: against an oracle transliterated
// separately from buildTLVertex, over a spread of inputs that crosses every
// path through the packing. The fixed-point scales are pinned by hand as well,
// because an oracle copied from the same reading of the source would agree with
// a wrong scale as readily as with a right one.

#include "tests/nocturne_test.h"
#include "renderer/trigl_vertex.h"

#include <string>

namespace {

// --- the oracle --------------------------------------------------------------
// buildTLVertex written out in its own order, keeping its expressions.
struct OracleVertex {
    float x, y, z, rhw, u, v;
    unsigned diffuse, specular;
};

OracleVertex oracle(const NocturneTriglVertexContext *ctx,
                    const NocturneTriglVertexInput *in) {
    OracleVertex o;
    const unsigned flags = ctx->render_flags;

    o.x = (float)in->screen_x * 1.5258789e-05f * ctx->screen_scale_x;
    o.y = (float)in->screen_y * 1.5258789e-05f * ctx->screen_scale_y;

    float local = (float)in->transformed_z;
    o.rhw = ctx->rhw_scale / local;

    int fog = 0xff;
    if ((flags & 8) != 0) fog = 0xff - (in->a >> 8);

    int light_alpha = ctx->light.alpha;
    int light_overflow = ctx->light.overflow;
    if ((flags & 4) != 0) {
        if ((flags & 0x200) == 0) {
            light_overflow = 0;
            light_alpha = (in->r - 0x100) >> 4;
            if (light_alpha > 0xff) {
                light_overflow = light_alpha - 0x100;
                if (light_overflow > 0xff) light_overflow = 0xff;
                light_alpha = 0xff;
            }
        } else {
            light_overflow = 0;
            light_alpha = 0xff;
        }
    }

    if ((flags & 1) == 0) {
        unsigned diffuse;
        if ((flags & 0x200) == 0) {
            unsigned index = (flags & 4) == 0
                                 ? (unsigned)(ctx->palette_index & 0xff)
                                 : (((unsigned)in->u & 0xff0000u) >> 16);
            const unsigned char *p = ctx->palette + index * 3u;
            diffuse = ((unsigned)(p[0] | 0xffffff00u) << 16) |
                      ((unsigned)p[1] << 8) | (unsigned)p[2];
        } else {
            diffuse = ((unsigned)(in->r & 0xffffff00) << 8) |
                      (unsigned)(in->g & 0xffffff00) | ((unsigned)in->b >> 8) |
                      0xff000000u;
        }
        o.diffuse  = diffuse;
        o.specular = (unsigned)fog << 24;
    } else {
        o.specular = ((unsigned)((fog << 16) | light_overflow) << 8) |
                     ((unsigned)light_overflow << 16) | (unsigned)light_overflow;
        int alpha = (flags & 0x100) == 0 ? ctx->current_alpha : (in->a >> 8);
        if ((flags & 0x200) == 0) {
            if (!ctx->premultiply || ctx->blend_mode != 1) {
                o.diffuse = ((unsigned)((alpha << 16) | light_alpha) << 8) |
                            ((unsigned)light_alpha << 16) | (unsigned)light_alpha;
            } else {
                int la = alpha * light_alpha / 0x100;
                o.diffuse = ((unsigned)(la | 0xffff0000) << 8) |
                            ((unsigned)la << 16) | (unsigned)la;
            }
        } else {
            o.diffuse = ((unsigned)(in->r & 0xffffff00) << 8) |
                        (unsigned)(in->g & 0xffffff00) | ((unsigned)in->b >> 8) |
                        ((unsigned)alpha << 24);
        }
    }

    if (ctx->w_buffer) {
        local = local * ctx->lod_scale;
        if (local < 1.0f) local = 1.0f;
        if (local > 256.0f) local = 256.0f;
        o.z = 1.0f - 1.0f / local;
    } else {
        o.z = local * ctx->lod_scale;
        if (o.z > 1.0f) o.z = 1.0f;
    }

    o.u = (float)in->u * 5.9604645e-08f;
    o.v = (float)in->v * 5.9604645e-08f;
    return o;
}

unsigned char g_palette[256 * 3];

void fill_palette() {
    for (int i = 0; i < 256; ++i) {
        g_palette[i * 3 + 0] = (unsigned char)(i);
        g_palette[i * 3 + 1] = (unsigned char)(255 - i);
        g_palette[i * 3 + 2] = (unsigned char)(i * 7);
    }
}

NocturneTriglVertexContext base_context(unsigned flags) {
    NocturneTriglVertexContext ctx;
    ctx.render_flags    = flags;
    ctx.rhw_scale       = 65536.0f;
    ctx.screen_scale_x  = 1.0f;
    ctx.screen_scale_y  = 1.0f;
    ctx.current_alpha   = 0x80;
    ctx.palette_index   = 0x21;
    ctx.palette         = g_palette;
    ctx.premultiply     = 0;
    ctx.blend_mode      = 0;
    ctx.light.alpha     = 0xc0;
    ctx.light.overflow  = 0;
    ctx.w_buffer        = 0;
    ctx.lod_scale       = 1.0f / 4096.0f;
    return ctx;
}

std::string label(unsigned flags, int which) {
    char buf[64];
    std::snprintf(buf, sizeof(buf), "flags=0x%03x vertex=%d", flags, which);
    return std::string(buf);
}

}  // namespace

NOCTURNE_TEST(vertex_conversion_matches_build_tl_vertex) {
    fill_palette();

    // A spread that reaches every packing path: ordinary values, channels at
    // both ends of their range, and a depth on each side of the clamps.
    const NocturneTriglVertexInput inputs[] = {
        {      0,       0,     1,        0,        0,      0,      0,      0,      0 },
        { 0x1400000, 0xF0000, 4096, 0x00800000, 0x00400000, 0x1000, 0x2000, 0x3000, 0x8000 },
        { -0x10000, 0x2A0000, 1,    0x7F000000, 0x00000001, 0xFF00, 0xFF00, 0xFF00, 0xFF00 },
        { 0x28000000, -0x50000, 100000, 0x00ABCDEF, 0x00FEDCBA, 0x10FF, 0x0100, 0x08A0, 0x0180 },
    };

    // Every combination of the bits the conversion reads.
    const unsigned bits[] = { 0x001, 0x004, 0x008, 0x100, 0x200 };
    for (unsigned mask = 0; mask < 32; ++mask) {
        unsigned flags = 0;
        for (int b = 0; b < 5; ++b) {
            if (mask & (1u << b)) flags |= bits[b];
        }
        for (int w = 0; w < 2; ++w) {
            for (int premul = 0; premul < 2; ++premul) {
                for (int bmode = 0; bmode < 2; ++bmode) {
                    NocturneTriglVertexContext ctx = base_context(flags);
                    ctx.w_buffer   = w;
                    ctx.premultiply = premul;
                    ctx.blend_mode  = bmode;

                    int which = 0;
                    for (const NocturneTriglVertexInput &in : inputs) {
                        const std::string at = label(flags, which++);
                        NocturneTriglScreenVertex got;
                        nocturne_trigl_convert_vertex(&ctx, &in, &got);
                        const OracleVertex want = oracle(&ctx, &in);

                        CHECK_EQ_AT(got.x, want.x, at);
                        CHECK_EQ_AT(got.y, want.y, at);
                        CHECK_EQ_AT(got.z, want.z, at);
                        CHECK_EQ_AT(got.rhw, want.rhw, at);
                        CHECK_EQ_AT(got.u, want.u, at);
                        CHECK_EQ_AT(got.v, want.v, at);
                        CHECK_EQ_AT(got.diffuse, want.diffuse, at);
                        CHECK_EQ_AT(got.specular, want.specular, at);
                    }
                }
            }
        }
    }
}

// The fixed-point scales, pinned by hand. An oracle taken from the same reading
// of the source would agree with a wrong scale as readily as a right one, so
// these are worked out from the formats instead: screen coordinates carry 16
// fractional bits, texture coordinates 24.
NOCTURNE_TEST(fixed_point_scales) {
    NocturneTriglVertexContext ctx = base_context(0);
    NocturneTriglVertexInput in = {};
    NocturneTriglScreenVertex out;

    in.screen_x = 320 << 16;
    in.screen_y = 240 << 16;
    in.transformed_z = 1;
    in.u = 1 << 24;             // one whole texture repeat
    in.v = 1 << 23;             // half of one
    nocturne_trigl_convert_vertex(&ctx, &in, &out);
    CHECK_EQ(out.x, 320.0f);
    CHECK_EQ(out.y, 240.0f);
    CHECK_EQ(out.u, 1.0f);
    CHECK_EQ(out.v, 0.5f);

    // Half a pixel, to show the fraction survives.
    in.screen_x = (320 << 16) | 0x8000;
    nocturne_trigl_convert_vertex(&ctx, &in, &out);
    CHECK_EQ(out.x, 320.5f);

    // A hold buffer renders at 640x480 and stretches to the real screen.
    ctx.screen_scale_x = 1280.0f / 640.0f;
    ctx.screen_scale_y = 960.0f / 480.0f;
    in.screen_x = 320 << 16;
    nocturne_trigl_convert_vertex(&ctx, &in, &out);
    CHECK_EQ(out.x, 640.0f);
    CHECK_EQ(out.y, 480.0f);
}

// Both depth curves are normalised, monotonic and bounded — the three
// properties anything downstream relies on and none of which the formulas make
// obvious.
NOCTURNE_TEST(depth_curves_are_normalised_and_monotonic) {
    for (int w = 0; w < 2; ++w) {
        NocturneTriglVertexContext ctx = base_context(0);
        ctx.w_buffer = w;
        ctx.lod_scale = 1.0f / 4096.0f;

        float previous = -1.0f;
        for (int eye = 1; eye <= 8192; eye += 7) {
            const float z = nocturne_trigl_depth(&ctx, (float)eye);
            CHECK_AT(z >= 0.0f && z <= 1.0f, "in range at eye=" + std::to_string(eye));
            CHECK_AT(z >= previous, "monotonic at eye=" + std::to_string(eye));
            previous = z;
        }
        // Past the draw distance both curves have saturated — but not at the
        // same place. Linear depth reaches the far plane exactly; reciprocal
        // depth stops one clamp short of it, at 1 - 1/256, so the most distant
        // geometry still passes a LESS-OR-EQUAL test against a depth buffer
        // cleared to 1 rather than being rejected by it.
        CHECK_EQ(nocturne_trigl_depth(&ctx, 1.0e9f), w ? 1.0f - 1.0f / 256.0f : 1.0f);
    }

    // The near end differs by design: reciprocal depth starts at 0 for anything
    // inside the first unit, linear depth resolves it.
    NocturneTriglVertexContext linear = base_context(0);
    linear.w_buffer = 0;
    linear.lod_scale = 1.0f / 4096.0f;
    NocturneTriglVertexContext reciprocal = linear;
    reciprocal.w_buffer = 1;
    CHECK_EQ(nocturne_trigl_depth(&reciprocal, 100.0f), 0.0f);
    CHECK(nocturne_trigl_depth(&linear, 100.0f) > 0.0f);
}

NOCTURNE_TEST_MAIN()
