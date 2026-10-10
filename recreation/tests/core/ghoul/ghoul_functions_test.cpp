#include "core/ghoul/ghoul_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreGhoulFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncGhoul), CGhoul *(*)()>);
}

} // namespace
} // namespace nocturne::core
