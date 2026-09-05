// =============================================================================
// Render flags to pipeline state
// =============================================================================
//
// The mapping is checked against an ORACLE transliterated separately from the
// renderer's own source: applyRenderState's branch structure, written out with
// the Direct3D 7 render-state numbers it sets, then translated into the
// renderer's constants. Two independent expressions of the same rule, compared
// over every input, so a transcription slip in either shows up as a mismatch
// rather than as agreement with itself.
//
// The state model has eight meaningful flag bits, so the whole input space is
// 256 flag words crossed with blend mode, opacity table and premultiply — 2048
// cases, checked exhaustively.

#include "tests/nocturne_test.h"
#include "renderer/trigl_state.h"

#include <string>

namespace {

// --- the oracle --------------------------------------------------------------
// Direct3D 7 render-state numbers, as the DX7 renderer sets them.
enum {
    D3D_ZENABLE          = 7,
    D3D_SHADEMODE        = 9,
    D3D_ZWRITEENABLE     = 14,
    D3D_ALPHATESTENABLE  = 15,
    D3D_SRCBLEND         = 19,
    D3D_DESTBLEND        = 20,
    D3D_TEXTUREMAPBLEND  = 21,
    D3D_ZFUNC            = 23,
    D3D_ALPHABLENDENABLE = 27,
    D3D_FOGENABLE        = 28
};

struct OracleState {
    unsigned flags;      // the flag word after the two rewrites
    int textured;
    int state[32];
};

// Transliteration of applyRenderState, in its own order, keeping the raw D3D
// values. The caching in the original is dropped: it writes each state whenever
// its input changes, so the steady state is this function of the inputs.
OracleState oracle(unsigned render_flags, int blend_mode, int opacity_present,
                   int premultiply) {
    OracleState o;
    unsigned flags = render_flags;

    if (opacity_present && (flags & 1) != 0) {
        flags = flags | 0x22;
    }

    o.state[D3D_SRCBLEND] = (flags & 0x20) != 0 ? 5 : 2;   // SRCALPHA : ONE
    if ((flags & 0x20) != 0) {
        flags = flags & 0xfffffff7;
    }

    if (blend_mode == 0) {
        o.state[D3D_DESTBLEND] = 6;                        // INVSRCALPHA
        if (premultiply) o.state[D3D_SRCBLEND] = 5;
    } else {
        o.state[D3D_DESTBLEND] = 2;                        // ONE
        if (premultiply) o.state[D3D_SRCBLEND] = 2;
    }

    o.textured = (flags & 1) != 0;

    if ((flags & 2) == 0) {
        o.state[D3D_ALPHABLENDENABLE] = 0;
        o.state[D3D_ALPHATESTENABLE]  = 0;
        o.state[D3D_TEXTUREMAPBLEND]  = 2;                 // MODULATE
    } else {
        o.state[D3D_ALPHABLENDENABLE] = 1;
        o.state[D3D_ALPHATESTENABLE]  = 1;
        o.state[D3D_TEXTUREMAPBLEND]  = 4;                 // MODULATEALPHA
    }

    o.state[D3D_SHADEMODE] = (flags & 4) != 0 ? 2 : 1;     // GOURAUD : FLAT
    o.state[D3D_FOGENABLE] = (flags & 8) != 0 ? 1 : 0;

    if ((flags & 0xc0) == 0) {
        o.state[D3D_ZENABLE]      = 0;
        o.state[D3D_ZWRITEENABLE] = 0;
        o.state[D3D_ZFUNC]        = 8;                     // ALWAYS
    } else if ((flags & 0x40) == 0 || (flags & 0x80) == 0) {
        if ((flags & 0x40) == 0) {
            o.state[D3D_ZENABLE]      = 1;
            o.state[D3D_ZWRITEENABLE] = 1;
            o.state[D3D_ZFUNC]        = 8;                 // ALWAYS
        } else {
            o.state[D3D_ZENABLE]      = 1;
            o.state[D3D_ZWRITEENABLE] = 0;
            o.state[D3D_ZFUNC]        = 4;                 // LESSEQUAL
        }
    } else {
        o.state[D3D_ZENABLE]      = 1;
        o.state[D3D_ZWRITEENABLE] = 1;
        o.state[D3D_ZFUNC]        = 4;                     // LESSEQUAL
    }

    o.flags = flags;
    return o;
}

int blend_from_d3d(int d3d) {
    switch (d3d) {
        case 1:  return NOCTURNE_TRIGL_BLEND_ZERO;
        case 2:  return NOCTURNE_TRIGL_BLEND_ONE;
        case 5:  return NOCTURNE_TRIGL_BLEND_SRC_ALPHA;
        case 6:  return NOCTURNE_TRIGL_BLEND_INV_SRC_ALPHA;
        default: return -1;
    }
}

std::string label(unsigned flags, int blend_mode, int opacity, int premul) {
    char buf[96];
    std::snprintf(buf, sizeof(buf), "flags=0x%03x blend_mode=%d opacity=%d premul=%d",
                  flags, blend_mode, opacity, premul);
    return std::string(buf);
}

}  // namespace

