#include "core/actor/demonactortype.h"
#include "core/flamegun/flamethrower.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlameThrower, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CFlameThrower>);
}

TEST(CFlameThrower, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlameThrower>);
}

TEST(CFlameThrower, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlameThrower>);
}

TEST(CFlameThrower, Constructors) {
    static_assert(std::is_constructible_v<CFlameThrower>);
}

TEST(CFlameThrower, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFlameThrower::process), void (CFlameThrower::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFlameThrower::getActorType),
                                 const CDemonActorType &(CFlameThrower::*)() const>);
    static_assert(std::is_same_v<decltype(&CFlameThrower::fire), int (CFlameThrower::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameThrower::getDamage), float (CFlameThrower::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFlameThrower::renderAimBeam), void (CFlameThrower::*)()>);
}

TEST(CFlameThrower, ItsRecordIsVersion1UnderCWeapon) {
    EXPECT_EQ(CFlameThrower::kType.class_name, "CFlameThrower");
    EXPECT_EQ(CFlameThrower::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CFlameThrower::kType.factory_func, nullptr);
    EXPECT_EQ(CFlameThrower::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
