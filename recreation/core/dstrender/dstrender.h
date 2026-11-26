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
// Each depth whole, where the texel's opacity, or its colour index without an opacity map, is
// not zero, from the further left through the further right edge.
void renderTexturedAlphaMMXScanline(const engine::SSoftwareEdge &left_edge,
                                    const engine::SSoftwareEdge &right_edge, int scanline_y,
                                    engine::IScreenDevice &screen, const engine::C2d &two_d,
                                    const engine::SCurrentTexture &texture);
void renderZBufferFill16xUnrolled(engine::SSoftwareEdge *left_edge,
                                  engine::SSoftwareEdge *right_edge, int scanline_y);
void renderScreenDepthTestInterlacedProfiled(engine::SSoftwareEdge *left_edge,
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
// At a scale of one, light and fog per pixel.
void blendLightmapPerPxU32toU32BB12Px2MMX(std::span<std::uint32_t> output,
                                          std::span<const std::uint32_t> backdrop,
                                          std::span<const std::uint8_t> light,
                                          std::span<const std::uint8_t> fog,
                                          const SLightmapLook &look);
void blendLightmapPerPxU64toU32AmbientPx2MMX(std::span<std::uint32_t> output,
                                             std::span<const std::uint32_t> backdrop,
                                             std::span<const std::uint8_t> light,
                                             std::span<const std::uint8_t> fog,
                                             const SLightmapLook &look);
// At a scale of two, each pair's second pixel between its light and the next's.
void blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(std::span<std::uint32_t> output,
                                                   std::span<const std::uint32_t> backdrop,
                                                   std::span<const std::uint8_t> light,
                                                   std::span<const std::uint8_t> fog,
                                                   const SLightmapLook &look);
// The odd rows also between their light and the display row's below.
void blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(std::span<std::uint32_t> output,
                                                       std::span<const std::uint32_t> backdrop,
                                                       std::span<const std::uint8_t> light,
                                                       std::span<const std::uint8_t> light_below,
                                                       std::span<const std::uint8_t> fog,
                                                       const SLightmapLook &look);
// The same into 16-bit pixels, packed by the masks, with a coarser dither.
void blendLightmapPerPxU32toU16pBB12Px2MMX(std::span<std::uint16_t> output,
                                           std::span<const std::uint32_t> backdrop,
                                           std::span<const std::uint8_t> light,
                                           std::span<const std::uint8_t> fog,
                                           const SLightmapLook &look,
                                           const engine::SColorMasks &masks);
void blendLightmapPerPxU64toU16pAmbientPx2MMX(std::span<std::uint16_t> output,
                                              std::span<const std::uint32_t> backdrop,
                                              std::span<const std::uint8_t> light,
                                              std::span<const std::uint8_t> fog,
                                              const SLightmapLook &look,
                                              const engine::SColorMasks &masks);
void blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(std::span<std::uint16_t> output,
                                                   std::span<const std::uint32_t> backdrop,
                                                   std::span<const std::uint8_t> light,
                                                   std::span<const std::uint8_t> fog,
                                                   const SLightmapLook &look,
                                                   const engine::SColorMasks &masks);
void blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(
    std::span<std::uint16_t> output, std::span<const std::uint32_t> backdrop,
    std::span<const std::uint8_t> light, std::span<const std::uint8_t> light_below,
    std::span<const std::uint8_t> fog, const SLightmapLook &look, const engine::SColorMasks &masks);

// The display row of a buffer of rows 320 wide, each pixel the 1-2-1 by 1-2-1 weighted mean of
// it and its eight neighbours, from the second pixel to count's.
void verticalBlur3TapMMXStride320(std::span<std::uint8_t> output,
                                  std::span<const std::uint8_t> rows, std::size_t row,
                                  std::size_t count);
// Each byte of first and second mixed, second weighted by alpha over 0xffff.
void alphaBlendPixelsMMX(std::span<std::uint8_t> output, std::span<const std::uint8_t> first,
                         std::span<const std::uint8_t> second, int alpha);

} // namespace nocturne::core
