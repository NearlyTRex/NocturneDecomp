#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// The ground the train set adds, from data\junk.*.
class CTerrain {
public:
    explicit CTerrain(CGround &ground);

    // The ground loaded and there, its scroll started over.
    void init();
    // The ground gone; nothing is drawn until the next init.
    void free();
    // The ground drawn about the camera as if the camera were over its point (0, 2056) and its
    // height there, scrolled back along z by the scroll; the camera is put back after.
    void render(int render_pass, const SGroundDrawOwners &owners);
    // The ground scrolls on by the frame time, a 16.16 count of seconds, at 0x6270 of 24.8 a
    // second, about 98 units, wrapping past 0x8000000.
    void process(int delta_time);

    [[nodiscard]] bool isInitialized() const;
    // How far the ground has scrolled along z since init, in 24.8.
    [[nodiscard]] int getScroll() const;

private:
    CGround &ground_;
    bool initialized_ = false;
    // The original's animation_counter: how far the ground has slid past the camera along z,
    // which is how the train's set seems to move, in 24.8.
    int scroll_ = 0;
};

} // namespace nocturne::core
