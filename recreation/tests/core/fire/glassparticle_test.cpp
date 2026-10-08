#include "core/fire/glassparticle.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGlassParticle, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CGlassParticle>);
}

TEST(CGlassParticle, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGlassParticle>);
}

TEST(CGlassParticle, IsConcrete) {
    static_assert(!std::is_abstract_v<CGlassParticle>);
}

TEST(CGlassParticle, Constructors) {
    static_assert(std::is_constructible_v<CGlassParticle>);
}

TEST(CGlassParticle, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGlassParticle::process), void (CGlassParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CGlassParticle::render), void (CGlassParticle::*)()>);
    static_assert(std::is_same_v<decltype(&CGlassParticle::onCollision),
                                 int (CGlassParticle::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CGlassParticle::init),
                                 void (CGlassParticle::*)(STriangleVertices *, CVector3i *,
                                                          CVector3i *, SMRGLTextureBasic *, int)>);
}

} // namespace
} // namespace nocturne::core
