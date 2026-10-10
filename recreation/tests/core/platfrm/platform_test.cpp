#include "core/platfrm/platform.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CPlatform, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CPlatform>);
}

TEST(CPlatform, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPlatform>);
}

TEST(CPlatform, IsConcrete) {
    static_assert(!std::is_abstract_v<CPlatform>);
}

TEST(CPlatform, Constructors) {
    static_assert(std::is_constructible_v<CPlatform>);
}

TEST(CPlatform, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPlatform::setup), void (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::process), void (CPlatform::*)(float)>);
    static_assert(std::is_same_v<decltype(&CPlatform::renderOpaque), int (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::renderBackground), void (CPlatform::*)(int)>);
    static_assert(std::is_same_v<decltype(&CPlatform::getBoundingBox),
                                 CBoundingBox3D *(CPlatform::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CPlatform::getCollisionType),
                                 ECollisionType (CPlatform::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::getGroundType), EGroundType (CPlatform::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::getBlockVirtualDirectorFlag), int (CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::allowBulletHoles), int (CPlatform::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::getActorType), CDemonActorType *(CPlatform::*)()>);
    static_assert(std::is_same_v<decltype(&CPlatform::archive), void (CPlatform::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::startMovement), void (CPlatform::*)(float, float)>);
    static_assert(
        std::is_same_v<decltype(&CPlatform::attachActor), void (CPlatform::*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
