// =============================================================================
// Palette expansion
// =============================================================================
//
// The two rules worth pinning are the ones a reader would guess wrong: the
// colour key is a palette colour rather than an index, and an opacity plane
// replaces that rule rather than adding to it. Both are checked directly as
// well as against an oracle transliterated from expandTextureAndBuildMips.

#include "tests/nocturne_test.h"
#include "renderer/trigl_texture.h"

#include <string>

namespace {

// --- the oracle --------------------------------------------------------------
// The expansion loops of expandTextureAndBuildMips, keeping their shape. The
// channel shifts are the fixed ones the engine uses for anything but a 32-bit
// hardware format, which is the layout a texture upload wants regardless.
void oracle(const unsigned char *indices, int pixel_count,
            const unsigned char *palette, const unsigned char *opacity,
            unsigned *out) {
    unsigned packed[256];
    const unsigned char *p = palette;
    for (int i = 0; i < 256; ++i) {
        packed[i] = ((unsigned)p[2] << 0) | ((unsigned)p[1] << 8) | ((unsigned)p[0] << 16);
        p += 3;
    }

    if (opacity == nullptr) {
        for (int i = 0; i < pixel_count; ++i) {
            unsigned v = 0;
            if (packed[indices[i]] != 0) v = packed[indices[i]] | 0xff000000u;
            out[i] = v;
        }
    } else {
        for (int i = 0; i < pixel_count; ++i) {
            out[i] = packed[indices[i]] | ((unsigned)opacity[i] << 24);
        }
    }
}

unsigned char g_palette[256 * 3];
unsigned char g_indices[64 * 64];
unsigned char g_opacity[64 * 64];
unsigned g_got[64 * 64];
unsigned g_want[64 * 64];

// A palette with several distinct blacks, a white, and a spread in between, so
// the colour-key rule has more than one entry to find.
void fill_palette() {
    for (int i = 0; i < 256; ++i) {
        g_palette[i * 3 + 0] = (unsigned char)(i * 3);
        g_palette[i * 3 + 1] = (unsigned char)(i * 5);
        g_palette[i * 3 + 2] = (unsigned char)(i * 11);
    }
    // Index 0 is black, and so are three others scattered through the palette.
    const int blacks[] = { 0, 7, 128, 255 };
    for (int b : blacks) {
        g_palette[b * 3 + 0] = 0;
        g_palette[b * 3 + 1] = 0;
        g_palette[b * 3 + 2] = 0;
    }
    // One entry that is nearly black but not quite, which must NOT key out.
    g_palette[9 * 3 + 0] = 0;
    g_palette[9 * 3 + 1] = 0;
    g_palette[9 * 3 + 2] = 1;
}

}  // namespace

NOCTURNE_TEST(expansion_matches_the_engine) {
    fill_palette();
    const int count = 64 * 64;
    for (int i = 0; i < count; ++i) {
        g_indices[i] = (unsigned char)((i * 37) & 0xff);
        g_opacity[i] = (unsigned char)((i * 13) & 0xff);
    }

    unsigned packed[256];
    nocturne_trigl_pack_palette(g_palette, packed);

    for (int with_opacity = 0; with_opacity < 2; ++with_opacity) {
        const unsigned char *op = with_opacity ? g_opacity : nullptr;
        nocturne_trigl_expand_texture(g_indices, count, packed, op, g_got);
        oracle(g_indices, count, g_palette, op, g_want);
        for (int i = 0; i < count; ++i) {
            CHECK_EQ_AT(g_got[i], g_want[i],
                        "opacity=" + std::to_string(with_opacity) +
                        " pixel=" + std::to_string(i));
        }
    }
}

// The colour key is the palette COLOUR. Every black entry keys out, wherever it
// sits, and an entry one unit off black does not.
NOCTURNE_TEST(colour_key_is_a_colour_not_an_index) {
    fill_palette();
    unsigned packed[256];
    nocturne_trigl_pack_palette(g_palette, packed);

    const unsigned char indices[] = { 0, 7, 128, 255, 9, 1, 200 };
    const int count = (int)(sizeof(indices) / sizeof(indices[0]));
    unsigned out[sizeof(indices) / sizeof(indices[0])];
    nocturne_trigl_expand_texture(indices, count, packed, nullptr, out);

    // The four black entries, including three that are not index 0.
    CHECK_EQ(out[0], 0u);
    CHECK_EQ(out[1], 0u);
    CHECK_EQ(out[2], 0u);
    CHECK_EQ(out[3], 0u);
    // Blue 1 is not black.
    CHECK_EQ(out[4], 0xff000001u);
    // And ordinary entries come through opaque.
    CHECK_EQ(out[5] >> 24, 0xffu);
    CHECK_EQ(out[6] >> 24, 0xffu);
}

// An opacity plane replaces the colour key rather than adding to it, so a black
// texel keeps whatever alpha the plane gives it — including full opacity.
NOCTURNE_TEST(opacity_plane_replaces_the_colour_key) {
    fill_palette();
    unsigned packed[256];
    nocturne_trigl_pack_palette(g_palette, packed);

    const unsigned char indices[] = { 0, 7, 1 };
    const unsigned char opacity[] = { 0xff, 0x40, 0x00 };
    unsigned out[3];
    nocturne_trigl_expand_texture(indices, 3, packed, opacity, out);

    // Black, fully opaque, because the plane says so.
    CHECK_EQ(out[0], 0xff000000u);
    CHECK_EQ(out[1], 0x40000000u);
    // And a visible colour can be made fully transparent the same way.
    CHECK_EQ(out[2] >> 24, 0x00u);
    CHECK(out[2] != 0u);
}

// The plane is indexed by PIXEL, not by palette entry: two texels sharing an
// index take different alphas.
NOCTURNE_TEST(opacity_is_per_pixel_not_per_palette_entry) {
    fill_palette();
    unsigned packed[256];
    nocturne_trigl_pack_palette(g_palette, packed);

    const unsigned char indices[] = { 40, 40, 40 };
    const unsigned char opacity[] = { 0x10, 0x80, 0xf0 };
    unsigned out[3];
    nocturne_trigl_expand_texture(indices, 3, packed, opacity, out);

    CHECK_EQ(out[0] >> 24, 0x10u);
    CHECK_EQ(out[1] >> 24, 0x80u);
    CHECK_EQ(out[2] >> 24, 0xf0u);
    // Same colour underneath all three.
    CHECK_EQ(out[0] & 0x00ffffffu, out[1] & 0x00ffffffu);
    CHECK_EQ(out[1] & 0x00ffffffu, out[2] & 0x00ffffffu);
}

NOCTURNE_TEST(packed_palette_channel_order) {
    unsigned char palette[256 * 3] = {};
    palette[0] = 0x12; palette[1] = 0x34; palette[2] = 0x56;   // entry 0
    palette[3] = 0xff; palette[4] = 0x00; palette[5] = 0x00;   // entry 1, red
    palette[6] = 0x00; palette[7] = 0xff; palette[8] = 0x00;   // entry 2, green
    palette[9] = 0x00; palette[10] = 0x00; palette[11] = 0xff; // entry 3, blue

    unsigned packed[256];
    nocturne_trigl_pack_palette(palette, packed);
    CHECK_EQ(packed[0], 0x00123456u);
    CHECK_EQ(packed[1], 0x00ff0000u);
    CHECK_EQ(packed[2], 0x0000ff00u);
    CHECK_EQ(packed[3], 0x000000ffu);
}

NOCTURNE_TEST_MAIN()
