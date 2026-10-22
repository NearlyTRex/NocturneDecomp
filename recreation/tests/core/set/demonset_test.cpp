#include "common/math/vector3i.h"
#include "core/set/demonset.h"
#include "platform/rendervertex.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <span>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

TEST(CDemonSet, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonSet>);
}

TEST(CDemonSet, Constructors) {
    static_assert(std::is_constructible_v<CDemonSet, const SDemonSetOwners &>);
    static_assert(!std::is_default_constructible_v<CDemonSet>);
}

TEST(CDemonSet, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CDemonSet::load), void (CDemonSet::*)(std::string_view)>);
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
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setLightingParameters),
                       void (CDemonSet::*)(common::CVector3f *, common::UOrientationVector *,
                                           common::CVector3f *, common::CVector3f *,
                                           common::CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::calculateSpatialLighting),
                                 int (CDemonSet::*)(common::CVector3i *, common::CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::computeLighting),
                       void (CDemonSet::*)(common::CVector3i *, common::CVector3i *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::computeVertexOmniLighting),
                       void (CDemonSet::*)(common::CVector3f *, common::CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::pushScreenBoundsToCamera), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::rotateVerticies),
                                 void (CDemonSet::*)(std::span<const common::CVector3i>)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::lightVerticies),
                       void (CDemonSet::*)(int, std::span<const platform::SMRGLPrimitiveQuad>,
                                           std::span<const common::CVector3i>)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::setLightDirection),
                                 void (CDemonSet::*)(const common::CVector3i &)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setAmbientBaseQuick), void (CDemonSet::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::process), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::getReverbPresetAtPosition),
                                 int (CDemonSet::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::loadAssets), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::renderPrimitiveBatch),
                       void (CDemonSet::*)(std::span<const platform::SMRGLPrimitiveQuad>, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderFaceListOrEnvMap),
                                 void (CDemonSet::*)(platform::SInputFace *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderPrimitiveList),
                                 void (CDemonSet::*)(platform::SMRGLHeaderPrimitive *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::renderTexturedPrimitiveListVariant),
                                 void (CDemonSet::*)(platform::SMRGLHeaderPrimitive *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::markMirrorCameraDirty), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setFlatColor), void (CDemonSet::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::cacheMirrorLighting),
                                 void (CDemonSet::*)(common::CVector3f *)>);
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
                                 float (CDemonSet::*)(common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::rayVoxelHeightQuery),
                                 float (CDemonSet::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testLineOcclusion),
                                 int (CDemonSet::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testVoxelRaycast),
                                 int (CDemonSet::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::raycast),
                                 float (CDemonSet::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::iterativeRaycast),
                                 float (CDemonSet::*)(common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::testOBBCylinderCollision),
                                 int (CDemonSet::*)(SIntersectXZCylinder *, CBoundingBox3D *,
                                                    common::CVector3f *, common::CMatrix3x3f *)>);
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
                                 void (CDemonSet::*)(common::CVector3f *, common::CVector3f *,
                                                     SDamageInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::buildCollidableActorList), void (CDemonSet::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::castVoxelShadow), void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::transferVoxelShadow),
                                 void (CDemonSet::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::commitVoxelBuffer), void (CDemonSet::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonSet::isPointInWater),
                                 int (CDemonSet::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonSet::evaluateVirtualDirector),
                                 int (CDemonSet::*)(CDemonActor *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::setPendingCamera), void (CDemonSet::*)(int, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonSet::clearCameraSwitchCooldown), void (CDemonSet::*)()>);
}

constexpr int kOne = 0x10000;

// One vertex lit by a normal facing +z, or the given one: the quick light's level is how far the
// light travels against the normal, plus the ambient, times each channel's flat colour.
class CDemonSetStateTest : public engine::CDemonRendererFixture {
protected:
    platform::SRenderVertex lightTheVertex(const common::CVector3i &normal = {.z = kOne}) {
        const std::vector<common::CVector3i> normals{normal};
        set_.lightVerticies(1, {}, normals);
        return vertex_buffer_[0];
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

// The light travels 37000 along +z, and the ambient is 0x280: a normal facing -z has 37640, in
// white, and one facing +z the ambient alone.
TEST_F(CDemonSetStateTest, TheQuickLightStartsAsTheOriginalSetsIt) {
    const platform::SRenderVertex lit = lightTheVertex({.z = -kOne});
    EXPECT_EQ(lit.r, 37640);
    EXPECT_EQ(lit.g, 37640);
    EXPECT_EQ(lit.b, 37640);
    EXPECT_EQ(lightTheVertex().r, 0x280);
}

TEST_F(CDemonSetStateTest, TheLightDirectionAndAmbientCanBeSet) {
    set_.setLightDirection({.z = -kOne / 4});
    set_.setAmbientBaseQuick(10);
    EXPECT_EQ(lightTheVertex().r, (kOne / 4) + 10);
}

TEST_F(CDemonSetStateTest, TheLevelIsCappedJustUnderOne) {
    set_.setAmbientBaseQuick(kOne);
    EXPECT_EQ(lightTheVertex().r, 0xffff);
}

TEST_F(CDemonSetStateTest, TheFlatColourScalesEachChannel) {
    set_.setLightDirection({.z = -kOne / 4});
    set_.setAmbientBaseQuick(0);
    set_.setFlatColor(kOne / 2, kOne, 2 * kOne);
    const platform::SRenderVertex vertex = lightTheVertex();
    EXPECT_EQ(vertex.r, kOne / 8);
    EXPECT_EQ(vertex.g, kOne / 4);
    EXPECT_EQ(vertex.b, kOne / 2);
}

} // namespace
} // namespace nocturne::core
