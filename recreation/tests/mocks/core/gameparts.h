#pragma once

#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/dosio/dosio.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/menuinput.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "shape/edittool/editortools.h"
#include "sound/sndmain/sndmain.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"
#include "tests/mocks/platform/mockaudiodevice.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>

#include <ctime>

namespace nocturne::core {

// A CGame timed by the given clock, for tests that only need one to exist: what it draws and
// plays its own screens with is mocks, reading the files the test gives, or none.
class CGameParts {
public:
    explicit CGameParts(engine::IGameClock &clock) : CGameParts(clock, own_dosio_) {}
    CGameParts(engine::IGameClock &clock, const engine::CDosIo &dosio)
        : clock_(clock), dosio_(dosio) {}

    CGame &getGame() {
        return game_;
    }

    [[nodiscard]] const engine::CDosIo &getDosIo() const {
        return dosio_;
    }

    // The screen the game sets its resolution on.
    ::testing::NiceMock<engine::MockScreenDevice> &getScreen() {
        return screen_;
    }

    // The renderer switch the game picks its graphics board on, and the renderer behind it.
    engine::CSpecial &getSpecial() {
        return special_;
    }

    ::testing::NiceMock<platform::MockRenderer> &getRenderer() {
        return renderer_;
    }

    // The fonts the game takes its small editor font from.
    const CDFont &getFonts() const {
        return fonts_;
    }

private:
    engine::IGameClock &clock_;
    ::testing::NiceMock<platform::MockFileSystem> file_system_;
    engine::CDosIo own_dosio_{file_system_};
    const engine::CDosIo &dosio_;
    ::testing::NiceMock<engine::MockScreenDevice> screen_;
    ::testing::NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    engine::CMenuInput menu_input_{keys_};
    ::testing::NiceMock<platform::MockClock> wall_clock_;
    ::testing::NiceMock<platform::MockClipboard> clipboard_;
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
    ::testing::NiceMock<platform::MockAudioDevice> audio_device_;
    engine::CConsole console_{file_system_, 80, 50, 0, 0};
    sound::CSndMain sound_main_{dosio_, file_system_, audio_device_, console_,
                                [] { return std::tm{}; }};
    CGame game_{{.clock = clock_,
                 .dosio = dosio_,
                 .screen = screen_,
                 .special = special_,
                 .two_d = two_d_,
                 .three_d = three_d_,
                 .menu_input = menu_input_,
                 .fonts = fonts_,
                 .sound_main = sound_main_}};
};

} // namespace nocturne::core
