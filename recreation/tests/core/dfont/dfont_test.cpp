#include "core/dfont/dfont.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDfontFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&initFonts), void (*)()>);
    static_assert(std::is_same_v<decltype(&freeFonts), void (*)()>);
}

} // namespace
} // namespace nocturne::core
