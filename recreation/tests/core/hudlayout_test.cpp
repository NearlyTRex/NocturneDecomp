#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/hudlayout.h"
#include "engine/package/gamecontent.h"

#include <gtest/gtest.h>

#include <tuple>

namespace nocturne::core {
namespace {

using engine::EHudAnchor;

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

// Each anchor's axes: its start, middle or end across and down.
TEST(HudLayout, AnAnchorPicksAnEdgeOrTheMiddleOnEachAxis) {
    for (const auto &[anchor, across, down] :
         {std::tuple{EHudAnchor::TopLeft, EHudAlign::Start, EHudAlign::Start},
          std::tuple{EHudAnchor::Top, EHudAlign::Middle, EHudAlign::Start},
          std::tuple{EHudAnchor::TopRight, EHudAlign::End, EHudAlign::Start},
          std::tuple{EHudAnchor::Left, EHudAlign::Start, EHudAlign::Middle},
          std::tuple{EHudAnchor::Centre, EHudAlign::Middle, EHudAlign::Middle},
          std::tuple{EHudAnchor::Right, EHudAlign::End, EHudAlign::Middle},
          std::tuple{EHudAnchor::BottomLeft, EHudAlign::Start, EHudAlign::End},
          std::tuple{EHudAnchor::Bottom, EHudAlign::Middle, EHudAlign::End},
          std::tuple{EHudAnchor::BottomRight, EHudAlign::End, EHudAlign::End}}) {
        EXPECT_EQ(getAcross(anchor), across) << static_cast<int>(anchor);
        EXPECT_EQ(getDown(anchor), down) << static_cast<int>(anchor);
    }
}

// The insets and size are the element's units, doubled at a scale of 2: in from an edge, or along
// from the middle.
TEST(HudLayout, ABoxIsPlacedFromItsAnchor) {
    const auto place = [](EHudAnchor anchor) {
        return placeHudBox(kFrame, {.anchor = anchor, .x = 4, .y = 6}, 10, 15, 2.0F);
    };
    EXPECT_EQ(place(EHudAnchor::TopLeft),
              (common::SViewport{.x = 168, .y = 12, .width = 20, .height = 30}));
    EXPECT_EQ(place(EHudAnchor::BottomRight),
              (common::SViewport{.x = 772, .y = 438, .width = 20, .height = 30}));
    EXPECT_EQ(place(EHudAnchor::Centre),
              (common::SViewport{.x = 478, .y = 237, .width = 20, .height = 30}));
}

// Each edge rounds on its own, as the camera's space laid onto the frame does: the far edges stay
// on the frame's, and 800 - 142.5 and 480 - 49.5 round up.
TEST(HudLayout, AFractionalScaleRoundsEachEdge) {
    EXPECT_EQ(placeHudBox(kFrame, {.anchor = EHudAnchor::BottomRight}, 95, 33, 1.5F),
              (common::SViewport{.x = 658, .y = 431, .width = 142, .height = 49}));
}

// The gauge's column runs to 0xc across and 0x1e down its picture, so a smaller picture still
// takes that much room.
TEST(HudLayout, TheBatteryGaugesBoxHoldsItsPictureAndColumn) {
    const engine::SHudPlace place{.anchor = EHudAnchor::BottomLeft, .x = 4, .y = 4};
    EXPECT_EQ(getBatteryGaugeBox(kFrame, place, 0x10, 0x20, 1),
              (common::SViewport{.x = 164, .y = 444, .width = 0x10, .height = 0x20}));
    EXPECT_EQ(getBatteryGaugeBox(kFrame, place, 8, 16, 2),
              (common::SViewport{.x = 168, .y = 412, .width = 0x18, .height = 0x3c}));
}

} // namespace
} // namespace nocturne::core
