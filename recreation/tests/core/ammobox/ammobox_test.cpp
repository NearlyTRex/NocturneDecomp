#include "core/actor/demonactortype.h"
#include "core/ammobox/ammobox.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CAmmoBox, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CAmmoBox>);
}

TEST(CAmmoBox, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CAmmoBox>);
}

TEST(CAmmoBox, IsConcrete) {
    static_assert(!std::is_abstract_v<CAmmoBox>);
}

TEST(CAmmoBox, Constructors) {
    static_assert(std::is_constructible_v<CAmmoBox>);
}

TEST(CAmmoBox, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAmmoBox::setup), void (CAmmoBox::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::process), void (CAmmoBox::*)(float)>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::renderOpaque), int (CAmmoBox::*)()>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::getBoundingBox),
                                 CBoundingBox3D *(CAmmoBox::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::getCollisionType),
                                 ECollisionType (CAmmoBox::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::canPickup), int (CAmmoBox::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::getActorType),
                                 const CDemonActorType &(CAmmoBox::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CAmmoBox::archive), void (CAmmoBox::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CAmmoBox::openBox), void (CAmmoBox::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CAmmoBox::addToInventory), void (CAmmoBox::*)(CInventory *)>);
}

TEST(CAmmoBox, ItsRecordIsVersion4UnderCDemonActor) {
    EXPECT_EQ(CAmmoBox::kType.class_name, "CAmmoBox");
    EXPECT_EQ(CAmmoBox::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CAmmoBox::kType.factory_func, nullptr);
    EXPECT_EQ(CAmmoBox::kType.latest_version, 4);
}

} // namespace
} // namespace nocturne::core
