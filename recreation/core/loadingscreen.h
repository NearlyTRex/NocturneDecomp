#pragma once

#include <string_view>

namespace nocturne::core {

// The loading screen's progress step, for what loads while it shows.
class ILoadingScreen {
public:
    virtual ~ILoadingScreen() = default;

    // Draws the next step and presents it, blacking the screen first when clear_screen is set.
    virtual void update(std::string_view text, bool clear_screen) = 0;
};

} // namespace nocturne::core
