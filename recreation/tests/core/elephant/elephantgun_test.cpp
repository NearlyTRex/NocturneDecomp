#include "core/actor/demonactortype.h"
#include "core/elephant/elephantgun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CElephantGun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CElephantGun>);
}

TEST(CElephantGun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CElephantGun>);
}

TEST(CElephantGun, IsConcrete) {
    static_assert(!std::is_abstract_v<CElephantGun>);
}

TEST(CElephantGun, Constructors) {
    static_assert(std::is_constructible_v<CElephantGun>);
}

TEST(CElephantGun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CElephantGun::process), void (CElephantGun::*)(float)>);
    static_assert(std::is_same_v<decltype(&CElephantGun::getActorType),
                                 const CDemonActorType &(CElephantGun::*)() const>);
    static_assert(std::is_same_v<decltype(&CElephantGun::onFired), void (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::fire), int (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::getDamage), float (CElephantGun::*)()>);
    static_assert(std::is_same_v<decltype(&CElephantGun::renderAimBeam), void (CElephantGun::*)()>);
}

TEST(CElephantGun, ItsRecordIsVersion1UnderCWeapon) {
    EXPECT_EQ(CElephantGun::kType.class_name, "CElephantGun");
    EXPECT_EQ(CElephantGun::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CElephantGun::kType.factory_func, nullptr);
    EXPECT_EQ(CElephantGun::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
