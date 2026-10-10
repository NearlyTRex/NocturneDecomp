#pragma once

#include "common/render/renderstate.h"
#include "common/render/screenvertex.h"
#include "platform/externalrendererbridge.h"
#include "platform/gl/glapi.h"
#include "platform/renderer.h"

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::platform::gl {

class CGlDevice;
class IGlFramePresenter;

// The hardware renderer on OpenGL 3.3 core, drawing in the display's context. A run of draws
// sharing a pipeline state and a texture is one GL draw.
class CGlRenderer final : public IRenderer {
public:
    // The largest texture the engine works at.
    static constexpr int kMaxTextureDimension = 256;
    // What the list draws divide by instead of a polygon's farthest depth. A uniform scale
    // cancels in the perspective divide, so the two differ only in the precision they keep.
    static constexpr int kListRhwScale = 0x100;

    CGlRenderer(const SGlApi &gl, IGlFramePresenter &presenter);
    ~CGlRenderer() override;
    CGlRenderer(const CGlRenderer &) = delete;
    CGlRenderer &operator=(const CGlRenderer &) = delete;

    // The bridge is copied: the engine builds it on its stack, and only the addresses in it
    // stay valid.
    int init(CExternalRendererBridge *bridge) override;
    void kill() override;
    int selectCard(int card_index) override;
    int buildCardList(int *out_card_count, char **out_driver_names, char **out_card_names,
                      int *out_vendor_ids, int *out_device_ids) override;
    int getVideoMemory(int *total_memory, int *available_memory, int *memory_type) override;
    int setVideoMode2(int width, int height, int bits_per_pixel,
                      void **screen_buffer_array) override;
    int restoreVideoMode() override;
    int setColorTable16(std::uint8_t *source_palette, std::uint16_t *color_table) override;
    int lockFrame() override;
    int unlockFrame() override;
    int lockHoldBuffer() override;
    int unlockHoldBuffer() override;
    int toggle() override;
    int sync() override;
    int beginScene() override;
    int endScene() override;
    int clear() override;
    int clearZBuffer() override;
    int clearZBox(int left, int right, int top, int bottom) override;
    int masterZBuffer(int slot) override;
    int restoreZBuffer(int slot, int left, int top, int right, int bottom) override;
    int setFogColor(int red, int green, int blue) override;
    int setMipMapLevel(int mipmap_level) override;
    int selectTexture(SMRGLTextureBasic *texture_info, int texture_dimension,
                      std::uint8_t *texture_data, std::uint8_t *palette_data,
                      std::uint8_t *opacity_data) override;
    int updateTexture(SMRGLTextureBasic *texture_info, int texture_dimension,
                      std::uint8_t *texture_data, std::uint8_t *palette_data,
                      std::uint8_t *opacity_data) override;
    int drawPolygon(SRenderVertex *vertices, int vertex_count, int render_flags) override;
    int drawPolygon2(SRenderVertex **vertex_array, int vertex_count, int render_flags) override;
    int drawPolyList(SRenderVertex *vertex_buffer, SMRGLPrimitiveQuad **polygons, int polygon_count,
                     int render_flags) override;
    int drawPolyList2(SRenderVertex *vertex_buffer, SInputFace **polygons, int polygon_count,
                      int render_flags) override;
    int addParticle(void *particle_data, int particle_type) override;
    int flushParticleList() override;
    int add3dLine(void *start_point, void *end_point, int line_style) override;
    int flushLineList() override;
    void beginReflectionPass() override;
    void endReflectionPass() override;

private:
    // The pipeline state and texture the batch is being drawn with, and the pipeline's epoch
    // when they were set: anything that drew with GL since leaves the record stale.
    struct SDrawRecord {
        common::SPipelineState state;
        GLuint texture = 0;
        std::uint32_t epoch = 0;

        bool operator==(const SDrawRecord &) const = default;
    };

    [[nodiscard]] int readBridge(int *CExternalRendererBridge::*member, int fallback) const;
    [[nodiscard]] common::SRenderStateInput gatherState(int render_flags) const;
    [[nodiscard]] common::SVertexContext gatherVertexContext(std::uint32_t effective_flags,
                                                             int rhw_scale) const;
    [[nodiscard]] bool canDraw() const;
    // Settles the state and texture for a draw, drawing the batch first if either moves.
    [[nodiscard]] common::SVertexContext beginDraw(int render_flags, int rhw_scale);
    void submitPolygon(const common::SVertexContext &context,
                       std::span<const common::SVertexInput> vertices);
    // Draws the polygon gathered in polygon_, scaled by its farthest depth.
    void drawGathered(int render_flags);
    // Remembers what the engine named and returns the GL texture for it, uploading when the
    // image is not resident or refresh asks for it again.
    int nameTexture(const SMRGLTextureBasic *texture_info, const std::uint8_t *texture_data,
                    const std::uint8_t *palette_data, const std::uint8_t *opacity_data,
                    bool refresh);
    [[nodiscard]] GLuint resolveTexture(const SMRGLTextureBasic *texture_info, bool refresh);
    [[nodiscard]] bool hasDevice() const;

    const SGlApi &gl_;
    IGlFramePresenter &presenter_;
    std::unique_ptr<CGlDevice> device_;
    std::optional<CExternalRendererBridge> bridge_;
    std::optional<SDrawRecord> record_;
    // What selectTexture last named, and what it resolved to.
    const std::uint8_t *texture_data_ = nullptr;
    const std::uint8_t *texture_palette_ = nullptr;
    const std::uint8_t *texture_opacity_ = nullptr;
    GLuint texture_object_ = 0;
    // The palette an untextured draw takes its colour from, as setColorTable16 last gave it.
    const std::uint8_t *color_palette_ = nullptr;
    // 0..1 per channel; kept across init so a colour set before the device opens still holds.
    std::array<float, 3> fog_colour_{};
    std::vector<std::uint32_t> expanded_;
    std::vector<common::SVertexInput> polygon_;
    std::vector<int> depths_;
    // The card list hands the engine pointers into these.
    std::string driver_name_ = "OpenGL";
    std::string card_name_;
};

} // namespace nocturne::platform::gl
