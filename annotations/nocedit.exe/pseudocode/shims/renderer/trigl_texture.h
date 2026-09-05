#pragma once

// =============================================================================
// TRIGL TEXTURE — palette expansion
// =============================================================================
//
// The engine hands the renderer a texture as 8-bit indices plus a 256-entry RGB
// palette, and optionally a parallel plane of per-pixel alpha. This turns that
// into the 32-bit image a texture upload wants.
//
// PURE ON PURPOSE, like the rest of the renderer's core: no GL, no globals, no
// system headers. Mip levels are not built here — the hardware generates them
// from the expanded image, which is both better filtered and one less thing to
// get wrong.
//
// TWO RULES THAT ARE NOT OBVIOUS, and that a test pins down:
//
//   The colour key is a palette COLOUR, not an index. A texel whose palette
//   entry is pure black comes out fully transparent, wherever in the palette it
//   sits and however many entries share it. Index 0 has no special meaning.
//
//   An opacity plane replaces that rule rather than adding to it. When one is
//   supplied every texel takes its alpha from the plane, black included, so a
//   texture that carries explicit alpha can also use black as a colour.

#ifdef __cplusplus
extern "C" {
#endif

// Pack a 256-entry RGB palette into 0x00RRGGBB words. Alpha is left clear; the
// expansion supplies it.
void nocturne_trigl_pack_palette(const unsigned char *palette, unsigned *out);

// Expand `pixel_count` indices into 0xAARRGGBB.
//
// `packed_palette` comes from nocturne_trigl_pack_palette. `opacity` is either
// `pixel_count` bytes of per-pixel alpha or null, which selects the colour-key
// rule above. `out` holds `pixel_count` words.
void nocturne_trigl_expand_texture(const unsigned char *indices, int pixel_count,
                                   const unsigned *packed_palette,
                                   const unsigned char *opacity,
                                   unsigned *out);

#ifdef __cplusplus
}
#endif
