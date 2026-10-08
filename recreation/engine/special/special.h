#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstdint>

namespace nocturne::engine {

void clearScreen();
void clearZBufferNative();
void renderMMXPerspectiveScanline32(core::SSoftwareEdge *left_vertex,
                                    core::SSoftwareEdge *right_vertex, int scanline_y);
void renderMMXPerspectiveScanline16(core::SSoftwareEdge *left_vertex,
                                    core::SSoftwareEdge *right_vertex, int scanline_y);
void renderPerspectiveCorrectScanline32(core::SSoftwareEdge *left_vertex,
                                        core::SSoftwareEdge *right_vertex, int scanline_y);
void renderPerspectiveCorrectScanline16(core::SSoftwareEdge *left_vertex,
                                        core::SSoftwareEdge *right_vertex, int scanline_y);
void renderAlphaRow32(std::uint32_t *destPixels, std::uint8_t *srcIndices, std::uint8_t *srcAlpha,
                      int globalAlpha, int pixelCount);
void renderAlphaRow16(std::uint16_t *destPixels, std::uint8_t *srcIndices, std::uint8_t *srcAlpha,
                      int globalAlpha, int pixelCount);
void renderScanline(core::SSoftwareEdge *left, core::SSoftwareEdge *right, int scanline_y);
void transformAndProjectPoint(core::SProjectedVertex *output, core::CVector3i *input);
void transformPoint(core::SProjectedVertex *output, core::CVector3i *input);
int kill();
int lockFrame();
int unlockFrame(int clear_lock_flag);
int beginScene();
int endScene();
int selectTextureFromPalette(core::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
int updateTextureFromPalette(core::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
int setResolutionAndColorTable(int width, int height, int bits_per_pixel);
int restoreVideoMode();
int drawPolygon(SRenderVertex *vertices, int vertex_count, int render_flags);
int drawPolygon2(SRenderVertex **vertex_array, int vertex_count, int render_flags);
int drawPolyList(SRenderVertex *vertex_buffer, SMRGLPrimitiveQuad **polygons, int polygon_count,
                 int render_flags);
int drawPolyList2(SRenderVertex *vertex_buffer, SInputFace **polygons, int polygon_count,
                  int render_flags);
int clear();
int setFogColor(int red, int green, int blue);
int sync();
int clearZBuffer();
void presentToExternalRenderer(int skip_buffer_copy);
int masterZBuffer(int z_buffer_mode);
int restoreZBuffer(int left, int top, int mode, int right, int bottom);
int getVideoMemory(int *total_memory, int *available_memory, int *memory_type);
int selectCard(int card_index);
int buildCardList(int *out_card_count, char **out_driver_names, char **out_card_names,
                  int *out_vendor_ids, int *out_device_ids);
int lockHoldBuffer();
int unlockHoldBuffer();

} // namespace nocturne::engine
