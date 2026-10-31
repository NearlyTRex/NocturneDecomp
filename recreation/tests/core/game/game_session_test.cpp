#include "common/error/fatalerror.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dlight/demonlight.h"
#include "core/game/game.h"
#include "core/set/demonset.h"
#include "engine/console/console.h"
#include "engine/font/font.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A session on a screen already at 640x480x32 that takes any mode, which stops where the play loop
// would start.
class CGameSessionTest : public CMissionFixture {
protected:
    CGameSessionTest() {
        ON_CALL(game_screen_, getWindowHeight()).WillByDefault([this] { return height_; });
        ON_CALL(game_screen_, getBitsPerPixel()).WillByDefault([this] { return depth_; });
        ON_CALL(game_screen_, setScreenResolution(_, _, _))
            .WillByDefault([this](int /*width*/, int height, int depth) {
                height_ = height;
                depth_ = depth;
                return true;
            });
    }

    void play() {
        EXPECT_THAT([this] { static_cast<void>(game_.runGameSession(session_)); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("CGame::runGameSession's play loop is not ported yet")));
    }

    ::testing::NiceMock<engine::MockScreenDevice> &game_screen_ = game_parts_.getScreen();
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

// The flashlight is set up off, as "Flashlight", reaching 64 units.
TEST_F(CGameSessionTest, TheFlashlightIsSetUpOffAndShort) {
    play();
    const CDemonLight &flashlight = *set_parts_.flashlight;
    EXPECT_EQ(flashlight.getCameraName(), "Flashlight");
    EXPECT_FALSE(flashlight.isLightEnabled());
    EXPECT_EQ(flashlight.getMaxDistance(), 64.0F);
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

} // namespace
} // namespace nocturne::core
