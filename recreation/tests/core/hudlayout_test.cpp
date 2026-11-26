#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/hudlayout.h"
#include "engine/package/gamecontent.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using engine::EHudCorner;

constexpr common::SViewport kFrame{.x = 160, .y = 0, .width = 640, .height = 480};

TEST(HudLayout, ATimerIsOpaqueUntilItsLastSecond) {
    EXPECT_EQ(getFadeAlpha(3.0F), 0xffff);
    EXPECT_EQ(getFadeAlpha(1.0F), 0xffff);
    EXPECT_EQ(getFadeAlpha(0.5F), 0x8000);
    EXPECT_EQ(getFadeAlpha(0.0F), 0);
}

TEST(HudLayout, TheFrameIsTheWholeScreenUnlessPillarboxed) {
    EXPECT_EQ(getHudFrame(common::EWidescreen::Stretch, 1280, 720),
              (common::SViewport{.x = 0, .y = 0, .width = 1280, .height = 720}));
    EXPECT_EQ(getHudFrame(common::EWidescreen::Pillarbox, 1280, 720),
              (common::SViewport{.x = 160, .y = 0, .width = 960, .height = 720}));
}

// The insets are HUD pixels, doubled at a scale of 2, from the corner to the box's outer edges.
TEST(HudLayout, ABoxIsPlacedFromItsCorner) {
    const auto place = [](EHudCorner corner) {
        return placeHudBox(kFrame, {.corner = corner, .x = 4, .y = 6}, 20, 30, 2);
    };
    EXPECT_EQ(place(EHudCorner::TopLeft),
              (common::SViewport{.x = 168, .y = 12, .width = 20, .height = 30}));
    EXPECT_EQ(place(EHudCorner::TopRight),
              (common::SViewport{.x = 772, .y = 12, .width = 20, .height = 30}));
    EXPECT_EQ(place(EHudCorner::BottomLeft),
              (common::SViewport{.x = 168, .y = 438, .width = 20, .height = 30}));
    EXPECT_EQ(place(EHudCorner::BottomRight),
              (common::SViewport{.x = 772, .y = 438, .width = 20, .height = 30}));
}

// The gauge's column runs to 0xc across and 0x1e down its picture, so a smaller picture still
// takes that much room.
TEST(HudLayout, TheBatteryGaugesBoxHoldsItsPictureAndColumn) {
    const engine::SHudPlace place{.corner = EHudCorner::BottomLeft, .x = 4, .y = 4};
    EXPECT_EQ(getBatteryGaugeBox(kFrame, place, 0x10, 0x20, 1),
              (common::SViewport{.x = 164, .y = 444, .width = 0x10, .height = 0x20}));
    EXPECT_EQ(getBatteryGaugeBox(kFrame, place, 8, 16, 2),
              (common::SViewport{.x = 168, .y = 412, .width = 0x18, .height = 0x3c}));
}

} // namespace
} // namespace nocturne::core
