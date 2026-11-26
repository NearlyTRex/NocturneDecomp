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

// An element's start and end edges along an axis of the frame from start running length.
struct SSpan {
    int start = 0;
    int end = 0;
};

SSpan placeAlong(EHudAlign align, int frame_start, int frame_length, int inset, int length,
                 float scale) {
    const float size = static_cast<float>(length) * scale;
    const float offset = static_cast<float>(inset) * scale;
    float start = 0.0F;
    switch (align) {
    case EHudAlign::Start:
        start = static_cast<float>(frame_start) + offset;
        break;
    case EHudAlign::End:
        start = static_cast<float>(frame_start + frame_length) - offset - size;
        break;
    default:
        start = static_cast<float>(frame_start) + ((static_cast<float>(frame_length) - size) / 2) +
                offset;
        break;
    }
    return {.start = static_cast<int>(std::lround(start)),
            .end = static_cast<int>(std::lround(start + size))};
}

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

EHudAlign getAcross(engine::EHudAnchor anchor) {
    switch (anchor) {
    case engine::EHudAnchor::TopLeft:
    case engine::EHudAnchor::Left:
    case engine::EHudAnchor::BottomLeft:
        return EHudAlign::Start;
    case engine::EHudAnchor::TopRight:
    case engine::EHudAnchor::Right:
    case engine::EHudAnchor::BottomRight:
        return EHudAlign::End;
    default:
        return EHudAlign::Middle;
    }
}

EHudAlign getDown(engine::EHudAnchor anchor) {
    switch (anchor) {
    case engine::EHudAnchor::TopLeft:
    case engine::EHudAnchor::Top:
    case engine::EHudAnchor::TopRight:
        return EHudAlign::Start;
    case engine::EHudAnchor::BottomLeft:
    case engine::EHudAnchor::Bottom:
    case engine::EHudAnchor::BottomRight:
        return EHudAlign::End;
    default:
        return EHudAlign::Middle;
    }
}

common::SViewport placeHudBox(const common::SViewport &frame, const engine::SHudPlace &place,
                              int width, int height, float scale) {
    const SSpan across =
        placeAlong(getAcross(place.anchor), frame.x, frame.width, place.x, width, scale);
    const SSpan down =
        placeAlong(getDown(place.anchor), frame.y, frame.height, place.y, height, scale);
    return {.x = across.start,
            .y = down.start,
            .width = across.end - across.start,
            .height = down.end - down.start};
}

common::SViewport getBatteryGaugeBox(const common::SViewport &frame, const engine::SHudPlace &place,
                                     int picture_width, int picture_height, int ui_scale) {
    return placeHudBox(frame, place, std::max(picture_width, kBatteryGaugeRight),
                       std::max(picture_height, kBatteryGaugeFoot), static_cast<float>(ui_scale));
}

} // namespace nocturne::core
