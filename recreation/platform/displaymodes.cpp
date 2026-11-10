#include "platform/displaymodes.h"

#include <algorithm>
#include <utility>

namespace nocturne::platform {

std::size_t resolveDisplayIndex(int index, std::size_t count) {
    return index >= 0 && std::cmp_less(index, count) ? static_cast<std::size_t>(index) : 0;
}

common::SExtent getExclusiveSize(common::SExtent desktop, EFullscreenSize size,
                                 common::SExtent window) {
    return size == EFullscreenSize::Desktop ? desktop : window;
}

bool getModeListed(const SDisplayInfo &display, common::SExtent size) {
    return std::ranges::contains(display.fullscreen_modes, size, &SDisplayMode::size);
}

std::vector<int> getRefreshRates(const SDisplayInfo &display, common::SExtent size) {
    std::vector<int> rates;
    for (const SDisplayMode &mode : display.fullscreen_modes) {
        if (mode.size == size && mode.refresh_rate > kRefreshRateAuto) {
            rates.push_back(mode.refresh_rate);
        }
    }
    std::ranges::sort(rates);
    const auto [first, last] = std::ranges::unique(rates);
    rates.erase(first, last);
    return rates;
}

} // namespace nocturne::platform
