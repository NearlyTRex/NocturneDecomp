#include "core/menu/menupage.h"
#include "engine/keys/inputcodetype.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::Return;

// Only the two hooks a page must have.
class CBarePage final : public CMenuPage {
public:
    using CMenuPage::CMenuPage;

    void build(std::vector<SMenuLine> &lines) override {
        lines.push_back({.id = 0, .text = "XX"});
    }

    EMenuOutcome choose(int /*id*/, EMenuStep /*step*/) override {
        return EMenuOutcome::Leave;
    }

    [[nodiscard]] CMenu *menu() {
        return &getMenu();
    }
};

TEST(CMenuPage, PublicInterface) {
    static_assert(std::is_abstract_v<CMenuPage>);
    static_assert(std::has_virtual_destructor_v<CMenuPage>);
    static_assert(!std::is_copy_constructible_v<CMenuPage>);
    static_assert(!std::is_move_constructible_v<CMenuPage>);
    static_assert(
        std::is_same_v<decltype(&CMenuPage::title), std::optional<std::string> (CMenuPage::*)()>);
    static_assert(std::is_same_v<decltype(&CMenuPage::beginFrame), void (CMenuPage::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMenuPage::build), void (CMenuPage::*)(std::vector<SMenuLine> &)>);
    static_assert(std::is_same_v<decltype(&CMenuPage::decorate), void (CMenuPage::*)()>);
    static_assert(std::is_same_v<decltype(&CMenuPage::beforeSwap), void (CMenuPage::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMenuPage::choose), EMenuOutcome (CMenuPage::*)(int, EMenuStep)>);
    static_assert(std::is_same_v<decltype(&CMenuPage::endFrame), EMenuOutcome (CMenuPage::*)()>);
    static_assert(static_cast<int>(EMenuStep::Back) == -1);
    static_assert(static_cast<int>(EMenuStep::On) == 1);
}

using CMenuPageDefaultsTest = CMenuFixture;

TEST_F(CMenuPageDefaultsTest, APageIsUntitled) {
    CBarePage page(menu_);
    EXPECT_EQ(page.title(), std::nullopt);
}

// The hooks a page leaves alone draw nothing.
TEST_F(CMenuPageDefaultsTest, TheOptionalHooksDoNothing) {
    CBarePage page(menu_);
    page.beginFrame();
    page.decorate();
    page.beforeSwap();
    EXPECT_FALSE(anythingDrawn());
}

TEST_F(CMenuPageDefaultsTest, AFrameEndsStayingWithoutCancel) {
    CBarePage page(menu_);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

TEST_F(CMenuPageDefaultsTest, AFrameEndsLeavingOnCancelAndTakesThePress) {
    CBarePage page(menu_);
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Leave);
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Stay);
}

TEST_F(CMenuPageDefaultsTest, AFrameEndsLeavingAsTheWindowCloses) {
    CBarePage page(menu_);
    ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    EXPECT_EQ(page.endFrame(), EMenuOutcome::Leave);
}

TEST_F(CMenuPageDefaultsTest, APageKnowsTheMenuItIsOn) {
    CBarePage page(menu_);
    EXPECT_EQ(page.menu(), &menu_);
}

} // namespace
} // namespace nocturne::core
