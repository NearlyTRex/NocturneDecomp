#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dlight/cameraview.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCameraView, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCameraView>);
}

TEST(CCameraView, IsConcrete) {
    static_assert(!std::is_abstract_v<CCameraView>);
}

TEST(CCameraView, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CCameraView::setupPerspectiveAndFog),
                       void (CCameraView::*)(common::CVector3f *, platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CCameraView::getFogValueAtPosition),
                       int (CCameraView::*)(common::CVector3i *, platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CCameraView::saveAlphaTransform), void (CCameraView::*)(int)>);
}

// A 28mm lens at 256 to the unit, at the origin unturned, with no fog and nothing to save.
TEST(CCameraView, AViewHasALensButNoFog) {
    CCameraView view;
    EXPECT_EQ(view.getFocalLength(), 28.0F);
    EXPECT_EQ(view.getFixedPointScale(), 256.0F);
    EXPECT_EQ(view.getPosition().x, 0.0F);
    EXPECT_EQ(view.getRotationMatrix().m[1].y, 0.0F);
    common::CVector3i point{.x = 1, .y = 2, .z = 3};
    EXPECT_EQ(view.getFogValueAtPosition(&point, nullptr), 0);
    view.setupPerspectiveAndFog(nullptr, nullptr);
    view.saveAlphaTransform(3);
    EXPECT_EQ(point.x, 1);
}

} // namespace
} // namespace nocturne::core
