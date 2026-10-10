#include "core/spike/spike.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSpike, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CSpike>);
}

TEST(CSpike, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSpike>);
}

TEST(CSpike, IsConcrete) {
    static_assert(!std::is_abstract_v<CSpike>);
}

TEST(CSpike, Constructors) {
    static_assert(std::is_constructible_v<CSpike>);
}

TEST(CSpike, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSpike::setup), void (CSpike::*)()>);
    static_assert(std::is_same_v<decltype(&CSpike::process), void (CSpike::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSpike::renderOpaque), int (CSpike::*)()>);
    static_assert(std::is_same_v<decltype(&CSpike::getBoundingBox),
                                 CBoundingBox3D *(CSpike::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CSpike::getCollisionType),
                                 ECollisionType (CSpike::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CSpike::getActorType), CDemonActorType *(CSpike::*)()>);
    static_assert(std::is_same_v<decltype(&CSpike::archive), void (CSpike::*)()>);
}

} // namespace
} // namespace nocturne::core
