#include "core/npc/npc.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CNPC, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CNPC>);
}

TEST(CNPC, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CNPC>);
}

TEST(CNPC, IsConcrete) {
    static_assert(!std::is_abstract_v<CNPC>);
}

TEST(CNPC, Constructors) {
    static_assert(std::is_constructible_v<CNPC>);
}

TEST(CNPC, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CNPC::setup), void (CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::process), void (CNPC::*)(float)>);
    static_assert(std::is_same_v<decltype(&CNPC::renderBackground), void (CNPC::*)(int)>);
    static_assert(std::is_same_v<decltype(&CNPC::getPathMap), CPathMap *(CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::getActorType), CDemonActorType *(CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::archive), void (CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::isInvulnerable), int (CNPC::*)()>);
    static_assert(std::is_same_v<decltype(&CNPC::processDamage), void (CNPC::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
