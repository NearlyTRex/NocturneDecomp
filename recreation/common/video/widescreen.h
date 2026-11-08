#pragma once

#include "common/video/presentation.h"

#include <cstdint>
#include <optional>

namespace nocturne::common {

// How a 4:3 scene fills a screen wider than 4:3. Above 480 lines the camera renders into a
// 640x480 space the renderer stretches over the screen, and the backdrops have nothing outside
// that frame, so a wider screen shows the shot stretched, whole in a 4:3 column, or scaled to
// the width with its top and bottom cropped. The original offered no mode wider than 4:3. The
// values are frozen: the game saves them as [Graphics] widescreen.
enum class EWidescreen : std::uint8_t {
    Stretch,
    Pillarbox,
    PanAndScan,
};

inline constexpr int kWidescreenCount = 3;

// The camera's space above 480 lines.
inline constexpr SExtent kSceneSpace{.width = 640, .height = 480};

// The part of the scene's target to show, and where, in the target's pixels from its top-left.
struct SSceneReframe {
    SViewport source;
    SViewport destination;

    bool operator==(const SSceneReframe &) const = default;
};

// Wider than 4:3.
[[nodiscard]] bool getScreenWide(SExtent screen);
// Nothing at 480 lines or fewer, where the scene and the screen are one space, at 4:3 or
// narrower, or for Stretch, which is the renderer's own fill. Until a scene reports its focus
// the pan-and-scan crop sits at the middle of the shot.
[[nodiscard]] std::optional<SSceneReframe> getSceneReframe(EWidescreen mode, SExtent screen);

} // namespace nocturne::common