NOCTURNE_TEST(pipeline_state_matches_the_dx7_render_states) {
    for (unsigned flags = 0; flags < 0x100; ++flags) {
        for (int blend_mode = 0; blend_mode < 2; ++blend_mode) {
            for (int opacity = 0; opacity < 2; ++opacity) {
                for (int premul = 0; premul < 2; ++premul) {
                    NocturneTriglStateInput in;
                    in.render_flags           = flags;
                    in.blend_mode             = blend_mode;
                    in.texture_opacity_present = opacity;
                    in.premultiply            = premul;
                    in.bilinear               = 0;
                    in.mipmapped              = 0;

                    NocturneTriglPipelineState got;
                    nocturne_trigl_pipeline_state(&in, &got);
                    const OracleState want = oracle(flags, blend_mode, opacity, premul);
                    const std::string at = label(flags, blend_mode, opacity, premul);

                    CHECK_EQ_AT(nocturne_trigl_effective_flags(&in), want.flags, at);
                    CHECK_EQ_AT(got.texture_enabled, want.textured, at);
                    CHECK_EQ_AT(got.blend_enabled, want.state[D3D_ALPHABLENDENABLE], at);
                    CHECK_EQ_AT(got.alpha_test_enabled, want.state[D3D_ALPHATESTENABLE], at);
                    CHECK_EQ_AT(got.modulate_texture_alpha,
                                want.state[D3D_TEXTUREMAPBLEND] == 4 ? 1 : 0, at);
                    CHECK_EQ_AT(got.smooth_shading,
                                want.state[D3D_SHADEMODE] == 2 ? 1 : 0, at);
                    CHECK_EQ_AT(got.fog_enabled, want.state[D3D_FOGENABLE], at);
                    CHECK_EQ_AT(got.depth_test_enabled, want.state[D3D_ZENABLE], at);
                    CHECK_EQ_AT(got.depth_write_enabled, want.state[D3D_ZWRITEENABLE], at);
                    CHECK_EQ_AT(got.depth_func,
                                want.state[D3D_ZFUNC] == 4 ? NOCTURNE_TRIGL_DEPTH_LEQUAL
                                                           : NOCTURNE_TRIGL_DEPTH_ALWAYS, at);
                    CHECK_EQ_AT(got.src_blend, blend_from_d3d(want.state[D3D_SRCBLEND]), at);
                    CHECK_EQ_AT(got.dst_blend, blend_from_d3d(want.state[D3D_DESTBLEND]), at);
                }
            }
        }
    }
}

// The two rewrites the flag word undergoes before anything reads it, called out
// on their own because everything downstream depends on them and neither is
// visible in the flag the caller passed.
NOCTURNE_TEST(effective_flags_rewrites) {
    NocturneTriglStateInput in;
    in.blend_mode = 0;
    in.premultiply = 0;
    in.bilinear = 0;
    in.mipmapped = 0;

    // An opacity table makes a textured draw blend and scale by source alpha.
    in.texture_opacity_present = 1;
    in.render_flags = NOCTURNE_TRIGL_FLAG_TEXTURED;
    CHECK_EQ(nocturne_trigl_effective_flags(&in),
             (unsigned)(NOCTURNE_TRIGL_FLAG_TEXTURED | NOCTURNE_TRIGL_FLAG_BLEND |
                        NOCTURNE_TRIGL_FLAG_SRCALPHA));

    // ... but only a textured one.
    in.render_flags = NOCTURNE_TRIGL_FLAG_SMOOTH;
    CHECK_EQ(nocturne_trigl_effective_flags(&in), (unsigned)NOCTURNE_TRIGL_FLAG_SMOOTH);

    // Source alpha and the per-vertex fog factor both want the alpha channel;
    // source alpha wins and the fog factor is dropped.
    in.texture_opacity_present = 0;
    in.render_flags = NOCTURNE_TRIGL_FLAG_SRCALPHA | NOCTURNE_TRIGL_FLAG_SOLIDALPHA;
    CHECK_EQ(nocturne_trigl_effective_flags(&in), (unsigned)NOCTURNE_TRIGL_FLAG_SRCALPHA);

    // A textured draw with an opacity table therefore never fogs, even when the
    // caller asked for it.
    in.texture_opacity_present = 1;
    in.render_flags = NOCTURNE_TRIGL_FLAG_TEXTURED | NOCTURNE_TRIGL_FLAG_SOLIDALPHA;
    NocturneTriglPipelineState st;
    nocturne_trigl_pipeline_state(&in, &st);
    CHECK_EQ(st.fog_enabled, 0);
}

