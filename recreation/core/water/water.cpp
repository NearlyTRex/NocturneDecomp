#include "core/water/water.h"

#include "engine/drender/demonrenderer.h"
#include "platform/mrgltexturebasic.h"

#include <cstddef>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

constexpr float kDefaultTileSize = 32.0F;

} // namespace

// nocedit 0x005e9e10
CWater::CWater() : tile_size_(kDefaultTileSize) {
    for (std::size_t frame = 0; frame < textures_.size(); ++frame) {
        textures_.at(frame).texture_name = std::format("WATER{}.RAW", frame);
    }
}

// nocedit 0x005e9e40
void CWater::captureTextures(engine::CDemonRenderer &renderer) {
    for (platform::SMRGLTextureBasic &texture : textures_) {
        renderer.captureTexture(texture);
    }
}

std::span<const platform::SMRGLTextureBasic> CWater::getTextures() const {
    return textures_;
}

void CWater::setLevel(float water_level_y, float tile_size) {
    water_level_y_ = water_level_y;
    tile_size_ = tile_size;
}

void CWater::setWaveAnimationEnabled(bool enabled) {
    wave_animation_enabled_ = enabled;
}

float CWater::getWaterLevelY() const {
    return water_level_y_;
}

float CWater::getTileSize() const {
    return tile_size_;
}

bool CWater::getWaveAnimationEnabled() const {
    return wave_animation_enabled_;
}

} // namespace nocturne::core
