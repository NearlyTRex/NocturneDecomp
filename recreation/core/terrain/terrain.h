#pragma once

#include "core/fwd.h"

#include <string>

namespace nocturne::core {

// How a set's moving ground looks and moves: the ground's files, its heights, colours and
// texture list named like this one; how far it scrolls along z a second; its grid's size in
// cells, each a power of two; and the ground's point the camera is drawn over, all distances in
// 24.8. The defaults are Nocturne's.
struct STerrainSettings {
    static constexpr int kDefaultScrollPerSecond = 0x6270;
    static constexpr int kDefaultGridSize = 0x100;
    // 1032 world units along x.
    static constexpr int kDefaultOriginX = 0x40800;

    std::string ground = "junk.jnk";
    int scroll_per_second = kDefaultScrollPerSecond;
    int width = kDefaultGridSize;
    int height = kDefaultGridSize;
    int origin_x = kDefaultOriginX;
    int origin_z = 0;

    bool operator==(const STerrainSettings &) const = default;
};

// The moving ground a set adds: Nocturne's train, or any set that asks for one.
class CTerrain {
public:
    explicit CTerrain(CGround &ground);

    // The ground the settings name loaded at their size and there, its scroll started over.
    void init(const STerrainSettings &settings);
    // The ground gone; nothing is drawn until the next init.
    void free();
    // The ground drawn about the camera as if the camera were over the settings' point of it and
    // its height there, scrolled back along z by the scroll; the camera is put back after.
    void render(int render_pass, const SGroundDrawOwners &owners);
    // The ground scrolls on by the frame time, a 16.16 count of seconds, at the settings' speed,
    // wrapping past 0x8000000 either way.
    void process(int delta_time);

    [[nodiscard]] bool isInitialized() const;
    // How far the ground has scrolled along z since init, in 24.8.
    [[nodiscard]] int getScroll() const;
    [[nodiscard]] int getScrollPerSecond() const;
    // As the last init took them.
    [[nodiscard]] const STerrainSettings &getSettings() const;

private:
    CGround &ground_;
    bool initialized_ = false;
    // The original's animation_counter: how far the ground has slid past the camera along z,
    // which is how a set seems to move, in 24.8.
    int scroll_ = 0;
    STerrainSettings settings_;
};

} // namespace nocturne::core
