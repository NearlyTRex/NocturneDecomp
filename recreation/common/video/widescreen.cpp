#include "common/video/widescreen.h"

#include <cmath>

namespace nocturne::common {
namespace {

constexpr int kAspectWidth = 4;
constexpr int kAspectHeight = 3;

// The 4:3 column a pillarboxed scene fills.
int getColumnWidth(int height) {
    return static_cast<int>(
        std::lround(static_cast<double>(height) * kAspectWidth / kAspectHeight));
}

} // namespace

bool getScreenWide(SExtent screen) {
    return screen.width * kAspectHeight > screen.height * kAspectWidth;
}

std::optional<SSceneReframe> getSceneReframe(EWidescreen mode, SExtent screen) {
    if (mode == EWidescreen::Stretch || screen.height <= kSceneSpace.height ||
        !getScreenWide(screen)) {
        return std::nullopt;
    }
    const SViewport whole{.x = 0, .y = 0, .width = screen.width, .height = screen.height};
    if (mode == EWidescreen::Pillarbox) {
        const int column = getColumnWidth(screen.height);
        return SSceneReframe{.source = whole,
                             .destination = {.x = (screen.width - column) / 2,
                                             .y = 0,
                                             .width = column,
                                             .height = screen.height}};
    }
    // The scene rows the screen's width leaves room for, then those in target rows.
    const float rows = static_cast<float>(kSceneSpace.width) * static_cast<float>(screen.height) /
                       static_cast<float>(screen.width);
    const float top = (static_cast<float>(kSceneSpace.height) - rows) * 0.5F;
    const float scale = static_cast<float>(screen.height) / static_cast<float>(kSceneSpace.height);
    return SSceneReframe{.source = {.x = 0,
                                    .y = static_cast<int>(std::lround(top * scale)),
                                    .width = screen.width,
                                    .height = static_cast<int>(std::lround(rows * scale))},
                         .destination = whole};
}

} // namespace nocturne::common
