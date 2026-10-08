#include "engine/drender/demonrenderer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CDemonRenderer, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonRenderer>);
}

TEST(CDemonRenderer, Constructors) {
    static_assert(std::is_constructible_v<CDemonRenderer>);
}

TEST(CDemonRenderer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidColorDepthDirect),
                                 void (CDemonRenderer::*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidColorPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderZPrepassPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDepthProfiledDirect),
                                 int (CDemonRenderer::*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderTexturedDirect),
                                 void (CDemonRenderer::*)(SMRGLHeaderPrimitive *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderTexturedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderAlphaBlendedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDecalPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidTexturedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDestReadBlendPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderVertexAlphaDirect),
                                 void (CDemonRenderer::*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderVertexAlphaPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderBlendedDirect),
                                 void (CDemonRenderer::*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderBlendedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderOverlayDirect),
                                 void (CDemonRenderer::*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCameraOrigin),
                                 void (CDemonRenderer::*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCameraOriginFromScaledPoint),
                                 void (CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setupSceneRendering),
                                 void (CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setupCameraAndProjection),
                                 void (CDemonRenderer::*)(core::CMatrix3x3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::copyAndTransform3DPoint),
                                 void (CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::processCameraRelativeVertex),
                                 void (CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::applyDirectTransform),
                                 void (CDemonRenderer::*)(core::CVector3i *, core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::applyScaledTransform),
                                 void (CDemonRenderer::*)(core::CVector3f *, core::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::matrixPush), void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::matrixPop), void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setProjectionScale),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setLightIntensity),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setLightDirection),
                                 void (CDemonRenderer::*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraOriginFixed),
                                 core::CVector3i *(CDemonRenderer::*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraOriginWorld),
                                 core::CVector3f *(CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraRotationFixed),
                                 core::CVector3i *(CDemonRenderer::*)(core::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraRotationRadians),
                                 core::CVector3f *(CDemonRenderer::*)(core::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::calculateProjectionFactor),
                                 float (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::pushViewport),
                                 void (CDemonRenderer::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::popViewport), void (CDemonRenderer::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::renderCustomScanline),
                       void (CDemonRenderer::*)(SMRGLHeaderPrimitive *, CustomScanlineFunc *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCurrentPolygonColor),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRGBAColor),
                                 void (CDemonRenderer::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setPlaneCullingEnabled),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRenderingState),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setBlendMode), void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setRenderAlpha), int (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRenderAlphaNormalized),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::enableFaceCapture),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setShadowPass), void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::isShadowPass), int (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::clipAndDrawLine3D),
                                 void (CDemonRenderer::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setAlphaMask), void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::getAlphaMask), int (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::enableAdvancedCulling),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderTriangleBatch),
                                 void (CDemonRenderer::*)(SMRGLPrimitiveTriangle *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderQuadBatch),
                                 void (CDemonRenderer::*)(SMRGLPrimitiveQuad *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderFaceList),
                                 void (CDemonRenderer::*)(SInputFace *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setTextureCaptureMode),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::processCapturedFaces),
                                 void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::captureTexture),
                                 void (CDemonRenderer::*)(core::SMRGLTextureBasic *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::updateTexture),
                       void (CDemonRenderer::*)(core::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::depthTest),
                                 int (CDemonRenderer::*)(SRenderVertex *)>);
}

} // namespace
} // namespace nocturne::engine
