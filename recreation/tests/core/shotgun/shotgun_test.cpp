#include "core/actor/demonactortype.h"
#include "core/shotgun/shotgun.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CShotgun, DerivesFromCWeapon) {
    static_assert(std::is_base_of_v<CWeapon, CShotgun>);
}

TEST(CShotgun, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CShotgun>);
}

TEST(CShotgun, IsConcrete) {
    static_assert(!std::is_abstract_v<CShotgun>);
}

TEST(CShotgun, Constructors) {
    static_assert(std::is_constructible_v<CShotgun>);
}

TEST(CShotgun, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CShotgun::process), void (CShotgun::*)(float)>);
    static_assert(std::is_same_v<decltype(&CShotgun::getActorType),
                                 const CDemonActorType &(CShotgun::*)() const>);
    static_assert(std::is_same_v<decltype(&CShotgun::onFired), void (CShotgun::*)()>);
    static_assert(std::is_same_v<decltype(&CShotgun::fire), int (CShotgun::*)()>);
    static_assert(std::is_same_v<decltype(&CShotgun::getDamage), float (CShotgun::*)()>);
    static_assert(std::is_same_v<decltype(&CShotgun::renderAimBeam), void (CShotgun::*)()>);
}

TEST(CShotgun, ItsRecordIsVersion1UnderCWeapon) {
    EXPECT_EQ(CShotgun::kType.class_name, "CShotgun");
    EXPECT_EQ(CShotgun::kType.parent_type, &CWeapon::kType);
    EXPECT_EQ(CShotgun::kType.factory_func, nullptr);
    EXPECT_EQ(CShotgun::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
