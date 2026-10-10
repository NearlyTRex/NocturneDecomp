#include "core/filmreel/filmprojector.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFilmProjector, DerivesFromCActorDestination) {
    static_assert(std::is_base_of_v<CActorDestination, CFilmProjector>);
}

TEST(CFilmProjector, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFilmProjector>);
}

TEST(CFilmProjector, IsConcrete) {
    static_assert(!std::is_abstract_v<CFilmProjector>);
}

TEST(CFilmProjector, Constructors) {
    static_assert(std::is_constructible_v<CFilmProjector>);
}

TEST(CFilmProjector, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFilmProjector::setup), void (CFilmProjector::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFilmProjector::process), void (CFilmProjector::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CFilmProjector::renderOpaque), int (CFilmProjector::*)()>);
    static_assert(std::is_same_v<decltype(&CFilmProjector::getBoundingBox),
                                 CBoundingBox3D *(CFilmProjector::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFilmProjector::getActorType),
                                 CDemonActorType *(CFilmProjector::*)()>);
    static_assert(std::is_same_v<decltype(&CFilmProjector::archive), void (CFilmProjector::*)()>);
}

} // namespace
} // namespace nocturne::core
