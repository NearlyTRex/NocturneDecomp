#include "core/dest/actordestination.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CActorDestination, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CActorDestination>);
}

TEST(CActorDestination, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CActorDestination>);
}

TEST(CActorDestination, IsConcrete) {
    static_assert(!std::is_abstract_v<CActorDestination>);
}

TEST(CActorDestination, Constructors) {
    static_assert(std::is_constructible_v<CActorDestination>);
}

TEST(CActorDestination, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CActorDestination::setup), void (CActorDestination::*)()>);
    static_assert(
        std::is_same_v<decltype(&CActorDestination::process), void (CActorDestination::*)(float)>);
    static_assert(std::is_same_v<decltype(&CActorDestination::renderTransparent),
                                 int (CActorDestination::*)()>);
    static_assert(std::is_same_v<decltype(&CActorDestination::getBoundingBox),
                                 CBoundingBox3D *(CActorDestination::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CActorDestination::getActorType),
                                 CDemonActorType *(CActorDestination::*)()>);
    static_assert(
        std::is_same_v<decltype(&CActorDestination::archive), void (CActorDestination::*)()>);
    static_assert(std::is_same_v<decltype(&CActorDestination::acceptsActor),
                                 int (CActorDestination::*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
