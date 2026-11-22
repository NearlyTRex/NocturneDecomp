#include "common/error/fatalerror.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/moon/moon.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/moonfixture.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::AnyNumber;
using ::testing::Truly;

constexpr int kBackdropGrey = 0x40;
// The figures' counters start at 1, so each needs a second frame.
constexpr int kFigureFrames = 2;
// Below the fixture's 278-line title frames.
constexpr int kBelowFrames = 300;

auto endsWith(std::string_view suffix) {
    return Truly([suffix](std::string_view path) { return path.ends_with(suffix); });
}

// BW1's figure_scene over the fixture's files: its figures the fixture's square, a grey backdrop,
// and the fixture's title frames.
class CMoonFigureTest : public CMoonFixture {
protected:
    CMoonFigureTest() {
        content_.front_end.title_backdrop = "figure_scene";
        content_.figure_scene = engine::getShippedGameContent("blairwitch1").figure_scene;
        engine::SFigureScene &figure = content_.figure_scene.value();
        givenMoonModel(given_file_, "figure.kfm", kFigureFrames);
        for (engine::SFigureModel &model : figure.models) {
            model.file = "figure.kfm";
        }
        figure.backdrop = "back";
        figure.frame_prefix = "noc";
        figure.frame_y = 0;
        figure.frame_height = 278;
        givenBackdrop(kBackdropGrey);
    }

    // Counts the opens of one file and lets every other through.
    void expectOpens(std::string_view suffix, int times) {
        EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
        EXPECT_CALL(file_system_, openFile(endsWith(suffix), _)).Times(times);
    }

    void givenBackdrop(int level) {
        givenImage("back", std::string(std::size_t{kWidth} * kHeight, static_cast<char>(level)));
    }

    static std::uint32_t grey(std::uint32_t level) {
        return (level << 16U) | (level << 8U) | level;
    }
};

TEST_F(CMoonFigureTest, TheBackdropFillsTheLayout) {
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(10, kBelowFrames), grey(kBackdropGrey));
    EXPECT_EQ(pixel(kWidth - 1, kHeight - 1), grey(kBackdropGrey));
}

TEST_F(CMoonFigureTest, InitLoadsEachFigureOnlyTheFirstTime) {
    expectOpens("models\\figure.kfm", 3);
    moon_.init();
    moon_.init();
}

// The figures stand at the world's origin, before the camera at BW1's point, 24.8 to a unit.
TEST_F(CMoonFigureTest, TheFiguresStandBeforeTheFixedCamera) {
    moon_.init();
    moon_.render();
    EXPECT_EQ(matrix_.getRelativeOrigin(),
              (common::CVector3i{.x = static_cast<int>(3.16143 * 256),
                                 .y = static_cast<int>(7.6283 * 256),
                                 .z = static_cast<int>(-7.03622 * 256)}));
}

// The cheat model alone, in the first figure's place.
TEST_F(CMoonFigureTest, TheHeadOfHorrorCheatLoadsTheHeadAlone) {
    game_.head_of_horror_cheat = 666;
    EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
    EXPECT_CALL(file_system_, openFile(endsWith("models\\figure.kfm"), _)).Times(0);
    EXPECT_CALL(file_system_, openFile(endsWith("taylor_head.kfm"), _)).Times(1);
    moon_.init();
    moon_.render();
    EXPECT_EQ(game_.head_of_horror_cheat, 0);
}

// The timer's nearest frame: past 17.5 shows frame 18, as 18 itself does, where truncating would
// show 17. Over a black backdrop, title frame i is grey i.
TEST_F(CMoonFigureTest, TheTitleShowsTheTimersNearestFrame) {
    givenBackdrop(0);
    moon_.init();
    moon_.update(1.47F);
    moon_.render();
    const std::uint32_t near_eighteen = pixel(10, 10);
    moon_.update(0.03F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), near_eighteen);
    EXPECT_NE(near_eighteen, 0U);
}

// The test is against the whole wrap, so the menu's glow never flickers.
TEST_F(CMoonFigureTest, TheTitleIsAlwaysInItsFirstHalf) {
    moon_.init();
    moon_.update(2.4F);
    EXPECT_EQ(moon_.isAnimationFirstHalf(), 1);
}

// Thirty frames at 12 a second take two and a half seconds, which bring the first back.
TEST_F(CMoonFigureTest, TheTitleWrapsAfterItsThirtyFrames) {
    moon_.init();
    moon_.render();
    const std::uint32_t at_zero = pixel(10, 10);
    moon_.update(2.5F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), at_zero);
}

TEST_F(CMoonFigureTest, TheLightingFoundIsPutBack) {
    moon_.init();
    set_.setLightDirection({.x = 1, .y = 2, .z = 3});
    set_.setAmbientBaseQuick(0x123);
    set_.setFlatColor(0x1000, 0x2000, 0x3000);
    moon_.render();
    EXPECT_EQ(set_.getLightDirection(), (common::CVector3i{.x = 1, .y = 2, .z = 3}));
    EXPECT_EQ(set_.getAmbientBaseQuick(), 0x123);
    EXPECT_EQ(set_.getFlatColor(), (CColor3i{.r = 0x1000, .g = 0x2000, .b = 0x3000}));
}

TEST_F(CMoonFigureTest, WithoutAFigureSceneTheBackdropIsFatal) {
    content_.figure_scene.reset();
    EXPECT_THAT([this] { moon_.init(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the figure_scene title backdrop's look")));
}

TEST_F(CMoonFigureTest, ABackdropThisBuildDoesntDrawIsFatal) {
    content_.front_end.title_backdrop = "flipbook";
    EXPECT_THAT([this] { moon_.init(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("The title backdrop flipbook isn't in this build")));
}

} // namespace
} // namespace nocturne::core
