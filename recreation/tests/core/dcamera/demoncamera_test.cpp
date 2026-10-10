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
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::setupPerspectiveAndFog),
                       void (CDemonCamera::*)(common::CVector3f *, platform::SProjectedVertex *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::getFogValueAtPosition),
                       int (CDemonCamera::*)(common::CVector3i *, platform::SProjectedVertex *)>);
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
                                 int (CDemonCamera::*)(int, int, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::screenToWorldTransform),
                                 common::CVector3i *(CDemonCamera::*)(common::CVector3i *,
                                                                      common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::worldToScreenWithFrustumCull),
                                 common::CVector3i *(CDemonCamera::*)(common::CVector3i *,
                                                                      common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::precomputeLight),
                                 void (CDemonCamera::*)(CDemonLight *, CRect *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::precomputeNormals), void (CDemonCamera::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::calculateAttenuatedDirectionalLight),
                                 int (CDemonCamera::*)(common::CVector3i *, CDemonLight *,
                                                       common::CVector3i *)>);
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
    static_assert(std::is_same_v<decltype(&CDemonCamera::isBoundingBoxVisible),
                                 int (CDemonCamera::*)(common::CVector3f *, common::CVector3f *,
                                                       common::CVector3f *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonCamera::isSphereVisible),
                                 int (CDemonCamera::*)(common::CVector3f *, float)>);
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
                                 common::CVector3f *(CDemonCamera::*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::saveZBufferScanlines), void (CDemonCamera::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonCamera::restoreZBufferScanlines), void (CDemonCamera::*)()>);
}

} // namespace
} // namespace nocturne::core
