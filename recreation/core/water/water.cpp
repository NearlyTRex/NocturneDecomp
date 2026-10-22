#include "core/water/water.h"

namespace nocturne::core {
namespace {

constexpr float kDefaultTileSize = 32.0F;

} // namespace

// nocedit 0x005e9e10
CWater::CWater() : tile_size_(kDefaultTileSize) {}

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
