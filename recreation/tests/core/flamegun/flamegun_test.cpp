#include "core/flamegun/flamegun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFlamegunFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFlameThrower), CFlameThrower *(*)()>);
}

} // namespace
} // namespace nocturne::core
