#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CWater {
public:
    CWater();

    void captureTextures();
    void calculateVisibleTiles();
    void process();
    void render(int render_mode);

    // As the set file gives them: the surface's height in world units and its tiles' size.
    void setLevel(float water_level_y, float tile_size);
    void setWaveAnimationEnabled(bool enabled);
    [[nodiscard]] float getWaterLevelY() const;
    [[nodiscard]] float getTileSize() const;
    [[nodiscard]] bool getWaveAnimationEnabled() const;

private:
    bool wave_animation_enabled_ = false;
    float water_level_y_ = 0.0F;
    float tile_size_ = 0.0F;
};

} // namespace nocturne::core
