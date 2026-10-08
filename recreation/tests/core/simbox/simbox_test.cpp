#include "core/simbox/simbox.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSimBox, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CSimBox>);
}

TEST(CSimBox, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSimBox>);
}

TEST(CSimBox, IsConcrete) {
    static_assert(!std::is_abstract_v<CSimBox>);
}

TEST(CSimBox, Constructors) {
    static_assert(std::is_constructible_v<CSimBox>);
}

TEST(CSimBox, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSimBox::setup), void (CSimBox::*)()>);
    static_assert(std::is_same_v<decltype(&CSimBox::process), void (CSimBox::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSimBox::renderOpaque), int (CSimBox::*)()>);
    static_assert(std::is_same_v<decltype(&CSimBox::getBoundingBox),
                                 CBoundingBox3D *(CSimBox::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CSimBox::getCollisionType),
                                 ECollisionType (CSimBox::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CSimBox::getActorType), CDemonActorType *(CSimBox::*)()>);
    static_assert(std::is_same_v<decltype(&CSimBox::archive), void (CSimBox::*)()>);
}

} // namespace
} // namespace nocturne::core
