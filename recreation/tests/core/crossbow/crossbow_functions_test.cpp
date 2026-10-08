#include "core/crossbow/crossbow_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreCrossbowFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncCrossbow), CCrossbow *(*)()>);
}

} // namespace
} // namespace nocturne::core
