#include "core/marquee/marquee.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMarquee, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CMarquee>);
}

TEST(CMarquee, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMarquee>);
}

TEST(CMarquee, IsConcrete) {
    static_assert(!std::is_abstract_v<CMarquee>);
}

TEST(CMarquee, Constructors) {
    static_assert(std::is_constructible_v<CMarquee>);
}

TEST(CMarquee, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMarquee::setup), void (CMarquee::*)()>);
    static_assert(std::is_same_v<decltype(&CMarquee::process), void (CMarquee::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMarquee::renderOpaque), int (CMarquee::*)()>);
    static_assert(std::is_same_v<decltype(&CMarquee::renderTransparent), int (CMarquee::*)()>);
    static_assert(std::is_same_v<decltype(&CMarquee::getBoundingBox),
                                 CBoundingBox3D *(CMarquee::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CMarquee::getCollisionType),
                                 ECollisionType (CMarquee::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CMarquee::getActorType), CDemonActorType *(CMarquee::*)()>);
    static_assert(std::is_same_v<decltype(&CMarquee::archive), void (CMarquee::*)()>);
}

} // namespace
} // namespace nocturne::core
