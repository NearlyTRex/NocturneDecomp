#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <span>

namespace nocturne::core {

class CWater {
public:
    // The frames the surface's ripples are drawn with, WATER0.RAW to WATER15.RAW.
    static constexpr std::size_t kTextureCount = 16;

    CWater();

    // Loads every ripple frame.
    void captureTextures(engine::CDemonRenderer &renderer);
    void calculateVisibleTiles();
    void process();
    void render(int render_mode);

    // As the set file gives them: the surface's height in world units and its tiles' size.
    void setLevel(float water_level_y, float tile_size);
    void setWaveAnimationEnabled(bool enabled);
    [[nodiscard]] float getWaterLevelY() const;
    [[nodiscard]] float getTileSize() const;
    [[nodiscard]] bool getWaveAnimationEnabled() const;
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getTextures() const;

private:
    bool wave_animation_enabled_ = false;
    float water_level_y_ = 0.0F;
    float tile_size_ = 0.0F;
    std::array<platform::SMRGLTextureBasic, kTextureCount> textures_;
};

} // namespace nocturne::core
