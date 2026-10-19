#include "common/error/fatalerror.h"
#include "engine/keys/inputcodetype.h"
#include "shape/edittool/picklist.h"
#include "tests/mocks/shape/picklistfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string_view>
#include <type_traits>

namespace nocturne::shape {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CPickList, DerivesFromCStrList) {
    static_assert(std::is_base_of_v<CStrList, CPickList>);
}

TEST(CPickList, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPickList>);
}

TEST(CPickList, IsConcrete) {
    static_assert(!std::is_abstract_v<CPickList>);
}

TEST(CPickList, Constructors) {
    static_assert(std::is_constructible_v<CPickList, const SPickListOwners &>);
    static_assert(!std::is_convertible_v<const SPickListOwners &, CPickList>);
    static_assert(!std::is_copy_constructible_v<CPickList>);
    static_assert(!std::is_move_constructible_v<CPickList>);
}

TEST(CPickList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPickList::remove), void (CPickList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::sort), void (CPickList::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CPickList::insert), void (CPickList::*)(int, std::string_view)>);
    static_assert(std::is_same_v<decltype(&CPickList::swap), void (CPickList::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::clear), void (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::handleInput), int (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::displayChoicesAndWaitForInput),
                                 int (CPickList::*)(std::string_view, int)>);
    static_assert(std::is_same_v<decltype(&CPickList::initializeDialog),
                                 void (CPickList::*)(std::string_view, int, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CPickList::handleDialogInput), int (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::renderDialog), void (CPickList::*)()>);
    static_assert(std::is_same_v<decltype(&CPickList::enableItem), void (CPickList::*)(int, bool)>);
    static_assert(
        std::is_same_v<decltype(&CPickList::setHotkeys), void (CPickList::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CPickList::setForcedColumnCount), void (CPickList::*)(bool)>);
    static_assert(CPickList::kStillOpen == -2);
    static_assert(CPickList::kCancelled == -1);
}

class CPickListTest : public CPickListFixture {};

TEST_F(CPickListTest, ItsStringsMoveLikeAnyListsUntilAnItemIsEnabled) {
    list_.add("B");
    list_.insert(0, "A");
    list_.add("C");
    list_.swap(0, 2);
    list_.sort(0, 2);
    list_.remove(2, 2);
    ASSERT_EQ(list_.getItemCount(), 2);
    EXPECT_EQ(list_.getStringAt(0), "A");
    EXPECT_EQ(list_.getStringAt(1), "B");
}

TEST_F(CPickListTest, OnceAnItemIsEnabledMovingStringsIsFatal) {
    addCopies(3, "A");
    list_.enableItem(0, true);
    EXPECT_THAT([this] { list_.add("D"); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "CPickList::insert - can't do this after enableing/disabling items (yet)")));
    EXPECT_THAT([this] { list_.remove(0, 0); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "CPickList::remove - can't do this after enableing/disabling items (yet)")));
    EXPECT_THAT([this] { list_.sort(0, 2); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "CPickList::sort - can't do this after enableing/disabling items (yet)")));
    EXPECT_THAT([this] { list_.swap(0, 1); },
                ThrowsMessage<common::CFatalError>(StrEq(
                    "CPickList::swap - can't do this after enableing/disabling items (yet)")));
}

TEST_F(CPickListTest, ClearingForgetsWhichItemsWereEnabled) {
    addCopies(2, "A");
    list_.enableItem(1, false);
    list_.clear();
    EXPECT_EQ(list_.getItemCount(), 0);
    list_.add("B");
    EXPECT_EQ(list_.getItemCount(), 1);
}

TEST_F(CPickListTest, EnablingAnItemOffTheListIsFatal) {
    addCopies(2, "A");
    const auto fatal =
        ThrowsMessage<common::CFatalError>(StrEq("CPickList::enableItem - invalid index"));
    EXPECT_THAT([this] { list_.enableItem(-1, true); }, fatal);
    EXPECT_THAT([this] { list_.enableItem(2, true); }, fatal);
}

// Return confirms only an enabled item; the rest of the list stays enabled once one is disabled,
// and a second change keeps the first.
TEST_F(CPickListTest, ADisabledItemCantBeConfirmed) {
    addCopies(3, "A");
    list_.enableItem(1, false);
    list_.enableItem(2, false);
    list_.enableItem(2, true);
    list_.initializeDialog("", 1, 0);
    press(engine::EInputCodeType::DIK_RETURN);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    press(engine::EInputCodeType::DIK_NUMPAD2);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    press(engine::EInputCodeType::DIK_RETURN);
    EXPECT_EQ(list_.handleDialogInput(), CPickList::kStillOpen);
    EXPECT_EQ(list_.handleDialogInput(), 2);
}

// handleInput leaves the selection where the keys put it; the dialog brings it back on the list
// before the next read, so only a direct call can ask about an item off the list.
TEST_F(CPickListTest, AskingAboutAnItemOffTheListIsFatal) {
    addCopies(2, "A");
    list_.initializeDialog("", 0, 0);
    const auto fatal =
        ThrowsMessage<common::CFatalError>(StrEq("CPickList::isItemEnabled - invalid index"));
    press(engine::EInputCodeType::DIK_NUMPAD8);
    EXPECT_EQ(list_.handleInput(), 0);
    press(engine::EInputCodeType::DIK_RETURN);
    EXPECT_THAT([this] { static_cast<void>(list_.handleInput()); }, fatal);
    press(engine::EInputCodeType::DIK_NUMPAD1);
    EXPECT_EQ(list_.handleInput(), 0);
    press(engine::EInputCodeType::DIK_RETURN);
    EXPECT_THAT([this] { static_cast<void>(list_.handleInput()); }, fatal);
}

} // namespace
} // namespace nocturne::shape