// Depth test and depth write are independent, and the four combinations are the
// four things geometry does with the depth buffer.
NOCTURNE_TEST(depth_bits_are_independent) {
    struct Case {
        unsigned flags;
        int test, write, func;
        const char *what;
    } cases[] = {
        { 0, 0, 0, NOCTURNE_TRIGL_DEPTH_ALWAYS, "ignores depth entirely" },
        { NOCTURNE_TRIGL_FLAG_DEPTH_WRITE, 1, 1, NOCTURNE_TRIGL_DEPTH_ALWAYS,
          "seeds depth without testing" },
        { NOCTURNE_TRIGL_FLAG_DEPTH_TEST, 1, 0, NOCTURNE_TRIGL_DEPTH_LEQUAL,
          "sorts against the world without occluding itself" },
        { NOCTURNE_TRIGL_FLAG_DEPTH_TEST | NOCTURNE_TRIGL_FLAG_DEPTH_WRITE,
          1, 1, NOCTURNE_TRIGL_DEPTH_LEQUAL, "ordinary opaque geometry" },
    };
    for (const Case &c : cases) {
        NocturneTriglStateInput in;
        in.render_flags = c.flags;
        in.blend_mode = 0;
        in.texture_opacity_present = 0;
        in.premultiply = 0;
        in.bilinear = 0;
        in.mipmapped = 0;
        NocturneTriglPipelineState st;
        nocturne_trigl_pipeline_state(&in, &st);
        CHECK_EQ_AT(st.depth_test_enabled, c.test, c.what);
        CHECK_EQ_AT(st.depth_write_enabled, c.write, c.what);
        CHECK_EQ_AT(st.depth_func, c.func, c.what);
    }
}

NOCTURNE_TEST(filters_follow_the_quality_settings) {
    NocturneTriglStateInput in;
    in.render_flags = NOCTURNE_TRIGL_FLAG_TEXTURED;
    in.blend_mode = 0;
    in.texture_opacity_present = 0;
    in.premultiply = 0;

    NocturneTriglPipelineState st;
    in.bilinear = 0; in.mipmapped = 0;
    nocturne_trigl_pipeline_state(&in, &st);
    CHECK_EQ(st.min_filter, NOCTURNE_TRIGL_FILTER_NEAREST);
    CHECK_EQ(st.mag_filter, NOCTURNE_TRIGL_FILTER_NEAREST);
    CHECK_EQ(st.mip_filter, NOCTURNE_TRIGL_MIP_NONE);

    in.bilinear = 1; in.mipmapped = 1;
    nocturne_trigl_pipeline_state(&in, &st);
    CHECK_EQ(st.min_filter, NOCTURNE_TRIGL_FILTER_LINEAR);
    CHECK_EQ(st.mag_filter, NOCTURNE_TRIGL_FILTER_LINEAR);
    CHECK_EQ(st.mip_filter, NOCTURNE_TRIGL_MIP_LINEAR);
}

// The draw's light level and a vertex's answer to different flags, and only the
// vertex level defers to a draw that carries its own colours.
NOCTURNE_TEST(lighting_levels_and_their_gates) {
    NocturneTriglLighting l;

    nocturne_trigl_draw_lighting(0, 0x1000, &l);
    CHECK_EQ(l.alpha, 0xff);
    CHECK_EQ(l.overflow, 0);

    // 0x100 is the bias, so a level of 0x100 is black and 0x1000 is 0xf0.
    nocturne_trigl_draw_lighting(NOCTURNE_TRIGL_FLAG_LIGHTING, 0x100, &l);
    CHECK_EQ(l.alpha, 0);
    CHECK_EQ(l.overflow, 0);
    nocturne_trigl_draw_lighting(NOCTURNE_TRIGL_FLAG_LIGHTING, 0x1000, &l);
    CHECK_EQ(l.alpha, 0xf0);
    CHECK_EQ(l.overflow, 0);

    // Full brightness is 0x10f0; past it the excess becomes additive.
    nocturne_trigl_draw_lighting(NOCTURNE_TRIGL_FLAG_LIGHTING, 0x1100, &l);
    CHECK_EQ(l.alpha, 0xff);
    CHECK_EQ(l.overflow, 0);
    // 0x1200 unbiases to 0x110, which is 0x10 past the 0x100 the overflow is
    // measured from.
    nocturne_trigl_draw_lighting(NOCTURNE_TRIGL_FLAG_LIGHTING, 0x1200, &l);
    CHECK_EQ(l.alpha, 0xff);
    CHECK_EQ(l.overflow, 0x10);
    // And the excess saturates rather than running away.
    nocturne_trigl_draw_lighting(NOCTURNE_TRIGL_FLAG_LIGHTING, 0x7fff, &l);
    CHECK_EQ(l.alpha, 0xff);
    CHECK_EQ(l.overflow, 0xff);

    // A vertex level applies only to a smooth-shaded draw.
    CHECK_EQ(nocturne_trigl_vertex_lighting(0, 0x1000, &l), 0);
    CHECK_EQ(nocturne_trigl_vertex_lighting(NOCTURNE_TRIGL_FLAG_SMOOTH, 0x1000, &l), 1);
    CHECK_EQ(l.alpha, 0xf0);

    // A draw carrying its own colours is already where it wants to be.
    CHECK_EQ(nocturne_trigl_vertex_lighting(
                 NOCTURNE_TRIGL_FLAG_SMOOTH | NOCTURNE_TRIGL_FLAG_VERTEX_COLOR, 0x1000, &l), 1);
    CHECK_EQ(l.alpha, 0xff);
    CHECK_EQ(l.overflow, 0);
}

NOCTURNE_TEST_MAIN()
