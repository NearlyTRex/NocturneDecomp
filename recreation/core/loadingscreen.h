#pragma once

#include <string_view>

namespace nocturne::core {

// The loading screen, for what loads while it shows.
class ILoadingScreen {
public:
    virtual ~ILoadingScreen() = default;

    // Starts a loading screen that is done after total_frames updates, in a window of its own
    // when use_custom_viewport is set, over the picture image_variant names where there is one.
    virtual void show(int total_frames, bool use_custom_viewport, int image_variant) = 0;
    // Draws the next step and presents it, blacking the screen first when clear_screen is set.
    virtual void update(std::string_view text, bool clear_screen) = 0;
};

} // namespace nocturne::core
