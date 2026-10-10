#include "core/litecone/lightcone.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightCone, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CLightCone>);
}

TEST(CLightCone, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLightCone>);
}

TEST(CLightCone, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightCone>);
}

TEST(CLightCone, Constructors) {
    static_assert(std::is_constructible_v<CLightCone>);
}

TEST(CLightCone, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightCone::setup), void (CLightCone::*)()>);
    static_assert(std::is_same_v<decltype(&CLightCone::process), void (CLightCone::*)(float)>);
    static_assert(std::is_same_v<decltype(&CLightCone::renderTransparent), int (CLightCone::*)()>);
    static_assert(std::is_same_v<decltype(&CLightCone::getBoundingBox),
                                 CBoundingBox3D *(CLightCone::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CLightCone::getCollisionType),
                                 ECollisionType (CLightCone::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CLightCone::getActorType), CDemonActorType *(CLightCone::*)()>);
    static_assert(std::is_same_v<decltype(&CLightCone::archive), void (CLightCone::*)()>);
}

} // namespace
} // namespace nocturne::core
