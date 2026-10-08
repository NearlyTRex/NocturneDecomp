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
    static_assert(std::is_same_v<decltype(&CCameraView::setupPerspectiveAndFog),
                                 void (CCameraView::*)(CVector3f *, SProjectedVertex *)>);
    static_assert(std::is_same_v<decltype(&CCameraView::getFogValueAtPosition),
                                 int (CCameraView::*)(CVector3i *, SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CCameraView::testVisibility), int (CCameraView::*)(CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CCameraView::saveAlphaTransform), void (CCameraView::*)(int)>);
}

} // namespace
} // namespace nocturne::core
