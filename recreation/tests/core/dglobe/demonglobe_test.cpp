#include "core/dglobe/demonglobe.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonGlobe, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonGlobe>);
}

TEST(CDemonGlobe, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonGlobe::setPosition),
                                 void (CDemonGlobe::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::precomputeAttenuation),
                                 void (CDemonGlobe::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::renderCorona), void (CDemonGlobe::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonGlobe::renderCoronaTextured), void (CDemonGlobe::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::intersectAABB),
                                 int (CDemonGlobe::*)(common::CVector3f *, common::CMatrix3x3f *,
                                                      common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonGlobe::getAttenuationAtVertex),
                                 int (CDemonGlobe::*)(common::CVector3i *, common::CVector3i *)>);
}

} // namespace
} // namespace nocturne::core
