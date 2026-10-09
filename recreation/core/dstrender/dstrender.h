#pragma once

#include "engine/fwd.h"

#include <cstdint>

namespace nocturne::core {

void renderDepthOnlyStandard(engine::SSoftwareEdge *left_edge, engine::SSoftwareEdge *right_edge,
                             int scanline_y);
void renderDepth16BitConditional(engine::SSoftwareEdge *left_edge,
                                 engine::SSoftwareEdge *right_edge, int scanline_y);
void renderTexturedAlphaMMXScanline(engine::SSoftwareEdge *left_edge,
                                    engine::SSoftwareEdge *right_edge, int scanline_y);
void renderZBufferFill16xUnrolled(engine::SSoftwareEdge *left_edge,
                                  engine::SSoftwareEdge *right_edge, int scanline_y);
void renderSolidColorDepth16xUnrolled(engine::SSoftwareEdge *left_edge,
                                      engine::SSoftwareEdge *right_edge, int scanline_y);
void renderDepthInterlacedProfiled(engine::SSoftwareEdge *left_edge,
                                   engine::SSoftwareEdge *right_edge, int scanline_y);
void renderScreenDepthTestInterlacedProfiled(engine::SSoftwareEdge *left_edge,
                                             engine::SSoftwareEdge *right_edge, int scanline_y);
void renderDepthTestStatistics16xUnrolled(engine::SSoftwareEdge *left_edge,
                                          engine::SSoftwareEdge *right_edge, int scanline_y);
void renderPerspectiveCorrectTextured16xCached(engine::SSoftwareEdge *left_edge,
                                               engine::SSoftwareEdge *right_edge, int scanline_y);
void renderTexturedDecalMMXScanline(engine::SSoftwareEdge *left_edge,
                                    engine::SSoftwareEdge *right_edge, int scanline_y);
void blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(std::uint64_t *output_buffer,
                                                   std::uint64_t *texture_buffer,
                                                   std::uint8_t *texture_indices,
                                                   std::uint8_t *lightmap_indices, int pixel_count);
void blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(std::uint64_t *output_buffer,
                                                       std::uint64_t *texture_buffer,
                                                       std::uint8_t *texture_indices,
                                                       std::uint8_t *lightmap_indices,
                                                       int pixel_count);
void blendLightmapSharedU32toU32NoBiasPx1MMX(std::uint32_t *output_pixel,
                                             std::uint32_t *texture_pixel,
                                             std::uint8_t *texture_index,
                                             std::uint8_t *lightmap_index);
void memcpyMMX(void *dest, void *src, int byte_count);
void verticalBlur3TapMMXStride320(std::uint64_t *output_buffer, std::uint64_t *input_buffer,
                                  int pixel_count);
void blendLightmapPerPxU32toU32BB12Px2MMX(std::uint32_t *output_buffer,
                                          std::uint32_t *texture_buffer,
                                          std::uint8_t *texture_indices,
                                          std::uint8_t *lightmap_indices, int pixel_count);
void blendLightmapPerPxU64toU32AmbientPx2MMX(std::uint32_t *output_buffer,
                                             std::uint64_t *texture_buffer,
                                             std::uint8_t *texture_indices,
                                             std::uint8_t *lightmap_indices, int pixel_count);
void alphaBlendPixelsMMX(std::uint32_t *output_buffer, std::uint32_t *source1_buffer,
                         std::uint32_t *source2_buffer, std::uint32_t alpha1, std::uint32_t alpha2,
                         int pixel_count);
void blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(std::uint32_t *output_buffer,
                                                   std::uint64_t *texture_buffer,
                                                   std::uint8_t *texture_indices,
                                                   std::uint8_t *lightmap_indices, int pixel_count);
void blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(std::uint32_t *output_buffer,
                                                    std::uint64_t *texture_buffer,
                                                    std::uint8_t *texture_indices,
                                                    std::uint8_t *lightmap_indices,
                                                    int pixel_count);
void blendLightmapSharedU32toU16pNoBiasPx1MMX(std::uint16_t *output_pixel,
                                              std::uint32_t *texture_pixel,
                                              std::uint8_t *texture_index,
                                              std::uint8_t *lightmap_index);
void blendLightmapPerPxU32toU16pBB12Px2MMX(std::uint32_t *output_buffer,
                                           std::uint32_t *texture_buffer,
                                           std::uint8_t *texture_indices,
                                           std::uint8_t *lightmap_indices, int pixel_count);
void blendLightmapPerPxU64toU16pAmbientPx2MMX(std::uint32_t *output_buffer,
                                              std::uint64_t *texture_buffer,
                                              std::uint8_t *texture_indices,
                                              std::uint8_t *lightmap_indices, int pixel_count);

} // namespace nocturne::core
