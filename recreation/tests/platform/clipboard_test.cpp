#include "platform/clipboard.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IClipboard, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IClipboard>);
    static_assert(std::has_virtual_destructor_v<IClipboard>);
}

TEST(IClipboard, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&IClipboard::getClipboardText), std::string (IClipboard::*)()>);
    static_assert(std::is_same_v<decltype(&IClipboard::setClipboardText),
                                 void (IClipboard::*)(std::string_view)>);
}

} // namespace
} // namespace nocturne::platform
