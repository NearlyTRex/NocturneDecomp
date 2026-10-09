#pragma once

#include "platform/fwd.h"

#include <cstdint>

namespace nocturne::platform {

// The hardware renderer the original loaded as a DLL. Methods are its entry
// points; engine/special keeps the wrappers that gate them.
class IRenderer {
public:
    virtual ~IRenderer() = default;

    // The bridge points at game state the renderer reads every frame.
    virtual int init(CExternalRendererBridge *bridge) = 0;
    virtual void kill() = 0;
    virtual int selectCard(int card_index) = 0;
    virtual int buildCardList(int *out_card_count, char **out_driver_names, char **out_card_names,
                              int *out_vendor_ids, int *out_device_ids) = 0;
    virtual int getVideoMemory(int *total_memory, int *available_memory, int *memory_type) = 0;
    // Writes one row pointer per scanline into screen_buffer_array.
    virtual int setVideoMode2(int width, int height, int bits_per_pixel,
                              void **screen_buffer_array) = 0;
    virtual int restoreVideoMode() = 0;
    virtual int setColorTable16(std::uint8_t *source_palette, std::uint16_t *color_table) = 0;
    virtual int lockFrame() = 0;
    virtual int unlockFrame() = 0;
    virtual int lockHoldBuffer() = 0;
    virtual int unlockHoldBuffer() = 0;
    virtual int toggle() = 0;
    virtual int sync() = 0;
    virtual int beginScene() = 0;
    virtual int endScene() = 0;
    virtual int clear() = 0;
    virtual int clearZBuffer() = 0;
    virtual int clearZBox(int left, int right, int top, int bottom) = 0;
    virtual int masterZBuffer(int z_buffer_mode) = 0;
    virtual int restoreZBuffer(int left, int top, int mode, int right, int bottom) = 0;
    virtual int setFogColor(int red, int green, int blue) = 0;
    virtual int setMipMapLevel(int mipmap_level) = 0;
    virtual int selectTexture(SMRGLTextureBasic *texture_info, int texture_dimension,
                              std::uint8_t *texture_data, std::uint8_t *palette_data,
                              std::uint8_t *opacity_data) = 0;
    virtual int updateTexture(SMRGLTextureBasic *texture_info, int texture_dimension,
                              std::uint8_t *texture_data, std::uint8_t *palette_data,
                              std::uint8_t *opacity_data) = 0;
    virtual int drawPolygon(SRenderVertex *vertices, int vertex_count, int render_flags) = 0;
    virtual int drawPolygon2(SRenderVertex **vertex_array, int vertex_count, int render_flags) = 0;
    virtual int drawPolyList(SRenderVertex *vertex_buffer, SMRGLPrimitiveQuad **polygons,
                             int polygon_count, int render_flags) = 0;
    virtual int drawPolyList2(SRenderVertex *vertex_buffer, SInputFace **polygons,
                              int polygon_count, int render_flags) = 0;
    virtual int addParticle(void *particle_data, int particle_type) = 0;
    virtual int flushParticleList() = 0;
    virtual int add3dLine(void *start_point, void *end_point, int line_style) = 0;
    virtual int flushLineList() = 0;
};

} // namespace nocturne::platform
