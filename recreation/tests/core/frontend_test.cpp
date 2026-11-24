#include "common/error/fatalerror.h"
#include "core/frontend.h"
#include "engine/package/gamecontent.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace nocturne::core {
namespace {

using platform::EUpscaler;

class CGetLabelTest : public engine::CPodFixture {
protected:
    engine::SGameContent content_;
    support::CNewMsg messages_{dosio_};
};

// The game's text for the id, then the language's for that text.
TEST_F(CGetLabelTest, ALabelIsItsGamesTextTranslated) {
    content_.labels = {{"main_play", "PLAY"}, {"main_quit", "QUIT"}};
    messages_.addTranslations({{"PLAY", "JOUER"}});
    EXPECT_EQ(getLabel(content_, messages_, "main_play"), "JOUER");
    EXPECT_EQ(getLabel(content_, messages_, "main_quit"), "QUIT");
}

TEST_F(CGetLabelTest, AnIdNoPackageGivesIsFatal) {
    EXPECT_THAT([this] { static_cast<void>(getLabel(content_, messages_, "main_play")); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the label main_play")));
}

TEST(ShortenToLength, TextThatFitsIsWhole) {
    EXPECT_EQ(shortenToLength("GeForce", 7), "GeForce");
    EXPECT_EQ(shortenToLength("", 3), "");
}

// The dots count towards the length, and no space is left before them.
TEST(ShortenToLength, LongerTextEndsInDotsWithinTheLength) {
    EXPECT_EQ(shortenToLength("NVIDIA GeForce RTX", 10), "NVIDIA...");
    EXPECT_EQ(shortenToLength("NVIDIA GeForce RTX", 12), "NVIDIA Ge...");
    EXPECT_EQ(shortenToLength("NVIDIA", 4), "N...");
}

TEST(ShortenToLength, NoRoomPastTheDotsIsTheDotsThatFit) {
    EXPECT_EQ(shortenToLength("NVIDIA", 3), "...");
    EXPECT_EQ(shortenToLength("NVIDIA", 1), ".");
}

TEST(GetFrontEndMode, WithAccelerationItIsThePickedResolution) {
    EXPECT_EQ(getFrontEndMode(1920, 1080, true), (common::SExtent{.width = 1920, .height = 1080}));
    EXPECT_EQ(getFrontEndMode(640, 480, true), (common::SExtent{.width = 640, .height = 480}));
}

TEST(GetFrontEndMode, WithoutAccelerationOrBelowTheLayoutItIs640x480) {
    const common::SExtent layout{.width = 640, .height = 480};
    EXPECT_EQ(getFrontEndMode(1920, 1080, false), layout);
    EXPECT_EQ(getFrontEndMode(512, 384, true), layout);
    EXPECT_EQ(getFrontEndMode(400, 480, true), layout);
    EXPECT_EQ(getFrontEndMode(1920, 400, true), layout);
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

using engine::EPictureAnchor;
using engine::EPictureFit;

constexpr engine::SPictureFit kKeepCentred{.fit = EPictureFit::KeepAspect,
                                           .anchor = EPictureAnchor::Centre};
constexpr engine::SPictureFit kStretched{.fit = EPictureFit::Stretch,
                                         .anchor = EPictureAnchor::Centre};

// At 1920x1080 a picture keeping its shape is 1440 wide, 240 in from each side when centred.
TEST(GetPictureArea, KeepingItsShapeItIsTheLayoutAgainstItsAnchor) {
    EXPECT_EQ(getPictureArea(1920, 1080, kKeepCentred),
              (SPictureArea{.scale_x = 2.25F, .scale_y = 2.25F, .left = 240, .top = 0}));
    EXPECT_EQ(
        getPictureArea(1920, 1080, {.fit = EPictureFit::KeepAspect, .anchor = EPictureAnchor::Left})
            .left,
        0);
    EXPECT_EQ(getPictureArea(1920, 1080,
                             {.fit = EPictureFit::KeepAspect, .anchor = EPictureAnchor::Right})
                  .left,
              480);
}

TEST(GetPictureArea, StretchedItIsTheWholeScreen) {
    const SPictureArea picture = getPictureArea(1920, 1080, kStretched);
    EXPECT_EQ(picture, (SPictureArea{.scale_x = 3.0F, .scale_y = 2.25F, .left = 0, .top = 0}));
    EXPECT_EQ(picture.getX(640), 1920);
    EXPECT_EQ(picture.getY(480), 1080);
    EXPECT_EQ(picture.getWidth(1), 3);
    EXPECT_EQ(picture.getHeight(0), 0);
    // What keeps its shape on it goes by the height.
    EXPECT_EQ(picture.getScale(), 2.25F);
}

// Either side missing, there is no screen to stretch to.
TEST(GetPictureArea, NoScreenIsThePictureAsItIs) {
    EXPECT_EQ(getPictureArea(0, 0, kStretched).scale_x, 1.0F);
    EXPECT_EQ(getPictureArea(1920, 0, kStretched), getPictureArea(1920, 0, kKeepCentred));
}

// A pixel-keeping upscaler keeps a stretch's; Standard keeps them only where both ways are whole.
TEST(GetPictureArtFilter, KeepsPixelsOnlyWhereBothWaysDo) {
    using engine::EBitmapFilter;
    const SPictureArea stretched = getPictureArea(1920, 1080, kStretched);
    EXPECT_EQ(getPictureArtFilter(EUpscaler::Nearest, stretched), EBitmapFilter::Nearest);
    EXPECT_EQ(getPictureArtFilter(EUpscaler::Standard, stretched), EBitmapFilter::Smooth);
    EXPECT_EQ(getPictureArtFilter(EUpscaler::Standard, getPictureArea(1920, 960, kStretched)),
              EBitmapFilter::Nearest);
}

TEST(GetTitleBackdropPicture, IsTheStillPicturesOrTheScreen) {
    engine::SGameContent content;
    content.front_end.title_backdrop = "sky_scene";
    EXPECT_EQ(getTitleBackdropPicture(content, 1920, 1080), getPictureArea(1920, 1080, kStretched));
    // A style whose picture the package doesn't give fills the screen.
    content.front_end.title_backdrop = "figure_scene";
    EXPECT_EQ(getTitleBackdropPicture(content, 1920, 1080), getPictureArea(1920, 1080, kStretched));
    content.front_end.title_backdrop = "tiled_scroll";
    EXPECT_EQ(getTitleBackdropPicture(content, 1920, 1080), getPictureArea(1920, 1080, kStretched));
    content.front_end.title_backdrop = "figure_scene";
    content.figure_scene.emplace();
    content.figure_scene->fit = kKeepCentred;
    EXPECT_EQ(getTitleBackdropPicture(content, 1920, 1080).left, 240);
    content.front_end.title_backdrop = "tiled_scroll";
    content.tiled_scroll.emplace();
    content.tiled_scroll->fit = kStretched;
    EXPECT_EQ(getTitleBackdropPicture(content, 1920, 1080).scale_x, 3.0F);
}

} // namespace
} // namespace nocturne::core
