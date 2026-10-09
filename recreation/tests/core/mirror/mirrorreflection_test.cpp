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
                                 void (CMirrorReflection::*)(common::CVector3f *,
                                                             common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CMirrorReflection::transformMirrorVertex),
                                 common::CVector3i *(CMirrorReflection::*)(common::CVector3i *,
                                                                           common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CMirrorReflection::transformMirrorEdgeToIntegerSpace),
                                 common::CVector3i *(CMirrorReflection::*)(common::CVector3i *,
                                                                           common::CVector3i *,
                                                                           common::CVector3i *)>);
}

} // namespace
} // namespace nocturne::core
