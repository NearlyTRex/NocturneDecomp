#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"
#include "core/xform/xform.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/menuinput.h"
#include "engine/pod/pod.h"
#include "engine/prim/prim.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/texture/texture.h"
#include "engine/zraster/zraster.h"
#include "platform/rendervertex.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/menufontfiles.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockosfont.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/sound/sndmainfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;

TEST(CMenu, PublicInterface) {
    static_assert(std::is_constructible_v<CMenu, const SMenuOwners &>);
    static_assert(std::is_same_v<decltype(&CMenu::calibrateGamepad), int (CMenu::*)()>);
    static_assert(std::is_same_v<decltype(&CMenu::showCalibrationTest), void (CMenu::*)()>);
    static_assert(std::is_same_v<decltype(&CMenu::showOptionsScreen), void (CMenu::*)(int)>);
    static_assert(std::is_same_v<decltype(&CMenu::showMainGameMenu), int (CMenu::*)()>);
    static_assert(std::is_same_v<decltype(&CMenu::getKeyDisplayName),
                                 char *(CMenu::*)(engine::EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CMenu::renderMenuAndGetChoice),
                                 int (CMenu::*)(std::span<const std::string>, int &, int,
                                                std::optional<std::string_view>)>);
    static_assert(std::is_same_v<decltype(&CMenu::getMoon), CMoon &(CMenu::*)()>);
    static_assert(std::is_same_v<decltype(&CMenu::getMenuInputHappened), bool (CMenu::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CMenu::getMenuLeftRightPressed), bool (CMenu::*)() const>);
}

constexpr int kWidth = 640;
constexpr int kHeight = 480;
// Palette entry 1 of the brightness image.
constexpr std::uint32_t kImage = 0x112233;

