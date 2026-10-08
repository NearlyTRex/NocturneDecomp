#include "core/imp/imp.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CImp, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CImp>);
}

TEST(CImp, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CImp>);
}

TEST(CImp, IsConcrete) {
    static_assert(!std::is_abstract_v<CImp>);
}

TEST(CImp, Constructors) {
    static_assert(std::is_constructible_v<CImp>);
}

TEST(CImp, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CImp::setup), void (CImp::*)()>);
    static_assert(std::is_same_v<decltype(&CImp::process), void (CImp::*)(float)>);
    static_assert(std::is_same_v<decltype(&CImp::getCollisionType),
                                 ECollisionType (CImp::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CImp::getTargetPoints), int (CImp::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CImp::getActorType), CDemonActorType *(CImp::*)()>);
    static_assert(std::is_same_v<decltype(&CImp::archive), void (CImp::*)()>);
    static_assert(std::is_same_v<decltype(&CImp::processDamage), void (CImp::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CImp::attractActorToward),
                                 int (CImp::*)(CDemonActor *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CImp::getCarryObjToBodyXForm),
                                 CMatrix3x4f *(CImp::*)(int, CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
