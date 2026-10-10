#pragma once

#include "platform/renderer.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockRenderer : public IRenderer {
public:
    MOCK_METHOD(int, init, (CExternalRendererBridge * bridge), (override));
    MOCK_METHOD(void, kill, (), (override));
    MOCK_METHOD(int, selectCard, (int card_index), (override));
    MOCK_METHOD(int, buildCardList,
                (int *out_card_count, char **out_driver_names, char **out_card_names,
                 int *out_vendor_ids, int *out_device_ids),
                (override));
    MOCK_METHOD(int, getVideoMemory, (int *total_memory, int *available_memory, int *memory_type),
                (override));
    MOCK_METHOD(int, setVideoMode2,
                (int width, int height, int bits_per_pixel, void **screen_buffer_array),
                (override));
    MOCK_METHOD(int, restoreVideoMode, (), (override));
    MOCK_METHOD(int, setColorTable16, (std::uint8_t * source_palette, std::uint16_t *color_table),
                (override));
    MOCK_METHOD(int, lockFrame, (), (override));
    MOCK_METHOD(int, unlockFrame, (), (override));
    MOCK_METHOD(int, lockHoldBuffer, (), (override));
    MOCK_METHOD(int, unlockHoldBuffer, (), (override));
    MOCK_METHOD(int, toggle, (), (override));
    MOCK_METHOD(int, sync, (), (override));
    MOCK_METHOD(int, beginScene, (), (override));
    MOCK_METHOD(int, endScene, (), (override));
    MOCK_METHOD(int, clear, (), (override));
    MOCK_METHOD(int, clearZBuffer, (), (override));
    MOCK_METHOD(int, clearZBox, (int left, int right, int top, int bottom), (override));
    MOCK_METHOD(int, masterZBuffer, (int slot), (override));
    MOCK_METHOD(int, restoreZBuffer, (int slot, int left, int top, int right, int bottom),
                (override));
    MOCK_METHOD(int, setFogColor, (int red, int green, int blue), (override));
    MOCK_METHOD(int, setMipMapLevel, (int mipmap_level), (override));
    MOCK_METHOD(int, selectTexture,
                (SMRGLTextureBasic * texture_info, int texture_dimension,
                 std::uint8_t *texture_data, std::uint8_t *palette_data,
                 std::uint8_t *opacity_data),
                (override));
    MOCK_METHOD(int, updateTexture,
                (SMRGLTextureBasic * texture_info, int texture_dimension,
                 std::uint8_t *texture_data, std::uint8_t *palette_data,
                 std::uint8_t *opacity_data),
                (override));
    MOCK_METHOD(int, drawPolygon, (SRenderVertex * vertices, int vertex_count, int render_flags),
                (override));
    MOCK_METHOD(int, drawPolygon2,
                (SRenderVertex * *vertex_array, int vertex_count, int render_flags), (override));
    MOCK_METHOD(int, drawPolyList,
                (SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad **polygons, int polygon_count,
                 int render_flags),
                (override));
    MOCK_METHOD(int, drawPolyList2,
                (SRenderVertex * vertex_buffer, SInputFace **polygons, int polygon_count,
                 int render_flags),
                (override));
    MOCK_METHOD(int, addParticle, (void *particle_data, int particle_type), (override));
    MOCK_METHOD(int, flushParticleList, (), (override));
    MOCK_METHOD(int, add3dLine, (void *start_point, void *end_point, int line_style), (override));
    MOCK_METHOD(int, flushLineList, (), (override));
    MOCK_METHOD(void, beginReflectionPass, (), (override));
    MOCK_METHOD(void, endReflectionPass, (), (override));
};

} // namespace nocturne::platform
