#include "core/vehicle/vehicle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CVehicle, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CVehicle>);
}

TEST(CVehicle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CVehicle>);
}

TEST(CVehicle, IsConcrete) {
    static_assert(!std::is_abstract_v<CVehicle>);
}

TEST(CVehicle, Constructors) {
    static_assert(std::is_constructible_v<CVehicle>);
}

TEST(CVehicle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CVehicle::setup), void (CVehicle::*)()>);
    static_assert(std::is_same_v<decltype(&CVehicle::process), void (CVehicle::*)(float)>);
    static_assert(std::is_same_v<decltype(&CVehicle::renderOpaque), int (CVehicle::*)()>);
    static_assert(std::is_same_v<decltype(&CVehicle::renderTransparent), int (CVehicle::*)()>);
    static_assert(std::is_same_v<decltype(&CVehicle::renderBackground), void (CVehicle::*)(int)>);
    static_assert(std::is_same_v<decltype(&CVehicle::getBoundingBox),
                                 CBoundingBox3D *(CVehicle::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CVehicle::getCollisionType),
                                 ECollisionType (CVehicle::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CVehicle::getActorType), CDemonActorType *(CVehicle::*)()>);
    static_assert(std::is_same_v<decltype(&CVehicle::archive), void (CVehicle::*)()>);
}

} // namespace
} // namespace nocturne::core
