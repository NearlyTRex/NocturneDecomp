#include "core/gargoyle/gargoyle_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreGargoyleFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncGargoyle), CGargoyle *(*)()>);
}

} // namespace
} // namespace nocturne::core
