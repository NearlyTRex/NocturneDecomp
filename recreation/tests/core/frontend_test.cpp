#include "core/frontend.h"

#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using platform::EUpscaler;

TEST(GetFrontEndMode, WithAccelerationItIsThePickedResolution) {
    EXPECT_EQ(getFrontEndMode(1920, 1080, true), (common::SExtent{.width = 1920, .height = 1080}));
    EXPECT_EQ(getFrontEndMode(640, 480, true), (common::SExtent{.width = 640, .height = 480}));
}

TEST(GetFrontEndMode, WithoutAccelerationOrBelowTheLayoutItIs640x480) {
    const common::SExtent layout{.width = 640, .height = 480};
    EXPECT_EQ(getFrontEndMode(1920, 1080, false), layout);
    EXPECT_EQ(getFrontEndMode(512, 384, true), layout);
    EXPECT_EQ(getFrontEndMode(400, 480, true), layout);
}

TEST(GetFrontEndLayout, At480LinesItIsTheLayoutCentred) {
    const SFrontEndLayout layout = getFrontEndLayout(640, 480);
    EXPECT_EQ(layout.scale, 1.0F);
    EXPECT_EQ(layout.getX(160), 160);
    EXPECT_EQ(layout.getY(250), 250);
    const SFrontEndLayout wide = getFrontEndLayout(848, 480);
    EXPECT_EQ(wide.left, 104);
    EXPECT_EQ(wide.getX(0), 104);
}

// 1080 lines are 2.25 of the layout's, its 640 columns 1440 of the 1920.
TEST(GetFrontEndLayout, ATallerScreenScalesItByItsHeight) {
    const SFrontEndLayout layout = getFrontEndLayout(1920, 1080);
    EXPECT_EQ(layout.scale, 2.25F);
    EXPECT_EQ(layout.left, 240);
    EXPECT_EQ(layout.top, 0);
    EXPECT_EQ(layout.getX(160), 600);
    EXPECT_EQ(layout.getY(250), 563);
    EXPECT_EQ(layout.getLength(640), 1440);
}

// 5:4 is narrower than the layout, which then fits the width and is centred down the height.
TEST(GetFrontEndLayout, ANarrowerScreenScalesItByItsWidth) {
    const SFrontEndLayout layout = getFrontEndLayout(1280, 1024);
    EXPECT_EQ(layout.scale, 2.0F);
    EXPECT_EQ(layout.left, 0);
    EXPECT_EQ(layout.top, 32);
    EXPECT_EQ(layout.getY(0), 32);
}

TEST(GetFrontEndLayout, ALengthOfAPixelStaysAPixelAndNothingIsNothing) {
    const SFrontEndLayout layout = getFrontEndLayout(320, 240);
    EXPECT_EQ(layout.scale, 0.5F);
    EXPECT_EQ(layout.getLength(1), 1);
    EXPECT_EQ(layout.getLength(0), 0);
    EXPECT_EQ(layout.getLength(-4), -2);
}

TEST(GetFrontEndLayout, NoScreenIsTheLayoutAsItIs) {
    EXPECT_EQ(getFrontEndLayout(0, 0).scale, 1.0F);
}

TEST(GetFrontEndArtFilter, FollowsTheUpscaler) {
    using engine::EBitmapFilter;
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Nearest, 2.25F), EBitmapFilter::Nearest);
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Xbr, 2.25F), EBitmapFilter::Nearest);
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Smooth, 2.0F), EBitmapFilter::Smooth);
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Fsr, 2.0F), EBitmapFilter::Smooth);
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Standard, 2.0F), EBitmapFilter::Nearest);
    EXPECT_EQ(getFrontEndArtFilter(EUpscaler::Standard, 2.25F), EBitmapFilter::Smooth);
}

} // namespace
} // namespace nocturne::core
