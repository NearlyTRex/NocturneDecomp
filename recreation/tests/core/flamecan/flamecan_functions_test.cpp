#include "core/flamecan/flamecan_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFlamecanFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFlameCan), CFlameCan *(*)()>);
}

} // namespace
} // namespace nocturne::core
