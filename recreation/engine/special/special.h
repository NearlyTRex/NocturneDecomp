#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstdint>

namespace nocturne::engine {

void clearScreen();
void clearZBufferNative();
void renderMMXPerspectiveScanline32(SSoftwareEdge *left_vertex, SSoftwareEdge *right_vertex,
                                    int scanline_y);
void renderMMXPerspectiveScanline16(SSoftwareEdge *left_vertex, SSoftwareEdge *right_vertex,
                                    int scanline_y);
void renderPerspectiveCorrectScanline32(SSoftwareEdge *left_vertex, SSoftwareEdge *right_vertex,
                                        int scanline_y);
void renderPerspectiveCorrectScanline16(SSoftwareEdge *left_vertex, SSoftwareEdge *right_vertex,
                                        int scanline_y);
void renderAlphaRow32(std::uint32_t *destPixels, std::uint8_t *srcIndices, std::uint8_t *srcAlpha,
                      int globalAlpha, int pixelCount);
void renderAlphaRow16(std::uint16_t *destPixels, std::uint8_t *srcIndices, std::uint8_t *srcAlpha,
                      int globalAlpha, int pixelCount);
void renderScanline(SSoftwareEdge *left, SSoftwareEdge *right, int scanline_y);
void transformAndProjectPoint(SProjectedVertex *output, common::CVector3i *input);
void transformPoint(SProjectedVertex *output, common::CVector3i *input);
int loadExternalRenderer();
int kill();
int lockFrame();
int unlockFrame(int clear_lock_flag);
int beginScene();
int endScene();
int selectTextureFromPalette(platform::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
int updateTextureFromPalette(platform::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
int setResolutionAndColorTable(int width, int height, int bits_per_pixel);
int restoreVideoMode();
int drawPolygon(platform::SRenderVertex *vertices, int vertex_count, int render_flags);
int drawPolygon2(platform::SRenderVertex **vertex_array, int vertex_count, int render_flags);
int drawPolyList(platform::SRenderVertex *vertex_buffer, platform::SMRGLPrimitiveQuad **polygons,
                 int polygon_count, int render_flags);
int drawPolyList2(platform::SRenderVertex *vertex_buffer, platform::SInputFace **polygons,
                  int polygon_count, int render_flags);
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
