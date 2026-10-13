#include "common/error/fatalerror.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/font.h"
#include "engine/ini/ini.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/platform/mockdisplay.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/sound/sndmainfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::HasSubstr;
using ::testing::Not;
using ::testing::Return;

constexpr std::string_view kIni = ".\\system\\nocturne.ini";

TEST(Inivar, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&readIniData),
                       void (*)(engine::CIni &, platform::IFileSystem &, const SIniDataOwners &)>);
    static_assert(
        std::is_same_v<decltype(&writeIniData), void (*)(engine::CIni &, const SIniDataOwners &)>);
}

class CInivarTest : public sound::CSndMainFixture {
protected:
    CInivarTest() {
        ON_CALL(file_system_, readFile(kIni)).WillByDefault([this](std::string_view) {
            return std::optional(text_);
        });
        ON_CALL(file_system_, writeFile(kIni, _))
            .WillByDefault([this](std::string_view, std::string_view text) {
                text_ = text;
                return true;
            });
        ON_CALL(file_system_, setReadOnly(kIni, false)).WillByDefault(Return(true));
    }

    void read() {
        readIniData(ini_, file_system_, owners_);
    }

    std::string text_ = "[Graphics]\r\n[Sound]\r\n[Control]\r\n[Debug]\r\n";
    ::testing::NiceMock<platform::MockDisplay> display_;
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    ::testing::NiceMock<engine::MockScreenDevice> screen_;
    ::testing::NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::C3d three_d_;
    engine::CSpecial special_{renderer_, screen_, two_d_, three_d_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::CKeys keys_{raw_input_, screen_};
    shape::CEditorTools editor_tools_{two_d_, matrix_, three_d_, screen_, special_, keys_};
    engine::CFontColors colors_;
    ::testing::NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    CGame game_;
    engine::CIni ini_{file_system_};
    SIniDataOwners owners_{.game = game_,
                           .sound_main = sound_,
                           .console = console_,
                           .special = special_,
                           .display = display_,
                           .fonts = fonts_};
};

TEST_F(CInivarTest, ReadsTheGraphicsSettings) {
    text_ = "[Graphics]\r\ngamePIXX=800\r\ngamePIXY=600\r\ngameBPP=16\r\nuseDirect3D=1\r\n"
            "gamma=70000\r\nheroNumber=2\r\nhaloMode=1\r\nsubtitleMode=0\r\nbloodFlag=0\r\n"
            "nudityFlag=0\r\nfoulLanguageFlag=0\r\nshadowFlag=0\r\ncurrentBoard=1\r\n";
    EXPECT_CALL(display_, setWindowSize(800, 600));
    read();
    EXPECT_EQ(game_.game_pixx, 800);
    EXPECT_EQ(game_.game_pixy, 600);
    EXPECT_EQ(game_.game_bpp, 16);
    EXPECT_TRUE(special_.getUseDirect3D());
    EXPECT_EQ(game_.gamma, 70000);
    EXPECT_EQ(game_.hero_number, EHeroType::HERO_TYPE_STRANGER);
    EXPECT_EQ(game_.halo_mode, 1);
    EXPECT_EQ(game_.subtitle_mode, 0);
    EXPECT_EQ(game_.blood_flag, 0);
    EXPECT_EQ(game_.nudity_flag, 0);
    EXPECT_EQ(game_.foul_language_flag, 0);
    EXPECT_EQ(game_.shadow_flag, 0);
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 1);
}

TEST_F(CInivarTest, TheOsFontChoiceIsReadUnlessItIsOutOfRange) {
    text_ = "[Graphics]\r\nosFont=2\r\n";
    read();
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::System);
    text_ = "[Graphics]\r\nosFont=3\r\n";
    read();
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::System);
}

TEST_F(CInivarTest, TheOsFontChoiceIsWritten) {
    fonts_.setOsFontChoice(EOsFontChoice::Bitmap);
    writeIniData(ini_, owners_);
    EXPECT_THAT(text_, HasSubstr("osFont=1\r\n"));
}

TEST_F(CInivarTest, MissingKeysKeepTheirSettings) {
    special_.setUseDirect3D(true);
    special_.setCurrentGraphicsBoard(3);
    read();
    EXPECT_EQ(game_.game_pixx, 640);
    EXPECT_TRUE(special_.getUseDirect3D());
    EXPECT_EQ(special_.getCurrentGraphicsBoard(), 0);
    EXPECT_EQ(game_.blood_flag, 1);
}

TEST_F(CInivarTest, TheQuimbyFlagTurnsOffBloodNudityAndFoulLanguage) {
    text_ = "[Graphics]\r\nquimbyFlag=1\r\nbloodFlag=1\r\nnudityFlag=1\r\nfoulLanguageFlag=1\r\n";
    read();
    EXPECT_EQ(game_.quimby_flag, 1);
    EXPECT_EQ(game_.blood_flag, 0);
    EXPECT_EQ(game_.nudity_flag, 0);
    EXPECT_EQ(game_.foul_language_flag, 0);
}

TEST_F(CInivarTest, ReadsTheSoundSection) {
    text_ = "[Sound]\r\nHz=44100\r\nMute=1\r\n";
    read();
    EXPECT_EQ(sound_.getAudioSampleRate(), 44100);
    EXPECT_TRUE(sound_.isSoundMuted());
}

