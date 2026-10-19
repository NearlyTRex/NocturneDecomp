#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CDemonRenderer, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonRenderer>);
}

TEST(CDemonRenderer, Constructors) {
    static_assert(std::is_constructible_v<CDemonRenderer, CMatrix &, const C2d &, C3d &,
                                          std::span<platform::SRenderVertex>, CSpecial &, CPrim &,
                                          CZRaster &, const SCurrentTexture &, CTexture &,
                                          const IScreenDevice &, GeometryClipper>);
    static_assert(!std::is_default_constructible_v<CDemonRenderer>);
}

TEST(CDemonRenderer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidColorDepthDirect),
                                 void (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidColorPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderZPrepassPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDepthProfiledDirect),
                                 int (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::renderTexturedDirect),
                       void (CDemonRenderer::*)(const platform::SMRGLHeaderPrimitive &, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::renderTexturedPoly),
                       void (CDemonRenderer::*)(const platform::SMRGLPrimitiveQuad &, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderAlphaBlendedPoly),
                                 void (CDemonRenderer::*)(const platform::SMRGLPrimitiveQuad &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDecalPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderSolidTexturedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderDestReadBlendPoly),
                                 void (CDemonRenderer::*)(const platform::SMRGLPrimitiveQuad &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderVertexAlphaDirect),
                                 void (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderVertexAlphaPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderBlendedDirect),
                                 void (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderBlendedPoly),
                                 void (CDemonRenderer::*)(SMRGLPrimitivePoly *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderOverlayDirect),
                                 void (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCameraOrigin),
                                 void (CDemonRenderer::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCameraOriginFromScaledPoint),
                                 void (CDemonRenderer::*)(const common::CVector3f &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setupSceneRendering),
                                 void (CDemonRenderer::*)(const common::CVector3f &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setupCameraAndProjection),
                                 void (CDemonRenderer::*)(const common::CMatrix3x3f &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::copyAndTransform3DPoint),
                                 void (CDemonRenderer::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::processCameraRelativeVertex),
                                 void (CDemonRenderer::*)(const common::CVector3f &)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::applyDirectTransform),
                       void (CDemonRenderer::*)(common::CVector3i *, common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::applyScaledTransform),
                                 void (CDemonRenderer::*)(const common::CVector3f &,
                                                          const common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::matrixPush), void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::matrixPop), void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setProjectionScale),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setLightIntensity),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setLightDirection),
                                 void (CDemonRenderer::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraOriginFixed),
                                 common::CVector3i (CDemonRenderer::*)() const>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraOriginWorld),
                                 common::CVector3f *(CDemonRenderer::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraRotationFixed),
                                 common::CVector3i *(CDemonRenderer::*)(common::CVector3i *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::getCameraRotationRadians),
                                 common::CVector3f *(CDemonRenderer::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::calculateProjectionFactor),
                                 float (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::pushViewport),
                                 void (CDemonRenderer::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::popViewport), void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderCustomScanline),
                                 void (CDemonRenderer::*)(platform::SMRGLHeaderPrimitive *,
                                                          CustomScanlineFunc *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setCurrentPolygonColor),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRGBAColor),
                                 void (CDemonRenderer::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setPlaneCullingEnabled),
                                 void (CDemonRenderer::*)(bool)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRenderingState),
                                 void (CDemonRenderer::*)(bool)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setBlendMode), void (CDemonRenderer::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CDemonRenderer::setRenderAlpha), int (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setRenderAlphaNormalized),
                                 void (CDemonRenderer::*)(float)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::enableFaceCapture),
                                 void (CDemonRenderer::*)(bool)>);
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
                                 void (CDemonRenderer::*)(
                                     std::span<const platform::SMRGLPrimitiveQuad>, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::renderFaceList),
                                 void (CDemonRenderer::*)(platform::SInputFace *, int, int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::setTextureCaptureMode),
                                 void (CDemonRenderer::*)(int)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::processCapturedFaces),
                                 void (CDemonRenderer::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::captureTexture),
                                 void (CDemonRenderer::*)(platform::SMRGLTextureBasic &)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::updateTexture),
                                 void (CDemonRenderer::*)(platform::SMRGLTextureBasic *,
                                                          SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&CDemonRenderer::depthTest),
                                 int (CDemonRenderer::*)(platform::SRenderVertex *)>);
}

// A polygon over buffer corners 1 to 3 whose plane faces away from the camera at the origin, or
// toward it.
platform::SMRGLPrimitiveQuad getPoly(bool facing) {
    return {.surface_normal = {.a = 1, .d = facing ? -1 : 1},
            .vertices = {{.vertex_index = 1}, {.vertex_index = 2}, {.vertex_index = 3}}};
}

class CDemonRendererStateTest : public CDemonRendererFixture {};

// Untextured, the polygon goes to the geometry clip only with face capture on.
TEST_F(CDemonRendererStateTest, PlaneCullingAndFaceCaptureStartOn) {
    demon_renderer_.renderTexturedPoly(getPoly(false), 0);
    EXPECT_TRUE(geometry_clips_.empty());
    demon_renderer_.renderTexturedPoly(getPoly(true), 0);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

TEST_F(CDemonRendererStateTest, WithoutPlaneCullingAPolyFacingAwayIsDrawn) {
    demon_renderer_.setPlaneCullingEnabled(false);
    demon_renderer_.renderTexturedPoly(getPoly(false), 0);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

TEST_F(CDemonRendererStateTest, CullingTradesPlaneCullingForWindingCulling) {
    demon_renderer_.setRenderingState(true);
    EXPECT_EQ(three_d_.getCullingMode(), 1);
    demon_renderer_.renderTexturedPoly(getPoly(false), 0);
    EXPECT_EQ(geometry_clips_.size(), 1U);
    demon_renderer_.setRenderingState(false);
    EXPECT_EQ(three_d_.getCullingMode(), 0);
    demon_renderer_.renderTexturedPoly(getPoly(false), 0);
    EXPECT_EQ(geometry_clips_.size(), 1U);
}

// 32 by 32 texels of 5.
TEST_F(CDemonRendererStateTest, ACapturedTextureIsLoadedAndMadeCurrent) {
    std::array<std::uint32_t, 256> palette{};
    std::array<std::uint16_t, 256> palette16{};
    ON_CALL(screen_, getBitsPerPixel()).WillByDefault(::testing::Return(32));
    ON_CALL(screen_, getHardwarePalette32())
        .WillByDefault(::testing::Return(std::span<std::uint32_t, 256>(palette)));
    ON_CALL(screen_, getHardwarePalette16())
        .WillByDefault(::testing::Return(std::span<std::uint16_t, 256>(palette16)));
    constexpr std::size_t kTexels = std::size_t{32} * 32;
    givenFile("art\\a.raw", std::string(kTexels, '\x05'));
    platform::SMRGLTextureBasic texture{.texture_name = "a.raw", .cache_index = 7};
    demon_renderer_.captureTexture(texture);
    EXPECT_EQ(texture.cache_index, 0);
    EXPECT_EQ(texture_.dimension, 32);
    EXPECT_EQ(texture_.data.front(), 5);
}

TEST_F(CDemonRendererStateTest, BlendModeAndAlphaGoToThe3dState) {
    demon_renderer_.setBlendMode(C3d::kAdditiveBlend);
    EXPECT_EQ(three_d_.getBlendMode(), C3d::kAdditiveBlend);
    EXPECT_EQ(demon_renderer_.setRenderAlpha(0x8000), three_d_.setRenderAlpha(0x8000));
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0x80);
}

} // namespace
} // namespace nocturne::engine
