#include "core/lightgun/lightgun_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreLightgunFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncLightGun), CLightGun *(*)()>);
}

} // namespace
} // namespace nocturne::core
