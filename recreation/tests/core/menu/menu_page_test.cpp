#include "core/dfont/dfont.h"
#include "core/menu/menu.h"
#include "core/menu/menupage.h"
#include "engine/font/bitfont.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <functional>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::Return;

// Lists the lines it is given each frame, recording the hooks the loop calls and each press.
class CRecordingPage : public CMenuPage {
public:
    using CMenuPage::CMenuPage;

    std::optional<std::string> title() override {
        events.emplace_back("title");
        return page_title;
    }

    void beginFrame() override {
        events.emplace_back("begin");
    }

    void build(std::vector<SMenuLine> &lines) override {
        events.emplace_back("build");
        lines = lines_for_frame(frame);
        ++frame;
    }

    void decorate() override {
        events.emplace_back("decorate");
    }

    void beforeSwap() override {
        events.emplace_back("before swap");
    }

    EMenuOutcome choose(int id, EMenuStep step) override {
        events.emplace_back("choose");
        presses.emplace_back(id, step);
        return outcome;
    }

    EMenuOutcome endFrame() override {
        events.emplace_back("end");
        return CMenuPage::endFrame();
    }

    std::optional<std::string> page_title;
    std::function<std::vector<SMenuLine>(int)> lines_for_frame = [](int) {
        return std::vector<SMenuLine>{{.id = 7, .text = ""}, {.id = 8, .text = "XX"}};
    };
    EMenuOutcome outcome = EMenuOutcome::Leave;
    int frame = 0;
    std::vector<std::string> events;
    std::vector<std::pair<int, EMenuStep>> presses;
};

// Pages over the moon, pressing the keys for each frame in turn.
class CMenuPageTest : public CMenuFixture {
protected:
    CMenuPageTest() {
        menu_.getMoon().init();
    }

    void pressEachFrame(std::vector<EInputCodeType> presses) {
        on_frame_ = [this, presses = std::move(presses)](int frame) {
            if (std::cmp_less_equal(frame, presses.size())) {
                press(presses[static_cast<std::size_t>(frame) - 1]);
            }
        };
    }

    // The first row text shows on, or -1. The pages leave their selected first line empty, so
    // its glow, which strays above the line, isn't what is found.
    [[nodiscard]] int firstTextRow() const {
        for (int y = 0; y < kHeight; ++y) {
            if (pixel(kTextColumn, y) != pixel(kBackgroundColumn, y)) {
                return y;
            }
        }
        return -1;
    }

    // Where the letters of a line drawn at y first show.
    [[nodiscard]] int letterRow(int y) const {
        return y + fonts_.getThemeFont()->getCharYOffset('X');
    }

    [[nodiscard]] int lineHeight() const {
        return fonts_.getThemeFont()->getCharHeight('X');
    }

    static constexpr int kTextColumn = 160;
    static constexpr int kBackgroundColumn = 600;
    CRecordingPage page_{menu_};
};

TEST_F(CMenuPageTest, EachFrameRunsTheHooksInOrderWithTheSwapBeforeTheChoice) {
    std::vector<std::string> &events = page_.events;
    on_frame_ = [&](int frame) {
        events.emplace_back("swap");
        if (frame == 1) {
            press(EInputCodeType::DIK_RETURN);
        }
    };
    menu_.runPage(page_);
    EXPECT_EQ(events, (std::vector<std::string>{
                          "begin", "build", "decorate", "title", "before swap", "swap", "end",
                          "begin", "build", "decorate", "title", "before swap", "swap", "choose"}));
}

TEST_F(CMenuPageTest, APageThatStaysRunsOnAfterAChoice) {
    page_.outcome = EMenuOutcome::Stay;
    pressEachFrame({EInputCodeType::DIK_RETURN, EInputCodeType::DIK_ESCAPE});
    menu_.runPage(page_);
    EXPECT_EQ(page_.presses.size(), 1U);
    EXPECT_EQ(frames_, 2);
}

// The line under the cursor moves down a place when a line is listed above it.
TEST_F(CMenuPageTest, TheCursorFollowsItsLineNotItsPosition) {
    page_.lines_for_frame = [](int frame) {
        std::vector<SMenuLine> lines{{.id = 1, .text = "XX"}, {.id = 2, .text = "XX"}};
        if (frame == 2) {
            lines.insert(lines.begin(), {.id = 9, .text = "XX"});
        }
        return lines;
    };
    pressEachFrame({EInputCodeType::DIK_DOWN, EInputCodeType::DIK_RETURN});
    menu_.runPage(page_);
    ASSERT_EQ(page_.presses.size(), 1U);
    EXPECT_EQ(page_.presses[0].first, 2);
}

