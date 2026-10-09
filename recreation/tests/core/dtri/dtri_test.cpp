#include "core/dtri/dtri.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDtriFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&rayTriangleIntersection),
                       float (*)(CDemonTriangle *, common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&cylinderTriangleTest),
                                 void (*)(CDemonTriangle *, SIntersectXZCylinder *)>);
    static_assert(std::is_same_v<decltype(&rayTriangleFloorTest),
                                 int (*)(CDemonTriangle *, common::CVector3f *, float, float *)>);
}

} // namespace
} // namespace nocturne::core
