#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/menuinput.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/core/menufontfiles.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockfont.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockosfontfactory.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::NiceMock;

constexpr int kWidth = 640;
constexpr int kHeight = 480;
// The stats image is one colour, palette entry 1.
constexpr std::uint32_t kImage = 0x112233U;
// The default text colour, as the font colours give it, and colour 2.
constexpr std::uint32_t kTextPixel = 0xf6f6f6U;
constexpr std::uint32_t kHeadingPixel = 0x020202U;
// The column the credits roll up, and the band between its strips.
constexpr int kColumnLeft = 414;
constexpr int kBandTop = 31;
constexpr int kBandBottom = 438;
// A quarter second a frame, the most updateDT takes: eight rows of scroll.
constexpr int kQuarterSecond = 18 * 0x4000;
constexpr int kRowsPerFrame = 8;

// The credits on a 640x480 screen, over a one-colour stats image, the menus' block fonts drawing
// them and the clock stepping a quarter second each time it is read.
class CCreditsTest : public sound::CSndMainFixture {
protected:
    CCreditsTest() {
        givenMenuFontFiles([this](const std::string &name, const std::string &contents) {
            givenFile(name, contents);
        });
        givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n");
        messages_.readMessageFile("msglist.txt");
        fonts_.initFonts();
        two_d_.setupViewportAndClipping(0, 0, kWidth - 1, kHeight - 1);
        givenFile("art\\stats.raw", std::string(std::size_t{kWidth} * kHeight, '\x01'));
        givenFile("art\\stats.act", engine::makePalette({0, 0, 0, 0x11, 0x22, 0x33}));
        ON_CALL(raw_input_, getKeyboardState()).WillByDefault([this] {
            return std::span<std::uint8_t, engine::IRawInput::kInputCodeCount>(keyboard_);
        });
        ON_CALL(game_clock_, getTime()).WillByDefault([this] {
            ++ticks_;
            if (on_tick_) {
                on_tick_(ticks_);
            }
            now_ += step_;
            return now_;
        });
        startOutput();
    }

    void givenCredits(const std::string &text) {
        givenFile("data\\credits.txt", text);
    }

    void press(EInputCodeType code) {
        keyboard_[static_cast<std::size_t>(code)] = 1;
    }

    // Cancel as the last of that many frames is drawn. The clock's first read is saveClockTime's,
    // and each frame after the first is drawn after the read before it.
    void cancelAfterFrames(int frames) {
        on_tick_ = [this, frames](int tick) {
            if (tick == frames) {
                press(EInputCodeType::DIK_ESCAPE);
            }
        };
    }

    // The first row of the column where the predicate holds for a pixel, or -1.
    [[nodiscard]] int firstRowWhere(const std::function<bool(std::uint32_t)> &is_wanted) const {
        for (int y = 0; y < kHeight; ++y) {
            for (int x = kColumnLeft; x < kWidth; ++x) {
                if (is_wanted(screen_.pixel(x, y))) {
                    return y;
                }
            }
        }
        return -1;
    }

    [[nodiscard]] int firstTextRow() const {
        return firstRowWhere([](std::uint32_t pixel) { return pixel == kTextPixel; });
    }

    [[nodiscard]] int firstHeadingRow() const {
        return firstRowWhere([](std::uint32_t pixel) { return pixel == kHeadingPixel; });
    }

    // Where the top line is once that many frames have been drawn.
    [[nodiscard]] static int topAfterFrames(int frames) {
        return kHeight - ((frames - 1) * kRowsPerFrame);
    }

    void givenMusic(int sample_count) {
        givenSound("faded-remix.mp3", sound::makeConstantWav(sample_count, 0));
        givenSound("faded-remix.sfx", std::format("length = {}\n", sample_count));
    }

    // Where the letters of a line drawn at y first show.
    [[nodiscard]] int letterRow(int y) const {
        return y + fonts_.getThemeFont()->getCharYOffset('X');
    }

