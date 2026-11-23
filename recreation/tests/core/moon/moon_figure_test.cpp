#include "common/error/fatalerror.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/moon/moon.h"
#include "engine/package/gamecontent.h"
#include "tests/mocks/core/moonfixture.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::AnyNumber;
using ::testing::Return;
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

// The front end draws in software. On a wide screen the backdrop is centred, and the figures
// stand on it as on a 4:3 screen: the whole of it is the 4:3 picture moved right.
TEST_F(CMoonFigureTest, OnAWideScreenTheFiguresStayOnTheCentredBackdrop) {
    // The camera square on to the figures, which stand before it as the sky's moon does.
    content_.figure_scene->camera_rotation = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    content_.figure_scene->camera_origin = {0, 0, -72};
    moon_.init();
    moon_.render();
    const std::vector<std::uint32_t> narrow = pixels_;
    givenWideScreen();
    std::ranges::fill(pixels_, 0U);
    moon_.render();
    constexpr int kLeft = (kWideWidth - kWidth) / 2;
    int differing = 0;
    for (int y = 0; y < kHeight; ++y) {
        for (int x = 0; x < kWidth; ++x) {
            const std::size_t at =
                (static_cast<std::size_t>(y) * kWideWidth) + static_cast<std::size_t>(x);
            differing += pixel(x + kLeft, y) != narrow[at] ? 1 : 0;
        }
    }
    EXPECT_EQ(differing, 0);
    // The figures drew something: without them the picture is another.
    content_.figure_scene->models.clear();
    moon_.free();
    moon_.init();
    std::ranges::fill(pixels_, 0U);
    moon_.render();
    int figure_pixels = 0;
    for (int y = 0; y < kHeight; ++y) {
        for (int x = 0; x < kWidth; ++x) {
            const std::size_t at =
                (static_cast<std::size_t>(y) * kWideWidth) + static_cast<std::size_t>(x);
            figure_pixels += pixel(x + kLeft, y) != narrow[at] ? 1 : 0;
        }
    }
    EXPECT_GT(figure_pixels, 0);
}

