#include "core/game/game.h"
#include "core/menu/graphicoptionspage.h"
#include "core/menu/menupage.h"
#include "engine/keys/inputcodetype.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/upscaler.h"
#include "tests/mocks/core/menufixture.h"
#include "tests/mocks/engine/fontsheet.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using platform::EUpscaler;
using platform::EWindowMode;
using ::testing::_;
using ::testing::Return;

// The lines' ids, in the order they are listed.
constexpr int kResolution = 0;
constexpr int kWindow = 1;
constexpr int kHalo = 2;
constexpr int kAcceleration = 3;
constexpr int kApi = 4;
constexpr int kCard = 5;
constexpr int kBits = 6;
constexpr int kUpscaler = 7;
constexpr int kSharpness = 8;
constexpr int kCalibration = 9;

TEST(CGraphicOptionsPage, PublicInterface) {
    static_assert(std::is_base_of_v<CMenuPage, CGraphicOptionsPage>);
    static_assert(std::is_final_v<CGraphicOptionsPage>);
    static_assert(std::is_constructible_v<CGraphicOptionsPage, CMenu &, const SMenuOwners &>);
}

// Without acceleration unless a test loads the renderer, which lists two cards.
class CGraphicOptionsPageTest : public CMenuFixture {
protected:
    CGraphicOptionsPageTest() {
        ON_CALL(renderer_, buildCardList(_, _, _, _, _))
            .WillByDefault([this](int *count, char **drivers, char **cards, int * /*vendors*/,
                                  int * /*devices*/) {
                *count = card_count_;
                drivers[0] = driver_.data();
                cards[0] = first_card_.data();
                cards[1] = second_card_.data();
                return 1;
            });
    }

    [[nodiscard]] static std::vector<std::string> texts(CGraphicOptionsPage &page) {
        std::vector<SMenuLine> lines;
        page.build(lines);
        std::vector<std::string> result;
        result.reserve(lines.size());
        for (const SMenuLine &line : lines) {
            result.push_back(line.text);
        }
        return result;
    }

    [[nodiscard]] static std::string text(CGraphicOptionsPage &page, int id) {
        return texts(page).at(static_cast<std::size_t>(id));
    }

    void loadRenderer() {
        special_.setUseDirect3D(true);
        ASSERT_EQ(special_.loadExternalRenderer(), 1);
    }

    void setResolution(int width, int height) {
        game_.game_pixx = width;
        game_.game_pixy = height;
    }

    [[nodiscard]] std::string resolution() const {
        return std::to_string(game_.game_pixx) + "x" + std::to_string(game_.game_pixy);
    }

    int card_count_ = 2;
    std::string driver_ = "OpenGL 3.3";
    std::string first_card_ = "First";
    std::string second_card_ = "Second";
};

TEST_F(CGraphicOptionsPageTest, TheTitleIsGraphicOptions) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.title(), std::optional<std::string>("Graphic Options"));
}

TEST_F(CGraphicOptionsPageTest, WithoutAccelerationThereIsNoApiOrCard) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(texts(page), (std::vector<std::string>{"Resolution : 640x480", "Window : Windowed",
                                                     "Flashlight halo : Off", "Acceleration : Off",
                                                     "3D API : None", "No 3D Hardware detected",
                                                     "Bits per pixel : 32", "Upscaler : Standard",
                                                     "Monitor calibration"}));
}

TEST_F(CGraphicOptionsPageTest, TheRenderersCardsAndApiAreListed) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kAcceleration), "Acceleration : On");
    EXPECT_EQ(text(page, kApi), "3D API : OpenGL 3.3");
    EXPECT_EQ(text(page, kCard), "3D Card : First (0)");
}

TEST_F(CGraphicOptionsPageTest, ACardTheInisNoLongerListsGoesBackToTheFirst) {
    special_.setCurrentGraphicsBoard(5);
    loadRenderer();
    const CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 0);
}

