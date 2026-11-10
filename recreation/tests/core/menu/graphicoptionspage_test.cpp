#include "core/game/game.h"
#include "core/menu/graphicoptionspage.h"
#include "core/menu/menupage.h"
#include "core/menu/screenmodepage.h"
#include "engine/keys/inputcodetype.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/upscaler.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using platform::EUpscaler;
using ::testing::_;
using ::testing::Return;

// The lines' ids, in the order they are listed.
constexpr int kAcceleration = 0;
constexpr int kApi = 1;
constexpr int kCard = 2;
constexpr int kBits = 3;
constexpr int kUpscaler = 4;
constexpr int kSharpness = 5;
constexpr int kAntialias = 6;
constexpr int kHalo = 7;

TEST(CGraphicOptionsPage, PublicInterface) {
    static_assert(std::is_base_of_v<CScreenModePage, CGraphicOptionsPage>);
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

    // Empty for a line not listed.
    [[nodiscard]] static std::string text(CGraphicOptionsPage &page, int id) {
        std::vector<SMenuLine> lines;
        page.build(lines);
        const auto found = std::ranges::find(lines, id, &SMenuLine::id);
        return found == lines.end() ? std::string() : found->text;
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
    EXPECT_EQ(texts(page),
              (std::vector<std::string>{"Acceleration : Off", "3D API : None",
                                        "No 3D Hardware detected", "Bits per pixel : 32",
                                        "Upscaler : Standard", "Flashlight halo : Off"}));
}

TEST_F(CGraphicOptionsPageTest, TheRenderersCardsAndApiAreListed) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kAcceleration), "Acceleration : On");
    EXPECT_EQ(text(page, kApi), "3D API : OpenGL 3.3");
    EXPECT_EQ(text(page, kCard), "3D Card : First (0)");
}

// Above the halo, and only while accelerated: the pass runs over the renderer's scene.
TEST_F(CGraphicOptionsPageTest, AntialiasingIsListedWhileAccelerated) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    std::vector<std::string> lines = texts(page);
    EXPECT_EQ(lines.at(lines.size() - 2), "Anti-aliasing : Off");
    ON_CALL(display_, getAntialias()).WillByDefault(Return(platform::EAntialias::Fxaa));
    lines = texts(page);
    EXPECT_EQ(lines.at(lines.size() - 2), "Anti-aliasing : FXAA");
    special_.setUseDirect3D(false);
    lines = texts(page);
    EXPECT_EQ(lines.at(lines.size() - 2), "Upscaler : Standard");
}

TEST_F(CGraphicOptionsPageTest, AntialiasingStepsBothWaysAndWraps) {
    loadRenderer();
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_CALL(display_, setAntialias(platform::EAntialias::Fxaa)).Times(2);
    EXPECT_EQ(page.choose(kAntialias, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_EQ(page.choose(kAntialias, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getAntialias()).WillByDefault(Return(platform::EAntialias::Fxaa));
    EXPECT_CALL(display_, setAntialias(platform::EAntialias::Off));
    EXPECT_EQ(page.choose(kAntialias, EMenuStep::On), EMenuOutcome::Stay);
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

// Acceleration is turned off here, so this page holds the resolution too.
TEST_F(CGraphicOptionsPageTest, WithoutAccelerationTheResolutionIsHeldAt640x480) {
    loadRenderer();
    setResolution(1024, 768);
    CGraphicOptionsPage page(menu_, menu_owners_);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "1024x768");
    EXPECT_EQ(page.choose(kAcceleration, EMenuStep::On), EMenuOutcome::Stay);
    page.beforeSwap();
    EXPECT_EQ(resolution(), "640x480");
}

TEST_F(CGraphicOptionsPageTest, AResolutionHeldThereSizesTheWindowAtOnce) {
    loadRenderer();
    setResolution(1024, 768);
    CGraphicOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    EXPECT_CALL(display_, setWindowSize(_, _)).Times(0);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
    ::testing::Mock::VerifyAndClearExpectations(&display_);
    setResolution(640, 480);
    EXPECT_CALL(display_, setWindowSize(640, 480));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
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
    EXPECT_CALL(display_, setUpscaler(EUpscaler::Nearest));
    EXPECT_EQ(page.choose(kUpscaler, EMenuStep::On), EMenuOutcome::Stay);
    EXPECT_CALL(display_, setUpscaler(EUpscaler::Xbr));
    EXPECT_EQ(page.choose(kUpscaler, EMenuStep::Back), EMenuOutcome::Stay);
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Xbr));
    EXPECT_EQ(text(page, kUpscaler), "Upscaler : xBR");
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Nearest));
    EXPECT_EQ(text(page, kUpscaler), "Upscaler : Nearest");
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Smooth));
    EXPECT_EQ(text(page, kUpscaler), "Upscaler : Smooth");
}

// The sharpness line is the upscaler's next, for a filter that sharpens.
TEST_F(CGraphicOptionsPageTest, AFilterThatSharpensShowsItsSharpness) {
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Lanczos));
    ON_CALL(display_, getUpscalerSharpness()).WillByDefault(Return(50));
    CGraphicOptionsPage page(menu_, menu_owners_);
    EXPECT_EQ(text(page, kSharpness), "");
    ON_CALL(display_, getUpscaler()).WillByDefault(Return(EUpscaler::Nis));
    EXPECT_EQ(text(page, kSharpness), "Sharpness : 50%");
    const std::vector<std::string> lines = texts(page);
    EXPECT_EQ(*(std::ranges::find(lines, "Upscaler : NIS") + 1), "Sharpness : 50%");
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

TEST_F(CGraphicOptionsPageTest, CancelLeaves) {
    CGraphicOptionsPage page(menu_, menu_owners_);
    static_cast<void>(texts(page));
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Leave);
}

} // namespace
} // namespace nocturne::core
