#include "shape/edittool/edbutton.h"
#include "shape/edittool/edcontrols.h"
#include "tests/mocks/shape/edcontrolsfixture.h"

#include <gtest/gtest.h>

#include <memory>
#include <string_view>
#include <type_traits>
#include <utility>

namespace nocturne::shape {
namespace {

TEST(CEdButton, IsConcrete) {
    static_assert(!std::is_abstract_v<CEdButton>);
}

TEST(CEdButton, Constructors) {
    static_assert(std::is_constructible_v<CEdButton, CEdControls &>);
    static_assert(!std::is_copy_constructible_v<CEdButton>);
}

TEST(CEdButton, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEdButton::calculateAndSetBounds),
                                 void (CEdButton::*)(int, int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEdButton::setBoundsAndText),
                                 void (CEdButton::*)(int, int, int, int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CEdButton::paint), void (CEdButton::*)()>);
    static_assert(std::is_same_v<decltype(&CEdButton::wasClicked), bool (CEdButton::*)()>);
}

// A button from 10, 10 up to 30, 20.
class CEdButtonTest : public CEdControlsFixture {
protected:
    CEdButtonTest() {
        button_.setBoundsAndText(10, 10, 30, 20, "!");
    }

    [[nodiscard]] bool looksPressed() {
        screen_.fill(kBackground);
        button_.paint();
        return screen_.pixel(15, 10) == kShade;
    }

    CEdButton button_{controls_};
};

TEST_F(CEdButtonTest, PaintsARaisedBoxWithItsTextCentred) {
    button_.paint();
    EXPECT_EQ(screen_.pixel(15, 10), kHighlight);
    EXPECT_EQ(screen_.pixel(29, 15), kShade);
    EXPECT_EQ(screen_.pixel(30, 15), kBackground);
    const int x = (40 - font_.getTextWidth("!")) / 2;
    const int y = (30 - font_.getTextHeight("!")) / 2;
    EXPECT_EQ(screen_.pixel(x, y), kMark);
    EXPECT_EQ(screen_.pixel(x, y - 1), kFace);
}

// The size a button is given ends a pixel short: its last column and row take no press.
TEST_F(CEdButtonTest, SizedToItsTextItEndsAPixelShort) {
    button_.calculateAndSetBounds(5, 6, "!!!");
    const int right = 5 + controls_.calculateButtonWidth("!!!") - 1;
    const int bottom = 6 + controls_.calculateButtonHeight("!!!") - 1;
    mouseAt(right, 6, true);
    button_.wasClicked();
    mouseAt(5, bottom, true);
    button_.wasClicked();
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    mouseAt(right - 1, bottom - 1, true);
    button_.wasClicked();
    EXPECT_EQ(controls_.getActiveControl(), &button_);
}

TEST_F(CEdButtonTest, APressElsewhereIsIgnored) {
    for (const auto [x, y] :
         {std::pair{5, 15}, std::pair{15, 5}, std::pair{30, 15}, std::pair{15, 20}}) {
        mouseAt(x, y, true);
        EXPECT_FALSE(button_.wasClicked());
        EXPECT_EQ(controls_.getActiveControl(), nullptr) << x << "," << y;
    }
}

TEST_F(CEdButtonTest, APressOverItTakesTheMouseAndShowsPressed) {
    mouseAt(15, 15, true);
    EXPECT_FALSE(button_.wasClicked());
    EXPECT_EQ(controls_.getActiveControl(), &button_);
    EXPECT_TRUE(looksPressed());
}

TEST_F(CEdButtonTest, LettingGoOverItClicksItOnce) {
    mouseAt(15, 15, true);
    button_.wasClicked();
    mouseAt(16, 15, false);
    EXPECT_TRUE(button_.wasClicked());
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
    EXPECT_FALSE(looksPressed());
    EXPECT_FALSE(button_.wasClicked());
}

TEST_F(CEdButtonTest, HeldOffItShowsRaisedAndKeepsTheMouse) {
    mouseAt(15, 15, true);
    button_.wasClicked();
    mouseAt(40, 15, true);
    EXPECT_FALSE(button_.wasClicked());
    EXPECT_EQ(controls_.getActiveControl(), &button_);
    EXPECT_FALSE(looksPressed());
}

TEST_F(CEdButtonTest, LettingGoOffItLetsTheMouseGoWithoutAClick) {
    mouseAt(15, 15, true);
    button_.wasClicked();
    mouseAt(30, 20, false);
    EXPECT_FALSE(button_.wasClicked());
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
}

TEST_F(CEdButtonTest, AnotherControlHoldingTheMouseKeepsIt) {
    const int other = 0;
    controls_.setActiveControl(&other);
    mouseAt(15, 15, true);
    EXPECT_FALSE(button_.wasClicked());
    EXPECT_EQ(controls_.getActiveControl(), &other);
    EXPECT_FALSE(looksPressed());
}

TEST_F(CEdButtonTest, AButtonLetsGoOfTheMouseWhenItGoes) {
    auto held = std::make_unique<CEdButton>(controls_);
    held->setBoundsAndText(0, 0, 5, 5, "!");
    mouseAt(1, 1, true);
    held->wasClicked();
    ASSERT_EQ(controls_.getActiveControl(), held.get());
    held.reset();
    EXPECT_EQ(controls_.getActiveControl(), nullptr);
}

TEST_F(CEdButtonTest, AButtonNotHoldingTheMouseLeavesItWhenItGoes) {
    mouseAt(15, 15, true);
    button_.wasClicked();
    {
        const CEdButton other(controls_);
    }
    EXPECT_EQ(controls_.getActiveControl(), &button_);
}

} // namespace
} // namespace nocturne::shape
