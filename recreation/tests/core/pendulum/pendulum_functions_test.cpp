#include "core/pendulum/pendulum_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CorePendulumFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncPendulum), CPendulum *(*)()>);
}

} // namespace
} // namespace nocturne::core
