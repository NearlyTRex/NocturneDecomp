#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/keys/keys.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
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

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::shape {
namespace {

using ::testing::_;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CEditorTools, PublicInterface) {
    static_assert(std::is_constructible_v<CEditorTools, const SEditorToolsOwners &>);
    static_assert(!std::is_convertible_v<const SEditorToolsOwners &, CEditorTools>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showMessage),
                                 void (CEditorTools::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showWarning),
                                 void (CEditorTools::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showError),
                                 void (CEditorTools::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::displayCenteredStatusMessage),
                                 void (CEditorTools::*)(char *, ...)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showFileSelectionDialog),
                                 bool (CEditorTools::*)(const SFileSelectionOwners &,
                                                        std::string_view, std::string_view,
                                                        std::string_view, std::string &, bool)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::showFilenameInputDialog),
                       int (CEditorTools::*)(char *, char *, char *, char *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::promptForValidInteger),
                                 int (CEditorTools::*)(char *, int *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::promptForValidFloat),
                                 int (CEditorTools::*)(char *, float *, int, float, float, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showTextInputDialog),
                                 int (CEditorTools::*)(char *, char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showCheatInputDialog),
                                 int (CEditorTools::*)(char *, char *, int, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::showCenteredProgressDialog),
                                 void (CEditorTools::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::updatePercentage),
                                 void (CEditorTools::*)(float, float)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::createCenteredModal),
                       void (CEditorTools::*)(int, int, std::string_view, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::createModalWindow),
                                 void (CEditorTools::*)(int, int, int, int, std::string_view,
                                                        std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::restoreWindowAndCleanup), void (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::popWindowState), void (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::paintCurrentWindow), void (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::getTimeCycledColorByte), int (CEditorTools::*)()>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::drawMousePointer), void (CEditorTools::*)(bool)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::setMousePointerType),
                                 void (CEditorTools::*)(CEditorTools::EMouseCursorType, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CEditorTools::getClipboardText), char *(CEditorTools::*)()>);
    static_assert(std::is_same_v<decltype(&CEditorTools::setClipboardText),
                                 void (CEditorTools::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DAxisLabels),
                                 void (CEditorTools::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DAxisLabelsAt),
                                 void (CEditorTools::*)(float, int, common::CVector3f *,
                                                        common::UOrientationVector *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::displayMemoryDiagnostics),
                                 void (CEditorTools::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::draw3DProjectedLine),
                                 void (CEditorTools::*)(common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CEditorTools::getEditorFontLineHeight),
                                 int (CEditorTools::*)() const>);
}

constexpr int kScreenWidth = 128;
constexpr int kScreenHeight = 96;
constexpr std::uint32_t kBackground = 0x123456;
// The border's colour index, 7, and the title's, 0xfb, as the screen's table draws them.
constexpr std::uint32_t kBorder = 0x070707;
constexpr std::uint32_t kTitle = 0xfbfbfb;

// Dialogs on a 128x96 screen, a window's margin a pixel each way, in a font whose only glyph is a
// two-pixel '!' and whose 'j' has no height.
class CEditorToolsTest : public engine::CPodFixture {
protected:
    CEditorToolsTest() {
        const engine::SFontSheet sheet = engine::makeFontSheet({{"#.", "##"}}, 2);
        givenFile("art\\editor.raw", sheet.pixels);
        font_.openFontFile("editor.raw", sheet.width, sheet.height, 0);
        font_.setFontReady(1);
        editor_tools_.setEditorFont(&font_);
        two_d_.setupViewportAndClipping(0, 0, kScreenWidth - 1, kScreenHeight - 1);
        screen_.fill(kBackground);
    }

    [[nodiscard]] engine::SClipRect clip() const {
        return two_d_.getClipRect();
    }

    engine::CMemoryScreen screen_{kScreenWidth, kScreenHeight, 32};
    NiceMock<engine::MockRawInput> raw_input_;
    engine::C2d two_d_{dosio_, screen_, raw_input_};
    NiceMock<platform::MockRenderer> renderer_;
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    engine::CKeys keys_{raw_input_, screen_};
    engine::CFontColors colors_;
    engine::CBitFont font_{dosio_, screen_, two_d_, three_d_, colors_};
    NiceMock<platform::MockClock> clock_;
    NiceMock<engine::MockGameClock> game_clock_;
    NiceMock<platform::MockClipboard> clipboard_;
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
};

