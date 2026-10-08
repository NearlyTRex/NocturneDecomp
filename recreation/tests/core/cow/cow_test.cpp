#include "core/cow/cow.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreCowFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncZombieCow), CZombieCow *(*)()>);
}

} // namespace
} // namespace nocturne::core
