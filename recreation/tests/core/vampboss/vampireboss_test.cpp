#include "core/vampboss/vampireboss.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CVampireBoss, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CVampireBoss>);
}

TEST(CVampireBoss, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CVampireBoss>);
}

TEST(CVampireBoss, IsConcrete) {
    static_assert(!std::is_abstract_v<CVampireBoss>);
}

TEST(CVampireBoss, Constructors) {
    static_assert(std::is_constructible_v<CVampireBoss>);
}

TEST(CVampireBoss, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CVampireBoss::setup), void (CVampireBoss::*)()>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::process), void (CVampireBoss::*)(float)>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::renderOpaque), int (CVampireBoss::*)()>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::getCollisionType),
                                 ECollisionType (CVampireBoss::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::getTargetPoints),
                                 int (CVampireBoss::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::getActorType),
                                 CDemonActorType *(CVampireBoss::*)()>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::archive), void (CVampireBoss::*)()>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::processDamage),
                                 void (CVampireBoss::*)(SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CVampireBoss::getDeathState), EDeathState (CVampireBoss::*)()>);
    static_assert(std::is_same_v<decltype(&CVampireBoss::getCarryObjToBodyXForm),
                                 CMatrix3x4f *(CVampireBoss::*)(int, CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
