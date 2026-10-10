#include "engine/keyframe/keyframe.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineKeyframeFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&calculateSurfaceNormal),
                                 void (*)(common::CVector3i *, SMRGLPrimitiveTriangle *)>);
    static_assert(
        std::is_same_v<decltype(&loadAndInterpolateKeyframes), void (*)(SMRGLKeyframeModel *)>);
    static_assert(std::is_same_v<decltype(&interpolateCubicKeyframes),
                                 SMRGLHeaderExtended *(*)(SMRGLKeyframeModel *)>);
}

} // namespace
} // namespace nocturne::engine
