#include "core/elephant/elephant.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreElephantFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncElephantGun), CElephantGun *(*)()>);
}

} // namespace
} // namespace nocturne::core
