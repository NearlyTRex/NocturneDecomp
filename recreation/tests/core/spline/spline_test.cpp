#include "core/spline/spline.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSplineFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&computeSplineBasis), void (*)(float *, float, float)>);
    static_assert(std::is_same_v<decltype(&evaluateSplinePoint3D),
                                 CVector3f *(*)(float *, CVector3f *, CVector3f *, CVector3f *,
                                                CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&evaluateSplineTangent3D),
                                 CVector3f *(*)(float *, CVector3f *, CVector3f *, CVector3f *,
                                                CVector3f *, CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