TEST_F(CGraphicOptionsPageTest, ANameTheRendererLeftUnsetIsBlank) {
    card_count_ = 3;
    loadRenderer();
    special_.setCurrentGraphicsBoard(2);
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kCard), "3D Card :  (2)");
    EXPECT_EQ(text(page, kApi), "3D API : ");
}

TEST_F(CGraphicOptionsPageTest, ACardListTheRendererRefusesIsEmpty) {
    loadRenderer();
    ON_CALL(renderer_, buildCardList(_, _, _, _, _)).WillByDefault(Return(0));
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kCard), "No 3D Hardware detected");
}

TEST_F(CGraphicOptionsPageTest, TheCardStepsOnWhicheverWayAndWraps) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(renderer_, selectCard(1));
    EXPECT_EQ(page.choose(kCard, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(text(page, kCard), "3D Card : Second (1)");
    EXPECT_CALL(renderer_, selectCard(0));
    EXPECT_EQ(page.choose(kCard, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 0);
}

TEST_F(CGraphicOptionsPageTest, WithNoCardTheBoardIsTheFirst) {
    special_.setCurrentGraphicsBoard(3);
    CGraphicOptionsPage page(menu_, menu_owners_);
    special_.setCurrentGraphicsBoard(3);
    EXPECT_EQ(page.choose(kCard, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 0);
}

TEST_F(CGraphicOptionsPageTest, WithoutAccelerationTheResolutionWrapsAt640x480) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "320x240");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "512x384");
}

TEST_F(CGraphicOptionsPageTest, WithAccelerationTheResolutionGoesTo1600x1200) {
    loadRenderer();
    setResolution(1280, 1024);
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "1600x1200");
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "320x240");
}

// As an old INI can leave it.
TEST_F(CGraphicOptionsPageTest, AResolutionNotListedGoesToTheNearest) {
    setResolution(700, 500);
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CGraphicOptionsPageTest, AResolutionIsListedOnlyByBothItsSides) {
    setResolution(640, 400);
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "512x384");
}

TEST_F(CGraphicOptionsPageTest, AResolutionAboveTheCapGoesToTheLargestUnderIt) {
    setResolution(1024, 768);
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kResolution, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CGraphicOptionsPageTest, WithoutAccelerationTheResolutionIsHeldAt640x480) {
    setResolution(1024, 768);
    CGraphicOptionsPage page(menu_, menu_owners_);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "640x480");
    loadRenderer();
    setResolution(1024, 768);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "1024x768");
    setResolution(320, 240);
    special_.setUseDirect3D(false);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "320x240");
}

