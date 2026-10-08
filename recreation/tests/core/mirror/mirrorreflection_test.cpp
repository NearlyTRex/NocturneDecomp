#include "core/mirror/mirrorreflection.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMirrorReflection, IsConcrete) {
    static_assert(!std::is_abstract_v<CMirrorReflection>);
}

TEST(CMirrorReflection, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMirrorReflection::setupMirrorReflection),
                                 void (CMirrorReflection::*)(CVector3f *, CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CMirrorReflection::transformMirrorVertex),
                                 CVector3i *(CMirrorReflection::*)(CVector3i *, CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CMirrorReflection::transformMirrorEdgeToIntegerSpace),
                       CVector3i *(CMirrorReflection::*)(CVector3i *, CVector3i *, CVector3i *)>);
}

} // namespace
} // namespace nocturne::core
