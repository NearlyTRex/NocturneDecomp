#include "core/flamecan/flamecan.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFlameCan, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CFlameCan>);
}

TEST(CFlameCan, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFlameCan>);
}

TEST(CFlameCan, IsConcrete) {
    static_assert(!std::is_abstract_v<CFlameCan>);
}

TEST(CFlameCan, Constructors) {
    static_assert(std::is_constructible_v<CFlameCan>);
}

TEST(CFlameCan, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFlameCan::setup), void (CFlameCan::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameCan::process), void (CFlameCan::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFlameCan::renderOpaque), int (CFlameCan::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameCan::renderTransparent), int (CFlameCan::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameCan::getBoundingBox),
                                 CBoundingBox3D *(CFlameCan::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFlameCan::getCollisionType),
                                 ECollisionType (CFlameCan::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CFlameCan::getTargetPoints),
                                 int (CFlameCan::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CFlameCan::getActorType), CDemonActorType *(CFlameCan::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameCan::archive), void (CFlameCan::*)()>);
    static_assert(std::is_same_v<decltype(&CFlameCan::ignite), void (CFlameCan::*)()>);
}

} // namespace
} // namespace nocturne::core
