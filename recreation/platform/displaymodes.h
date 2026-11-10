#pragma once

#include "common/video/presentation.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::platform {

// The size exclusive full screen sets the display to. The values are frozen: the game saves them
// as [Graphics] fullscreenSize.
enum class EFullscreenSize : std::uint8_t {
    // A display mode at the window's size.
    Game,
    // The display's desktop mode, unchanged; the frame is letterboxed into it.
    Desktop,
};

inline constexpr int kFullscreenSizeCount = 2;

// The refresh rate that lets the display choose: its desktop rate at the closest mode.
inline constexpr int kRefreshRateAuto = 0;

struct SDisplayMode {
    common::SExtent size;
    // In whole Hz.
    int refresh_rate = 0;

    bool operator==(const SDisplayMode &) const = default;
};

// One monitor as the video driver lists it.
struct SDisplayInfo {
    std::string name;
    common::SExtent desktop;
    std::vector<SDisplayMode> fullscreen_modes;
};

// The display list's index for a setting; one past the list is the primary's, the first.
[[nodiscard]] std::size_t resolveDisplayIndex(int index, std::size_t count);
// The size exclusive full screen asks the display for.
[[nodiscard]] common::SExtent getExclusiveSize(common::SExtent desktop, EFullscreenSize size,
                                               common::SExtent window);
// Whether the display has a full screen mode of that size, at any rate.
[[nodiscard]] bool getModeListed(const SDisplayInfo &display, common::SExtent size);
// The rates the display has at that size, ascending, each once.
[[nodiscard]] std::vector<int> getRefreshRates(const SDisplayInfo &display, common::SExtent size);

} // namespace nocturne::platform
