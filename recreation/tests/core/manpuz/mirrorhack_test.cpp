#include "core/manpuz/mirrorhack.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMirrorHack, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CMirrorHack>);
}

TEST(CMirrorHack, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMirrorHack>);
}

TEST(CMirrorHack, IsConcrete) {
    static_assert(!std::is_abstract_v<CMirrorHack>);
}

TEST(CMirrorHack, Constructors) {
    static_assert(std::is_constructible_v<CMirrorHack>);
}

TEST(CMirrorHack, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMirrorHack::setup), void (CMirrorHack::*)()>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::process), void (CMirrorHack::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::renderOpaque), int (CMirrorHack::*)()>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::getBoundingBox),
                                 CBoundingBox3D *(CMirrorHack::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::getCollisionType),
                                 ECollisionType (CMirrorHack::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::getInteractionInfo),
                                 void (CMirrorHack::*)(SInteractionInfo *)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::startInteraction),
                                 int (CMirrorHack::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::updateInteraction),
                                 int (CMirrorHack::*)(UOrientationVector *, SPlayerInput *)>);
    static_assert(std::is_same_v<decltype(&CMirrorHack::stopInteraction),
                                 void (CMirrorHack::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CMirrorHack::onLaserHit), void (CMirrorHack::*)(SLaserInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CMirrorHack::getActorType), CDemonActorType *(CMirrorHack::*)()>);
}

} // namespace
} // namespace nocturne::core
