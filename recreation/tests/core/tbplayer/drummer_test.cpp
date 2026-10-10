#include "core/tbplayer/drummer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDrummer, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CDrummer>);
}

TEST(CDrummer, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDrummer>);
}

TEST(CDrummer, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrummer>);
}

TEST(CDrummer, Constructors) {
    static_assert(std::is_constructible_v<CDrummer>);
}

TEST(CDrummer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDrummer::setup), void (CDrummer::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDrummer::getActorType), CDemonActorType *(CDrummer::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDrummer::processDamage), void (CDrummer::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CDrummer::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CDrummer::*)(int, common::CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