TEST_F(CEditorToolsTest, WithoutAnEditorFontEveryDialogIsFatal) {
    editor_tools_.setEditorFont(nullptr);
    const auto fatal =
        ThrowsMessage<common::CFatalError>(StrEq("gEdFont must be set by the application."));
    EXPECT_THAT([this] { editor_tools_.showWarning("!"); }, fatal);
    EXPECT_THAT([this] { editor_tools_.createCenteredModal(10, 10, "", 0); }, fatal);
    EXPECT_THAT([this] { editor_tools_.createModalWindow(0, 0, 10, 10, "", 0); }, fatal);
    EXPECT_THAT([this] { editor_tools_.paintCurrentWindow(); }, fatal);
}

TEST_F(CEditorToolsTest, TheLineHeightIsAJsAsLastMeasured) {
    EXPECT_EQ(editor_tools_.getEditorFontLineHeight(), 0);
    font_.setCharYOffsetRange(3, 'j', 'j');
    editor_tools_.initEditorFontMetrics();
    EXPECT_EQ(editor_tools_.getEditorFontLineHeight(), 3);
}

TEST_F(CEditorToolsTest, AWindowAddsAMarginAndClipsToItsInside) {
    editor_tools_.createModalWindow(10, 20, 50, 40, "", 0);
    EXPECT_EQ(editor_tools_.getWindowCount(), 1U);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 10, .top = 20, .right = 49, .bottom = 39}));
}

TEST_F(CEditorToolsTest, ATitleMakesRoomAboveTheInside) {
    editor_tools_.createModalWindow(10, 20, 50, 40, "!", 0);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 10, .top = 21, .right = 49, .bottom = 40}));
}

TEST_F(CEditorToolsTest, AWindowStaysOnTheScreen) {
    editor_tools_.createModalWindow(-5, -5, 200, 200, "", 0);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 1, .top = 1, .right = 126, .bottom = 94}));
}

TEST_F(CEditorToolsTest, ASixthWindowIsFatal) {
    for (std::size_t i = 0; i < CEditorTools::kMaxWindows; ++i) {
        editor_tools_.createModalWindow(10, 10, 20, 20, "", CEditorTools::kNoBackup);
    }
    EXPECT_THAT([this] { editor_tools_.createModalWindow(10, 10, 20, 20, "", 0); },
                ThrowsMessage<common::CFatalError>(StrEq("Can't open another window!")));
}

TEST_F(CEditorToolsTest, ClosingAWindowPutsBackTheScreenUnderItAndTheClip) {
    const engine::SProjectionParams projection = two_d_.getProjection();
    editor_tools_.createModalWindow(10, 20, 50, 40, "", 0);
    screen_.fill(0);
    editor_tools_.restoreWindowAndCleanup();
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
    // The window covers columns 9 to 50 and rows 19 to 40.
    EXPECT_EQ(screen_.pixel(9, 19), kBackground);
    EXPECT_EQ(screen_.pixel(50, 40), kBackground);
    EXPECT_EQ(screen_.pixel(51, 40), 0U);
    EXPECT_EQ(screen_.pixel(50, 41), 0U);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 0, .top = 0, .right = 127, .bottom = 95}));
    EXPECT_EQ(two_d_.getProjection(), projection);
    EXPECT_EQ(two_d_.getViewportWidth(), kScreenWidth);
}

TEST_F(CEditorToolsTest, AWindowThatSavesNothingLeavesTheScreenAsItIs) {
    editor_tools_.createModalWindow(10, 20, 50, 40, "", CEditorTools::kNoBackup);
    screen_.fill(0);
    editor_tools_.restoreWindowAndCleanup();
    EXPECT_EQ(screen_.pixel(30, 30), 0U);
}

