#include "core/gore/gore.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGore, IsConcrete) {
    static_assert(!std::is_abstract_v<CGore>);
}

TEST(CGore, Constructors) {
    static_assert(std::is_constructible_v<CGore>);
}

TEST(CGore, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGore::reset), void (CGore::*)()>);
    static_assert(std::is_same_v<decltype(&CGore::renderParticles), void (CGore::*)()>);
    static_assert(std::is_same_v<decltype(&CGore::renderDecals), void (CGore::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CGore::process), void (CGore::*)()>);
    static_assert(std::is_same_v<decltype(&CGore::spawnBloodParticles),
                                 void (CGore::*)(common::CVector3f *, common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CGore::createGroundBloodSplat),
                                 void (CGore::*)(common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CGore::createWallBloodSplat),
                                 void (CGore::*)(common::CVector3f *, common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CGore::spawnBloodBurst),
                       void (CGore::*)(common::CVector3f *, common::CVector3f *, int, int)>);
    static_assert(std::is_same_v<decltype(&CGore::createBloodPool),
                                 void (CGore::*)(common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CGore::loadAssets), void (CGore::*)()>);
    static_assert(std::is_same_v<decltype(&CGore::spawnFliesOnActor),
                                 void (CGore::*)(CDemonActor *, int, float, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGore::createFootstep),
                                 void (CGore::*)(common::CVector3f *, common::UOrientationVector *,
                                                 int, int, int)>);
    static_assert(std::is_same_v<decltype(&CGore::findBloodTypeAtPosition),
                                 int (CGore::*)(common::CVector3f *, int *)>);
    static_assert(std::is_same_v<decltype(&CGore::load), int (CGore::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CGore::save), int (CGore::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
