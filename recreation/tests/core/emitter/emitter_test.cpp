#include "core/emitter/emitter.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CEmitter, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CEmitter>);
}

TEST(CEmitter, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CEmitter>);
}

TEST(CEmitter, IsConcrete) {
    static_assert(!std::is_abstract_v<CEmitter>);
}

TEST(CEmitter, Constructors) {
    static_assert(std::is_constructible_v<CEmitter>);
}

TEST(CEmitter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CEmitter::setup), void (CEmitter::*)()>);
    static_assert(std::is_same_v<decltype(&CEmitter::process), void (CEmitter::*)(float)>);
    static_assert(std::is_same_v<decltype(&CEmitter::renderOpaque), int (CEmitter::*)()>);
    static_assert(std::is_same_v<decltype(&CEmitter::renderBackground), void (CEmitter::*)(int)>);
    static_assert(std::is_same_v<decltype(&CEmitter::getBoundingBox),
                                 CBoundingBox3D *(CEmitter::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CEmitter::getCollisionType),
                                 ECollisionType (CEmitter::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CEmitter::getActorType), CDemonActorType *(CEmitter::*)()>);
    static_assert(std::is_same_v<decltype(&CEmitter::archive), void (CEmitter::*)()>);
    static_assert(std::is_same_v<decltype(&CEmitter::launchFireballAtHero), void (CEmitter::*)()>);
}

} // namespace
} // namespace nocturne::core
