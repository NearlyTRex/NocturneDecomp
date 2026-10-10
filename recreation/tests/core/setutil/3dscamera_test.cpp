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
    static_assert(std::is_same_v<decltype(&C3DSCamera::load), void (C3DSCamera::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&C3DSCamera::loadPVS), void (C3DSCamera::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&C3DSCamera::apply), void (C3DSCamera::*)(CDemonCamera *)>);
    static_assert(std::is_same_v<decltype(&C3DSCamera::testSphereInFrustum),
                                 int (C3DSCamera::*)(common::CVector3f *, float)>);
}

} // namespace
} // namespace nocturne::core
