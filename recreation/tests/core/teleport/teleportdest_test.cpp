#include "core/teleport/teleportdest.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTeleportDest, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTeleportDest>);
}

TEST(CTeleportDest, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTeleportDest>);
}

TEST(CTeleportDest, IsConcrete) {
    static_assert(!std::is_abstract_v<CTeleportDest>);
}

TEST(CTeleportDest, Constructors) {
    static_assert(std::is_constructible_v<CTeleportDest>);
}

TEST(CTeleportDest, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTeleportDest::getBoundingBox),
                                 CBoundingBox3D *(CTeleportDest::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTeleportDest::getCollisionType),
                                 ECollisionType (CTeleportDest::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CTeleportDest::getActorType),
                                 CDemonActorType *(CTeleportDest::*)()>);
}

} // namespace
} // namespace nocturne::core
