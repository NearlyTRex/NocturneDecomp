#include "core/actor/demonactortype.h"
#include "core/ammo/ammo.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CAmmo, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CAmmo>);
}

TEST(CAmmo, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CAmmo>);
}

TEST(CAmmo, IsConcrete) {
    static_assert(!std::is_abstract_v<CAmmo>);
}

TEST(CAmmo, Constructors) {
    static_assert(std::is_constructible_v<CAmmo>);
}

TEST(CAmmo, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAmmo::setup), void (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::process), void (CAmmo::*)(float)>);
    static_assert(std::is_same_v<decltype(&CAmmo::renderOpaque), int (CAmmo::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmo::getBoundingBox),
                                 CBoundingBox3D *(CAmmo::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::getCollisionType),
                                 ECollisionType (CAmmo::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::canPickup), int (CAmmo::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CAmmo::getActorType), const CDemonActorType &(CAmmo::*)() const>);
    static_assert(std::is_same_v<decltype(&CAmmo::archive), void (CAmmo::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setWeaponClass), void (CAmmo::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CAmmo::setAmmoCount), void (CAmmo::*)(int)>);
}

TEST(CAmmo, ItsRecordIsVersion1UnderCDemonActor) {
    EXPECT_EQ(CAmmo::kType.class_name, "CAmmo");
    EXPECT_EQ(CAmmo::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CAmmo::kType.factory_func, nullptr);
    EXPECT_EQ(CAmmo::kType.latest_version, 1);
}

} // namespace
} // namespace nocturne::core
