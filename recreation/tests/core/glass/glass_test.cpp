#include "core/glass/glass.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGlass, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CGlass>);
}

TEST(CGlass, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGlass>);
}

TEST(CGlass, IsConcrete) {
    static_assert(!std::is_abstract_v<CGlass>);
}

TEST(CGlass, Constructors) {
    static_assert(std::is_constructible_v<CGlass>);
}

TEST(CGlass, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGlass::setup), void (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::process), void (CGlass::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGlass::renderOpaque), int (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::renderTransparent), int (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::renderBackground), void (CGlass::*)(int)>);
    static_assert(std::is_same_v<decltype(&CGlass::getBoundingBox),
                                 CBoundingBox3D *(CGlass::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CGlass::getCollisionType),
                                 ECollisionType (CGlass::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CGlass::getGroundType), EGroundType (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::onLaserHit), void (CGlass::*)(SLaserInfo *)>);
    static_assert(std::is_same_v<decltype(&CGlass::getActorType), CDemonActorType *(CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::archive), void (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::renderBrokenGlass), void (CGlass::*)()>);
    static_assert(std::is_same_v<decltype(&CGlass::shatter), void (CGlass::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGlass::checkBreakableCondition), int (CGlass::*)()>);
}

} // namespace
} // namespace nocturne::core