TEST_F(CEditorToolsTest, ClosingAWindowThatIsntOpenIsFatal) {
    EXPECT_THAT([this] { editor_tools_.restoreWindowAndCleanup(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CEditorTools::closeWindow() called but no window was opened!")));
    EXPECT_THAT([this] { editor_tools_.popWindowState(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CEditorTools::popWindow() called but no window was opened!")));
    EXPECT_THAT([this] { editor_tools_.paintCurrentWindow(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CEditorTools::paintWindow() called but no window was opened!")));
}

TEST_F(CEditorToolsTest, ACenteredWindowIsInTheMiddle) {
    editor_tools_.createCenteredModal(40, 20, "", 0);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 44, .top = 38, .right = 83, .bottom = 57}));
}

TEST_F(CEditorToolsTest, ACenteredWindowIsAtLeastAsWideAsItsTitle) {
    // Ten '!' are 29 wide.
    editor_tools_.createCenteredModal(10, 20, "!!!!!!!!!!", 0);
    EXPECT_EQ(clip().left, 49);
    EXPECT_EQ(clip().right, 78);
}

TEST_F(CEditorToolsTest, ACenteredWindowIsNoBiggerThanTheScreen) {
    editor_tools_.createCenteredModal(500, 500, "", 0);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 1, .top = 1, .right = 126, .bottom = 94}));
}

TEST_F(CEditorToolsTest, PaintingDrawsTheFrameAndKeepsTheColour) {
    editor_tools_.createModalWindow(10, 20, 50, 40, "", 0);
    two_d_.setActiveRenderColor(3);
    editor_tools_.paintCurrentWindow();
    EXPECT_EQ(screen_.pixel(9, 19), kBorder);
    EXPECT_EQ(screen_.pixel(50, 40), kBorder);
    EXPECT_EQ(screen_.pixel(30, 30), 0U);
    EXPECT_EQ(screen_.pixel(51, 41), kBackground);
    EXPECT_EQ(two_d_.getActiveRenderColor(), 3);
    EXPECT_EQ(clip(), (engine::SClipRect{.left = 10, .top = 20, .right = 49, .bottom = 39}));
}

TEST_F(CEditorToolsTest, ATitleIsCentredOverARule) {
    editor_tools_.createModalWindow(10, 20, 50, 40, "!", 0);
    two_d_.setActiveRenderColor(3);
    editor_tools_.paintCurrentWindow();
    // The window runs from 9 to 51 and starts at row 18; the title is drawn a row below that.
    EXPECT_EQ(screen_.pixel(29, 19), kTitle);
    EXPECT_EQ(screen_.pixel(30, 19), 0U);
    EXPECT_EQ(screen_.pixel(10, 20), kBorder);
    EXPECT_EQ(screen_.pixel(49, 20), kBorder);
    EXPECT_EQ(two_d_.getActiveRenderColor(), 3);
    EXPECT_EQ(clip().top, 21);
}

TEST_F(CEditorToolsTest, AWarningWaitsForAKeyThenPutsTheScreenBack) {
    EXPECT_CALL(raw_input_, clearInput).Times(2);
    int swaps_while_waiting = 0;
    std::uint32_t frame_while_waiting = 0;
    EXPECT_CALL(raw_input_, getNextKeypress).WillOnce([&](engine::IScreenDevice &) {
        swaps_while_waiting = screen_.swaps;
        // The box is 14 by 2 inside a margin, in the middle: its frame starts at (56, 46).
        frame_while_waiting = screen_.pixel(56, 46);
        return 'x';
    });
    editor_tools_.showWarning("!");
    EXPECT_EQ(swaps_while_waiting, 1);
    EXPECT_EQ(frame_while_waiting, kBorder);
    EXPECT_EQ(screen_.swaps, 2);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
    EXPECT_EQ(screen_.pixel(56, 46), kBackground);
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0xff);
}

TEST_F(CEditorToolsTest, AMessageIsDrawnInTheWindowFontColourAndWaitsForAKey) {
    EXPECT_CALL(raw_input_, getNextKeypress).WillOnce([&](engine::IScreenDevice &) {
        // The '!' is drawn in the middle of the box, from (63, 47).
        EXPECT_EQ(screen_.pixel(63, 47), 0xffffffU);
        return 'x';
    });
    editor_tools_.showMessage("!");
    EXPECT_EQ(screen_.swaps, 2);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

TEST_F(CEditorToolsTest, AnErrorIsDrawnInTheWarningColourAndWaitsForAKey) {
    EXPECT_CALL(raw_input_, getNextKeypress).WillOnce([&](engine::IScreenDevice &) {
        EXPECT_EQ(screen_.pixel(63, 47), 0xffffffU);
        return 'x';
    });
    editor_tools_.showError("!");
    EXPECT_EQ(screen_.swaps, 2);
    EXPECT_EQ(editor_tools_.getWindowCount(), 0U);
}

TEST_F(CEditorToolsTest, TextIsCopiedToTheClipboard) {
    EXPECT_CALL(clipboard_, setClipboardText(std::string_view("a\nb\n")));
    editor_tools_.setClipboardText("a\nb\n");
}

// A progress window on the 128x96 screen, in a font of the digits and ':' a pixel each, whose
// 'j' is two pixels tall; the clock counts seconds.
class CEditorToolsProgressTest : public CEditorToolsTest {
protected:
    CEditorToolsProgressTest() {
        const std::vector<std::vector<std::string>> glyphs(11, std::vector<std::string>{"#"});
        const engine::SFontSheet sheet = engine::makeFontSheet(glyphs, 1);
        givenFile("art\\digits.raw", sheet.pixels);
        font_.loadNewBitmap("digits.raw", sheet.width, sheet.height, '0', ':', 0);
        font_.setCharYOffsetRange(2, 'j', 'j');
        ON_CALL(clock_, getCounterFrequency).WillByDefault(Return(1));
        ON_CALL(clock_, getCounter).WillByDefault([this] { return now_; });
    }

    // Pixels of the text colour along row y of the window's inside.
    [[nodiscard]] int textPixels(int y) const {
        const engine::SClipRect clip = two_d_.getClipRect();
        int count = 0;
        for (int x = clip.left; x <= clip.right; ++x) {
            count += screen_.pixel(x, y) == 0xffffffU ? 1 : 0;
        }
        return count;
    }

    // The pixel in the bar's middle row at the fraction of its width.
    [[nodiscard]] std::uint32_t barAt(float fraction) const {
        const engine::SClipRect clip = two_d_.getClipRect();
        const int left = clip.left + 1;
        const int right = clip.right - 1;
        const auto x = left + static_cast<int>(static_cast<float>(right - left) * fraction);
        return screen_.pixel(x, clip.top + 6);
    }

    std::uint64_t now_ = 100;
};

TEST_F(CEditorToolsProgressTest, OpensAtHalfTheScreenWideWithAnEmptyBar) {
    editor_tools_.showCenteredProgressDialog("");
    const engine::SClipRect clip = two_d_.getClipRect();
    EXPECT_GE(clip.right - clip.left + 1, kScreenWidth / 2);
    EXPECT_EQ(screen_.swaps, 1);
    EXPECT_GT(textPixels(clip.top), 0);
    EXPECT_EQ(barAt(0.0F), 0U);
}

TEST_F(CEditorToolsProgressTest, TheBarFillsInProportionAndKeepsItsLastPixelForTheEnd) {
    editor_tools_.showCenteredProgressDialog("");
    editor_tools_.updatePercentage(1.0F, 4.0F);
    EXPECT_EQ(barAt(0.1F), 0x040404U);
    EXPECT_EQ(barAt(0.5F), 0U);
    editor_tools_.updatePercentage(9.0F, 4.0F);
    EXPECT_EQ(barAt(0.99F), 0x040404U);
    EXPECT_EQ(screen_.pixel(two_d_.getClipRect().right - 1, two_d_.getClipRect().top + 6), 0U);
}

TEST_F(CEditorToolsProgressTest, ProgressBelowZeroOrOfNothingShowsAnEmptyBar) {
    editor_tools_.showCenteredProgressDialog("");
    editor_tools_.updatePercentage(-1.0F, 4.0F);
    EXPECT_EQ(barAt(0.0F), 0U);
    editor_tools_.updatePercentage(1.0F, 0.0F);
    EXPECT_EQ(barAt(0.0F), 0U);
}

TEST_F(CEditorToolsProgressTest, AnUnchangedPercentageRedrawsOnlyEveryFourSeconds) {
    editor_tools_.showCenteredProgressDialog("");
    editor_tools_.updatePercentage(0.001F, 1.0F);
    EXPECT_EQ(screen_.swaps, 1);
    now_ += 3;
    editor_tools_.updatePercentage(0.001F, 1.0F);
    EXPECT_EQ(screen_.swaps, 1);
    now_ += 1;
    editor_tools_.updatePercentage(0.001F, 1.0F);
    EXPECT_EQ(screen_.swaps, 2);
    editor_tools_.updatePercentage(0.5F, 1.0F);
    EXPECT_EQ(screen_.swaps, 3);
}

// 0.005 as a float is just under it, so the original's double product rounds to 0 percent where
// a float product would reach 1 and redraw.
TEST_F(CEditorToolsProgressTest, ThePercentageIsTakenInDoublePrecision) {
    editor_tools_.showCenteredProgressDialog("");
    editor_tools_.updatePercentage(0.005F, 1.0F);
    EXPECT_EQ(screen_.swaps, 1);
}

TEST_F(CEditorToolsProgressTest, TheTimeLeftShowsAfterFiveSecondsUntilNoneIsLeft) {
    editor_tools_.showCenteredProgressDialog("");
    const int time_row = two_d_.getClipRect().bottom - 2;
    now_ += 5;
    editor_tools_.updatePercentage(0.5F, 1.0F);
    EXPECT_EQ(textPixels(time_row), 0);
    now_ += 1;
    editor_tools_.updatePercentage(0.6F, 1.0F);
    EXPECT_GT(textPixels(time_row), 0);
    editor_tools_.updatePercentage(1.0F, 1.0F);
    EXPECT_EQ(textPixels(time_row), 0);
}

// Ninety-nine times the elapsed time is too long for an int; FISTP leaves the integer
// indefinite, which is not above zero.
TEST_F(CEditorToolsProgressTest, ATimeLeftTooLongForAnIntIsNotShown) {
    editor_tools_.showCenteredProgressDialog("");
    now_ += 100'000'000;
    editor_tools_.updatePercentage(0.01F, 1.0F);
    EXPECT_EQ(textPixels(two_d_.getClipRect().bottom - 2), 0);
}

TEST_F(CEditorToolsProgressTest, NoTimeLeftShowsAtZeroPercent) {
    editor_tools_.showCenteredProgressDialog("");
    now_ += 60;
    editor_tools_.updatePercentage(0.0F, 1.0F);
    EXPECT_EQ(textPixels(two_d_.getClipRect().bottom - 2), 0);
}

TEST_F(CEditorToolsTest, UpdatingWithNoWindowOpenIsFatal) {
    EXPECT_THAT([this] { editor_tools_.updatePercentage(1.0F, 2.0F); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CEditorTools::updatePercentageWindow - no window open!")));
}

TEST_F(CEditorToolsTest, UnderTheHardwareRendererTheFrameIsPulledIntoTheScreenFirst) {
    ON_CALL(renderer_, init(_)).WillByDefault(Return(1));
    ON_CALL(renderer_, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
    ON_CALL(renderer_, lockFrame()).WillByDefault(Return(1));
    ON_CALL(renderer_, unlockFrame()).WillByDefault(Return(1));
    special_.setUseDirect3D(true);
    ASSERT_EQ(special_.setResolutionAndColorTable(kScreenWidth, kScreenHeight, 32), 1);
    std::vector<std::uint32_t> frame(static_cast<std::size_t>(kScreenWidth * kScreenHeight),
                                     0xabcdef);
    const std::span<void *> rows = screen_.getScreenRows();
    const std::vector<void *> software_rows(rows.begin(), rows.end());
    EXPECT_CALL(renderer_, lockFrame).WillOnce([&] {
        for (std::size_t y = 0; y < rows.size(); ++y) {
            rows[y] = frame.data() + (y * kScreenWidth);
        }
        return 1;
    });
    EXPECT_CALL(renderer_, unlockFrame).WillOnce([&] {
        std::ranges::copy(software_rows, rows.begin());
        return 1;
    });
    editor_tools_.createModalWindow(10, 20, 50, 40, "", 0);
    EXPECT_EQ(screen_.pixel(0, 0), 0xabcdefU);
    screen_.fill(0);
    editor_tools_.restoreWindowAndCleanup();
    EXPECT_EQ(screen_.pixel(30, 30), 0xabcdefU);
}

} // namespace
} // namespace nocturne::shape