// Stretched, the backdrop fills the wide screen, and the figures stretch with it: as wide again
// as the screen is wider, as tall as on 4:3.
TEST_F(CMoonFigureTest, StretchedTheFiguresStretchWithTheBackdrop) {
    engine::SFigureScene &figure = content_.figure_scene.value();
    figure.camera_rotation = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    figure.camera_origin = {0, 0, -72};
    figure.fit = {.fit = engine::EPictureFit::Stretch, .anchor = engine::EPictureAnchor::Centre};
    // The columns and rows where the figures drew, against the scene drawn without them.
    struct SBox {
        int left = kWideWidth;
        int right = -1;
        int top = kHeight;
        int bottom = -1;
    };
    const auto figureBox = [this](int width) {
        const auto drawn = [this]() {
            moon_.free();
            moon_.init();
            std::ranges::fill(pixels_, 0U);
            moon_.render();
            return pixels_;
        };
        const engine::SFigureScene saved = content_.figure_scene.value();
        const std::vector<std::uint32_t> with = drawn();
        content_.figure_scene->models.clear();
        const std::vector<std::uint32_t> without = drawn();
        content_.figure_scene = saved;
        SBox box;
        for (int y = 0; y < kHeight; ++y) {
            for (int x = 0; x < width; ++x) {
                const std::size_t at =
                    (static_cast<std::size_t>(y) * kWideWidth) + static_cast<std::size_t>(x);
                if (with[at] != without[at]) {
                    box = {.left = std::min(box.left, x),
                           .right = std::max(box.right, x),
                           .top = std::min(box.top, y),
                           .bottom = std::max(box.bottom, y)};
                }
            }
        }
        return box;
    };
    const SBox narrow = figureBox(kWidth);
    givenWideScreen();
    const SBox wide = figureBox(kWideWidth);
    ASSERT_GE(narrow.right, narrow.left);
    EXPECT_NEAR(wide.top, narrow.top, 1);
    EXPECT_NEAR(wide.bottom, narrow.bottom, 1);
    const double widen = static_cast<double>(kWideWidth) / kWidth;
    EXPECT_NEAR(wide.right - wide.left + 1, (narrow.right - narrow.left + 1) * widen, 2.0);
    EXPECT_NEAR(wide.left, narrow.left * widen, 2.0);
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

// BW2's: the title's frames alone, over the cleared screen.
TEST_F(CMoonFigureTest, WithoutABackdropOrFiguresOnlyTheFramesAreDrawn) {
    engine::SFigureScene &figure = content_.figure_scene.value();
    figure.backdrop.clear();
    figure.models.clear();
    EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
    EXPECT_CALL(file_system_, openFile(endsWith("models\\figure.kfm"), _)).Times(0);
    EXPECT_CALL(file_system_, openFile(endsWith("back.raw"), _)).Times(0);
    moon_.init();
    moon_.render();
    EXPECT_EQ(pixel(10, kBelowFrames), 0U);
}

// The code is only cleared, as BW2's was.
TEST_F(CMoonFigureTest, WithoutACheatModelTheCheatLoadsTheFigures) {
    content_.figure_scene->cheat_model.clear();
    game_.head_of_horror_cheat = 666;
    expectOpens("models\\figure.kfm", 3);
    moon_.init();
    EXPECT_EQ(game_.head_of_horror_cheat, 0);
}

// With no figures there is no first figure for the cheat's head to replace.
TEST_F(CMoonFigureTest, WithoutFiguresTheCheatLoadsNothing) {
    content_.figure_scene->models.clear();
    game_.head_of_horror_cheat = 666;
    EXPECT_CALL(file_system_, openFile(_, _)).Times(AnyNumber());
    EXPECT_CALL(file_system_, openFile(endsWith("taylor_head.kfm"), _)).Times(0);
    moon_.init();
    EXPECT_EQ(game_.head_of_horror_cheat, 0);
}

// A timer run back before the first frame shows the first.
TEST_F(CMoonFigureTest, ATimerBeforeTheFirstFrameShowsTheFirst) {
    givenBackdrop(0);
    moon_.init();
    moon_.render();
    const std::uint32_t at_zero = pixel(10, 10);
    moon_.update(-1.0F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), at_zero);
}

// Just short of the wrap the timer rounds to one past the last frame, which shows the first.
TEST_F(CMoonFigureTest, ATimerRoundingPastTheLastFrameShowsTheFirst) {
    givenBackdrop(0);
    moon_.init();
    moon_.render();
    const std::uint32_t at_zero = pixel(10, 10);
    moon_.update(2.47F);
    moon_.render();
    EXPECT_EQ(pixel(10, 10), at_zero);
}

// Through the hardware renderer, off 640x480, the figures go in its pass over the picture; a pass
// it can't begin leaves them on the screen as they are.
TEST_F(CMoonFigureTest, WithTheRendererTheFiguresGoInItsPass) {
    startRenderer();
    givenWideScreen();
    moon_.init();
    EXPECT_CALL(renderer_, beginOverlay(_)).WillOnce(Return(true));
    EXPECT_CALL(renderer_, endOverlay());
    moon_.render();
    ::testing::Mock::VerifyAndClearExpectations(&renderer_);
    EXPECT_CALL(renderer_, beginOverlay(_)).WillOnce(Return(false));
    EXPECT_CALL(renderer_, endOverlay()).Times(0);
    moon_.render();
}

// 640 wide is not 640x480: a shorter screen takes the pass too.
TEST_F(CMoonFigureTest, AShorterScreenOf640ColumnsTakesThePass) {
    startRenderer();
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(400));
    moon_.init();
    EXPECT_CALL(renderer_, beginOverlay(_)).WillOnce(Return(false));
    moon_.render();
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
    content_.front_end.title_backdrop = "no_such_style";
    EXPECT_THAT([this] { moon_.init(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("The title backdrop no_such_style isn't in this build")));
}

} // namespace
} // namespace nocturne::core
