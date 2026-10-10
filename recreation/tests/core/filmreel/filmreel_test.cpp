#include "core/filmreel/filmreel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFilmReel, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CFilmReel>);
}

TEST(CFilmReel, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFilmReel>);
}

TEST(CFilmReel, IsConcrete) {
    static_assert(!std::is_abstract_v<CFilmReel>);
}

TEST(CFilmReel, Constructors) {
    static_assert(std::is_constructible_v<CFilmReel>);
}

TEST(CFilmReel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFilmReel::setup), void (CFilmReel::*)()>);
    static_assert(std::is_same_v<decltype(&CFilmReel::process), void (CFilmReel::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFilmReel::renderOpaque), int (CFilmReel::*)()>);
    static_assert(std::is_same_v<decltype(&CFilmReel::renderBackground), void (CFilmReel::*)(int)>);
    static_assert(std::is_same_v<decltype(&CFilmReel::getBoundingBox),
                                 CBoundingBox3D *(CFilmReel::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFilmReel::getCollisionType),
                                 ECollisionType (CFilmReel::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CFilmReel::canPickup), int (CFilmReel::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CFilmReel::pickup), void (CFilmReel::*)(CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CFilmReel::onDropped), void (CFilmReel::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFilmReel::getCarrier), CDemonActor *(CFilmReel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFilmReel::getActorType), CDemonActorType *(CFilmReel::*)()>);
    static_assert(std::is_same_v<decltype(&CFilmReel::archive), void (CFilmReel::*)()>);
}

} // namespace
} // namespace nocturne::core