    [[nodiscard]] int lineHeight() const {
        return fonts_.getThemeFont()->getCharHeight('X');
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
    engine::CMenuInput menu_input_{keys_};
    NiceMock<engine::MockGameClock> game_clock_;
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
    CGame game_{{.clock = game_clock_,
                 .dosio = dosio_,
                 .screen = screen_,
                 .special = special_,
                 .two_d = two_d_,
                 .three_d = three_d_,
                 .menu_input = menu_input_,
                 .fonts = fonts_,
                 .sound_main = sound_}};
    int now_ = 0;
    int step_ = kQuarterSecond;
    int ticks_ = 0;
    std::function<void(int)> on_tick_;
};

TEST_F(CCreditsTest, WithoutTheCreditsFileNothingRolls) {
    EXPECT_CALL(raw_input_, clearInput()).Times(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.swaps, 0);
}

// From the foot of the image, eight rows a frame; a line shows once it is in the band.
TEST_F(CCreditsTest, TheCreditsRiseThirtyTwoRowsASecond) {
    givenCredits("XX\r\nend\r\n");
    constexpr int kFrames = 12;
    std::vector<int> rows;
    on_tick_ = [&](int tick) {
        if (tick > 1) {
            rows.push_back(firstTextRow());
        }
        if (tick == kFrames) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    std::vector<int> expected;
    for (int frame = 1; frame < kFrames; ++frame) {
        const int row = letterRow(topAfterFrames(frame));
        expected.push_back(row >= kBandTop && row <= kBandBottom ? row : -1);
    }
    EXPECT_EQ(rows, expected);
    EXPECT_EQ(screen_.swaps, kFrames);
}

// Each line a line below the last; nothing past "end" shows.
TEST_F(CCreditsTest, LinesFollowEachOtherUntilEnd) {
    givenCredits("XX\nXX\nend\nXX\n");
    constexpr int kFrames = 20;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const int top = topAfterFrames(kFrames);
    EXPECT_EQ(firstTextRow(), letterRow(top));
    const auto lineAt = [this](int y) {
        for (int x = kColumnLeft; x < kWidth; ++x) {
            if (screen_.pixel(x, letterRow(y)) != kImage && screen_.pixel(x, letterRow(y)) != 0) {
                return true;
            }
        }
        return false;
    };
    EXPECT_TRUE(lineAt(top + lineHeight()));
    EXPECT_FALSE(lineAt(top + (2 * lineHeight())));
}

// Lines above the image are skipped, and those after them keep their places.
TEST_F(CCreditsTest, LinesPastTheTopLeaveTheRestInPlace) {
    std::string credits;
    for (int i = 0; i < 40; ++i) {
        credits += "XX\n";
    }
    givenCredits(credits);
    constexpr int kFrames = 70;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const int top = topAfterFrames(kFrames);
    ASSERT_LT(top, 0);
    int first_in_band = top;
    while (letterRow(first_in_band) < kBandTop) {
        first_in_band += lineHeight();
    }
    EXPECT_EQ(firstTextRow(), letterRow(first_in_band));
}

TEST_F(CCreditsTest, BlackStripsCoverTheColumnsTopAndBottom) {
    givenCredits("end\n");
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(kColumnLeft, 0), 0U);
    EXPECT_EQ(screen_.pixel(kWidth - 1, kBandTop - 1), 0U);
    EXPECT_EQ(screen_.pixel(kColumnLeft, kBandTop), kImage);
    EXPECT_EQ(screen_.pixel(kColumnLeft, kBandBottom), kImage);
    EXPECT_EQ(screen_.pixel(kColumnLeft, kBandBottom + 1), 0U);
    EXPECT_EQ(screen_.pixel(kWidth - 1, kHeight - 1), 0U);
    EXPECT_EQ(screen_.pixel(kColumnLeft - 1, 0), kImage);
}

// A backslash and the character after it are dropped; "\b" makes the line a heading.
TEST_F(CCreditsTest, MarkedLinesDropTheirMarkAndBIsAHeading) {
    givenCredits("\\bXX\n\\xXX\n\\\n");
    constexpr int kFrames = 20;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const int top = topAfterFrames(kFrames);
    EXPECT_EQ(firstHeadingRow(), letterRow(top));
    EXPECT_EQ(firstTextRow(), letterRow(top + lineHeight()));
}

// Credits are drawn from a quarter second's scroll a frame, so a clock that stands still never
// moves them.
TEST_F(CCreditsTest, AStillClockLeavesTheCreditsWhereTheyAre) {
    givenCredits("XX\nend\n");
    step_ = 0;
    cancelAfterFrames(3);
    game_.rollCredits();
    EXPECT_EQ(screen_.swaps, 3);
    EXPECT_EQ(firstTextRow(), -1);
}

TEST_F(CCreditsTest, TheCreditsMusicPlaysWhileTheyRoll) {
    givenCredits("end\n");
    givenMusic(100000);
    std::vector<int> playing;
    on_tick_ = [&](int tick) {
        playing.push_back(sound_.countActiveSfx());
        if (tick == 3) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_EQ(playing, (std::vector<int>{1, 1, 1}));
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

// The music's end is seen when the next frame is drawn, which ends the credits unshown.
TEST_F(CCreditsTest, TheCreditsEndWithTheirMusic) {
    givenCredits("end\n");
    givenMusic(100);
    on_tick_ = [&](int tick) {
        if (tick > 1) {
            static_cast<void>(mix(1000));
        }
        if (tick > 5) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_EQ(screen_.swaps, 1);
}

// The first frame is shown with the music playing; after it, the credits never move.
TEST_F(CCreditsTest, TheMusicsEndIsOnlySeenOnceTheCreditsMove) {
    givenCredits("end\n");
    givenMusic(100);
    step_ = 0;
    on_tick_ = [&](int tick) {
        if (tick > 1) {
            static_cast<void>(mix(1000));
        }
        if (tick == 4) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_EQ(screen_.swaps, 4);
}

TEST_F(CCreditsTest, WithTheMusicChannelOffTheyRollSilentlyUntilCancel) {
    givenCredits("end\n");
    givenMusic(100);
    sound_.enableSfxChannel(CSound::kMusicChannel, false);
    std::vector<int> playing;
    on_tick_ = [&](int tick) {
        playing.push_back(sound_.countActiveSfx());
        if (tick == 3) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_EQ(playing, (std::vector<int>{0, 0, 0}));
    EXPECT_EQ(screen_.swaps, 3);
}

TEST_F(CCreditsTest, TheInputIsClearedAtTheStartWithTheMusicAndAtTheEnd) {
    givenCredits("end\n");
    cancelAfterFrames(1);
    EXPECT_CALL(raw_input_, clearInput()).Times(3);
    game_.rollCredits();
}

TEST_F(CCreditsTest, TheSheetDrawsTheCreditsAndTheOsFontIsHandedBackAfter) {
    givenCredits("XX\nend\n");
    NiceMock<engine::MockFont> os_font;
    fonts_.getThemeFont()->setWinFont(os_font);
    EXPECT_CALL(os_font, drawText).Times(0);
    cancelAfterFrames(20);
    game_.rollCredits();
    EXPECT_NE(firstTextRow(), -1);
    EXPECT_EQ(fonts_.getThemeFont()->releaseWinFont(), &os_font);
}

TEST_F(CCreditsTest, WithoutAnOsFontTheSheetKeepsDrawing) {
    givenCredits("end\n");
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(fonts_.getThemeFont()->releaseWinFont(), nullptr);
}

} // namespace
} // namespace nocturne::core
