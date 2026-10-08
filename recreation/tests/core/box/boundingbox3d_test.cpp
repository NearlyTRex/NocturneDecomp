#include "core/box/boundingbox3d.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBoundingBox3D, IsConcrete) {
    static_assert(!std::is_abstract_v<CBoundingBox3D>);
}

TEST(CBoundingBox3D, Constructors) {
    static_assert(std::is_constructible_v<CBoundingBox3D>);
}

TEST(CBoundingBox3D, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CBoundingBox3D::expand), void (CBoundingBox3D::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::getCorner),
                                 CVector3f *(CBoundingBox3D::*)(CVector3f *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::isVisible), int (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::getBoundingBoxScreenSize),
                                 float (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesRayIntersect),
                                 float (CBoundingBox3D::*)(CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::reset), void (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesBoxIntersect),
                                 int (CBoundingBox3D::*)(CBoundingBox3D *)>);
    static_assert(
        std::is_same_v<decltype(&CBoundingBox3D::getMaximumBound), float (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::render), void (CBoundingBox3D::*)()>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::clampPoint),
                                 CVector3f *(CBoundingBox3D::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CBoundingBox3D::doesSphereIntersect),
                                 int (CBoundingBox3D::*)(CVector3f *, float)>);
}

} // namespace
} // namespace nocturne::core
