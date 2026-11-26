#pragma once

#include "engine/fwd.h"
#include "engine/screendevice.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::core {

// Depth as 16-bit pixels into the screen rows, keeping what is nearer.
void renderDepth16BitConditional(engine::SSoftwareEdge *left_edge,
                                 engine::SSoftwareEdge *right_edge, int scanline_y);
void renderZBufferFill16xUnrolled(engine::SSoftwareEdge *left_edge,
                                  engine::SSoftwareEdge *right_edge, int scanline_y);
void renderPerspectiveCorrectTextured16xCached(engine::SSoftwareEdge *left_edge,
                                               engine::SSoftwareEdge *right_edge, int scanline_y);
void renderTexturedDecalMMXScanline(engine::SSoftwareEdge *left_edge,
                                    engine::SSoftwareEdge *right_edge, int scanline_y);
void blendLightmapSharedU32toU32NoBiasPx1MMX(std::uint32_t *output_pixel,
                                             std::uint32_t *texture_pixel,
                                             std::uint8_t *texture_index,
                                             std::uint8_t *lightmap_index);
void memcpyMMX(void *dest, void *src, int byte_count);
void blendLightmapSharedU32toU16pNoBiasPx1MMX(std::uint16_t *output_pixel,
                                              std::uint32_t *texture_pixel,
                                              std::uint8_t *texture_index,
                                              std::uint8_t *lightmap_index);

// What a row of the backdrop is lit and fogged with: the light-map palette, a light level's
// colour in each byte, and the fog's colour, 8-8-8.
struct SLightmapLook {
    std::span<const std::uint32_t, 256> palette;
    std::uint32_t fog_color = 0;
};

// The light-map blends: each backdrop pixel times its light's palette colour, blended toward the
// fog's colour by its fog level plus half its light, with an ordered dither in each channel's
// rounding, the screen's even and odd rows taking each pixel pair's two offsets the other way.
// The light and fog rows are the display's, which a backdrop pixel shares at a scale of two; a
// row may read the light one past its end, which the display's next row holds. pixel_count is
// even.
// Each is named for its pixels' width and the screen rows it is for, even or odd; Half for the
// light at half the backdrop's size.
// At a scale of one, light and fog per pixel.
void blendLightRow32Even(std::span<std::uint32_t> output, std::span<const std::uint32_t> backdrop,
                         std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                         const SLightmapLook &look);
void blendLightRow32Odd(std::span<std::uint32_t> output, std::span<const std::uint32_t> backdrop,
                        std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                        const SLightmapLook &look);
// At a scale of two, each pair's second pixel between its light and the next's.
void blendHalfLightRow32Even(std::span<std::uint32_t> output,
                             std::span<const std::uint32_t> backdrop,
                             std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                             const SLightmapLook &look);
// The odd rows also between their light and the display row's below.
void blendHalfLightRow32Odd(std::span<std::uint32_t> output,
                            std::span<const std::uint32_t> backdrop,
                            std::span<const std::uint8_t> light,
                            std::span<const std::uint8_t> light_below,
                            std::span<const std::uint8_t> fog, const SLightmapLook &look);
// The same into 16-bit pixels, packed by the masks, with a coarser dither.
void blendLightRow16Even(std::span<std::uint16_t> output, std::span<const std::uint32_t> backdrop,
                         std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                         const SLightmapLook &look, const engine::SColorMasks &masks);
void blendLightRow16Odd(std::span<std::uint16_t> output, std::span<const std::uint32_t> backdrop,
                        std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                        const SLightmapLook &look, const engine::SColorMasks &masks);
void blendHalfLightRow16Even(std::span<std::uint16_t> output,
                             std::span<const std::uint32_t> backdrop,
                             std::span<const std::uint8_t> light, std::span<const std::uint8_t> fog,
                             const SLightmapLook &look, const engine::SColorMasks &masks);
void blendHalfLightRow16Odd(std::span<std::uint16_t> output,
                            std::span<const std::uint32_t> backdrop,
                            std::span<const std::uint8_t> light,
                            std::span<const std::uint8_t> light_below,
                            std::span<const std::uint8_t> fog, const SLightmapLook &look,
                            const engine::SColorMasks &masks);

// The display row of a buffer of rows 320 wide, each pixel the 1-2-1 by 1-2-1 weighted mean of
// it and its eight neighbours, from the second pixel to count's.
void blurLightRow(std::span<std::uint8_t> output, std::span<const std::uint8_t> rows,
                  std::size_t row, std::size_t count);
// Each byte of first and second mixed, second weighted by alpha over 0xffff.
void mixBytes(std::span<std::uint8_t> output, std::span<const std::uint8_t> first,
              std::span<const std::uint8_t> second, int alpha);

} // namespace nocturne::core
