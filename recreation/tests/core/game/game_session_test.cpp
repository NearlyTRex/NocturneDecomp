#include "common/error/fatalerror.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dlight/demonlight.h"
#include "core/dlight/lightglow.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fire/fireeffect.h"
#include "core/game/game.h"
#include "core/game/irisfade.h"
#include "core/gore/gore.h"
#include "core/hero/heroplaceholder.h"
#include "core/inv/inventoryassets.h"
#include "core/location.h"
#include "core/netgame/netgame.h"
#include "core/script/script.h"
#include "core/set/demonset.h"
#include "engine/console/console.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/core/testhero.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A session on a screen already at 640x480x32 that takes any mode, with a hero for the script to
// focus on in a set with no cameras to switch to and no network game. Each frame presented moves
// the clock on a quarter second, and the window closes after as many frames as the test plays.
class CGameSessionTest : public CMissionFixture {
protected:
    // A frame's ticks: the longest frame the game's time takes, a quarter second.
    static constexpr int kFrameTicks = 0x4000 * 18;
    // Past this many frames a session that should have ended itself is stopped.
    static constexpr int kGuardFrames = 200;

    CGameSessionTest() {
        ON_CALL(game_screen_, swapBuffers()).WillByDefault([this] {
            ++frames_;
            time_ += kFrameTicks;
        });
        ON_CALL(game_parts_.getRawInput(), getInputDisabled()).WillByDefault([this] {
            return frames_ >= closes_after_;
        });
        ON_CALL(game_parts_.getRawInput(), getFocusRegained()).WillByDefault([this] {
            return focus_regained_;
        });
        ON_CALL(game_parts_.getRawInput(), setFocusRegained(_))
            .WillByDefault([this](bool regained) { focus_regained_ = regained; });
        ON_CALL(game_screen_, getWindowHeight()).WillByDefault([this] { return height_; });
        ON_CALL(game_screen_, getBitsPerPixel()).WillByDefault([this] { return depth_; });
        ON_CALL(game_screen_, setScreenResolution(_, _, _))
            .WillByDefault([this](int /*width*/, int height, int depth) {
                height_ = height;
                depth_ = depth;
                return true;
            });
        givenSessionAssets();
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setIndex(0);
        placeholder->setLocation({.position = {}, .area_id = 0});
        mission_.addActorToList(std::move(placeholder));
        EXPECT_TRUE(mission_.createHeros(std::make_unique<CTestHero>(actor_)));
        script_.initRuntime();
        showACamera();
    }

    // The session, its window closing after that many frames; what it returned.
    int play(int closes_after = 1) {
        frames_ = 0;
        closes_after_ = closes_after;
        return game_.runGameSession(session_);
    }

    // The script given, started again.
    void givenScript(const std::string &text) {
        givenFile("world\\m1.scr", text);
        ASSERT_TRUE(script_.loadScript("m1.scr", true));
        script_.initRuntime();
    }

    // The local hero dead, with the game's fonts loaded for the banner it shows.
    void givenADeadHero() {
        drawGameOnto(game_parts_, screen_,
                     [this](const std::string &name, const std::string &contents) {
                         givenFile(name, contents);
                     });
        static_cast<CTestHero &>(*mission_.getLocalHero()).death_state =
            EDeathState::DEATH_STATE_DEAD;
    }

    ::testing::NiceMock<engine::MockScreenDevice> &game_screen_ = game_parts_.getScreen();
    int frames_ = 0;
    int closes_after_ = 1;
    bool focus_regained_ = false;
    int height_ = 480;
    int depth_ = 32;
    engine::CBitFont marker_font_{dosio_, screen_, two_d_, three_d_, colors_};
};

TEST_F(CGameSessionTest, TheConsoleSaysTheGameIsAliveAndItsVersion) {
    play();
    EXPECT_EQ(console_.getRow(0), "Nocturne is alive and kicking");
    EXPECT_EQ(console_.getRow(1), "1.2.3 (test)");
}

// A screen already at the game's height and depth isn't set again.
TEST_F(CGameSessionTest, AScreenAtTheGamesModeIsLeftAsItIs) {
    EXPECT_CALL(game_screen_, setScreenResolution).Times(0);
    play();
}

// A new depth alone sets the mode again; a new width alone doesn't.
TEST_F(CGameSessionTest, TheScreenIsSetToTheGamesResolution) {
    game_.game_pixx = 800;
    game_.game_pixy = 600;
    EXPECT_CALL(game_screen_, setScreenResolution(800, 600, 32));
    play();
    game_.game_bpp = 16;
    EXPECT_CALL(game_screen_, setScreenResolution(800, 600, 16));
    play();
    game_.game_pixx = 1024;
    EXPECT_CALL(game_screen_, setScreenResolution(1024, _, _)).Times(0);
    play();
}

