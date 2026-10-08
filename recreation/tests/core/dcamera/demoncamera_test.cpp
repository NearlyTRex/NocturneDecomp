#include "core/dcamera/demoncamera.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonCamera, DerivesFromCCameraView) {
    static_assert(std::is_base_of_v<CCameraView, CDemonCamera>);
}

TEST(CDemonCamera, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonCamera>);
}

TEST(CDemonCamera, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonCamera>);
}

TEST(CDemonCamera, Constructors) {
    static_assert(std::is_constructible_v<CDemonCamera>);
}

TEST(CDemonCamera, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonCamera::setupPerspectiveAndFog),
                                 void (CDemonCamera::*)(CVector3f *, SProjectedVertex *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::getFogValueAtPosition),
                                 int (CDemonCamera::*)(CVector3i *, SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::saveAlphaTransform), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::initLookupTable), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::init), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::free), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setSceneCamera), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::resetSceneCamera), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::beginScene), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::pushRect),
                                 void (CDemonCamera::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::restoreZBufferRectArray), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::endScene), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::beginBackgroundScene), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::endBackgroundScene), void (CDemonCamera::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::updateTransformMatrices), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::screenToWorldCoord),
                                 int (CDemonCamera::*)(int, int, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::screenToWorldTransform),
                                 CVector3i *(CDemonCamera::*)(CVector3i *, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::worldToScreenWithFrustumCull),
                                 CVector3i *(CDemonCamera::*)(CVector3i *, CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::precomputeLight),
                                 void (CDemonCamera::*)(CDemonLight *, CRect *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::precomputeNormals), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::calculateAttenuatedDirectionalLight),
                                 int (CDemonCamera::*)(CVector3i *, CDemonLight *, CVector3i *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::loadImage), void (CDemonCamera::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::renderLightCoronas),
                                 void (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::addLightmapToCorona),
                                 void (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isCoronaSufficientlyVisible),
                                 int (CDemonCamera::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::computeLightExtentBounds),
                                 CRect *(CDemonCamera::*)(CDemonLight *, CRect *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::processCorona), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::lockAndRenderToBuffer), int (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::renderGlobeCoronas),
                                 void (CDemonCamera::*)(CDemonGlobe *, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::isBoundingBoxVisible),
                       int (CDemonCamera::*)(CVector3f *, CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isSphereVisible),
                                 int (CDemonCamera::*)(CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setEffectIntensity), void (CDemonCamera::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::initCameraFog), void (CDemonCamera::*)(SFog *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::generateGammaPalette), void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::clearFramebufferAndWorkBuffers),
                                 void (CDemonCamera::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::initCameraShake),
                                 void (CDemonCamera::*)(float, float, float, float)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::computeVisibleFrustumBounds),
                                 CVector3f *(CDemonCamera::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::saveZBufferScanlines), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::restoreZBufferScanlines), void (CDemonCamera::*)()>);
}

} // namespace
} // namespace nocturne::core
