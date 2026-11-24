#include "common/error/fatalerror.h"
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
#include "engine/package/gamecontent.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/core/menufontfiles.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/gamepadinputparts.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockfont.h"
#include "tests/mocks/engine/mockgameclock.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/shippedgamecontent.h"
#include "tests/mocks/platform/mockclipboard.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockdisplay.h"
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
#include <set>
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
// A strip of colour 1.
constexpr std::uint32_t kStripPixel = 0x010101U;
// The column the credits roll up, and the band between its strips.
constexpr int kColumnLeft = 414;
constexpr int kBandTop = 31;
constexpr int kBandBottom = 438;
// A quarter second a frame, the most updateDT takes: eight rows of scroll.
constexpr int kQuarterSecond = 18 * 0x4000;
constexpr int kRowsPerFrame = 8;

// The credits on a screen 480 lines tall unless said, over a one-colour stats image, the menus'
// block fonts drawing them and the clock stepping a quarter second each time it is read.
template <int ScreenWidth, int ScreenHeight = kHeight>
class CCreditsFixture : public sound::CSndMainFixture {
protected:
    CCreditsFixture() {
        givenMenuFontFiles([this](const std::string &name, const std::string &contents) {
            givenFile(name, contents);
        });
        givenFile("msglist.txt", "; version\n0\n; use OS fonts\n0\n; font\n\"Arial\"\n");
        messages_.readMessageFile("msglist.txt");
        fonts_.initFonts();
        two_d_.setupViewportAndClipping(0, 0, ScreenWidth - 1, ScreenHeight - 1);
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
        for (int y = 0; y < ScreenHeight; ++y) {
            for (int x = kColumnLeft; x < ScreenWidth; ++x) {
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
    engine::CMemoryScreen screen_{ScreenWidth, ScreenHeight, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    NiceMock<platform::MockRenderer> renderer_;
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    engine::SGamepadInputParts gamepad_;
    engine::CMenuInput menu_input_{keys_, gamepad_.input};
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
                                       .clipboard = clipboard_,
                                       .content = content_}};
    engine::CFontColors colors_;
    NiceMock<platform::MockOsFontFactory> os_fonts_;
    support::CNewMsg messages_{dosio_};
    CDFont fonts_{dosio_,    screen_,   two_d_,        three_d_, colors_,
                  os_fonts_, messages_, editor_tools_, content_};
    engine::SGameContent content_ = engine::getShippedGameContent();
    NiceMock<platform::MockDisplay> display_;
    CGame game_{{.clock = game_clock_,
                 .dosio = dosio_,
                 .screen = screen_,
                 .special = special_,
                 .two_d = two_d_,
                 .three_d = three_d_,
                 .menu_input = menu_input_,
                 .fonts = fonts_,
                 .sound_main = sound_,
                 .keys = keys_,
                 .raw_input = raw_input_,
                 .gamepad = gamepad_.input,
                 .content = content_,
                 .display = display_}};
    int now_ = 0;
    int step_ = kQuarterSecond;
    int ticks_ = 0;
    std::function<void(int)> on_tick_;
};

using CCreditsTest = CCreditsFixture<kWidth>;
// The front end at 16:9.
constexpr int kWideWidth = 848;
using CWideCreditsTest = CCreditsFixture<kWideWidth>;
constexpr int kFullHdWidth = 1440;
constexpr int kFullHdHeight = 1080;
using CFullHdCreditsTest = CCreditsFixture<kFullHdWidth, kFullHdHeight>;

// BW2's credits over the fixture's image.
class CFadeCreditsTest : public CCreditsTest {
protected:
    CFadeCreditsTest() {
        content_.front_end.credits = "fade_loop";
        common::required(content_.credits).fade_loop =
            common::required(engine::getShippedGameContent("blairwitch2").credits).fade_loop;
    }

    // The first row and column where something other than the image or the black about it is.
    [[nodiscard]] std::pair<int, int> firstText() const {
        for (int y = 0; y < kHeight; ++y) {
            for (int x = 0; x < kWidth; ++x) {
                const std::uint32_t pixel = screen_.pixel(x, y);
                if (pixel != kImage && pixel != 0) {
                    return {y, x};
                }
            }
        }
        return {-1, -1};
    }
};

// Thirty frames up, the line is at the fade's centre: opaque, and centred across the layout.
TEST_F(CFadeCreditsTest, ALineAtTheMiddleIsOpaqueAndCentred) {
    givenCredits("XX\nend\n");
    constexpr int kFrames = 31;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    ASSERT_EQ(topAfterFrames(kFrames), 240);
    const auto [row, column] = firstText();
    EXPECT_EQ(row, letterRow(240));
    EXPECT_EQ(column, (kWidth / 2) - (fonts_.getThemeFont()->getTextWidth("XX") / 2));
    EXPECT_EQ(screen_.pixel(column, row), kTextPixel);
}

// A marked line drops its two-character mark; "\b" makes it a heading in its own colour, and a
// mark alone leaves nothing to draw.
TEST_F(CFadeCreditsTest, MarkedLinesDropTheirMarkAndBIsAHeading) {
    constexpr int kFrames = 31;
    const auto rolled = [this](const std::string &credits) {
        givenCredits(credits);
        ticks_ = 0;
        keyboard_[static_cast<std::size_t>(EInputCodeType::DIK_ESCAPE)] = 0;
        cancelAfterFrames(kFrames);
        game_.rollCredits();
        return firstText();
    };
    const auto plain = rolled("XX\nend\n");
    const std::uint32_t plain_pixel = screen_.pixel(plain.second, plain.first);
    const auto marked = rolled("\\cXX\nend\n");
    EXPECT_EQ(marked, plain);
    EXPECT_EQ(screen_.pixel(marked.second, marked.first), plain_pixel);
    const auto heading = rolled("\\bXX\nend\n");
    EXPECT_EQ(heading, plain);
    EXPECT_NE(screen_.pixel(heading.second, heading.first), plain_pixel);
    EXPECT_EQ(rolled("\\\nend\n").first, -1);
}

// Once the first line rises above the top it isn't drawn; those under it still are.
TEST_F(CFadeCreditsTest, ALineAboveTheTopIsLeftOut) {
    std::string credits;
    for (int i = 0; i < 40; ++i) {
        credits += "XX\n";
    }
    givenCredits(credits + "end\n");
    const int frames = (kHeight / kRowsPerFrame) + 3;
    ASSERT_LT(topAfterFrames(frames), 0);
    cancelAfterFrames(frames);
    game_.rollCredits();
    EXPECT_GE(firstText().first, 0);
}

// Further from the middle, fainter.
TEST_F(CFadeCreditsTest, ALineAwayFromTheMiddleIsFainter) {
    givenCredits("XX\nend\n");
    constexpr int kFrames = 11;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const auto [row, column] = firstText();
    EXPECT_EQ(row, letterRow(topAfterFrames(kFrames)));
    EXPECT_NE(screen_.pixel(column, row), kTextPixel);
}

// Once its top passes loop_below, it comes round again from restart_y.
TEST_F(CFadeCreditsTest, TheCreditsStartOverOncePastTheirLoop) {
    common::required(common::required(content_.credits).fade_loop).loop_below = 400;
    common::required(common::required(content_.credits).fade_loop).restart_y = 450;
    givenCredits("XX\nend\n");
    cancelAfterFrames(12);
    game_.rollCredits();
    EXPECT_EQ(firstText().first, letterRow(450));
}

// The image at BW2's point, the black above and beside it.
TEST_F(CFadeCreditsTest, TheImageIsAtItsPoint) {
    givenCredits("end\n");
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(9, 100), 0U);
    EXPECT_EQ(screen_.pixel(10, 7), kImage);
    EXPECT_EQ(screen_.pixel(100, 6), 0U);
}

TEST_F(CFadeCreditsTest, WithoutItsValuesTheyAreFatal) {
    common::required(content_.credits).fade_loop.reset();
    givenCredits("XX\nend\n");
    EXPECT_THAT([this] { game_.rollCredits(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the fade_loop credits' look")));
}

// BW3's credits, with no image.
class CTwoColumnCreditsTest : public CCreditsTest {
protected:
    CTwoColumnCreditsTest() {
        content_.front_end.credits = "two_column";
        content_.credits = engine::getShippedGameContent("blairwitch3").credits;
    }

    // The first lit pixel's row and column, and the last column lit on that row.
    struct SText {
        int row = -1;
        int first = -1;
        int last = -1;
    };

    [[nodiscard]] SText firstText() const {
        for (int y = 0; y < kHeight; ++y) {
            SText text;
            for (int x = 0; x < kWidth; ++x) {
                if (screen_.pixel(x, y) != 0) {
                    text.row = y;
                    text.first = text.first < 0 ? x : text.first;
                    text.last = x;
                }
            }
            if (text.row >= 0) {
                return text;
            }
        }
        return {};
    }

    // Whether anything is lit on the row from x for a few columns.
    [[nodiscard]] bool litFrom(int x, int y) const {
        for (int column = x; column < x + 4; ++column) {
            if (screen_.pixel(column, y) != 0) {
                return true;
            }
        }
        return false;
    }
};

// Between 100 and 400, as drawTextCenterInBounds centres it.
TEST_F(CTwoColumnCreditsTest, ALineIsCentredBetweenItsBounds) {
    givenCredits("XX\nend\n");
    cancelAfterFrames(11);
    game_.rollCredits();
    const SText text = firstText();
    EXPECT_EQ(text.row, letterRow(topAfterFrames(11)));
    EXPECT_EQ(text.first, (100 + 400 + 1 - fonts_.getThemeFont()->getTextWidth("XX")) / 2);
}

// "\1left\2right": the left at 100, the right at 300.
TEST_F(CTwoColumnCreditsTest, AMarkedLineIsInTwoColumns) {
    givenCredits("\\1XX\\2XX\nend\n");
    cancelAfterFrames(11);
    game_.rollCredits();
    const int row = letterRow(topAfterFrames(11));
    EXPECT_TRUE(litFrom(100, row));
    EXPECT_TRUE(litFrom(300, row));
    EXPECT_FALSE(litFrom(200, row));
}

TEST_F(CTwoColumnCreditsTest, ALineMarkedForColumnsWithoutTheSecondIsNotDrawn) {
    givenCredits("\\1XXXX\nend\n");
    cancelAfterFrames(11);
    game_.rollCredits();
    EXPECT_EQ(firstText().row, -1);
}

TEST_F(CTwoColumnCreditsTest, ALineWithNothingBeforeTheSecondColumnIsNotDrawn) {
    givenCredits("\\1\\2XX\nend\n");
    cancelAfterFrames(11);
    game_.rollCredits();
    EXPECT_EQ(firstText().row, -1);
}

// "\b" makes it a heading, in its own colour, before its columns are looked for. With no image
// there is no palette of its own, so the heading is only told from the line under it.
TEST_F(CTwoColumnCreditsTest, AHeadingCanBeInColumns) {
    givenCredits("\\b\\1XX\\2XX\n\\1XX\\2XX\nend\n");
    cancelAfterFrames(11);
    game_.rollCredits();
    const int row = letterRow(topAfterFrames(11));
    const auto firstLitIn = [this](int x, int y) {
        for (int column = x; column < x + 20; ++column) {
            if (screen_.pixel(column, y) != 0) {
                return screen_.pixel(column, y);
            }
        }
        return std::uint32_t{0};
    };
    const std::uint32_t heading = firstLitIn(300, row);
    ASSERT_NE(heading, 0U);
    EXPECT_EQ(firstLitIn(100, row), heading);
    EXPECT_NE(firstLitIn(300, row + lineHeight()), heading);
}

// The line is drawn at 0 on frame 61 and gone on 62, so the credits start again from 480 and it
// is at 424, clear of the bottom bar, on frame 70.
TEST_F(CTwoColumnCreditsTest, OnceNoneIsLeftTheyStartAgain) {
    givenCredits("XX\nend\n");
    cancelAfterFrames(70);
    game_.rollCredits();
    EXPECT_EQ(firstText().row, letterRow(424));
}

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

// At 1080 lines the layout is 2.25 times as tall, so a row of scroll is two screen rows or three.
// Each line still moves with the one above it: the gap between them never changes.
TEST_F(CFullHdCreditsTest, LinesScrollTogetherAtAScaleBetweenWholePixels) {
    givenCredits("XX\nXX\nend\n");
    // On the screen from the start, a row of scroll a frame.
    common::required(common::required(content_.credits).column_scroll).start_y = 200;
    step_ = kQuarterSecond / kRowsPerFrame;
    constexpr int kFrames = 20;
    // The column, at the screen's scale.
    constexpr int kFullHdColumnLeft = kColumnLeft * kFullHdHeight / kHeight;
    std::set<int> gaps;
    int samples = 0;
    on_tick_ = [&](int tick) {
        std::vector<int> starts;
        bool in_line = false;
        for (int y = 0; y < kFullHdHeight; ++y) {
            bool lit = false;
            for (int x = kFullHdColumnLeft; x < kFullHdWidth && !lit; ++x) {
                lit = screen_.pixel(x, y) == kTextPixel;
            }
            if (lit && !in_line) {
                starts.push_back(y);
            }
            in_line = lit;
        }
        if (starts.size() == 2) {
            gaps.insert(starts[1] - starts[0]);
            ++samples;
        }
        if (tick == kFrames) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_GT(samples, 10);
    EXPECT_EQ(gaps.size(), 1U);
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

// The image keeps to the left; the column and its strips run on over the black to the right.
TEST_F(CWideCreditsTest, TheImageKeepsToTheLeftAndTheColumnRunsOnToTheRightEdge) {
    givenCredits("end\n");
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(0, kBandTop), kImage);
    EXPECT_EQ(screen_.pixel(kWidth - 1, kBandTop), kImage);
    EXPECT_EQ(screen_.pixel(kWidth, kBandTop), 0U);
    EXPECT_EQ(screen_.pixel(kWideWidth - 1, kBandTop - 1), 0U);
    EXPECT_EQ(screen_.pixel(kWideWidth - 1, kHeight - 1), 0U);
}

// Centred, the image has black either side; the column's strips, here in colour 1 so they show,
// stop with it unless they run on to the screen's edge.
TEST_F(CWideCreditsTest, ACentredImagesColumnEndsWithItUnlessItRunsToTheEdge) {
    givenCredits("end\n");
    common::required(content_.credits).fit = {.fit = engine::EPictureFit::KeepAspect,
                                              .anchor = engine::EPictureAnchor::Centre};
    common::required(common::required(content_.credits).column_scroll).column_to_screen_edge =
        false;
    common::required(common::required(content_.credits).column_scroll).strip_colour = 1;
    constexpr int kLeft = (kWideWidth - kWidth) / 2;
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(kLeft - 1, kBandTop), 0U);
    EXPECT_EQ(screen_.pixel(kLeft, kBandTop), kImage);
    EXPECT_EQ(screen_.pixel(kLeft + kWidth - 1, 0), kStripPixel);
    EXPECT_EQ(screen_.pixel(kLeft + kWidth, 0), 0U);
}

TEST_F(CWideCreditsTest, ACentredImagesColumnCanRunOnToTheScreensEdge) {
    givenCredits("end\n");
    common::required(content_.credits).fit = {.fit = engine::EPictureFit::KeepAspect,
                                              .anchor = engine::EPictureAnchor::Centre};
    common::required(common::required(content_.credits).column_scroll).strip_colour = 1;
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(kWideWidth - 1, 0), kStripPixel);
}

// Stretched, the image fills the screen.
TEST_F(CWideCreditsTest, AStretchedImageFillsTheScreen) {
    givenCredits("end\n");
    common::required(content_.credits).fit = {.fit = engine::EPictureFit::Stretch,
                                              .anchor = engine::EPictureAnchor::Centre};
    cancelAfterFrames(1);
    game_.rollCredits();
    EXPECT_EQ(screen_.pixel(0, kBandTop), kImage);
    EXPECT_EQ(screen_.pixel(kWideWidth / 2, kBandTop), kImage);
}

// Centred between the column's left and the screen's right edge, so it starts further right.
TEST_F(CWideCreditsTest, ALineIsCentredOnTheWiderColumn) {
    givenCredits("XX\r\nend\r\n");
    constexpr int kFrames = 12;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const int row = letterRow(topAfterFrames(kFrames));
    int first = -1;
    for (int x = kColumnLeft; x < kWideWidth && first < 0; ++x) {
        if (screen_.pixel(x, row) == kTextPixel) {
            first = x;
        }
    }
    const int width = fonts_.getThemeFont()->getTextWidth("XX");
    const int text_left = ((kColumnLeft + kWideWidth - 1) / 2) - (width / 2);
    EXPECT_GE(first, text_left);
    EXPECT_LT(first, text_left + width);
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

TEST_F(CCreditsTest, CreditsWithoutMusicRollSilentlyUntilCancel) {
    givenCredits("end\n");
    givenMusic(100);
    ASSERT_TRUE(content_.credits.has_value());
    common::required(content_.credits).music.clear();
    std::vector<int> playing;
    on_tick_ = [&](int tick) {
        playing.push_back(sound_.countActiveSfx());
        if (tick == 3) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    game_.rollCredits();
    EXPECT_EQ(playing, (std::vector<int>{0, 0, 0}));
}

// The text, picture and music are the packages' choice.
TEST_F(CCreditsTest, ThePackagesNameTheCreditsFile) {
    givenCredits("XX\r\nend\r\n");
    givenFile("data\\other.txt", "end\r\n");
    ASSERT_TRUE(content_.credits.has_value());
    common::required(content_.credits).text = "other.txt";
    cancelAfterFrames(3);
    game_.rollCredits();
    EXPECT_EQ(firstTextRow(), -1);
    EXPECT_EQ(screen_.swaps, 3);
}

TEST_F(CCreditsTest, CreditsThisBuildDoesntRollAreFatal) {
    givenCredits("XX\r\nend\r\n");
    content_.front_end.credits = "no_such_style";
    EXPECT_THAT([this] { game_.rollCredits(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("The credits no_such_style isn't in this build")));
}

TEST_F(CCreditsTest, CreditsWithoutTheirColumnsLookAreFatal) {
    givenCredits("XX\r\nend\r\n");
    common::required(content_.credits).column_scroll.reset();
    EXPECT_THAT([this] { game_.rollCredits(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the column_scroll credits' look")));
}

TEST_F(CCreditsTest, TwoColumnCreditsWithoutTheirLookAreFatal) {
    givenCredits("XX\r\nend\r\n");
    content_.front_end.credits = "two_column";
    common::required(content_.credits).two_column.reset();
    EXPECT_THAT([this] { game_.rollCredits(); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("No package gives the two_column credits' look")));
}

// A game's credits stop at its own end line: Nocturne's "end" is then a line like any other.
TEST_F(CCreditsTest, TheEndLineIsTheGamesOwn) {
    givenCredits("XX\nend\nXX\nstop\nXX\n");
    common::required(common::required(content_.credits).column_scroll).end_line = "stop";
    constexpr int kFrames = 20;
    cancelAfterFrames(kFrames);
    game_.rollCredits();
    const int top = topAfterFrames(kFrames);
    const auto lineAt = [this](int y) {
        for (int x = kColumnLeft; x < kWidth; ++x) {
            if (screen_.pixel(x, letterRow(y)) != kImage && screen_.pixel(x, letterRow(y)) != 0) {
                return true;
            }
        }
        return false;
    };
    EXPECT_TRUE(lineAt(top + (2 * lineHeight())));
    EXPECT_FALSE(lineAt(top + (3 * lineHeight())));
}

TEST_F(CCreditsTest, AGameWithoutCreditsRollsNone) {
    givenCredits("XX\r\nend\r\n");
    content_.credits.reset();
    EXPECT_CALL(raw_input_, clearInput()).Times(0);
    game_.rollCredits();
    EXPECT_EQ(screen_.swaps, 0);
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
