#include "common/error/fatalerror.h"
#include "core/dfont/dfont.h"
#include "core/main/main.h"
#include "core/menu/menu.h"
#include "core/sound/sound.h"
#include "engine/console/console.h"
#include "engine/font/font.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/pod/pod.h"
#include "engine/rawinput.h"
#include "shape/edittool/editortools.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/menufontfiles.h"
#include "tests/mocks/core/moonfixture.h"
#include "tests/mocks/platform/mockaudiodevice.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <functional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::NiceMock;
using ::testing::Return;

// Far more frames than any test takes; past it the frame presses Escape and fails.
constexpr int kFrameLimit = 20;

// The main menu over the moon fixture, its music on disk and the sound output running. Each test
// presses keys as a frame is shown, for the next to read.
class CMainMenuTest : public CMoonFixture {
protected:
    CMainMenuTest() {
        givenMenuFontFiles(given_file_);
        givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n");
        messages_.readMessageFile("msglist.txt");
        fonts_.initFonts();
        givenFile("sound\\splash-music-22.wav", sound::makeConstantWav(1000, 0));
        ON_CALL(raw_input_, getKeyboardState()).WillByDefault([this] {
            return std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_);
        });
        ON_CALL(screen_, swapBuffers()).WillByDefault([this] {
            ++frames_;
            if (frames_ > kFrameLimit) {
                ADD_FAILURE() << "the menu didn't quit";
                press(EInputCodeType::DIK_ESCAPE);
            } else if (on_frame_) {
                on_frame_(frames_);
            }
        });
        ON_CALL(screen_, getColorTable32())
            .WillByDefault(Return(std::span<const std::uint32_t, 256>(color_table_)));
        ON_CALL(audio_device_, open).WillByDefault(Return(true));
        sound_main_.initializeSoundDevice();
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    // Whether anything is drawn anywhere on the screen.
    [[nodiscard]] bool anythingDrawn() const {
        return std::ranges::any_of(pixels_, [](std::uint32_t pixel) { return pixel != 0; });
    }

    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> keyboard_{};
    // Every colour white, so text shows wherever it is drawn.
    std::array<std::uint32_t, 256> color_table_ = [] {
        std::array<std::uint32_t, 256> table{};
        table.fill(0xffffffU);
        return table;
    }();
    int frames_ = 0;
    std::function<void(int)> on_frame_;
    engine::CKeys keys_{raw_input_, screen_};
    NiceMock<platform::MockClock> wall_clock_;
    NiceMock<platform::MockClipboard> clipboard_;
    shape::CEditorTools editor_tools_{{.two_d = two_d_,
                                       .matrix = matrix_,
                                       .three_d = three_d_,
                                       .screen = screen_,
                                       .special = special_,
                                       .keys = keys_,
                                       .raw_input = raw_input_,
                                       .game_clock = clock_,
                                       .clock = wall_clock_,
                                       .clipboard = clipboard_}};
    engine::CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    engine::CMenuInput menu_input_{keys_};
    NiceMock<platform::MockAudioDevice> audio_device_;
    engine::CConsole console_{file_system_, 80, 50, 0, 0};
    sound::CSndMain sound_main_{dosio_, file_system_, audio_device_, console_,
                                [] { return std::tm{}; }};
    engine::CPod pod_{file_system_, dosio_};
    CSound sound_{sound_main_, pod_, file_system_};
    CMenu menu_{{.dosio = dosio_,
                 .screen = screen_,
                 .special = special_,
                 .two_d = two_d_,
                 .three_d = three_d_,
                 .raw_input = raw_input_,
                 .menu_input = menu_input_,
                 .fonts = fonts_,
                 .messages = messages_,
                 .renderer = demon_renderer_,
                 .set = set_,
                 .game = game_,
                 .actor = actor_,
                 .crt_random = crt_random_,
                 .textures = textures_,
                 .sound = sound_,
                 .sound_main = sound_main_,
                 .build_version = "X"}};
};

TEST_F(CMainMenuTest, AWindowUnder480RowsShowsNothing) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(479));
    EXPECT_EQ(menu_.showMainGameMenu(), 1);
    EXPECT_EQ(frames_, 0);
}

// The first frame is cleared before it is shown; the rest show the moon and the items.
TEST_F(CMainMenuTest, EachFrameShowsTheMoonAndItemsUntilCancel) {
    std::vector<bool> drawn;
    on_frame_ = [&](int frame) {
        drawn.push_back(anythingDrawn());
        if (frame == 3) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(enterMainGameMenu(menu_), 99);
    EXPECT_EQ(drawn, (std::vector<bool>{false, true, true}));
}

// The music starts after the first frame and stops as the menu goes.
TEST_F(CMainMenuTest, TheMusicPlaysWhileTheMenuIsUp) {
    std::vector<int> playing;
    on_frame_ = [&](int frame) {
        playing.push_back(sound_main_.countActiveSfx());
        if (frame == 2) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(playing, (std::vector<int>{0, 1}));
    EXPECT_EQ(sound_main_.countActiveSfx(), 0);
}

TEST_F(CMainMenuTest, ControlMMutesAndUnmutesTheSound) {
    std::vector<bool> muted;
    on_frame_ = [&](int frame) {
        muted.push_back(sound_main_.isSoundMuted());
        if (frame <= 2) {
            press(EInputCodeType::DIK_LCONTROL);
            press(EInputCodeType::DIK_M);
        } else {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(muted, (std::vector<bool>{false, true, false}));
}

// Up from START wraps to it.
TEST_F(CMainMenuTest, QuitQuits) {
    on_frame_ = [&](int /*frame*/) {
        press(EInputCodeType::DIK_UP);
        press(EInputCodeType::DIK_RETURN);
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 2);
}

// It is seen as soon as the frame it closed during is shown.
TEST_F(CMainMenuTest, ClosingTheWindowQuits) {
    on_frame_ = [&](int /*frame*/) {
        ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 1);
}

TEST_F(CMainMenuTest, TheSoftwareRendererTakesAtMost640x480) {
    game_.game_pixx = 800;
    game_.game_pixy = 600;
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(game_.game_pixx, 640);
    EXPECT_EQ(game_.game_pixy, 480);
}

TEST_F(CMainMenuTest, Direct3DKeepsTheGameResolution) {
    special_.setUseDirect3D(true);
    game_.game_pixx = 800;
    game_.game_pixy = 600;
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(game_.game_pixx, 800);
    EXPECT_EQ(game_.game_pixy, 600);
}

// Each is pressed down to with one press a frame, then chosen.
class CMainMenuChoiceTest : public CMainMenuTest,
                            public ::testing::WithParamInterface<std::pair<int, std::string>> {};

TEST_P(CMainMenuChoiceTest, AScreenNotPortedYetQuits) {
    const int downs = GetParam().first;
    on_frame_ = [&](int frame) {
        if (frame <= downs) {
            press(EInputCodeType::DIK_DOWN);
        } else {
            press(EInputCodeType::DIK_RETURN);
        }
    };
    EXPECT_THAT([this] { static_cast<void>(menu_.showMainGameMenu()); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq(GetParam().second + " is not ported yet")));
}

INSTANTIATE_TEST_SUITE_P(StartOptionsAndLoad, CMainMenuChoiceTest,
                         ::testing::Values(std::pair{0, std::string("CGame::showChapterSelect")},
                                           std::pair{1, std::string("CMenu::showOptionsScreen")},
                                           std::pair{2, std::string("CGame::loadGame")}));

} // namespace
} // namespace nocturne::core
