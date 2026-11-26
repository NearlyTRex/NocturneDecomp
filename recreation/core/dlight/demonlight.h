#pragma once

#include "common/fwd.h"
#include "core/dcamera/demoncamera.h"
#include "core/dlight/lightmappixel.h"
#include "core/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// What a light draws with besides a camera's: the eight spot filters a light's volumetric
// intensity picks between, the four a light wider than 256 picks between instead, and the
// textures lights glow with.
struct SDemonLightOwners {
    SDemonCameraOwners camera;
    std::span<const CDemonFilter> global_filters;
    std::span<const CDemonFilter> player_filters;
    SLightGlowTextures &glow;
};

// A spotlight: a camera at the light whose depth buffer is its shadow map, and the filter that
// shapes its beam.
class CDemonLight : public CDemonCamera {
public:
    // The display's most rows; a row's first pixel past its last where the light reaches none.
    static constexpr std::size_t kDisplayRows = 240;
    static constexpr std::size_t kDisplayColumns = 320;
    static constexpr int kNoLeftExtent = 999;

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
    // The master depths: the map as it is now, which its dirty regions go back to, taken from the
    // spotlights' shared budget.
    void allocMasterZBuffer();
    void freeMasterZBuffer();
    // Empty without master depths.
    [[nodiscard]] std::span<const std::uint16_t> getMasterZBuffer() const;
    // The light's scene: drawn from the light, the screen's rows its shadow map's while it is
    // open, which only depths are drawn into, the beam's aspect stretching its view, the map
    // cleared unless told to skip it. One open is fatal.
    void beginScene(int skip_clear_buffers);
    // Closes it, the screen's rows back, its reach the farthest depth drawn unless it kept the
    // map. Not open is fatal.
    void endScene(int restore_viewport_state);
    // Inside the light's scene, the outermost of the scenes nested in it draws into the master
    // depths instead of the map, which nothing then puts back. Without master depths it is fatal.
    void beginBackgroundScene();
    void endBackgroundScene();
    // For a scene that kept the map, the master depths back over every rectangle drawn into since
    // it began, or over the whole map once there were too many; the rectangles are forgotten
    // either way.
    void restoreDirtyRegions();
    // The shadow map entry the projected point in 16.16, on an odd row or column rounded on by a
    // quarter or a half, falls on, marked seen; none in front of the light or outside its map,
    // or for a circular shadow its circle.
    [[nodiscard]] std::optional<std::size_t>
    projectLightAndMarkVisibility(const common::CVector3i &projected_coord, bool x_odd, bool y_odd);
    void renderShadowMapDebugView(int screen_x, int screen_y, int display_size);
    // For a circular shadow, the map's corners outside its circle at depth 0, which nothing is
    // in front of.
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
    // Whether any of the map's entries in the rectangle, taken to whole bytes of the visibility
    // bits, was seen from the camera.
    [[nodiscard]] bool testShadowMapRegion(const CRect &rect) const;
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
    // What the camera's precomputeLight leaves on the light: a display pixel each, 320 a row, in
    // the camera's pool, and each display row's first and last pixel it reaches.
    [[nodiscard]] std::span<SLightMapPixel> getLightMap() const;
    void setLightMap(std::span<SLightMapPixel> light_map);
    [[nodiscard]] std::span<int, kDisplayRows> getLeftExtents();
    [[nodiscard]] std::span<const int, kDisplayRows> getLeftExtents() const;
    [[nodiscard]] std::span<int, kDisplayRows> getRightExtents();
    [[nodiscard]] std::span<const int, kDisplayRows> getRightExtents() const;

private:
    static constexpr float kDefaultMaxDistance = 255.0F;
    static constexpr int kUnitScale = 0x10000;

    [[nodiscard]] const CDemonFilter &pickFilter(std::span<const CDemonFilter> filters,
                                                 float scale) const;
    void blendFilterIntoBuffer(std::span<const std::uint8_t> levels, int filter_pos_x,
                               int filter_pos_y);
    // The master depths back over the rectangle, which is inside the map.
    void blitZBuffer(const CRect &source_rect);

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
    std::span<SLightMapPixel> light_map_;
    std::array<int, kDisplayRows> left_extents_{};
    std::array<int, kDisplayRows> right_extents_{};
    // The screen's rows the scene took over, and those its background scene took over in turn.
    std::vector<void *> saved_screen_rows_;
    std::vector<void *> saved_background_rows_;
    std::vector<std::uint16_t> master_zbuffer_;
};

} // namespace nocturne::core
