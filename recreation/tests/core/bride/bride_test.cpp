#include "core/bride/bride.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBride, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBride>);
}

TEST(CBride, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBride>);
}

TEST(CBride, IsConcrete) {
    static_assert(!std::is_abstract_v<CBride>);
}

TEST(CBride, Constructors) {
    static_assert(std::is_constructible_v<CBride>);
}

TEST(CBride, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBride::setup), void (CBride::*)()>);
    static_assert(std::is_same_v<decltype(&CBride::process), void (CBride::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CBride::getTargetPoints), int (CBride::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBride::getActorType), CDemonActorType *(CBride::*)()>);
    static_assert(std::is_same_v<decltype(&CBride::archive), void (CBride::*)()>);
    static_assert(
        std::is_same_v<decltype(&CBride::processDamage), void (CBride::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBride::getTargetPoint),
                                 common::CVector3f *(CBride::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
