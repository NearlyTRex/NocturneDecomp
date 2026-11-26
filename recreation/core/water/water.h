#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/fwd.h"
#include "engine/fwd.h"
#include "platform/mrgltexturebasic.h"

#include <array>
#include <cstddef>
#include <span>
#include <vector>

namespace nocturne::core {

// What the water is drawn with: the renderer and its projection, the set's geometry it lies under
// and the lights it is lit by, the camera's tables, the game's frame time and the console its
// visible tiles are reported to.
struct SWaterOwners {
    engine::CDemonRenderer &renderer;
    const engine::CSpecial &special;
    const CDemonRaytrace &raytrace;
    const CDemonSet &set;
    SCameraTables &camera_tables;
    const CGame &game;
    engine::CConsole &console;
};

// A tile of the water's grid, counted out from its centre.
struct SWaterTile {
    int x = 0;
    int z = 0;

    bool operator==(const SWaterTile &) const = default;
};

class CWater {
public:
    // The frames the surface's ripples are drawn with, WATER0.RAW to WATER15.RAW.
    static constexpr std::size_t kTextureCount = 16;

    CWater();

    // Loads every ripple frame.
    void captureTextures(engine::CDemonRenderer &renderer);
    // The tiles of the surface over the set's geometry, centred under it and reaching a tenth
    // past it, that show at least 16 pixels in front of the depths; a surface at height 0 has
    // none. The count and the area they cover go to the console.
    void calculateVisibleTiles(const SWaterOwners &owners);
    void process();
    // Each visible tile, the ripples a frame on every 0x2000 of frame time and the waves rolling
    // with it: still water as a decal into the backdrop for render mode 0 and alpha-blended for
    // the others, or one solid colour in hardware; waving water blended over the frame. A surface
    // at height 0 draws nothing.
    void render(int render_mode, const SWaterOwners &owners);
    // As the set file gives them: the surface's height in world units and its tiles' size.
    void setLevel(float water_level_y, float tile_size);
    void setWaveAnimationEnabled(bool enabled);

    [[nodiscard]] float getWaterLevelY() const;
    [[nodiscard]] float getTileSize() const;
    [[nodiscard]] bool getWaveAnimationEnabled() const;
    [[nodiscard]] std::span<const platform::SMRGLTextureBasic> getTextures() const;
    // As the last calculateVisibleTiles left them.
    [[nodiscard]] std::span<const SWaterTile> getVisibleTiles() const;
    [[nodiscard]] float getVisibleArea() const;
    [[nodiscard]] const common::CVector3f &getCentre() const;
    // The ripple frame showing, and the waves' phase in radians.
    [[nodiscard]] std::size_t getCurrentFrame() const;
    [[nodiscard]] float getWavePhase() const;

private:
    // The tile's corner nearest the centre, in the world.
    [[nodiscard]] common::CVector3f getTileOrigin(const SWaterTile &tile) const;
    // The waves' height at the grid point, in world units.
    [[nodiscard]] float getWaveHeight(int x, int z) const;
    void stepRipples(const CGame &game);

    bool wave_animation_enabled_ = false;
    float water_level_y_ = 0.0F;
    float tile_size_ = 0.0F;
    std::array<platform::SMRGLTextureBasic, kTextureCount> textures_;
    common::CVector3f centre_;
    std::vector<SWaterTile> visible_tiles_;
    float visible_area_ = 0.0F;
    int ripple_timer_ = 0;
    std::size_t current_frame_ = 0;
    float wave_phase_ = 0.0F;
};

} // namespace nocturne::core
