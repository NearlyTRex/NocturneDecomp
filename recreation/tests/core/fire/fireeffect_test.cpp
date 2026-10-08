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
                                 void (CFireEffect::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createBulletImpact),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, int, CDemonActor *)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createSpark),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createMuzzleFlash),
                                 void (CFireEffect::*)(CVector3f *, CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::loadAssets), void (CFireEffect::*)()>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createSmokeParticle),
                                 void (CFireEffect::*)(CVector3f *, float, CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createStake),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createGlassParticle),
                                 void (CFireEffect::*)(STriangleVertices *, CVector3i *,
                                                       CVector3i *, SMRGLTextureBasic *, int)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createFireball),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, int, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createRock),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, CKeyFramedModel *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLaserCone),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *, float, int, int,
                                                       int, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLaserPath),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *, float, float,
                                                       CVector3f *, float, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::traceLaser),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, SLaserInfo *, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createExplosion),
                                 void (CFireEffect::*)(CVector3f *, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::getExplosionEffect),
                                 int (CFireEffect::*)(CVector3f *, float, CVector3f *, float *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createToss),
                                 void (CFireEffect::*)(CVector3f *, UOrientationVector *,
                                                       CVector3f *, float, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createCrater),
                                 void (CFireEffect::*)(CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createGunFlames),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *, int, int)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createLightningBolt),
                                 void (CFireEffect::*)(CVector3f *, float, int, float)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::createLightningBoltDirectional),
                       void (CFireEffect::*)(CVector3f *, CVector3f *, int, float, float)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createTrailFromPoints),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *, float, float,
                                                       float, SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createShell),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *, CVector3f *,
                                                       CKeyFramedModel *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createPopcorn),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::createRainDrop),
                                 void (CFireEffect::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::load), void (CFireEffect::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CFireEffect::save), void (CFireEffect::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CFireEffect::hasActiveMuzzleFlash), int (CFireEffect::*)()>);
}

} // namespace
} // namespace nocturne::core
