#include "core/drone/drone.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDrone, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CDrone>);
}

TEST(CDrone, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDrone>);
}

TEST(CDrone, IsConcrete) {
    static_assert(!std::is_abstract_v<CDrone>);
}

TEST(CDrone, Constructors) {
    static_assert(std::is_constructible_v<CDrone>);
}

TEST(CDrone, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDrone::setup), void (CDrone::*)()>);
    static_assert(std::is_same_v<decltype(&CDrone::process), void (CDrone::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDrone::getTargetPoints), int (CDrone::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDrone::getActorType), CDemonActorType *(CDrone::*)()>);
    static_assert(std::is_same_v<decltype(&CDrone::archive), void (CDrone::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDrone::processDamage), void (CDrone::*)(SDamageInfo *)>);
}

} // namespace
} // namespace nocturne::core
