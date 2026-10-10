#include "core/anvil/anvil.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CAnvil, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CAnvil>);
}

TEST(CAnvil, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CAnvil>);
}

TEST(CAnvil, IsConcrete) {
    static_assert(!std::is_abstract_v<CAnvil>);
}

TEST(CAnvil, Constructors) {
    static_assert(std::is_constructible_v<CAnvil>);
}

TEST(CAnvil, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CAnvil::setup), void (CAnvil::*)()>);
    static_assert(std::is_same_v<decltype(&CAnvil::process), void (CAnvil::*)(float)>);
    static_assert(std::is_same_v<decltype(&CAnvil::renderOpaque), int (CAnvil::*)()>);
    static_assert(std::is_same_v<decltype(&CAnvil::getBoundingBox),
                                 CBoundingBox3D *(CAnvil::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CAnvil::getCollisionType),
                                 ECollisionType (CAnvil::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CAnvil::getActorType), CDemonActorType *(CAnvil::*)()>);
    static_assert(std::is_same_v<decltype(&CAnvil::archive), void (CAnvil::*)()>);
}

} // namespace
} // namespace nocturne::core
