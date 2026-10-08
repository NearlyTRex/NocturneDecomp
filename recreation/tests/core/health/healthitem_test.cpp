#include "core/health/healthitem.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHealthItem, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CHealthItem>);
}

TEST(CHealthItem, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHealthItem>);
}

TEST(CHealthItem, IsConcrete) {
    static_assert(!std::is_abstract_v<CHealthItem>);
}

TEST(CHealthItem, Constructors) {
    static_assert(std::is_constructible_v<CHealthItem>);
}

TEST(CHealthItem, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHealthItem::setup), void (CHealthItem::*)()>);
    static_assert(std::is_same_v<decltype(&CHealthItem::process), void (CHealthItem::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHealthItem::renderOpaque), int (CHealthItem::*)()>);
    static_assert(std::is_same_v<decltype(&CHealthItem::getBoundingBox),
                                 CBoundingBox3D *(CHealthItem::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CHealthItem::getCollisionType),
                                 ECollisionType (CHealthItem::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::onPickup), void (CHealthItem::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::canPickup), int (CHealthItem::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::getActorType), CDemonActorType *(CHealthItem::*)()>);
    static_assert(std::is_same_v<decltype(&CHealthItem::archive), void (CHealthItem::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHealthItem::useItem), int (CHealthItem::*)(CCharacter *)>);
}

} // namespace
} // namespace nocturne::core
