#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/mockscreendevice.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <span>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::Ref;
using ::testing::Return;

TEST(CKeys, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CKeys>);
}

TEST(CKeys, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeys>);
}

TEST(CKeys, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeys::getKeyState), int (CKeys::*)(EInputCodeType)>);
    static_assert(
        std::is_same_v<decltype(&CKeys::getAndClearKeyState), int (CKeys::*)(EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CKeys::clearKeypresses), void (CKeys::*)()>);
    static_assert(std::is_same_v<decltype(&CKeys::getInputKey), int (CKeys::*)()>);
    static_assert(std::is_same_v<decltype(&CKeys::getUppercasedInputKey), int (CKeys::*)()>);
    static_assert(
        std::is_same_v<decltype(&CKeys::setKeyAsPressed), void (CKeys::*)(EInputCodeType)>);
    static_assert(
        std::is_same_v<decltype(&CKeys::clearKeyPressState), void (CKeys::*)(EInputCodeType)>);
    static_assert(std::is_same_v<decltype(&CKeys::toggleInputMask), void (CKeys::*)(int)>);
}

class CKeysTest : public ::testing::Test {
protected:
    ::testing::StrictMock<MockRawInput> raw_input_;
    MockScreenDevice screen_;
    CKeys keys_{raw_input_, screen_};
};

TEST_F(CKeysTest, AKeysStateIsReadAndCanBeClearedAsItIsRead) {
    std::array<std::uint8_t, IRawInput::kInputCodeCount> state{};
    state[0x39] = 1;
    EXPECT_CALL(raw_input_, getKeyboardState).WillRepeatedly(Return(std::span(state)));
    EXPECT_EQ(keys_.getKeyState(EInputCodeType::DIK_SPACE), 1);
    EXPECT_EQ(keys_.getAndClearKeyState(EInputCodeType::DIK_SPACE), 1);
    EXPECT_EQ(keys_.getKeyState(EInputCodeType::DIK_SPACE), 0);
}

TEST_F(CKeysTest, AnInputKeyIsTheNextKeypressLowByte) {
    EXPECT_CALL(raw_input_, getNextKeypress(Ref(screen_))).WillOnce(Return(0x1241));
    EXPECT_EQ(keys_.getInputKey(), 0x41);
}

TEST_F(CKeysTest, AnUppercasedInputKeyRaisesOnlyAsciiLetters) {
    EXPECT_CALL(raw_input_, getNextKeypress(Ref(screen_)))
        .WillOnce(Return(0x1261))
        .WillOnce(Return('{'))
        .WillOnce(Return(0xe9));
    EXPECT_EQ(keys_.getUppercasedInputKey(), 'A');
    EXPECT_EQ(keys_.getUppercasedInputKey(), '{');
    EXPECT_EQ(keys_.getUppercasedInputKey(), 0xe9);
}

TEST_F(CKeysTest, ClearingKeypressesClearsWinrunsQueue) {
    EXPECT_CALL(raw_input_, clearKeypresses);
    keys_.clearKeypresses();
}

} // namespace
} // namespace nocturne::engine