// A board the options picked is selected again; the first board needs no selecting.
TEST_F(CGameSessionTest, TheGraphicsBoardPickedIsSelected) {
    engine::CSpecial &special = game_parts_.getSpecial();
    platform::MockRenderer &renderer = game_parts_.getRenderer();
    engine::SColorChannels channels;
    ON_CALL(game_screen_, getColorChannels()).WillByDefault(::testing::ReturnRef(channels));
    ON_CALL(renderer, init(_)).WillByDefault(Return(1));
    special.setUseDirect3D(true);
    ASSERT_EQ(special.loadExternalRenderer(), 1);
    EXPECT_CALL(renderer, selectCard(_)).Times(0);
    play();
    ::testing::Mock::VerifyAndClearExpectations(&renderer);
    special.setCurrentGraphicsBoard(2);
    EXPECT_CALL(renderer, selectCard(2)).WillOnce(Return(1));
    play();
}

// A refused mode falls back to 640x480 at the game's depth.
TEST_F(CGameSessionTest, ARefusedModeFallsBackTo640x480) {
    game_.game_pixx = 1600;
    game_.game_pixy = 1200;
    EXPECT_CALL(game_screen_, setScreenResolution(1600, 1200, 32)).WillOnce(Return(false));
    EXPECT_CALL(game_screen_, setScreenResolution(640, 480, 32)).WillOnce(Return(true));
    play();
    EXPECT_EQ(game_.game_pixx, 640);
    EXPECT_EQ(game_.game_pixy, 480);
}

TEST_F(CGameSessionTest, AModeThatCantBeSetAtAllIsFatal) {
    game_.game_bpp = 16;
    ON_CALL(game_screen_, setScreenResolution(_, _, _)).WillByDefault(Return(false));
    EXPECT_THAT([this] { static_cast<void>(game_.runGameSession(session_)); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CGame::setGameRes - Unable to set the video mode to 640x480x16")));
}

// Below 384 lines the editor's text is drawn in its small font.
TEST_F(CGameSessionTest, ALowResolutionTakesTheSmallEditorFont) {
    editor_tools_.setEditorFont(&marker_font_);
    play();
    EXPECT_EQ(editor_tools_.getEditorFont(), &marker_font_);
    game_.game_pixx = 320;
    game_.game_pixy = 240;
    play();
    EXPECT_EQ(editor_tools_.getEditorFont(), game_parts_.getFonts().getSmallEditorFont());
}

// VELOCITY set at all turns developer mode on for the session; unset, a session turns it off.
TEST_F(CGameSessionTest, DeveloperModeFollowsVelocity) {
    ON_CALL(environment_, getVariable(std::string_view("VELOCITY")))
        .WillByDefault(Return(std::optional<std::string>("")));
    play();
    EXPECT_TRUE(game_.developer_mode);
    ON_CALL(environment_, getVariable(std::string_view("VELOCITY")))
        .WillByDefault(Return(std::nullopt));
    play();
    EXPECT_FALSE(game_.developer_mode);
}

// The original's other developers' variable is a second name for developer mode.
// The console, the camera debug and the editor tools start each session off.
TEST_F(CGameSessionTest, TheDebugDisplaysStartOff) {
    game_.console_enabled = true;
    game_.camera_debug = true;
    game_.editor_tools_enabled = true;
    game_.show_customizable_keys = true;
    play();
    EXPECT_FALSE(game_.console_enabled);
    EXPECT_FALSE(game_.camera_debug);
    EXPECT_FALSE(game_.editor_tools_enabled);
    EXPECT_FALSE(game_.show_customizable_keys);
}

TEST_F(CGameSessionTest, SpookHouseTurnsDeveloperModeOnToo) {
    ON_CALL(environment_, getVariable(std::string_view("SPOOKHOUSE")))
        .WillByDefault(Return(std::optional<std::string>("")));
    play();
    EXPECT_TRUE(game_.developer_mode);
    ON_CALL(environment_, getVariable(std::string_view("SPOOKHOUSE")))
        .WillByDefault(Return(std::nullopt));
    play();
    EXPECT_FALSE(game_.developer_mode);
}

// The frame's hotkeys come before its controls; Gamma up held raises the gamma the session began
// at, its message drawn over the frame in the game's fonts.
TEST_F(CGameSessionTest, EachFrameReadsTheHotkeys) {
    drawGameOnto(game_parts_, screen_,
                 [this](const std::string &name, const std::string &contents) {
                     givenFile(name, contents);
                 });
    game_.gamma = 0x8000;
    game_parts_.hold(engine::EInputCodeType::DIK_F12, true);
    play();
    EXPECT_EQ(game_.gamma, 0x8400);
}

// A message and a bar from before the session are gone once it starts.
TEST_F(CGameSessionTest, TheOverlayIsClearedAsTheSessionStarts) {
    game_.displayMessage("stale", 10.0F);
    game_.setStatusDisplay("Doc", 1.0F, 10.0F);
    play();
    drawGameOnto(game_parts_, screen_,
                 [this](const std::string &name, const std::string &contents) {
                     givenFile(name, contents);
                 });
    screen_.fill(kBackground);
    game_.renderOverlay(session_);
    for (int y = 0; y < screen_.getWindowHeight(); ++y) {
        for (int x = 0; x < screen_.getWindowWidth(); ++x) {
            ASSERT_EQ(screen_.pixel(x, y), kBackground) << x << "," << y;
        }
    }
}

// Nocturne's, BW1's and BW3's sessions open on the iris, which the first frame starts opening;
// BW2's puts any iris away.
TEST_F(CGameSessionTest, TheSessionOpensOnTheIrisAsTheGameSays) {
    play();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Opening);
    game_parts_.getContent().iris = engine::SIris{.opens_session = false, .black_frames = 1};
    play();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Idle);
}

