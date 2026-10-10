#include "core/hero/heroplaceholder.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHeroPlaceholder, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, IsConcrete) {
    static_assert(!std::is_abstract_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, Constructors) {
    static_assert(std::is_constructible_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::renderTransparent),
                                 int (CHeroPlaceholder::*)()>);
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::getBoundingBox),
                                 CBoundingBox3D *(CHeroPlaceholder::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::getActorType),
                                 CDemonActorType *(CHeroPlaceholder::*)()>);
    static_assert(
        std::is_same_v<decltype(&CHeroPlaceholder::archive), void (CHeroPlaceholder::*)()>);
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::createHero),
                                 CHero *(CHeroPlaceholder::*)(EHeroType)>);
}

} // namespace
} // namespace nocturne::core
