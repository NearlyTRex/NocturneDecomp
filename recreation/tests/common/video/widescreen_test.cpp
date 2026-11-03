#include "common/video/widescreen.h"

#include <gtest/gtest.h>

#include <optional>

namespace nocturne::common {
namespace {

TEST(EWidescreen, KeepsThePersistedValues) {
    static_assert(static_cast<int>(EWidescreen::Stretch) == 0);
    static_assert(static_cast<int>(EWidescreen::Pillarbox) == 1);
    static_assert(static_cast<int>(EWidescreen::PanAndScan) == 2);
    static_assert(kWidescreenCount == 3);
}

TEST(GetScreenWide, OnlyWiderThanFourByThree) {
    EXPECT_TRUE(getScreenWide({.width = 1920, .height = 1080}));
    EXPECT_TRUE(getScreenWide({.width = 1601, .height = 1200}));
    EXPECT_FALSE(getScreenWide({.width = 1600, .height = 1200}));
    EXPECT_FALSE(getScreenWide({.width = 1280, .height = 1024}));
}

TEST(GetSceneReframe, StretchIsTheRenderersOwnFill) {
    EXPECT_EQ(getSceneReframe(EWidescreen::Stretch, {.width = 1920, .height = 1080}), std::nullopt);
}

// The scene and the screen are one space at 480 lines; 4:3 needs no framing.
TEST(GetSceneReframe, NothingAtFourHundredEightyLinesOrFourByThree) {
    for (const EWidescreen mode : {EWidescreen::Pillarbox, EWidescreen::PanAndScan}) {
        EXPECT_EQ(getSceneReframe(mode, {.width = 848, .height = 480}), std::nullopt);
        EXPECT_EQ(getSceneReframe(mode, {.width = 1440, .height = 1080}), std::nullopt);
        EXPECT_EQ(getSceneReframe(mode, {.width = 1280, .height = 1024}), std::nullopt);
    }
}

TEST(GetSceneReframe, PillarboxPutsTheWholeSceneInACentredFourByThreeColumn) {
    EXPECT_EQ(getSceneReframe(EWidescreen::Pillarbox, {.width = 1920, .height = 1080}),
              (SSceneReframe{.source = {.x = 0, .y = 0, .width = 1920, .height = 1080},
                             .destination = {.x = 240, .y = 0, .width = 1440, .height = 1080}}));
    EXPECT_EQ(getSceneReframe(EWidescreen::Pillarbox, {.width = 1600, .height = 900}),
              (SSceneReframe{.source = {.x = 0, .y = 0, .width = 1600, .height = 900},
                             .destination = {.x = 200, .y = 0, .width = 1200, .height = 900}}));
}

// At 16:9 the width leaves room for 360 of the scene's 480 rows, 60 cropped above and below.
TEST(GetSceneReframe, PanAndScanFillsTheWidthWithTheMiddleOfTheShot) {
    EXPECT_EQ(getSceneReframe(EWidescreen::PanAndScan, {.width = 1920, .height = 1080}),
              (SSceneReframe{.source = {.x = 0, .y = 135, .width = 1920, .height = 810},
                             .destination = {.x = 0, .y = 0, .width = 1920, .height = 1080}}));
    EXPECT_EQ(getSceneReframe(EWidescreen::PanAndScan, {.width = 1600, .height = 900}),
              (SSceneReframe{.source = {.x = 0, .y = 113, .width = 1600, .height = 675},
                             .destination = {.x = 0, .y = 0, .width = 1600, .height = 900}}));
}

} // namespace
} // namespace nocturne::common
