#pragma once

#include "common/fwd.h"
#include "core/dcamera/demoncamera.h"
#include "core/fwd.h"

#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// What a light draws with besides a camera's: the eight spot filters a light's volumetric
// intensity picks between, and the four a light wider than 256 picks between instead.
struct SDemonLightOwners {
    SDemonCameraOwners camera;
    std::span<const CDemonFilter> global_filters;
    std::span<const CDemonFilter> player_filters;
};

// A spotlight: a camera at the light whose depth buffer is its shadow map, and the filter that
// shapes its beam.
class CDemonLight : public CDemonCamera {
public:
    // The widest shadow map that takes the global filters.
    static constexpr int kMaxGlobalFilterWidth = 0x100;

    CDemonLight(const SDemonLightOwners &owners, int shadow_map_width, int shadow_map_height);
    ~CDemonLight() override;
    CDemonLight(const CDemonLight &) = delete;
    CDemonLight &operator=(const CDemonLight &) = delete;
    CDemonLight(CDemonLight &&) = delete;
    CDemonLight &operator=(CDemonLight &&) = delete;

    // A shadow map and visibility bits of the light's size, and the global filter its volumetric
    // intensity picks.
    void init();
    void free();
    void allocMasterZBuffer();
    void freeMasterZBuffer();
    void beginScene(int skip_clear_buffers);
    void endScene(int restore_viewport_state);
    void beginBackgroundScene();
    void endBackgroundScene();
    void restoreDirtyRegions();
    std::uint16_t *projectLightAndMarkVisibility(common::CVector3i *projected_coord,
                                                 std::uint8_t x_round_flag,
                                                 std::uint8_t y_round_flag);
    void renderShadowMapDebugView(int screen_x, int screen_y, int display_size);
    void clearCircularShadowMapEdges();
    void renderCoronaGeometry();
    void renderLightBloomQuad();
    void renderLightGlowSprites();
    // A buffer the filter is drawn into at an offset, for a filter that moves.
    void allocateFilter();
    // The filter shapes the beam from now on, its shadow shifts scaled down by filter_index; a
    // light with a buffer gets it moved by the 24.8 offsets, wrapping, and blended between texels.
    void applyFilter(const CDemonFilter &filter, int filter_index, int filter_pos_x,
                     int filter_pos_y);
    void initializeVisibilityBuffer();
    int testShadowMapRegion(CRect *rect);
    // From 0 to 1; picks the filter the beam takes.
    void setVolumetricIntensity(float intensity);
    void drawShadowDepthBuffer(int screen_x, int screen_y, int brightness_offset);

    [[nodiscard]] bool isLightEnabled() const;
    void setLightEnabled(bool light_enabled);
    // 0 for a rectangular shadow, 1 for a circular one.
    [[nodiscard]] int getShadowBoundsMode() const;
    void setShadowBoundsMode(int shadow_bounds_mode);
    [[nodiscard]] int getShadowMapWidth() const;
    [[nodiscard]] int getShadowMapHeight() const;
    // Empty until init.
    [[nodiscard]] std::span<const std::uint16_t> getShadowDepthBuffer() const;
    [[nodiscard]] std::span<const std::uint8_t> getLightmapVisibilityBits() const;
    // The beam's levels, row by row, texture_width a row: the filter's own, or its moved copy.
    [[nodiscard]] std::span<const std::uint8_t> getPrecomputedLightingTextures() const;
    [[nodiscard]] int getTextureWidth() const;
    [[nodiscard]] int getTextureHeight() const;
    [[nodiscard]] int getTextureRowShift() const;
    [[nodiscard]] int getTextureColShift() const;
    [[nodiscard]] unsigned getTextureCoordMask() const;
    [[nodiscard]] int getShadowXShift() const;
    [[nodiscard]] int getShadowYShift() const;
    [[nodiscard]] const std::string &getFilterName() const;
    // 16.16; how much wider than tall the beam is.
    [[nodiscard]] int getTransformScaleFactor() const;
    void setTransformScaleFactor(int transform_scale_factor);
    [[nodiscard]] float getVolumetricIntensity() const;
    [[nodiscard]] bool hasFilterBuffer() const;

private:
    static constexpr float kDefaultMaxDistance = 255.0F;
    static constexpr int kUnitScale = 0x10000;

    [[nodiscard]] const CDemonFilter &pickFilter(std::span<const CDemonFilter> filters,
                                                 float scale) const;
    void blendFilterIntoBuffer(std::span<const std::uint8_t> levels, int filter_pos_x,
                               int filter_pos_y);

    std::span<const CDemonFilter> global_filters_;
    std::span<const CDemonFilter> player_filters_;
    bool light_enabled_ = true;
    int shadow_bounds_mode_ = 1;
    int shadow_map_width_;
    int shadow_map_height_;
    std::vector<std::uint16_t> shadow_depth_buffer_;
    std::vector<std::uint8_t> lightmap_visibility_bits_;
    std::span<const std::uint8_t> precomputed_lighting_textures_;
    std::vector<std::uint8_t> filter_buffer_;
    int texture_width_ = 0;
    int texture_height_ = 0;
    int texture_row_shift_ = 0;
    int texture_col_shift_ = 0;
    unsigned texture_coord_mask_ = 0;
    int shadow_x_shift_ = 0;
    int shadow_y_shift_ = 0;
    std::string filter_name_;
    int transform_scale_factor_ = kUnitScale;
    float volumetric_intensity_ = 1.0F;
};

} // namespace nocturne::core