TEST_F(CGraphicOptionsPageTest, TheWindowModeStepsEitherWayAndWraps) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setWindowMode(EWindowMode::Fullscreen));
    EXPECT_EQ(page.choose(kWindow, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setWindowMode(EWindowMode::Borderless));
    EXPECT_EQ(page.choose(kWindow, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getWindowMode()).WillByDefault(Return(EWindowMode::Borderless));
    EXPECT_EQ(text(page, kWindow), "Window : Borderless");
}

TEST_F(CGraphicOptionsPageTest, TheHaloStepsEitherWayAndWraps) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kHalo, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(text(page, kHalo), "Flashlight halo : Simple");
    EXPECT_EQ(page.choose(kHalo, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(text(page, kHalo), "Flashlight halo : Complex");
    EXPECT_EQ(page.choose(kHalo, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.halo_mode, 0);
    EXPECT_EQ(page.choose(kHalo, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(game_.halo_mode, 2);
}

TEST_F(CGraphicOptionsPageTest, AHaloPastComplexIsTakenAsComplex) {
    game_.halo_mode = 7;
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kHalo), "Flashlight halo : Complex");
    EXPECT_EQ(page.choose(kHalo, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(game_.halo_mode, 1);
}

TEST_F(CGraphicOptionsPageTest, AccelerationLoadsAndKillsTheRenderer) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(renderer_, init(_)).WillOnce(Return(1));
    EXPECT_EQ(page.choose(kAcceleration, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_TRUE(special_.getUseDirect3D());
    EXPECT_EQ(text(page, kCard), "3D Card : First (0)");
    EXPECT_CALL(renderer_, kill());
    EXPECT_EQ(page.choose(kAcceleration, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_FALSE(special_.getUseDirect3D());
    EXPECT_EQ(text(page, kCard), "No 3D Hardware detected");
}

TEST_F(CGraphicOptionsPageTest, ARendererThatWontStartLeavesAccelerationOff) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(renderer_, init(_)).WillOnce(Return(0));
    EXPECT_EQ(page.choose(kAcceleration, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(text(page, kAcceleration), "Acceleration : Off");
}

TEST_F(CGraphicOptionsPageTest, TheApiIsTheOneThereIs) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kApi, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(text(page, kApi), "3D API : OpenGL 3.3");
}

TEST_F(CGraphicOptionsPageTest, TheDepthTogglesBetween16And32) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kBits, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_bpp, 16);
    EXPECT_EQ(page.choose(kBits, EMenuStep::Back), EMenuOutcome::Stay);
    EXPECT_EQ(game_.game_bpp, 32);
}

TEST_F(CGraphicOptionsPageTest, TheUpscalerStepsEitherWayAndWraps) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setUpscaler(EUpscaler::Fsr));
    EXPECT_EQ(page.choose(kUpscaler, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setUpscaler(EUpscaler::Xbr));
    EXPECT_EQ(page.choose(kUpscaler, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Xbr));
    EXPECT_EQ(texts(page).at(kUpscaler), "Upscaler : xBR");
}

// The sharpness line is the upscaler's next, for a filter that sharpens.
TEST_F(CGraphicOptionsPageTest, AFilterThatSharpensShowsItsSharpness) {
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Lanczos));
    ON_CALL(display_, getUpscalerSharpness()).WillByDefault(Return(50));
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(texts(page).at(kSharpness), "Monitor calibration");
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Nis));
    EXPECT_EQ(texts(page).at(kSharpness), "Sharpness : 50%");
}

TEST_F(CGraphicOptionsPageTest, TheSharpnessStepsByAQuarterAndWraps) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    ON_CALL(display_, getUpscalerSharpness()).WillByDefault(Return(100));
    EXPECT_CALL(display_, setUpscalerSharpness(0));
    EXPECT_EQ(page.choose(kSharpness, EMenuStep::On), EMenuOutcome::Stay);
    ON_CALL(display_, getUpscalerSharpness()).WillByDefault(Return(0));
    EXPECT_CALL(display_, setUpscalerSharpness(100));
    EXPECT_EQ(page.choose(kSharpness, EMenuStep::Back), EMenuOutcome::Stay);
}

// As an INI edited by hand can leave it.
TEST_F(CGraphicOptionsPageTest, ASharpnessBetweenStepsStepsFromTheOneBelow) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    ON_CALL(display_, getUpscalerSharpness()).WillByDefault(Return(60));
    EXPECT_CALL(display_, setUpscalerSharpness(75));
    EXPECT_EQ(page.choose(kSharpness, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setUpscalerSharpness(25));
    EXPECT_EQ(page.choose(kSharpness, EMenuStep::Back), EMenuOutcome::Stay);
}

// Five screens over the brightness image, each until a key.
TEST_F(CGraphicOptionsPageTest, MonitorCalibrationShowsTheTest) {
    givenFile("art\\brightness.raw", std::string(std::size_t{kWidth} * kHeight, '\x01'));
    givenFile("art\\brightness.act", engine::makePalette({0, 0, 0}));
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(page.choose(kCalibration, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(frames_, 5);
}

TEST_F(CGraphicOptionsPageTest, ANewResolutionSizesTheWindowAtOnce) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_CALL(display_, setWindowSize(_, _)).Times(0);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    ::testing::Mock::VerifyAndClearExpectations(&display_);
    setResolution(320, 240);
    EXPECT_CALL(display_, setWindowSize(320, 240));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    setResolution(640, 400);
    EXPECT_CALL(display_, setWindowSize(640, 400));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

TEST_F(CGraphicOptionsPageTest, CancelLeaves) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Leave);
}

} // namespace
} // namespace nocturne::core
