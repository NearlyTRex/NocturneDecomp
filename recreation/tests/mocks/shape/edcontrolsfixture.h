#pragma once

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>

namespace nocturne::shape {

// The controls on a 128x96 screen, unless the test asks for another size, whose colour index i
// draws as grey i, with a mouse and a game clock the test moves, and an editor font whose only
// glyph is a two-by-two '!'.
class CEdControlsFixture : public engine::CPodFixture {
protected:
    static constexpr int kScreenWidth = 128;
    static constexpr int kScreenHeight = 96;
    static constexpr std::uint32_t kBackground = 0x123456;
    static constexpr std::uint32_t kHighlight = 0xffffff;
    static constexpr std::uint32_t kShade = 0xf8f8f8;
    static constexpr std::uint32_t kFace = 0x070707;
    static constexpr std::uint32_t kMark = 0x000000;

    CEdControlsFixture() : CEdControlsFixture(kScreenWidth, kScreenHeight) {}

    CEdControlsFixture(int screen_width, int screen_height)
        : screen_(screen_width, screen_height, 32) {
        const engine::SFontSheet sheet = engine::makeFontSheet({{"##", "##"}}, 2);
        givenFile("art\\editor.raw", sheet.pixels);
        font_.openFontFile("editor.raw", sheet.width, sheet.height, 0);
        font_.setFontReady(1);
        editor_tools_.setEditorFont(&font_);
        two_d_.setupViewportAndClipping(0, 0, screen_width - 1, screen_height - 1);
        screen_.fill(kBackground);
        ON_CALL(raw_input_, getMouseX()).WillByDefault([this] { return mouse_x_; });
        ON_CALL(raw_input_, getMouseY()).WillByDefault([this] { return mouse_y_; });
        ON_CALL(raw_input_, getMouseButtonFlags()).WillByDefault([this] { return buttons_; });
        ON_CALL(raw_input_, releaseLeftMouseButton()).WillByDefault([this] { buttons_ &= ~1; });
        ON_CALL(game_clock_, getTime()).WillByDefault([this] { return time_; });
    }

    // The mouse at x, y with the left button held or not.
    void mouseAt(int x, int y, bool held) {
        mouse_x_ = x;
        mouse_y_ = y;
        buttons_ = held ? 1 : 0;
    }

    int mouse_x_ = 0;
    int mouse_y_ = 0;
    int buttons_ = 0;
    int time_ = 0;
    engine::CMemoryScreen screen_;
    ::testing::NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    ::testing::NiceMock<platform::MockRenderer> renderer_;
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    engine::CFontColors colors_;
    engine::CBitFont font_{dosio_, screen_, two_d_, three_d_, colors_};
    ::testing::NiceMock<platform::MockClock> clock_;
    ::testing::NiceMock<engine::MockGameClock> game_clock_;
    ::testing::NiceMock<platform::MockClipboard> clipboard_;
    CEditorTools editor_tools_{{.two_d = two_d_,
                                .matrix = matrix_,
                                .three_d = three_d_,
                                .screen = screen_,
                                .special = special_,
                                .keys = keys_,
                                .raw_input = raw_input_,
                                .game_clock = game_clock_,
                                .clock = clock_,
                                .clipboard = clipboard_}};
    CEdControls controls_{SEdControlsOwners{.two_d = two_d_,
                                            .screen = screen_,
                                            .raw_input = raw_input_,
                                            .clock = game_clock_,
                                            .editor_tools = editor_tools_}};
};

} // namespace nocturne::shape
