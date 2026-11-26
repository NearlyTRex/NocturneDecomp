#pragma once

#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "engine/fwd.h"

#include <cstdint>

namespace nocturne::core {

// The HUD's frame, the scene's picture: its 4:3 column when pillarboxed, else the whole screen.
[[nodiscard]] common::SViewport getHudFrame(common::EWidescreen widescreen, int width, int height);

// A HUD timer as a 16-bit alpha: opaque until its last second, fading in it.
[[nodiscard]] int getFadeAlpha(float timer);

// Where an anchor puts an element along one axis: from the frame's start (left or top), its
// middle, or its end.
enum class EHudAlign : std::uint8_t {
    Start,
    Middle,
    End,
};
[[nodiscard]] EHudAlign getAcross(engine::EHudAnchor anchor);
[[nodiscard]] EHudAlign getDown(engine::EHudAnchor anchor);

// A width by height box placed in the frame, its size and insets in the element's units at scale
// screen pixels each; each edge is rounded to the nearest pixel.
[[nodiscard]] common::SViewport placeHudBox(const common::SViewport &frame,
                                            const engine::SHudPlace &place, int width, int height,
                                            float scale);

// The battery gauge's column in its picture, in HUD pixels from the picture's top left: it runs
// up from its foot as the battery charges.
inline constexpr int kBatteryGaugeLeft = 2;
inline constexpr int kBatteryGaugeRight = 0xc;
inline constexpr int kBatteryGaugeFullTop = 3;
inline constexpr int kBatteryGaugeFoot = 0x1e;

// The battery gauge's box: its picture, or the gauge's column where that is wider, at the HUD's
// scale.
[[nodiscard]] common::SViewport getBatteryGaugeBox(const common::SViewport &frame,
                                                   const engine::SHudPlace &place,
                                                   int picture_width, int picture_height,
                                                   int ui_scale);

} // namespace nocturne::core
