#include "core/hudlayout.h"

#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "engine/package/gamecontent.h"

#include <algorithm>
#include <cmath>
#include <optional>

namespace nocturne::core {
namespace {

constexpr int kFullAlpha = 0xffff;

} // namespace

common::SViewport getHudFrame(common::EWidescreen widescreen, int width, int height) {
    const std::optional<common::SSceneReframe> reframe =
        common::getSceneReframe(widescreen, {.width = width, .height = height});
    if (reframe) {
        return reframe->destination;
    }
    return {.x = 0, .y = 0, .width = width, .height = height};
}

int getFadeAlpha(float timer) {
    if (timer < 1.0F) {
        return static_cast<int>(std::lround(timer * static_cast<float>(kFullAlpha)));
    }
    return kFullAlpha;
}

common::SViewport placeHudBox(const common::SViewport &frame, const engine::SHudPlace &place,
                              int width, int height, int ui_scale) {
    const bool right = place.corner == engine::EHudCorner::TopRight ||
                       place.corner == engine::EHudCorner::BottomRight;
    const bool bottom = place.corner == engine::EHudCorner::BottomLeft ||
                        place.corner == engine::EHudCorner::BottomRight;
    const int inset_x = place.x * ui_scale;
    const int inset_y = place.y * ui_scale;
    return {.x = right ? frame.x + frame.width - inset_x - width : frame.x + inset_x,
            .y = bottom ? frame.y + frame.height - inset_y - height : frame.y + inset_y,
            .width = width,
            .height = height};
}

common::SViewport getBatteryGaugeBox(const common::SViewport &frame, const engine::SHudPlace &place,
                                     int picture_width, int picture_height, int ui_scale) {
    const int width = std::max(picture_width, kBatteryGaugeRight) * ui_scale;
    const int height = std::max(picture_height, kBatteryGaugeFoot) * ui_scale;
    return placeHudBox(frame, place, width, height, ui_scale);
}

} // namespace nocturne::core
