#include "core/mirror/mirror.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMirror, IsConcrete) {
    static_assert(!std::is_abstract_v<CMirror>);
}

TEST(CMirror, Constructors) {
    static_assert(std::is_constructible_v<CMirror>);
}

TEST(CMirror, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CMirror::setupCorners),
                       void (CMirror::*)(CVector3f *, CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CMirror::clipAndRenderReflectedPrimitive),
                                 void (CMirror::*)(engine::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CMirror::renderReflectedPrimitive),
                                 int (CMirror::*)(engine::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CMirror::renderMirroredPrimitive),
                                 void (CMirror::*)(engine::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CMirror::renderMirrorQuadDepth), void (CMirror::*)()>);
}

} // namespace
} // namespace nocturne::core
