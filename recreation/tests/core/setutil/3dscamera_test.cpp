#include "core/setutil/3dscamera.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(C3DSCamera, IsConcrete) {
    static_assert(!std::is_abstract_v<C3DSCamera>);
}

TEST(C3DSCamera, Constructors) {
    static_assert(std::is_constructible_v<C3DSCamera>);
}

TEST(C3DSCamera, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C3DSCamera::free), void (C3DSCamera::*)()>);
    static_assert(std::is_same_v<decltype(&C3DSCamera::reset), void (C3DSCamera::*)()>);
    static_assert(std::is_same_v<decltype(&C3DSCamera::load),
                                 void (C3DSCamera::*)(common::CTextScanner &, int, const SFog &)>);
    static_assert(std::is_same_v<decltype(&C3DSCamera::loadPVS),
                                 void (C3DSCamera::*)(common::CTextScanner &)>);
    static_assert(
        std::is_same_v<decltype(&C3DSCamera::apply), void (C3DSCamera::*)(CDemonCamera *)>);
    static_assert(std::is_same_v<decltype(&C3DSCamera::testSphereInFrustum),
                                 int (C3DSCamera::*)(common::CVector3f *, float)>);
}

TEST(C3DSCamera, TheAmbientGroupAndSwitchingCanBeSetAndAResetClearsThem) {
    C3DSCamera camera;
    camera.setAmbientValue(0.5F);
    camera.setCameraGroup(3);
    camera.setEnabled(true);
    EXPECT_EQ(camera.getAmbientValue(), 0.5F);
    EXPECT_EQ(camera.getCameraGroup(), 3);
    EXPECT_TRUE(camera.getEnabled());
    camera.reset();
    EXPECT_EQ(camera.getAmbientValue(), 0.0F);
    EXPECT_EQ(camera.getCameraGroup(), 0);
    EXPECT_FALSE(camera.getEnabled());
}

} // namespace
} // namespace nocturne::core