TEST_F(CInivarTest, TheControlModesDefaultsComeFirstThenTheFilesBindings) {
    text_ = "[Control]\r\ngameControl=1\r\nkeyFire=57,513\r\nmapZoom=200\r\ninvertMouseYAxis=1\r\n"
            "alwaysRun=1\r\nxMouseSensitivity=32768\r\nyMouseSensitivity=98304\r\nxCenter=1\r\n"
            "yCenter=2\r\nxStickMin=3\r\nxStickMax=4\r\nyStickMin=5\r\nyStickMax=6\r\n"
            "aimMode=1\r\nautoUseHealth=1\r\n";
    read();
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_MOUSE);
    EXPECT_EQ(game_.controls.formatBindings(EGameAction::Fire), "57,513");
    EXPECT_EQ(game_.controls.formatBindings(EGameAction::Walk),
              std::to_string(static_cast<int>(engine::EInputCodeType::DIK_W)));
    EXPECT_EQ(game_.map_zoom, 200);
    EXPECT_EQ(game_.invert_mouse_y_axis, 1);
    EXPECT_EQ(game_.always_run, 1);
    EXPECT_EQ(game_.x_mouse_sensitivity, 32768);
    EXPECT_EQ(game_.y_mouse_sensitivity, 98304);
    EXPECT_EQ(game_.x_center, 1);
    EXPECT_EQ(game_.y_center, 2);
    EXPECT_EQ(game_.x_stick_min, 3);
    EXPECT_EQ(game_.x_stick_max, 4);
    EXPECT_EQ(game_.y_stick_min, 5);
    EXPECT_EQ(game_.y_stick_max, 6);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_SEMI_AUTO);
    EXPECT_EQ(game_.auto_use_health, 1);
}

TEST_F(CInivarTest, ValuesOutsideTheirSettingsAreIgnored) {
    text_ = "[Graphics]\r\nheroNumber=12\r\n[Control]\r\ngameControl=-1\r\naimMode=3\r\n";
    read();
    EXPECT_EQ(game_.hero_number, EHeroType::HERO_TYPE_GABRIELLA);
    EXPECT_EQ(game_.game_control, EControlMode::CONTROL_MODE_KEYBOARD);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_AUTO);
}

TEST_F(CInivarTest, ReadsTheDebugSection) {
    text_ = "[Debug]\r\nlogConsoleFlag=1\r\nheadOfHorrorCheat=1\r\n";
    read();
    EXPECT_EQ(console_.file_logging_enabled, 1);
    EXPECT_EQ(game_.head_of_horror_cheat, 1);
}

TEST_F(CInivarTest, AnIniThatCantBeWrittenMeansTheGameIsOnTheCd) {
    ON_CALL(file_system_, setReadOnly(kIni, false)).WillByDefault(Return(false));
    EXPECT_THAT([this] { read(); }, ::testing::ThrowsMessage<common::CFatalError>(::testing::StrEq(
                                        "Please copy Nocturne to your hard drive")));
}

TEST_F(CInivarTest, WritesEverySettingBackToItsSection) {
    game_.game_pixx = 1024;
    game_.hero_number = EHeroType::HERO_TYPE_SVETLANA;
    special_.setUseDirect3D(true);
    special_.setCurrentGraphicsBoard(1);
    sound_.setAudioSampleRate(44100);
    game_.controls.setBindings(EGameAction::Map,
                               {engine::EInputCodeType::DIK_M, engine::EInputCodeType::DIK_TAB});
    game_.aim_mode = EAimMode::AIM_MODE_MANUAL;
    console_.file_logging_enabled = 1;
    writeIniData(ini_, owners_);
    EXPECT_THAT(text_, HasSubstr("gamePIXX=1024\r\n"));
    EXPECT_THAT(text_, HasSubstr("heroNumber=1\r\n"));
    EXPECT_THAT(text_, HasSubstr("useDirect3D=1\r\n"));
    EXPECT_THAT(text_, HasSubstr("currentBoard=1\r\n"));
    EXPECT_THAT(text_, HasSubstr("shadowFlag=1\r\n"));
    EXPECT_THAT(text_, HasSubstr("Hz=44100\r\n"));
    EXPECT_THAT(text_, HasSubstr("keyMap=50,15\r\n"));
    EXPECT_THAT(text_, HasSubstr("aimMode=2\r\n"));
    EXPECT_THAT(text_, HasSubstr("logConsoleFlag=1\r\n"));
}

TEST_F(CInivarTest, ACensoredGameLeavesItsCensoredSettingsUnwritten) {
    game_.quimby_flag = 1;
    writeIniData(ini_, owners_);
    EXPECT_THAT(text_, HasSubstr("quimbyFlag=1\r\n"));
    EXPECT_THAT(text_, Not(HasSubstr("nudityFlag")));
    EXPECT_THAT(text_, Not(HasSubstr("foulLanguageFlag")));
    EXPECT_THAT(text_, Not(HasSubstr("shadowFlag")));
}

TEST_F(CInivarTest, WhatIsWrittenReadsBackTheSame) {
    game_.game_control = EControlMode::CONTROL_MODE_GAMEPAD;
    game_.restoreDefaultControls();
    game_.map_zoom = 150;
    game_.y_stick_max = 40000;
    writeIniData(ini_, owners_);
    CGame copy;
    const SIniDataOwners reread{.game = copy,
                                .sound_main = sound_,
                                .console = console_,
                                .special = special_,
                                .display = display_,
                                .fonts = fonts_};
    readIniData(ini_, file_system_, reread);
    EXPECT_EQ(copy.game_control, EControlMode::CONTROL_MODE_GAMEPAD);
    EXPECT_EQ(copy.controls.formatBindings(EGameAction::Fire),
              game_.controls.formatBindings(EGameAction::Fire));
    EXPECT_EQ(copy.map_zoom, 150);
    EXPECT_EQ(copy.y_stick_max, 40000);
}

} // namespace
} // namespace nocturne::core
