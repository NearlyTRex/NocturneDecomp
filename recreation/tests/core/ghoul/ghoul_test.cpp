#include "core/ghoul/ghoul.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGhoul, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CGhoul>);
}

TEST(CGhoul, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGhoul>);
}

TEST(CGhoul, IsConcrete) {
    static_assert(!std::is_abstract_v<CGhoul>);
}

TEST(CGhoul, Constructors) {
    static_assert(std::is_constructible_v<CGhoul>);
}

TEST(CGhoul, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGhoul::setup), void (CGhoul::*)()>);
    static_assert(std::is_same_v<decltype(&CGhoul::process), void (CGhoul::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGhoul::renderBackground), void (CGhoul::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::getTargetPoints), int (CGhoul::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGhoul::getActorType), CDemonActorType *(CGhoul::*)()>);
    static_assert(std::is_same_v<decltype(&CGhoul::archive), void (CGhoul::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::processDamage), void (CGhoul::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CGhoul::canBeAttracted), int (CGhoul::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGhoul::getTargetPoint),
                                 common::CVector3f *(CGhoul::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
