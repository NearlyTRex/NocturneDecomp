#include "core/door/door.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDoor, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CDoor>);
}

TEST(CDoor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDoor>);
}

TEST(CDoor, IsConcrete) {
    static_assert(!std::is_abstract_v<CDoor>);
}

TEST(CDoor, Constructors) {
    static_assert(std::is_constructible_v<CDoor>);
}

TEST(CDoor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDoor::setup), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::process), void (CDoor::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDoor::renderOpaque), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::renderBackground), void (CDoor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDoor::getBoundingBox),
                                 CBoundingBox3D *(CDoor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getCollisionType),
                                 ECollisionType (CDoor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getGroundType), EGroundType (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::getBlockVirtualDirectorFlag), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::allowBulletHoles), int (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::updateCollisionData), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::getActorType), CDemonActorType *(CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::archive), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::onOpened), void (CDoor::*)()>);
    static_assert(std::is_same_v<decltype(&CDoor::setSwingRange), void (CDoor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CDoor::getOpenStandPos),
                       common::CVector3f *(CDoor::*)(common::CVector3f *, common::CVector3f *,
                                                     common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDoor::getMoveType), int (CDoor::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDoor::onLocked), std::uint32_t (CDoor::*)()>);
}

} // namespace
} // namespace nocturne::core
