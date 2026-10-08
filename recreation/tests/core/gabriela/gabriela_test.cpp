#include "core/gabriela/gabriela.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreGabrielaFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&weaponDrawBlendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&flashlightBlendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&aimRotationBlendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&factoryFuncGabriella), CGabriella *(*)()>);
    static_assert(std::is_same_v<decltype(&getSelectedWeapon), CWeapon *(*)(CInventory *)>);
}

} // namespace
} // namespace nocturne::core
