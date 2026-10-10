#include "core/bodypart/bodypart.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBodyPart, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBodyPart>);
}

TEST(CBodyPart, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBodyPart>);
}

TEST(CBodyPart, IsConcrete) {
    static_assert(!std::is_abstract_v<CBodyPart>);
}

TEST(CBodyPart, Constructors) {
    static_assert(std::is_constructible_v<CBodyPart>);
}

TEST(CBodyPart, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBodyPart::setup), void (CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::process), void (CBodyPart::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::renderOpaque), int (CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::renderTransparent), int (CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::renderBackground), void (CBodyPart::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::getBoundingBox),
                                 CBoundingBox3D *(CBodyPart::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::getCollisionType),
                                 ECollisionType (CBodyPart::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::getAllowedMeleeAttackTypes), int (CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::fillAttackDamageInfo),
                                 void (CBodyPart::*)(int, SDamageInfo *, CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::canPickup), int (CBodyPart::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::pickup), void (CBodyPart::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::onDropped), void (CBodyPart::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::getCarrier), CDemonActor *(CBodyPart::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::getActorType), CDemonActorType *(CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::archive), void (CBodyPart::*)()>);
    static_assert(std::is_same_v<decltype(&CBodyPart::setCounts), void (CBodyPart::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::finalizeGeometry), void (CBodyPart::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::addAttachedModel),
                       void (CBodyPart::*)(char *, common::CVector3f *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CBodyPart::addFire), void (CBodyPart::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBodyPart::addTexture), int (CBodyPart::*)(char *)>);
}

} // namespace
} // namespace nocturne::core
