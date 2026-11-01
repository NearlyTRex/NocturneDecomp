#include "core/dlight/demonlight.h"

#include "common/math/fixed.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfilter/demonfilter.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

// What a filter buffer holds: a 256 by 256 filter.
constexpr std::size_t kFilterBufferSize = 0x10000;
// The shadow shifts start at 8, the 24.8 fraction, before the map's and the filter's sizes.
constexpr int kShadowShiftBase = 8;
constexpr int kFullFilterWidth = 0x100;
constexpr unsigned kBlendShift = 16;
constexpr int kFractionMask = 0xff;
constexpr int kFractionBits = 8;
constexpr float kGlobalFilterScale = 7.0F;
constexpr float kPlayerFilterScale = 3.0F;
constexpr std::size_t kBitsPerByte = 8;

[[nodiscard]] int log2Floor(int value) {
    int shift = 0;
    for (; value > 1; value >>= 1) {
        ++shift;
    }
    return shift;
}

} // namespace

// deferred: the volumetric beam off and antialiasing on, with the light's scene rendering
// nocedit 0x004726a0
CDemonLight::CDemonLight(const SDemonLightOwners &owners, int shadow_map_width,
                         int shadow_map_height)
    : CDemonCamera(owners.camera), global_filters_(owners.global_filters),
      player_filters_(owners.player_filters), shadow_map_width_(shadow_map_width),
      shadow_map_height_(shadow_map_height) {
    setMaxDistance(kDefaultMaxDistance);
}

// nocedit 0x00472760
CDemonLight::~CDemonLight() = default;

// The original left 16 bytes and 512 spare past the shadow map to align it.
// nocedit 0x004727c0
void CDemonLight::init() {
    free();
    const std::size_t texels =
        static_cast<std::size_t>(shadow_map_width_) * static_cast<std::size_t>(shadow_map_height_);
    shadow_depth_buffer_.assign(texels, 0);
    lightmap_visibility_bits_.assign(texels / kBitsPerByte, 0);
    applyFilter(pickFilter(global_filters_, kGlobalFilterScale), 0, 0, 0);
}

// The original went on pointing the beam at the filter buffer it had freed.
// deferred: letting go of the master z-buffer, with allocMasterZBuffer
// nocedit 0x004728b0
void CDemonLight::free() {
    shadow_depth_buffer_.clear();
    lightmap_visibility_bits_.clear();
    filter_buffer_.clear();
    precomputed_lighting_textures_ = {};
}

// nocedit 0x00474720
void CDemonLight::allocateFilter() {
    filter_buffer_.assign(kFilterBufferSize, 0);
}

// nocedit 0x00474770
void CDemonLight::applyFilter(const CDemonFilter &filter, int filter_index, int filter_pos_x,
                              int filter_pos_y) {
    precomputed_lighting_textures_ = filter.getData();
    texture_width_ = filter.getSize();
    texture_height_ = filter.getCount();
    texture_row_shift_ = log2Floor(texture_width_);
    texture_col_shift_ = texture_row_shift_;
    int shift = kShadowShiftBase + log2Floor(shadow_map_width_);
    for (int width = texture_width_; width < kFullFilterWidth; width *= 2) {
        ++shift;
    }
    shadow_x_shift_ = shift - filter_index;
    shadow_y_shift_ = shift - filter_index;
    texture_coord_mask_ = static_cast<unsigned>(texture_width_ - 1);
    if (!filter_buffer_.empty()) {
        blendFilterIntoBuffer(filter.getData(), filter_pos_x, filter_pos_y);
        precomputed_lighting_textures_ = filter_buffer_;
    }
    filter_name_ = filter.getName();
}

