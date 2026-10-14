#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "platform/externalrendererbridge.h"
#include "platform/fwd.h"

#include <cstdint>
#include <optional>
#include <span>

namespace nocturne::engine {

// The engine's side of the hardware renderer: whether it is drawing, the frame lock that hands
// the software renderer its image, and the software paths that run without it.
class CSpecial {
public:
    // The renderer bridge points at the current texture's dimension.
    CSpecial(platform::IRenderer &renderer, IScreenDevice &screen, const C2d &two_d,
             const CMatrix &matrix, const C3d &three_d, SCurrentTexture &current_texture);

    // The INI's useDirect3D: whether loadExternalRenderer may start the renderer.
    [[nodiscard]] bool getUseDirect3D() const;
    void setUseDirect3D(bool use_direct3d);
    // Whether frames go through the hardware renderer.
    [[nodiscard]] bool getUseExternalRenderer() const;
    // The INI's currentBoard: the graphics card the Graphics Options picked.
    [[nodiscard]] int getCurrentGraphicsBoard() const;
    void setCurrentGraphicsBoard(int board);

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
    // Draws hardware-palette indices over a row, each pixel at its own alpha scaled by the 16-bit
    // global alpha, up to the shortest of the three rows.
    void renderAlphaRow32(std::span<std::uint32_t> dest_pixels,
                          std::span<const std::uint8_t> src_indices,
                          std::span<const std::uint8_t> src_alpha, int global_alpha);
    void renderAlphaRow16(std::span<std::uint16_t> dest_pixels,
                          std::span<const std::uint8_t> src_indices,
                          std::span<const std::uint8_t> src_alpha, int global_alpha);
    void renderScanline(SSoftwareEdge *left, SSoftwareEdge *right, int scanline_y);
    // Takes the point into eye space and onto the screen. Outside the view, screen_x holds the
    // clip flags instead, and inv_z and screen_y keep what they held.
    void transformAndProjectPoint(platform::SProjectedVertex &output,
                                  const common::CVector3i &input) const;
    void transformPoint(platform::SProjectedVertex *output, common::CVector3i *input);
    int loadExternalRenderer();
    int kill();
    int lockFrame();
    int unlockFrame();
    int beginScene();
    int endScene();
    // Hand the hardware renderer the current texture's texels and opacity with this palette:
    // select for one it may already hold, update for one just loaded. 0 without it.
    int selectTextureFromPalette(platform::SMRGLTextureBasic &texture,
                                 std::span<std::uint8_t> palette);
    int updateTextureFromPalette(platform::SMRGLTextureBasic &texture,
                                 std::span<std::uint8_t> palette);
    int setResolutionAndColorTable(int width, int height, int bits_per_pixel);
    int restoreVideoMode();
    // Each hands the polygons to the hardware renderer and returns what it does; 0 without it.
    int drawPolygon(std::span<platform::SRenderVertex> vertices, int render_flags);
    int drawPolygon2(std::span<platform::SRenderVertex *> vertices, int render_flags);
    int drawPolyList(platform::SRenderVertex *vertex_buffer,
                     std::span<platform::SMRGLPrimitiveQuad *> polygons, int render_flags);
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
    using TextureEntry = int (platform::IRenderer::*)(platform::SMRGLTextureBasic *, int,
                                                      std::uint8_t *, std::uint8_t *,
                                                      std::uint8_t *);

    void fillBridge();
    int passCurrentTexture(TextureEntry entry, platform::SMRGLTextureBasic &texture,
                           std::span<std::uint8_t> palette);
    [[nodiscard]] std::optional<std::uint32_t>
    getAlphaPixel(std::uint8_t index, std::uint32_t coverage, std::uint32_t dest) const;

    platform::IRenderer &renderer_;
    IScreenDevice &screen_;
    const C2d &two_d_;
    const CMatrix &matrix_;
    const C3d &three_d_;
    SCurrentTexture &current_texture_;
    // The renderer keeps these addresses for as long as it runs.
    platform::CExternalRendererBridge bridge_;
    bool use_direct3d_ = false;
    bool use_external_renderer_ = false;
    bool loaded_ = false;
    bool frame_locked_ = false;
    int saved_bits_per_pixel_ = 0;
    int external_bits_per_pixel_ = 0;
    int card_index_ = 0;
    int current_graphics_board_ = 0;
    // The renderer's processor type, 0 for its reciprocal-depth buffer as the software renderer
    // writes it. Both builds set 0 and never anything else.
    int processor_type_ = 0;
    int fog_red_ = 0;
    int fog_green_ = 0;
    int fog_blue_ = 0;
};

} // namespace nocturne::engine