TEST_F(CGameSessionTest, TheFlashlightReachesAsFarAsThePlayerChose) {
    game_.flashlight_range = EFlashlightRange::Long;
    play();
    EXPECT_EQ(set_parts_.flashlight->getMaxDistance(), 64.0F);
}

// The flashlight is set up off, as "Flashlight", reaching the originals' 32 units.
TEST_F(CGameSessionTest, TheFlashlightIsSetUpOffAndShort) {
    play();
    const CDemonLight &flashlight = *set_parts_.flashlight;
    EXPECT_EQ(flashlight.getCameraName(), "Flashlight");
    EXPECT_FALSE(flashlight.isLightEnabled());
    EXPECT_EQ(flashlight.getMaxDistance(), 32.0F);
    EXPECT_EQ(flashlight.getShadowDepthBuffer().size(), 256U * 256U);
}

// The scene is set up, and the gamma held between a half and one before the set takes it.
TEST_F(CGameSessionTest, TheSceneIsSetUpAtAGammaHeldInRange) {
    game_.gamma = 0x4000;
    game_.is_processing = 1;
    game_.time_scale_factor = 2.0F;
    play();
    EXPECT_EQ(game_.gamma, 0x8000);
    EXPECT_EQ(game_.is_processing, 0);
    EXPECT_EQ(game_.time_scale_factor, 1.0F);
    EXPECT_EQ(set_.getIntensityToValueLookupTable()[0x4000], 0x8000);
    EXPECT_EQ(set_.getActiveFog().color_index, set_.getSceneFog().color_index);
    game_.gamma = 0x20000;
    play();
    EXPECT_EQ(game_.gamma, 0x10000);
}

// The set's, the fire effects', the gore's and the inventory's, in that order.
TEST_F(CGameSessionTest, TheSessionsAssetsAreLoaded) {
    play();
    EXPECT_EQ(set_parts_.light_parts.glow.headlight.cache_index, 0);
    EXPECT_EQ(fire_.getBlackHoleTexture().cache_index, 24);
    EXPECT_EQ(fire_.getGunFlashModel().getModelName(), "gunflash.kfm");
    EXPECT_EQ(gore_.getBloodParticleTexture().cache_index, 53);
    EXPECT_EQ(inventory_assets_.getWidth(), CInventoryAssets::kDefaultWidth);
    EXPECT_EQ(inventory_assets_.getScreenHeight(), screen_.getWindowHeight());
}

// Serving the first frame moves the network clock on to now.
TEST_F(CGameSessionTest, TheNetworkClockIsBroughtUpToDateAsPlayBegins) {
    net_game_.init();
    time_ = 0x10000 * 18;
    play();
    EXPECT_EQ(net_game_.getCurrentGameTime(), 1U + 0x10000U);
}

TEST_F(CGameSessionTest, TheLoadingScreenIsPutAwayAndReportsItsUpdates) {
    play();
    bool reported = false;
    for (int row = 0; row < engine::CConsole::kMaxRows; ++row) {
        reported = reported || console_.getRow(row) == "gLevelIndicator: Used 0 calls";
    }
    EXPECT_TRUE(reported);
}

