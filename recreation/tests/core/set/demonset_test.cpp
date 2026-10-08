#include "core/set/demonset.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonSet, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonSet>);
}

TEST(CDemonSet, Constructors) {
    static_assert(std::is_constructible_v<CDemonSet>);
}

TEST(CDemonSet, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonSet::load), void (CDemonSet::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::renderSceneGeometry), void (CDemonSet::*)(float, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::initScene), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::snapshotActorTransformState),
                                 void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setCameraView), void (CDemonSet::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::findCameraByName), int (CDemonSet::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::reinitCamera), void (CDemonSet::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::processActors), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderStaticLights), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderScene), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderGogglesView), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::addDynamicLight), void (CDemonSet::*)(CDemonLight *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::addCoronaGlobe), void (CDemonSet::*)(CDemonGlobe *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::addQueuedCoronaGlobe),
                                 void (CDemonSet::*)(CDemonGlobe *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::renderLightDebugView), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::clearLights), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setLightingParameters),
                                 void (CDemonSet::*)(CVector3f *, UOrientationVector *, CVector3f *,
                                                     CVector3f *, CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::calculateSpatialLighting),
                                 int (CDemonSet::*)(CVector3i *, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::computeLighting),
                                 void (CDemonSet::*)(CVector3i *, CVector3i *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::computeVertexOmniLighting),
                                 void (CDemonSet::*)(CVector3f *, CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::pushScreenBoundsToCamera), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::rotateVerticies),
                                 void (CDemonSet::*)(int, CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::lightVerticies),
                       void (CDemonSet::*)(int, int, void *, CVector3i *, int, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::process), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::getReverbPresetAtPosition),
                                 int (CDemonSet::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::loadAssets), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderPrimitiveBatch),
                                 void (CDemonSet::*)(engine::SMRGLPrimitiveQuad *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderFaceListOrEnvMap),
                                 void (CDemonSet::*)(engine::SInputFace *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderPrimitiveList),
                                 void (CDemonSet::*)(engine::SMRGLHeaderPrimitive *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderTexturedPrimitiveListVariant),
                                 void (CDemonSet::*)(engine::SMRGLHeaderPrimitive *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::markMirrorCameraDirty), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setFlatColor), void (CDemonSet::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::cacheMirrorLighting),
                                 void (CDemonSet::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setGamma), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setCameraAmbientValue),
                                 void (CDemonSet::*)(int, float)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setCameraAmbientValueByGroup),
                                 void (CDemonSet::*)(int, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setCameraEnabled), void (CDemonSet::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setCameraEnabledByGroup),
                                 void (CDemonSet::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::addLightFilter),
                                 void (CDemonSet::*)(char *, C3DSLight **, CDemonLight **)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::initCameraShake),
                                 void (CDemonSet::*)(float, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::buildActorTypeLists), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::loadMasterLightStates), void (CDemonSet::*)(int *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::saveMasterLightStates), int (CDemonSet::*)(int *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::saveStateInfo), void (CDemonSet::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::loadStateInfo), void (CDemonSet::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::processCollisionTypes),
                                 float (CDemonSet::*)(CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::rayVoxelHeightQuery),
                                 float (CDemonSet::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testLineOcclusion),
                                 int (CDemonSet::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testVoxelRaycast),
                                 int (CDemonSet::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::raycast),
                                 float (CDemonSet::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::iterativeRaycast),
                                 float (CDemonSet::*)(CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testOBBCylinderCollision),
                                 int (CDemonSet::*)(SIntersectXZCylinder *, CBoundingBox3D *,
                                                    CVector3f *, CMatrix3x3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::testCylinderCollision),
                       float (CDemonSet::*)(float, float, float, float, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::pushRaytraceState), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::popRaytraceState), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::skipExactCollisions), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::init), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::ignore), void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::disableIgnore), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::enableCollision), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setRayType), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setRayTypeLaser),
                                 void (CDemonSet::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::notifyDamageListeners),
                                 void (CDemonSet::*)(CVector3f *, CVector3f *, SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::buildCollidableActorList), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::castVoxelShadow), void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::transferVoxelShadow),
                                 void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::commitVoxelBuffer), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::isPointInWater), int (CDemonSet::*)(CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::evaluateVirtualDirector),
                                 int (CDemonSet::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setPendingCamera), void (CDemonSet::*)(int, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::clearCameraSwitchCooldown), void (CDemonSet::*)()>);
}

} // namespace
} // namespace nocturne::core
