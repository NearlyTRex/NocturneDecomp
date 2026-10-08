#include "core/dglobe/demonglobe.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonGlobe, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonGlobe>);
}

TEST(CDemonGlobe, Constructors) {
    static_assert(std::is_constructible_v<CDemonGlobe>);
}

TEST(CDemonGlobe, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CDemonGlobe::setPosition), void (CDemonGlobe::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::precomputeAttenuation),
                                 void (CDemonGlobe::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::renderCorona), void (CDemonGlobe::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonGlobe::renderCoronaTextured), void (CDemonGlobe::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonGlobe::intersectAABB),
                       int (CDemonGlobe::*)(CVector3f *, CMatrix3x3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::getAttenuationAtVertex),
                                 int (CDemonGlobe::*)(CVector3i *, CVector3i *)>);
}

} // namespace
} // namespace nocturne::core
