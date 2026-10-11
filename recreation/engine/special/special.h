#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "platform/externalrendererbridge.h"
#include "platform/fwd.h"

#include <cstdint>

namespace nocturne::engine {

// The engine's side of the hardware renderer: whether it is drawing, the frame lock that hands
// the software renderer its image, and the software paths that run without it.
class CSpecial {
public:
    CSpecial(platform::IRenderer &renderer, IScreenDevice &screen, const C2d &two_d);

    // The INI's useDirect3D: whether loadExternalRenderer may start the renderer.
    [[nodiscard]] bool getUseDirect3D() const;
    void setUseDirect3D(bool use_direct3d);
    // Whether frames go through the hardware renderer.
    [[nodiscard]] bool getUseExternalRenderer() const;

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
    void renderAlphaRow32(std::uint32_t *destPixels, std::uint8_t *srcIndices,
                          std::uint8_t *srcAlpha, int globalAlpha, int pixelCount);
    void renderAlphaRow16(std::uint16_t *destPixels, std::uint8_t *srcIndices,
                          std::uint8_t *srcAlpha, int globalAlpha, int pixelCount);
    void renderScanline(SSoftwareEdge *left, SSoftwareEdge *right, int scanline_y);
    void transformAndProjectPoint(platform::SProjectedVertex *output, common::CVector3i *input);
    void transformPoint(platform::SProjectedVertex *output, common::CVector3i *input);
    int loadExternalRenderer();
    int kill();
    int lockFrame();
    int unlockFrame();
    int beginScene();
    int endScene();
    int selectTextureFromPalette(platform::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
    int updateTextureFromPalette(platform::SMRGLTextureBasic *tex, SRGBColorPalette *palette_data);
    int setResolutionAndColorTable(int width, int height, int bits_per_pixel);
    int restoreVideoMode();
    int drawPolygon(platform::SRenderVertex *vertices, int vertex_count, int render_flags);
    int drawPolygon2(platform::SRenderVertex **vertex_array, int vertex_count, int render_flags);
    int drawPolyList(platform::SRenderVertex *vertex_buffer,
                     platform::SMRGLPrimitiveQuad **polygons, int polygon_count, int render_flags);
    int drawPolyList2(platform::SRenderVertex *vertex_buffer, platform::SInputFace **polygons,
                      int polygon_count, int render_flags);
    int clear();
    int setFogColor(int red, int green, int blue);
    int sync();
    int clearZBuffer();
    void presentToExternalRenderer();
    int masterZBuffer(int slot);
    int restoreZBuffer(int slot, int left, int top, int right, int bottom);
    int getVideoMemory(int *total_memory, int *available_memory, int *memory_type);
    int selectCard(int card_index);
    int buildCardList(int *out_card_count, char **out_driver_names, char **out_card_names,
                      int *out_vendor_ids, int *out_device_ids);
    int lockHoldBuffer();
    int unlockHoldBuffer();

private:
    void fillBridge();

    platform::IRenderer &renderer_;
    IScreenDevice &screen_;
    const C2d &two_d_;
    // The renderer keeps these addresses for as long as it runs.
    platform::CExternalRendererBridge bridge_;
    bool use_direct3d_ = false;
    bool use_external_renderer_ = false;
    bool loaded_ = false;
    bool frame_locked_ = false;
    int saved_bits_per_pixel_ = 0;
    int external_bits_per_pixel_ = 0;
    int card_index_ = 0;
    int fog_red_ = 0;
    int fog_green_ = 0;
    int fog_blue_ = 0;
};

} // namespace nocturne::engine