// The menus on a 640x480 screen, their fonts from sheets of block glyphs '!' to 0x99, with every
// message translated to a run of X's: calibration step n to n of them, the prompt to one and the
// title to seven.
class CMenuTest : public sound::CSndMainFixture {
protected:
    CMenuTest() {
        givenMenuFontFiles([this](const std::string &name, const std::string &contents) {
            givenFile(name, contents);
        });
        two_d_.setupViewportAndClipping(0, 0, kWidth - 1, kHeight - 1);
        givenFile("art\\brightness.raw", std::string(std::size_t{kWidth} * kHeight, '\x01'));
        givenFile("art\\brightness.act", engine::makePalette({0, 0, 0, 0x11, 0x22, 0x33}));
        givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n"
                                 "\"  Press any key to continue.\", \"X\"\n"
                                 "\"1. Turn off all the lights in your room.\", \"X\"\n"
                                 "\"2. Turn your brightness up, so that you see 3 bars on the "
                                 "left side of the screen.\", \"XX\"\n"
                                 "\"3. Turn down the brightness, so that the left 2 bars become "
                                 "the same color.\", \"XXX\"\n"
                                 "\"4. Turn your contrast all the way up.\", \"XXXX\"\n"
                                 "\"You're done with calibration.\", \"XXXXX\"\n"
                                 "\"Monitor calibration\", \"XXXXXXX\"\n");
        messages_.readMessageFile("msglist.txt");
        fonts_.initFonts();
        ON_CALL(raw_input_, getKeyboardState())
            .WillByDefault(
                Return(std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_)));
    }

    [[nodiscard]] engine::CBitFont &smallFont() const {
        return *fonts_.getSmallEditorFont();
    }

    // The row a line of letters drawn at y shows on: initFonts drops printable characters a few
    // rows, the same in both fonts.
    [[nodiscard]] int letterRow(int y) const {
        return y + smallFont().getCharYOffset('X');
    }

    // The spacing of lines, which counts the drop; the same in both fonts.
    [[nodiscard]] int lineHeight() const {
        return smallFont().getCharHeight('X');
    }

    // Where text of that many X's starts, centred on the image.
    [[nodiscard]] int centredLeft(int count) const {
        return (kWidth / 2) - (smallFont().getTextWidth(std::string(count, 'X')) / 2);
    }

    // The first pixel along row y that the text covers rather than the image.
    [[nodiscard]] int firstTextPixel(int y) const {
        for (int x = 0; x < kWidth; ++x) {
            if (screen_.pixel(x, y) != kImage) {
                return x;
            }
        }
        return -1;
    }

    // Whether anything is drawn at the pixel.
    [[nodiscard]] bool lit(int x, int y) const {
        return screen_.pixel(x, y) != 0;
    }

    // The first pixel drawn along row y, or -1.
    [[nodiscard]] int firstLit(int y) const {
        for (int x = 0; x < kWidth; ++x) {
            if (lit(x, y)) {
                return x;
            }
        }
        return -1;
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    int choose(const std::vector<std::string> &items, int &selected,
               std::optional<std::string_view> title = std::nullopt) {
        return menu_.renderMenuAndGetChoice(items, selected, 100, title);
    }

    std::array<std::uint8_t, engine::IRawInput::kInputCodeCount> keyboard_{};
    engine::CMemoryScreen screen_{kWidth, kHeight, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    NiceMock<platform::MockRenderer> renderer_;
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    NiceMock<platform::MockClock> clock_;
    NiceMock<platform::MockClipboard> clipboard_;
    shape::CEditorTools editor_tools_{{.two_d = two_d_,
                                       .matrix = matrix_,
                                       .three_d = three_d_,
                                       .screen = screen_,
                                       .special = special_,
                                       .keys = keys_,
                                       .raw_input = raw_input_,
                                       .game_clock = game_clock_,
                                       .clock = clock_,
                                       .clipboard = clipboard_}};
    engine::CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_, screen_, two_d_, three_d_, colors_, os_fonts_, messages_, editor_tools_};
    NiceMock<engine::MockGameClock> game_clock_;
    CGame game_{game_clock_};
    engine::CTexture texture_{{.dosio = dosio_,
                               .two_d = two_d_,
                               .screen = screen_,
                               .special = special_,
                               .current_texture = current_texture_}};
    std::vector<platform::SRenderVertex> vertex_buffer_ = std::vector<platform::SRenderVertex>(8);
    engine::CPrim prim_{special_, two_d_, three_d_, current_texture_};
    engine::CZRaster zraster_{special_, two_d_, three_d_, current_texture_};
    engine::CDemonRenderer demon_renderer_{
        matrix_,          two_d_,   three_d_, vertex_buffer_,           special_, prim_, zraster_,
        current_texture_, texture_, screen_,  &transformAndClipGeometry};
    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    common::CWatcomRandom crt_random_;
    CActor actor_{game_, crt_random_};
    engine::CMenuInput menu_input_{keys_};
    engine::CPod pod_{file_system_, dosio_};
    CSound game_sound_{sound_, pod_, file_system_};
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
                 .textures = texture_,
                 .sound = game_sound_,
                 .sound_main = sound_,
                 .build_version = "X"}};
};

TEST_F(CMenuTest, CalibrationShowsEachStepWithThePromptOverTheImageUntilAKey) {
    std::vector<int> prompt_lefts;
    EXPECT_CALL(raw_input_, getNextKeypress(_))
        .Times(5)
        .WillRepeatedly([&](engine::IScreenDevice &) {
            EXPECT_EQ(screen_.pixel(kWidth - 1, kHeight / 2), kImage);
            EXPECT_EQ(firstTextPixel(letterRow(2 * lineHeight())), centredLeft(7));
            prompt_lefts.push_back(firstTextPixel(letterRow(kHeight - (3 * lineHeight()))));
            return 'a';
        });
    menu_.showCalibrationTest();
    EXPECT_EQ(prompt_lefts, (std::vector<int>{centredLeft(2), centredLeft(3), centredLeft(4),
                                              centredLeft(5), centredLeft(6)}));
    EXPECT_EQ(screen_.swaps, 5);
}

