#include "core/frankgen/frankgen.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFrankgenFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&factoryFuncFrankenstienMachine), CFrankenstienMachine *(*)()>);
}

} // namespace
} // namespace nocturne::core
