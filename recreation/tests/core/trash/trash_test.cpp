#include "core/trash/trash.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTrash, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CTrash>);
}

TEST(CTrash, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CTrash>);
}

TEST(CTrash, IsConcrete) {
    static_assert(!std::is_abstract_v<CTrash>);
}

TEST(CTrash, Constructors) {
    static_assert(std::is_constructible_v<CTrash>);
}

TEST(CTrash, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTrash::setup), void (CTrash::*)()>);
    static_assert(std::is_same_v<decltype(&CTrash::process), void (CTrash::*)(float)>);
    static_assert(std::is_same_v<decltype(&CTrash::renderOpaque), int (CTrash::*)()>);
    static_assert(std::is_same_v<decltype(&CTrash::getBoundingBox),
                                 CBoundingBox3D *(CTrash::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CTrash::getCollisionType),
                                 ECollisionType (CTrash::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CTrash::getActorType), CDemonActorType *(CTrash::*)()>);
    static_assert(std::is_same_v<decltype(&CTrash::archive), void (CTrash::*)()>);
}

} // namespace
} // namespace nocturne::core
