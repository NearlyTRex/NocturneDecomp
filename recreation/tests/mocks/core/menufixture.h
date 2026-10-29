#pragma once

#include "core/dfont/dfont.h"
#include "core/inivar/inivar.h"
#include "core/menu/menu.h"
#include "core/sound/sound.h"
#include "engine/console/console.h"
#include "engine/font/font.h"
#include "engine/ini/ini.h"
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
#include "tests/mocks/platform/mockdisplay.h"
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
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// The menus over the moon fixture, the main menu's music on disk and the sound output running.
// Each test presses keys as a frame is shown, for the next to read; past a limit of frames it
// presses Cancel and fails.
class CMenuFixture : public CMoonFixture {
protected:
    static constexpr int kFrameLimit = 20;
    static constexpr std::string_view kIniFile = ".\\system\\nocturne.ini";

    CMenuFixture() {
        using ::testing::Return;
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
                ADD_FAILURE() << "the menu didn't leave";
                press(engine::EInputCodeType::DIK_ESCAPE);
            } else if (on_frame_) {
                on_frame_(frames_);
            }
        });
        ON_CALL(screen_, getColorTable32())
            .WillByDefault(Return(std::span<const std::uint32_t, 256>(color_table_)));
        ON_CALL(audio_device_, open).WillByDefault(Return(true));
        sound_main_.initializeSoundDevice();
        ON_CALL(file_system_, readFile(kIniFile)).WillByDefault([this](std::string_view) {
            return std::optional(ini_text_);
        });
        ON_CALL(file_system_, writeFile(kIniFile, ::testing::_))
            .WillByDefault([this](std::string_view, std::string_view text) {
                ini_text_ = text;
                return true;
            });
    }

    void press(engine::EInputCodeType code) {
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
    ::testing::NiceMock<platform::MockClock> wall_clock_;
    ::testing::NiceMock<platform::MockClipboard> clipboard_;
    ::testing::NiceMock<platform::MockDisplay> display_;
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
    ::testing::NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    engine::CMenuInput menu_input_{keys_};
    ::testing::NiceMock<platform::MockAudioDevice> audio_device_;
    engine::CConsole console_{file_system_, 80, 50, 0, 0};
    sound::CSndMain sound_main_{dosio_, file_system_, audio_device_, console_,
                                [] { return std::tm{}; }};
    engine::CPod pod_{file_system_, dosio_};
    CSound sound_{sound_main_, pod_, file_system_};
    // What nocturne.ini holds, and what Options writes to it.
    std::string ini_text_ = "[Graphics]\r\n[Sound]\r\n[Control]\r\n[Debug]\r\n";
    engine::CIni ini_{file_system_};
    SIniDataOwners ini_owners_{.game = game_,
                               .sound_main = sound_main_,
                               .console = console_,
                               .special = special_,
                               .display = display_,
                               .fonts = fonts_};
    SMenuOwners menu_owners_{.dosio = dosio_,
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
                             .display = display_,
                             .editor_tools = editor_tools_,
                             .ini = ini_,
                             .ini_owners = ini_owners_,
                             .build_version = "X"};
    CMenu menu_{menu_owners_};
};

} // namespace nocturne::core
