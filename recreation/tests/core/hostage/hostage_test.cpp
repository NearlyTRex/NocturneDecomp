#include "core/hostage/hostage.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHostage, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CHostage>);
}

TEST(CHostage, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHostage>);
}

TEST(CHostage, IsConcrete) {
    static_assert(!std::is_abstract_v<CHostage>);
}

TEST(CHostage, Constructors) {
    static_assert(std::is_constructible_v<CHostage>);
}

TEST(CHostage, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHostage::setup), void (CHostage::*)()>);
    static_assert(std::is_same_v<decltype(&CHostage::process), void (CHostage::*)(float)>);
    static_assert(std::is_same_v<decltype(&CHostage::renderOpaque), int (CHostage::*)()>);
    static_assert(std::is_same_v<decltype(&CHostage::renderBackground), void (CHostage::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CHostage::getActorType), CDemonActorType *(CHostage::*)()>);
    static_assert(std::is_same_v<decltype(&CHostage::archive), void (CHostage::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHostage::isGrabbable), int (CHostage::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CHostage::canBeGrabbed), int (CHostage::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CHostage::getGrabbed), int (CHostage::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CHostage::processDamage), void (CHostage::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CHostage::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CHostage::*)(int, common::CMatrix3x4f *)>);
}

} // namespace
} // namespace nocturne::core
