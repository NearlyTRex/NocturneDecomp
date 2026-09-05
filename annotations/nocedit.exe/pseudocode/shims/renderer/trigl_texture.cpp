// =============================================================================
// TRIGL TEXTURE — palette expansion
// =============================================================================
//
// See trigl_texture.h. No GL, no globals, no system headers.

#include "renderer/trigl_texture.h"

namespace {

const int kPaletteEntries = 256;

}  // namespace

void nocturne_trigl_pack_palette(const unsigned char *palette, unsigned *out) {
    for (int i = 0; i < kPaletteEntries; ++i) {
        const unsigned char *entry = palette + i * 3;
        out[i] = ((unsigned)entry[0] << 16) |
                 ((unsigned)entry[1] << 8) |
                 (unsigned)entry[2];
    }
}

void nocturne_trigl_expand_texture(const unsigned char *indices, int pixel_count,
                                   const unsigned *packed_palette,
                                   const unsigned char *opacity,
                                   unsigned *out) {
    if (opacity != nullptr) {
        // Explicit alpha for every texel. No colour is special here, so a
        // texture with an opacity plane can use black as a colour.
        for (int i = 0; i < pixel_count; ++i) {
            out[i] = packed_palette[indices[i]] | ((unsigned)opacity[i] << 24);
        }
        return;
    }

    // Otherwise black is the colour key. The test is on the palette colour the
    // index resolves to, not on the index, so every entry that happens to be
    // black keys out and index 0 means nothing in particular.
    for (int i = 0; i < pixel_count; ++i) {
        const unsigned rgb = packed_palette[indices[i]];
        out[i] = (rgb == 0) ? 0u : (rgb | 0xff000000u);
    }
}
