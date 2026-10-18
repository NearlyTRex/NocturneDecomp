#include "engine/rawinput.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(IRawInput, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IRawInput>);
    static_assert(std::has_virtual_destructor_v<IRawInput>);
}

TEST(IRawInput, PublicInterface) {
    static_assert(IRawInput::kInputCodeCount == 600);
    static_assert(
        std::is_same_v<decltype(&IRawInput::getKeyboardState),
                       std::span<std::uint8_t, IRawInput::kInputCodeCount> (IRawInput::*)()>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::getInputKeyMask), int (IRawInput::*)() const>);
    static_assert(std::is_same_v<decltype(&IRawInput::setInputKeyMask), void (IRawInput::*)(int)>);
    static_assert(std::is_same_v<decltype(&IRawInput::getMouseX), int (IRawInput::*)() const>);
    static_assert(std::is_same_v<decltype(&IRawInput::getMouseY), int (IRawInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::getMouseButtonFlags), int (IRawInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::releaseLeftMouseButton), void (IRawInput::*)()>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::setCursorPosition), void (IRawInput::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::takeMouseWheelNotches), int (IRawInput::*)()>);
    static_assert(std::is_same_v<decltype(&IRawInput::clearInput), void (IRawInput::*)()>);
    static_assert(std::is_same_v<decltype(&IRawInput::clearKeypresses), void (IRawInput::*)()>);
    static_assert(std::is_same_v<decltype(&IRawInput::wasKeyPressed), int (IRawInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::getInputDisabled), bool (IRawInput::*)() const>);
    static_assert(
        std::is_same_v<decltype(&IRawInput::getNextKeypress), int (IRawInput::*)(IScreenDevice &)>);
}

} // namespace
} // namespace nocturne::engine
