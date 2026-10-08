#include "core/backgnd/backgroundactor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBackgroundActor, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBackgroundActor>);
}

TEST(CBackgroundActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBackgroundActor>);
}

TEST(CBackgroundActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CBackgroundActor>);
}

TEST(CBackgroundActor, Constructors) {
    static_assert(std::is_constructible_v<CBackgroundActor>);
}

TEST(CBackgroundActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBackgroundActor::setup), void (CBackgroundActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::process), void (CBackgroundActor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::renderOpaque), int (CBackgroundActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::renderBackground),
                                 void (CBackgroundActor::*)(int)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getBoundingBox),
                                 CBoundingBox3D *(CBackgroundActor::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getCollisionType),
                                 ECollisionType (CBackgroundActor::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getGroundType),
                                 EGroundType (CBackgroundActor::*)()>);
    static_assert(std::is_same_v<decltype(&CBackgroundActor::getActorType),
                                 CDemonActorType *(CBackgroundActor::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBackgroundActor::archive), void (CBackgroundActor::*)()>);
}

} // namespace
} // namespace nocturne::core
