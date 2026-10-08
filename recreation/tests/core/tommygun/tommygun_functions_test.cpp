#include "core/tommygun/tommygun_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreTommygunFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncTommyGun), CTommyGun *(*)()>);
}

} // namespace
} // namespace nocturne::core