// Each texel is the bilinear blend of the four it falls between, in 256ths, wrapping at the
// filter's edges.
void CDemonLight::blendFilterIntoBuffer(std::span<const std::uint8_t> levels, int filter_pos_x,
                                        int filter_pos_y) {
    const int column_mask = texture_width_ - 1;
    const int row_mask = texture_height_ - 1;
    const unsigned fraction_x = static_cast<unsigned>(filter_pos_x) & kFractionMask;
    const unsigned fraction_y = static_cast<unsigned>(filter_pos_y) & kFractionMask;
    const int start_x = filter_pos_x >> kFractionBits;
    const int start_y = filter_pos_y >> kFractionBits;
    const auto level = [&levels](int row, int column) -> unsigned {
        return levels[static_cast<std::size_t>(row) + static_cast<std::size_t>(column)];
    };
    std::size_t out = 0;
    for (int y = 0; y < texture_height_; ++y) {
        const int top = ((start_y + y) & row_mask) * texture_width_;
        const int bottom = ((start_y + y + 1) & row_mask) * texture_width_;
        for (int x = 0; x < texture_width_; ++x, ++out) {
            const int left = (start_x + x) & column_mask;
            const int right = (start_x + x + 1) & column_mask;
            const unsigned lower = (level(bottom, right) * fraction_x) +
                                   (level(bottom, left) * (kFractionMask - fraction_x));
            const unsigned upper = (level(top, right) * fraction_x) +
                                   ((kFractionMask - fraction_x) * level(top, left));
            filter_buffer_[out] = static_cast<std::uint8_t>(
                ((fraction_y * lower) + ((kFractionMask - fraction_y) * upper)) >> kBlendShift);
        }
    }
}

// nocedit 0x004765e0
void CDemonLight::setVolumetricIntensity(float intensity) {
    volumetric_intensity_ = intensity;
    if (shadow_map_width_ > kMaxGlobalFilterWidth) {
        applyFilter(pickFilter(player_filters_, kPlayerFilterScale), 0, 0, 0);
        return;
    }
    applyFilter(pickFilter(global_filters_, kGlobalFilterScale), 0, 0, 0);
}

// The original read past the filters for an intensity above one or below zero.
const CDemonFilter &CDemonLight::pickFilter(std::span<const CDemonFilter> filters,
                                            float scale) const {
    const int index = common::truncateToInt(static_cast<double>(volumetric_intensity_) *
                                            static_cast<double>(scale));
    return filters[static_cast<std::size_t>(
        std::clamp(index, 0, static_cast<int>(filters.size()) - 1))];
}

bool CDemonLight::isLightEnabled() const {
    return light_enabled_;
}

void CDemonLight::setLightEnabled(bool light_enabled) {
    light_enabled_ = light_enabled;
}

int CDemonLight::getShadowBoundsMode() const {
    return shadow_bounds_mode_;
}

void CDemonLight::setShadowBoundsMode(int shadow_bounds_mode) {
    shadow_bounds_mode_ = shadow_bounds_mode;
}

int CDemonLight::getShadowMapWidth() const {
    return shadow_map_width_;
}

int CDemonLight::getShadowMapHeight() const {
    return shadow_map_height_;
}

std::span<const std::uint16_t> CDemonLight::getShadowDepthBuffer() const {
    return shadow_depth_buffer_;
}

std::span<const std::uint8_t> CDemonLight::getLightmapVisibilityBits() const {
    return lightmap_visibility_bits_;
}

std::span<const std::uint8_t> CDemonLight::getPrecomputedLightingTextures() const {
    return precomputed_lighting_textures_;
}

int CDemonLight::getTextureWidth() const {
    return texture_width_;
}

int CDemonLight::getTextureHeight() const {
    return texture_height_;
}

int CDemonLight::getTextureRowShift() const {
    return texture_row_shift_;
}

int CDemonLight::getTextureColShift() const {
    return texture_col_shift_;
}

unsigned CDemonLight::getTextureCoordMask() const {
    return texture_coord_mask_;
}

int CDemonLight::getShadowXShift() const {
    return shadow_x_shift_;
}

int CDemonLight::getShadowYShift() const {
    return shadow_y_shift_;
}

const std::string &CDemonLight::getFilterName() const {
    return filter_name_;
}

int CDemonLight::getTransformScaleFactor() const {
    return transform_scale_factor_;
}

void CDemonLight::setTransformScaleFactor(int transform_scale_factor) {
    transform_scale_factor_ = transform_scale_factor;
}

float CDemonLight::getVolumetricIntensity() const {
    return volumetric_intensity_;
}

bool CDemonLight::hasFilterBuffer() const {
    return !filter_buffer_.empty();
}

} // namespace nocturne::core
