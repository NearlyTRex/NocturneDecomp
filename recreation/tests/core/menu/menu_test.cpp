#include "core/menu/menu.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::NiceMock;

TEST(CoreMenuFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&calibrateGamepad), int (*)()>);
    static_assert(std::is_same_v<decltype(&showCalibrationTest), void (*)(const SMenuOwners &)>);
    static_assert(std::is_same_v<decltype(&showOptionsScreen), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&showMainGameMenu), int (*)()>);
    static_assert(std::is_same_v<decltype(&getKeyDisplayName), char *(*)(engine::EInputCodeType)>);
}

constexpr int kWidth = 640;
constexpr int kHeight = 480;
// The text colour, index 0xf8, as the screen's table draws it.
constexpr std::uint32_t kText = 0xf8f8f8;
// Palette entry 1 of the brightness image.
constexpr std::uint32_t kImage = 0x112233;
// The font's only glyph, 'X', is a pixel wide and two tall.
constexpr int kLineHeight = 2;

// The calibration screens on a 640x480 screen, with every message translated to a run of X's:
// step n to n of them, the prompt to one and the title to seven.
class CShowCalibrationTest : public engine::CPodFixture {
protected:
    CShowCalibrationTest() {
        const engine::SFontSheet sheet = engine::makeFontSheet({{"#", "#"}}, kLineHeight);
        givenFile("art\\menu.raw", sheet.pixels);
        font_.loadNewBitmap("menu.raw", sheet.width, sheet.height, 'X', 'X', 0);
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
    }

    // Where text of that many X's starts, centred on the image.
    [[nodiscard]] int centredLeft(int count) const {
        return (kWidth / 2) - (font_.getTextWidth(std::string(count, 'X')) / 2);
    }

    // The first text pixel along row y.
    [[nodiscard]] int firstTextPixel(int y) const {
        for (int x = 0; x < kWidth; ++x) {
            if (screen_.pixel(x, y) == kText) {
                return x;
            }
        }
        return -1;
    }

    engine::CMemoryScreen screen_{kWidth, kHeight, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    NiceMock<platform::MockRenderer> renderer_;
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, three_d_, current_texture_};
    engine::CFontColors colors_;
    engine::CBitFont font_{dosio_, screen_, two_d_, three_d_, colors_};
    support::CNewMsg messages_{dosio_};
    SMenuOwners owners_{dosio_, screen_, special_, two_d_, raw_input_, font_, messages_};
};

TEST_F(CShowCalibrationTest, ShowsEachStepWithThePromptOverTheImageUntilAKey) {
    std::vector<int> prompt_lefts;
    EXPECT_CALL(raw_input_, getNextKeypress(_))
        .Times(5)
        .WillRepeatedly([&](engine::IScreenDevice &) {
            EXPECT_EQ(screen_.pixel(kWidth - 1, kHeight / 2), kImage);
            EXPECT_EQ(firstTextPixel(2 * kLineHeight), centredLeft(7));
            prompt_lefts.push_back(firstTextPixel(kHeight - (3 * kLineHeight)));
            return 'a';
        });
    showCalibrationTest(owners_);
    EXPECT_EQ(prompt_lefts, (std::vector<int>{centredLeft(2), centredLeft(3), centredLeft(4),
                                              centredLeft(5), centredLeft(6)}));
    EXPECT_EQ(screen_.swaps, 5);
}

TEST_F(CShowCalibrationTest, InputIsClearedBeforeEachKeyAndAtTheEnd) {
    EXPECT_CALL(raw_input_, clearInput()).Times(6);
    showCalibrationTest(owners_);
}

} // namespace
} // namespace nocturne::core
