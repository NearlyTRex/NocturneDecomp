#include "core/ammo/ammo_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreAmmoFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncAmmo), CAmmo *(*)()>);
}

} // namespace
} // namespace nocturne::core