// Up from the first line wraps to the third, which goes; the cursor is then on the last left.
TEST_F(CMenuPageTest, WhenItsLineGoesTheCursorStaysOnTheList) {
    page_.lines_for_frame = [](int frame) {
        if (frame == 2) {
            return std::vector<SMenuLine>{{.id = 1, .text = "XX"}, {.id = 2, .text = "XX"}};
        }
        return std::vector<SMenuLine>{
            {.id = 1, .text = "XX"}, {.id = 2, .text = "XX"}, {.id = 3, .text = "XX"}};
    };
    pressEachFrame({EInputCodeType::DIK_UP, EInputCodeType::DIK_RETURN});
    menu_.runPage(page_);
    ASSERT_EQ(page_.presses.size(), 1U);
    EXPECT_EQ(page_.presses[0].first, 2);
}

TEST_F(CMenuPageTest, LeftOnASettingStepsBackAndRightAndConfirmStepOn) {
    page_.lines_for_frame = [](int) {
        return std::vector<SMenuLine>{{.id = 4, .text = "Volume : 5"}};
    };
    page_.outcome = EMenuOutcome::Stay;
    pressEachFrame({EInputCodeType::DIK_LEFT, EInputCodeType::DIK_RIGHT, EInputCodeType::DIK_RETURN,
                    EInputCodeType::DIK_ESCAPE});
    menu_.runPage(page_);
    EXPECT_EQ(page_.presses, (std::vector<std::pair<int, EMenuStep>>{
                                 {4, EMenuStep::Back}, {4, EMenuStep::On}, {4, EMenuStep::On}}));
}

TEST_F(CMenuPageTest, ByDefaultAPageLeavesOnCancel) {
    pressEachFrame({EInputCodeType::DIK_ESCAPE});
    menu_.runPage(page_);
    EXPECT_TRUE(page_.presses.empty());
    EXPECT_EQ(frames_, 1);
}

TEST_F(CMenuPageTest, ByDefaultAPageLeavesAsTheWindowCloses) {
    on_frame_ = [&](int /*frame*/) {
        ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    };
    menu_.runPage(page_);
    EXPECT_EQ(frames_, 1);
}

TEST_F(CMenuPageTest, ByDefaultAPageIsUntitledAndDrawsNothingOfItsOwn) {
    class CPlainPage final : public CMenuPage {
    public:
        using CMenuPage::CMenuPage;
        void build(std::vector<SMenuLine> &lines) override {
            lines.push_back({.id = 0, .text = ""});
            lines.push_back({.id = 1, .text = "XX"});
        }
        EMenuOutcome choose(int /*id*/, EMenuStep /*step*/) override {
            return EMenuOutcome::Leave;
        }
    };
    CPlainPage page(menu_);
    pressEachFrame({EInputCodeType::DIK_RETURN});
    std::vector<int> rows;
    on_frame_ = [&](int frame) {
        rows.push_back(firstTextRow());
        if (frame == 1) {
            press(EInputCodeType::DIK_RETURN);
        }
    };
    menu_.runPage(page);
    const int second_line = letterRow(250 + (2 * lineHeight()));
    EXPECT_EQ(rows, (std::vector<int>{second_line, second_line}));
}

TEST_F(CMenuPageTest, AnUntitledPageStartsAtTheMainMenusTop) {
    pressEachFrame({EInputCodeType::DIK_ESCAPE});
    int row = -1;
    on_frame_ = [&](int /*frame*/) {
        row = firstTextRow();
        press(EInputCodeType::DIK_ESCAPE);
    };
    menu_.runPage(page_);
    EXPECT_EQ(row, letterRow(250 + (2 * lineHeight())));
}

// Sound Options' title height, clear of the logo.
TEST_F(CMenuPageTest, ATitledPageStartsUnderTheLogo) {
    page_.page_title = "XXX";
    int row = -1;
    on_frame_ = [&](int /*frame*/) {
        row = firstTextRow();
        press(EInputCodeType::DIK_ESCAPE);
    };
    menu_.runPage(page_);
    EXPECT_EQ(row, letterRow(225));
}

// An untitled line takes two rows, and the list one more; a titled line takes one, and the title
// four. Untitled, the second line is what shows first; titled, the title.
TEST_F(CMenuPageTest, InAShortWindowThePageIsRaisedToFit) {
    constexpr int kShortHeight = 240;
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(kShortHeight));
    std::vector<int> rows;
    page_.outcome = EMenuOutcome::Stay;
    on_frame_ = [&](int frame) {
        rows.push_back(firstTextRow());
        if (frame == 1) {
            page_.page_title = "XXX";
        } else {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    menu_.runPage(page_);
    EXPECT_EQ(rows, (std::vector<int>{letterRow(kShortHeight - (3 * lineHeight())),
                                      letterRow(kShortHeight - (6 * lineHeight()))}));
}

TEST_F(CMenuPageTest, APageIsNeverRaisedAboveTheTop) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(1));
    int row = -1;
    on_frame_ = [&](int /*frame*/) {
        row = firstTextRow();
        press(EInputCodeType::DIK_ESCAPE);
    };
    menu_.runPage(page_);
    EXPECT_EQ(row, letterRow(2 * lineHeight()));
}

} // namespace
} // namespace nocturne::core