TEST_F(CMenuTest, CalibrationClearsInputBeforeEachKeyAndAtTheEnd) {
    EXPECT_CALL(raw_input_, clearInput()).Times(6);
    menu_.showCalibrationTest();
}

TEST_F(CMenuTest, WithoutAnActionNothingIsChosen) {
    int selected = 1;
    EXPECT_EQ(choose({"A", "B", "C"}, selected), -1);
    EXPECT_EQ(selected, 1);
    EXPECT_FALSE(menu_.getMenuInputHappened());
}

TEST_F(CMenuTest, ConfirmChoosesTheSelectedItem) {
    int selected = 1;
    press(EInputCodeType::DIK_RETURN);
    EXPECT_EQ(choose({"A", "B", "C"}, selected), 1);
    EXPECT_EQ(keyboard_[static_cast<std::size_t>(EInputCodeType::DIK_RETURN)], 0);
}

TEST_F(CMenuTest, UpMovesTheSelectionAndWrapsAtTheTop) {
    int selected = 1;
    press(EInputCodeType::DIK_NUMPAD8);
    EXPECT_EQ(choose({"A", "B", "C"}, selected), -1);
    EXPECT_EQ(selected, 0);
    EXPECT_TRUE(menu_.getMenuInputHappened());
    press(EInputCodeType::PAD_DPAD_UP);
    choose({"A", "B", "C"}, selected);
    EXPECT_EQ(selected, 2);
}

TEST_F(CMenuTest, DownMovesTheSelectionAndWrapsAtTheBottom) {
    int selected = 1;
    press(EInputCodeType::DIK_NUMPAD2);
    choose({"A", "B", "C"}, selected);
    EXPECT_EQ(selected, 2);
    press(EInputCodeType::DIK_NUMPAD2);
    choose({"A", "B", "C"}, selected);
    EXPECT_EQ(selected, 0);
    EXPECT_TRUE(menu_.getMenuInputHappened());
}

TEST_F(CMenuTest, LeftOnASettingChoosesItAndSaysSo) {
    int selected = 0;
    press(EInputCodeType::DIK_NUMPAD4);
    EXPECT_EQ(choose({"Sound: on", "Back"}, selected), 0);
    EXPECT_TRUE(menu_.getMenuLeftRightPressed());
}

TEST_F(CMenuTest, RightOnASettingChoosesItAsRight) {
    int selected = 0;
    press(EInputCodeType::DIK_NUMPAD4);
    choose({"Sound: on", "Back"}, selected);
    press(EInputCodeType::DIK_NUMPAD6);
    EXPECT_EQ(choose({"Sound: on", "Back"}, selected), 0);
    EXPECT_FALSE(menu_.getMenuLeftRightPressed());
}

TEST_F(CMenuTest, ConfirmChoosesASettingTooAndClearsTheLeftFlag) {
    int selected = 0;
    press(EInputCodeType::DIK_NUMPAD4);
    choose({"Sound: on", "Back"}, selected);
    press(EInputCodeType::DIK_RETURN);
    EXPECT_EQ(choose({"Sound: on", "Back"}, selected), 0);
    EXPECT_FALSE(menu_.getMenuLeftRightPressed());
}

// Left and right are left for whatever reads them next, and the flag keeps its last value.
TEST_F(CMenuTest, LeftAndRightPassOverAnItemThatIsNoSetting) {
    int selected = 0;
    press(EInputCodeType::DIK_NUMPAD4);
    choose({"Sound: on", "Back"}, selected);
    selected = 1;
    press(EInputCodeType::DIK_NUMPAD4);
    EXPECT_EQ(choose({"Sound: on", "Back"}, selected), -1);
    EXPECT_EQ(keyboard_[static_cast<std::size_t>(EInputCodeType::DIK_NUMPAD4)], 1);
    EXPECT_TRUE(menu_.getMenuLeftRightPressed());
}

