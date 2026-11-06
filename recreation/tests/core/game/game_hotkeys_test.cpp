#include "core/dcamera/demoncamera.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/game/gameaction.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "engine/keys/inputcodetype.h"
#include "sound/sndmain/sndmain.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <initializer_list>
#include <string>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

// A set of three cameras, the first shown, on a 640x480 screen, the keys at their keyboard
// defaults.
class CGameHotkeysTest : public CMissionFixture {
protected:
    CGameHotkeysTest() : CMissionFixture(kScreenWidth, kScreenHeight) {
        ON_CALL(game_parts_.getScreen(), getWindowHeight()).WillByDefault([this] {
            return height_;
        });
        givenFile("models\\three.set",
                  SSetFile{.cameras = "3\n" + cameraText("a") + cameraText("b") + cameraText("c"),
                           .pvs = "1\n\t0\n1\n\t0\n1\n\t0\n"}
                      .text());
        givenFile("data\\pier.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                            {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        set_.load("three.set");
        session_.camera.init(kScreenHeight);
        set_.setCameraView(0);
    }

    // The keys held for one call, then let go.
    void press(std::initializer_list<EInputCodeType> codes) {
        for (const EInputCodeType code : codes) {
            game_parts_.hold(code, true);
        }
        game_.processHotkeys(session_);
        for (const EInputCodeType code : codes) {
            game_parts_.hold(code, false);
        }
    }

    [[nodiscard]] float ambient(int index) {
        return set_.getCameras()[static_cast<std::size_t>(index)].getAmbientValue();
    }

    static constexpr int kScreenWidth = 640;
    static constexpr int kScreenHeight = 480;

    int height_ = kScreenHeight;
};

// F5 or Ctrl+M, each press once however long it is held.
TEST_F(CGameHotkeysTest, MuteTurnsTheSoundOffAndOn) {
    press({EInputCodeType::DIK_F5});
    EXPECT_TRUE(game_parts_.getSoundMain().isSoundMuted());
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_M});
    EXPECT_FALSE(game_parts_.getSoundMain().isSoundMuted());
    game_parts_.hold(EInputCodeType::DIK_F5, true);
    game_.processHotkeys(session_);
    game_.processHotkeys(session_);
    EXPECT_TRUE(game_parts_.getSoundMain().isSoundMuted());
}

// By a 64th either way, held between a half and one.
TEST_F(CGameHotkeysTest, GammaStepsAndIsHeldInRange) {
    game_.gamma = 0x8400;
    press({EInputCodeType::DIK_F11});
    EXPECT_EQ(game_.gamma, 0x8000);
    press({EInputCodeType::DIK_F11});
    EXPECT_EQ(game_.gamma, 0x8000);
    game_.gamma = 0xfc00;
    press({EInputCodeType::DIK_F12});
    EXPECT_EQ(game_.gamma, 0x10000);
    press({EInputCodeType::DIK_F12});
    EXPECT_EQ(game_.gamma, 0x10000);
}

// Outside developer mode the developers' keys do nothing.
TEST_F(CGameHotkeysTest, TheDevelopersKeysNeedDeveloperMode) {
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_E});
    EXPECT_TRUE(game_.game_active);
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_W});
    EXPECT_FALSE(game_.script_view);
    const float before = ambient(0);
    press({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_A});
    EXPECT_EQ(ambient(0), before);
}

// Edit mode's cameras step either way round the set; leaving it lets the director choose again.
TEST_F(CGameHotkeysTest, EditModeStepsThroughTheCameras) {
    game_.developer_mode = true;
    press({EInputCodeType::DIK_C});
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_E});
    EXPECT_FALSE(game_.game_active);
    press({EInputCodeType::DIK_C});
    EXPECT_EQ(set_.getSelectedCameraIndex(), 1);
    press({EInputCodeType::DIK_C});
    press({EInputCodeType::DIK_C});
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
    press({EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_C});
    EXPECT_EQ(set_.getSelectedCameraIndex(), 2);
    press({EInputCodeType::DIK_RSHIFT, EInputCodeType::DIK_C});
    EXPECT_EQ(set_.getSelectedCameraIndex(), 1);
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_E});
    EXPECT_TRUE(game_.game_active);
}

// The scene in the top 240 lines and back, on a screen of 480 lines or more.
TEST_F(CGameHotkeysTest, TheScriptViewHalvesTheScene) {
    game_.developer_mode = true;
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_W});
    EXPECT_TRUE(game_.script_view);
    EXPECT_EQ(session_.camera.getFramebufferHeight(), 240);
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_W});
    EXPECT_FALSE(game_.script_view);
    EXPECT_EQ(session_.camera.getFramebufferHeight(), 480);
    height_ = 479;
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_W});
    EXPECT_FALSE(game_.script_view);
}

// Every camera's ambient light, from the shown camera's, a fiftieth either way, held between none
// and full; Alt+Shift+A lowers it and doesn't raise it as well.
TEST_F(CGameHotkeysTest, TheAmbientLightStepsForEveryCamera) {
    game_.developer_mode = true;
    session_.camera.setEffectIntensity(0.0F);
    press({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_A});
    EXPECT_FLOAT_EQ(ambient(0), 0.02F);
    EXPECT_FLOAT_EQ(ambient(2), 0.02F);
    press({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_A});
    EXPECT_EQ(ambient(1), 0.0F);
    press({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_LSHIFT, EInputCodeType::DIK_A});
    EXPECT_EQ(ambient(1), 0.0F);
    session_.camera.setEffectIntensity(1.0F);
    press({EInputCodeType::DIK_LMENU, EInputCodeType::DIK_A});
    EXPECT_EQ(ambient(0), 1.0F);
    EXPECT_EQ(session_.camera.getCoronaBlendFactor(), 0xffff);
}

// Rebound so Gamma down is F12 and Gamma up Ctrl+F12, Ctrl+F12 is Gamma up's alone, though
// Gamma down is tried first.
TEST_F(CGameHotkeysTest, TheChordWithMoreModifiersHeldWins) {
    game_.controls.setBindings(EGameAction::GammaDown, {{.code = EInputCodeType::DIK_F12}});
    game_.controls.setBindings(EGameAction::GammaUp,
                               {{.code = EInputCodeType::DIK_F12, .control = true}});
    game_.gamma = 0x8400;
    press({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_F12});
    EXPECT_EQ(game_.gamma, 0x8800);
    press({EInputCodeType::DIK_F12});
    EXPECT_EQ(game_.gamma, 0x8400);
}

// A key held with too few of a chord's modifiers is no press of it.
TEST_F(CGameHotkeysTest, AChordNeedsItsModifiers) {
    press({EInputCodeType::DIK_M});
    EXPECT_FALSE(game_parts_.getSoundMain().isSoundMuted());
}

} // namespace
} // namespace nocturne::core
