#pragma once

#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "engine/fwd.h"

namespace nocturne::core {

// The HUD's frame, the scene's picture: its 4:3 column when pillarboxed, else the whole screen.
[[nodiscard]] common::SViewport getHudFrame(common::EWidescreen widescreen, int width, int height);

// A HUD timer as a 16-bit alpha: opaque until its last second, fading in it.
[[nodiscard]] int getFadeAlpha(float timer);

// A width by height box, in screen pixels, placed in the frame; the place's insets are HUD pixels
// at the HUD's scale.
[[nodiscard]] common::SViewport placeHudBox(const common::SViewport &frame,
                                            const engine::SHudPlace &place, int width, int height,
                                            int ui_scale);

// The battery gauge's column in its picture, in HUD pixels from the picture's top left: it runs
// up from its foot as the battery charges.
inline constexpr int kBatteryGaugeLeft = 2;
inline constexpr int kBatteryGaugeRight = 0xc;
inline constexpr int kBatteryGaugeFullTop = 3;
inline constexpr int kBatteryGaugeFoot = 0x1e;

// The battery gauge's box: its picture, or the gauge's column where that is wider.
[[nodiscard]] common::SViewport getBatteryGaugeBox(const common::SViewport &frame,
                                                   const engine::SHudPlace &place,
                                                   int picture_width, int picture_height,
                                                   int ui_scale);

} // namespace nocturne::core