TEST_F(CMenuTest, TheSettingIsTheItemSelectedBeforeTheSelectionMoves) {
    int selected = 0;
    press(EInputCodeType::DIK_NUMPAD2);
    press(EInputCodeType::DIK_NUMPAD6);
    EXPECT_EQ(choose({"Back", "Sound: on"}, selected), -1);
    EXPECT_EQ(selected, 1);
}

// The selected item is the last, below the rows checked, so its glow doesn't shift them.
TEST_F(CMenuTest, ATitleIsDrawnWithTheItemsSingleSpacedTwoLinesUnder) {
    int selected = 2;
    choose({"XX", "XX", "XX"}, selected, "XXX");
    EXPECT_EQ(firstLit(letterRow(100)), 160);
    EXPECT_EQ(firstLit(letterRow(100 + lineHeight())), -1);
    EXPECT_EQ(firstLit(letterRow(100 + (2 * lineHeight()))), 160);
    EXPECT_EQ(firstLit(letterRow(100 + (3 * lineHeight()))), 160);
}

TEST_F(CMenuTest, WithoutATitleTheItemsAreDoubleSpaced) {
    int selected = 2;
    choose({"XX", "XX", "XX"}, selected);
    EXPECT_EQ(firstLit(letterRow(100)), 160);
    EXPECT_EQ(firstLit(letterRow(100 + lineHeight())), -1);
    EXPECT_EQ(firstLit(letterRow(100 + (2 * lineHeight()))), 160);
}

// With the CRT stream from its seed, the fifth faint copy lands two pixels up and two left.
TEST_F(CMenuTest, TheSelectedItemGlowsInTheTitleAnimationsFirstHalf) {
    int selected = 0;
    choose({"XX"}, selected);
    EXPECT_TRUE(lit(158, letterRow(98)));
}

TEST_F(CMenuTest, InTheSecondHalfTheSelectedItemIsSteadyAndBrighter) {
    menu_.getMoon().update(2.5F);
    int selected = 0;
    choose({"XX", "XX"}, selected);
    EXPECT_FALSE(lit(158, letterRow(98)));
    EXPECT_GT(screen_.pixel(160, letterRow(100)) & 0xffU,
              screen_.pixel(160, letterRow(100 + (2 * lineHeight()))) & 0xffU);
}

// The trademark sign is past the printable range the fonts drop.
TEST_F(CMenuTest, TheFooterCarriesTheCopyrightTheTrademarkAndTheBuild) {
    int selected = 0;
    choose({"XX"}, selected);
    constexpr std::string_view copyright = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
    const int bottom = kHeight - 1 - smallFont().getTextHeight(copyright);
    EXPECT_EQ(firstLit(letterRow(bottom)), 4);
    EXPECT_TRUE(lit(518, 99));
    EXPECT_TRUE(lit(kWidth - 1 - smallFont().getTextWidth(copyright), letterRow(bottom)));
}

// The OS fonts measure any text as 30 by 9 here; only their copyright carries the (c).
TEST_F(CMenuTest, WithOsTextTheCopyrightCarriesTheCopyrightSign) {
    std::vector<std::string> drawn;
    ON_CALL(os_fonts_, createOsFont(_, _)).WillByDefault([&drawn](std::string_view, int) {
        auto font = std::make_unique<NiceMock<platform::MockOsFont>>();
        ON_CALL(*font, measureText)
            .WillByDefault(Return(common::SExtent{.width = 30, .height = 9}));
        ON_CALL(*font, renderText).WillByDefault([&drawn](std::string_view text) {
            drawn.emplace_back(text);
            return platform::STextMask{};
        });
        return font;
    });
    fonts_.setOsFontChoice(EOsFontChoice::System);
    fonts_.initFonts();
    int selected = 0;
    choose({"XX"}, selected);
    EXPECT_THAT(drawn, ::testing::Contains(std::string(
                           "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.")));
}

} // namespace
} // namespace nocturne::core
