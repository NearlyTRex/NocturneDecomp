#include "core/fire/fireeffect.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFireEffect, IsConcrete) {
    static_assert(!std::is_abstract_v<CFireEffect>);
}

TEST(CFireEffect, Constructors) {
    static_assert(std::is_constructible_v<CFireEffect>);
}

TEST(CFireEffect, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFireEffect::init), void (CFireEffect::*)()>);
    static_assert(std::is_same_v<decltype(&CFireEffect::process), void (CFireEffect::*)()>);
    static_assert(std::is_same_v<decltype(&CFireEffect::render), void (CFireEffect::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::renderDecals), void (CFireEffect::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createDefaultSmoke),
                                 void (CFireEffect::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createBulletImpact),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       int, CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createSpark),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createMuzzleFlash),
                       void (CFireEffect::*)(common::CVector3f *, common::CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::loadAssets), void (CFireEffect::*)()>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createSmokeParticle),
                                 void (CFireEffect::*)(common::CVector3f *, float,
                                                       common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createStake),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       common::CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createGlassParticle),
                                 void (CFireEffect::*)(STriangleVertices *, common::CVector3i *,
                                                       common::CVector3i *,
                                                       platform::SMRGLTextureBasic *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createFireball),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       int, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createRock),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       CKeyFramedModel *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLaserCone),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       float, int, int, int, float)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createLaserPath),
                       void (CFireEffect::*)(common::CVector3f *, common::CVector3f *, float, float,
                                             common::CVector3f *, float, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::traceLaser),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       SLaserInfo *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createExplosion),
                                 void (CFireEffect::*)(common::CVector3f *, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::getExplosionEffect),
                                 int (CFireEffect::*)(common::CVector3f *, float,
                                                      common::CVector3f *, float *)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createToss),
                       void (CFireEffect::*)(common::CVector3f *, common::UOrientationVector *,
                                             common::CVector3f *, float, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createCrater),
                                 void (CFireEffect::*)(common::CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createGunFlames),
                       void (CFireEffect::*)(common::CVector3f *, common::CVector3f *, int, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLightningBolt),
                                 void (CFireEffect::*)(common::CVector3f *, float, int, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLightningBoltDirectional),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       int, float, float)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createTrailFromPoints),
                       void (CFireEffect::*)(common::CVector3f *, common::CVector3f *, float, float,
                                             float, platform::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createShell),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *,
                                                       common::CVector3f *, CKeyFramedModel *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createPopcorn),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createRainDrop),
                                 void (CFireEffect::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::load), void (CFireEffect::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::save), void (CFireEffect::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::hasActiveMuzzleFlash), int (CFireEffect::*)()>);
}

} // namespace
} // namespace nocturne::core