// A paused frame is drawn without processing the game, and presented like any other.
TEST_F(CGameSessionTest, APausedSessionPlaysItsFrames) {
    game_.is_paused = true;
    EXPECT_EQ(play(3), 0);
    EXPECT_EQ(frames_, 3);
}

// Play reads the extended keys, which the menus fold away, and a paused frame folds them too;
// the session's end leaves them folded for the menus.
TEST_F(CGameSessionTest, PlayKeepsTheExtendedKeysUntilTheSessionEnds) {
    std::vector<int> masks;
    ON_CALL(raw_input_, setInputKeyMask(_)).WillByDefault([&](int value) {
        masks.push_back(value);
    });
    play();
    EXPECT_EQ(masks, (std::vector<int>{0x1ff, 0x7f}));
    masks.clear();
    game_.is_paused = true;
    play();
    EXPECT_EQ(masks, (std::vector<int>{0x7f, 0x7f}));
}

// The session's end lets go of the typed characters and puts the game's time back to normal.
TEST_F(CGameSessionTest, TheSessionsEndClearsTheKeyPressesAndTimeScale) {
    EXPECT_CALL(game_parts_.getRawInput(), clearKeypresses()).Times(::testing::AtLeast(1));
    ON_CALL(game_parts_.getRawInput(), getInputDisabled()).WillByDefault([this] {
        game_.time_scale_factor = 2.0F;
        return true;
    });
    EXPECT_EQ(game_.runGameSession(session_), 0);
    EXPECT_EQ(game_.time_scale_factor, 1.0F);
}

// The script's end ends the session once a frame with time has run it, returning 1.
TEST_F(CGameSessionTest, TheScriptEndingTheMissionEndsTheSession) {
    givenScript("end\n");
    EXPECT_EQ(play(kGuardFrames), 1);
    EXPECT_LT(frames_, kGuardFrames);
}

// The session goes on frame after frame until something ends it.
TEST_F(CGameSessionTest, PlayGoesOnUntilTheWindowCloses) {
    EXPECT_EQ(play(5), 0);
    EXPECT_EQ(frames_, 5);
}

// Back in focus, the camera shown is shown again, the flag taken.
TEST_F(CGameSessionTest, RegainingTheFocusShowsTheCameraAgain) {
    focus_regained_ = true;
    play();
    EXPECT_FALSE(focus_regained_);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
}

// In edit mode, which developer mode's key toggles, the director doesn't choose.
TEST_F(CGameSessionTest, EditModeLeavesTheDirectorAlone) {
    ON_CALL(environment_, getVariable(std::string_view("VELOCITY")))
        .WillByDefault(Return(std::optional<std::string>("")));
    game_parts_.hold(engine::EInputCodeType::DIK_LCONTROL, true);
    game_parts_.hold(engine::EInputCodeType::DIK_E, true);
    EXPECT_EQ(play(), 0);
    EXPECT_FALSE(game_.game_active);
}

// A dead hero's Enter ends the session there and then.
TEST_F(CGameSessionTest, EnterEndsADeadHerosSession) {
    givenADeadHero();
    game_parts_.hold(engine::EInputCodeType::DIK_RETURN, true);
    EXPECT_EQ(play(kGuardFrames), 0);
    EXPECT_EQ(frames_, 1);
}

// Four seconds after the death the screen closes on the hero, and once it is black the session
// ends.
TEST_F(CGameSessionTest, ADeadHerosScreenClosesAndEndsTheSession) {
    givenADeadHero();
    EXPECT_EQ(play(kGuardFrames), 0);
    EXPECT_GT(frames_, 16);
    EXPECT_LT(frames_, kGuardFrames);
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Black);
}

// BW2's dead hero waits for Enter, the screen never closing.
TEST_F(CGameSessionTest, AGameWhoseDeathDoesntFadeWaitsForEnter) {
    game_parts_.getContent().death = engine::SDeath{.fades = false};
    givenADeadHero();
    EXPECT_EQ(play(kGuardFrames), 0);
    EXPECT_EQ(frames_, kGuardFrames);
    EXPECT_NE(game_.getIrisFade(), EIrisFade::Closing);
    EXPECT_NE(game_.getIrisFade(), EIrisFade::Black);
}

// A living hero's session isn't ended by Enter.
TEST_F(CGameSessionTest, EnterLeavesALivingHerosSessionAlone) {
    game_parts_.hold(engine::EInputCodeType::DIK_RETURN, true);
    EXPECT_EQ(play(3), 0);
    EXPECT_EQ(frames_, 3);
}

} // namespace
} // namespace nocturne::core
