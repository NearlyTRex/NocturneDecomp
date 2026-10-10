#include "core/barrier/barrier.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBarrier, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBarrier>);
}

TEST(CBarrier, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBarrier>);
}

TEST(CBarrier, IsConcrete) {
    static_assert(!std::is_abstract_v<CBarrier>);
}

TEST(CBarrier, Constructors) {
    static_assert(std::is_constructible_v<CBarrier>);
}

TEST(CBarrier, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBarrier::setup), void (CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::renderTransparent), int (CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::getBoundingBox),
                                 CBoundingBox3D *(CBarrier::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBarrier::getCollisionType),
                                 ECollisionType (CBarrier::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBarrier::updateCollisionData), void (CBarrier::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBarrier::getActorType), CDemonActorType *(CBarrier::*)()>);
    static_assert(std::is_same_v<decltype(&CBarrier::archive), void (CBarrier::*)()>);
}

} // namespace
} // namespace nocturne::core
