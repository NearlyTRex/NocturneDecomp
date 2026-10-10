#include "core/chain/chain.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CChain, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CChain>);
}

TEST(CChain, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CChain>);
}

TEST(CChain, IsConcrete) {
    static_assert(!std::is_abstract_v<CChain>);
}

TEST(CChain, Constructors) {
    static_assert(std::is_constructible_v<CChain>);
}

TEST(CChain, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CChain::setup), void (CChain::*)()>);
    static_assert(std::is_same_v<decltype(&CChain::process), void (CChain::*)(float)>);
    static_assert(std::is_same_v<decltype(&CChain::renderTransparent), int (CChain::*)()>);
    static_assert(std::is_same_v<decltype(&CChain::getBoundingBox),
                                 CBoundingBox3D *(CChain::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CChain::getCollisionType),
                                 ECollisionType (CChain::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CChain::getActorType), CDemonActorType *(CChain::*)()>);
    static_assert(std::is_same_v<decltype(&CChain::archive), void (CChain::*)()>);
}

} // namespace
} // namespace nocturne::core
