#include "common/math/vector3i.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "platform/clipplane.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <type_traits>

namespace nocturne::engine {
namespace {

using common::CVector3i;
using platform::SClipPlane;

// A plane through the origin facing +x, its normal at 65535 as the original stores them.
constexpr SClipPlane kFacingPlusX{.a = 0xffff};

TEST(C3d, Constructors) {
    static_assert(std::is_constructible_v<C3d, CMatrix &>);
    static_assert(!std::is_default_constructible_v<C3d>);
}

TEST(C3d, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C3d::badMRGLStruct),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::processCameraRelativePoint),
                                 void (C3d::*)(const CVector3i &)>);
    static_assert(std::is_same_v<decltype(&C3d::transformAndBufferVertices),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(
        std::is_same_v<decltype(&C3d::isVisiblePlane), bool (C3d::*)(const SClipPlane &) const>);
    static_assert(std::is_same_v<decltype(&C3d::setCullingMode), void (C3d::*)(int)>);
    static_assert(std::is_same_v<decltype(&C3d::processVertexLighting),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::processTextureCoordinates),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonGrayscaleLitOp5),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogColorOp6),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedLitOp7),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogTexturedWrappedOp8),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp9),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::processPolygonColor),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp11),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp12),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedNormalizedUVLitOp14),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidTexturedOp15),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp16),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidLitClampedOp17),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp18),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::setRelativeCoord),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedNormalizedOp21),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::drawLineStrip2D),
                                 SMRGLHeaderExtended *(C3d::*)(SLineStrip *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp23),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonLitAlphaPlaneMaskedUVOp24),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAdaptivePlaneMaskedUVOp34),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonLitNearPlaneOp35),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAdaptiveDepthOp25),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonLitAlphaPlaneMaskedOp26),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogColorDepthOp27),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::abortOldFuncOp28),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::updateAnimatedTexture),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLAnimatedTexture *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedUVLitOp30),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::setVertexTextureU),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonDestReadBlendOp33),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAlphaBlendedPlaneMaskedOp36),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAlphaBlendedPlaneMaskedPerspOp37),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogTexturedPerspOp39),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedHardwareOp40),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidTexturedHardwareOp53),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogTexturedPlaneMaskedOp41),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogTexturedDepthOp42),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedDepthWriteOp43),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFogTexturedDepthWriteOp44),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedOp45),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedOp46),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedDepthWriteOp47),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidTexturedLitOp48),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedDepthLitOp49),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonTexturedNormalizedOp50),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidTexturedClampedOp51),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAdaptiveFogTexturedOp52),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonGrayscaleLitOp54),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonDestReadBlendDepthLitOp55),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonLitAlphaPlaneMaskedUVOp56),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonSolidLitOp62),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFullEffectsLitOp57),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonVertexAlphaLitOp60),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonBlendedLitOp63),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::setRenderAlphaFromBlock),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::setRenderAlpha), int (C3d::*)(int)>);
    static_assert(std::is_same_v<decltype(&C3d::setBlendMode), void (C3d::*)(int)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonAlphaBlendedDepthWritePerspOp59),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFullEffectsBufferedOp65),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonFullEffectsDirectOp66),
                                 SMRGLHeaderExtended *(C3d::*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&C3d::renderPolygonWithRenderFlags),
                                 void (C3d::*)(platform::SMRGLHeaderPrimitive *, int, int)>);
    static_assert(std::is_same_v<decltype(&C3d::dispatchMRGLBlockChain),
                                 void (C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::drawLine2DFromIndices), void (C3d::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&C3d::clipAndDrawLine2D),
                                 void (C3d::*)(platform::SRenderVertex, platform::SRenderVertex)>);
    static_assert(
        std::is_same_v<decltype(&C3d::getCurrentAlphaValue), const int &(C3d::*)() const>);
    static_assert(
        std::is_same_v<decltype(&C3d::getCurrentRenderColor), std::uint32_t (C3d::*)() const>);
    static_assert(std::is_same_v<decltype(&C3d::getBlendMode), const int &(C3d::*)() const>);
}

class C3dTest : public C2dFixture {
protected:
    CLight light_;
    CMatrix matrix_{two_d_, light_};
    C3d three_d_{matrix_};
};

TEST_F(C3dTest, StartsOpaque) {
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0xff);
    EXPECT_EQ(three_d_.getCurrentRenderColor(), 0xffffffU);
}

TEST_F(C3dTest, TheRenderAlphaIsTheLevelsTopByteInEveryColour) {
    EXPECT_EQ(three_d_.setRenderAlpha(0x8000), 0x7f7f7f);
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0x80);
    EXPECT_EQ(three_d_.getCurrentRenderColor(), 0x808080U);
}

TEST_F(C3dTest, TheRenderAlphaIsClampedToAByte) {
    EXPECT_EQ(three_d_.setRenderAlpha(-0x100), 0xffffff);
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0);
    EXPECT_EQ(three_d_.setRenderAlpha(0x20000), 0);
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0xff);
}

TEST_F(C3dTest, BlendsByMixingUntilAModeIsSet) {
    EXPECT_EQ(three_d_.getBlendMode(), 0);
    three_d_.setBlendMode(C3d::kAdditiveBlend);
    EXPECT_EQ(three_d_.getBlendMode(), C3d::kAdditiveBlend);
}

TEST_F(C3dTest, TheRelativeOriginIsTheCameraOriginLessThePoint) {
    matrix_.setCameraOrigin(100, 200, 300);
    three_d_.processCameraRelativePoint({.x = 1, .y = -2, .z = 3});
    EXPECT_EQ(matrix_.getRelativeOrigin(), (CVector3i{.x = 99, .y = 202, .z = 297}));
    EXPECT_EQ(matrix_.getCameraOrigin(), (CVector3i{.x = 100, .y = 200, .z = 300}));
}

TEST_F(C3dTest, TheRelativeOriginWrapsAtThirtyTwoBits) {
    matrix_.setCameraOrigin(-0x7fffffff - 1, 0, 0);
    three_d_.processCameraRelativePoint({.x = 1});
    EXPECT_EQ(matrix_.getRelativeOrigin().x, 0x7fffffff);
}

TEST_F(C3dTest, APlaneIsVisibleOnlyWithTheCameraInFrontOfIt) {
    matrix_.setRelativeOrigin({.x = 1});
    EXPECT_TRUE(three_d_.isVisiblePlane(kFacingPlusX));
    matrix_.setRelativeOrigin({.x = -1});
    EXPECT_FALSE(three_d_.isVisiblePlane(kFacingPlusX));
}

TEST_F(C3dTest, TheCameraOnAPlaneDoesNotSeeIt) {
    matrix_.setRelativeOrigin({.x = 2});
    EXPECT_FALSE(three_d_.isVisiblePlane({.a = 0xffff, .d = 0x1fffe}));
    EXPECT_TRUE(three_d_.isVisiblePlane({.a = 0xffff, .d = 0x1fffd}));
}

TEST_F(C3dTest, ThePlaneTestIsWideEnoughNotToOverflow) {
    // 65535 * 0x7fffffff is far past 32 bits; truncated it would turn negative.
    matrix_.setRelativeOrigin({.x = 0x7fffffff});
    EXPECT_TRUE(three_d_.isVisiblePlane(kFacingPlusX));
}

TEST_F(C3dTest, AnAllZeroPlaneIsAlwaysVisible) {
    matrix_.setRelativeOrigin({.x = -1});
    EXPECT_TRUE(three_d_.isVisiblePlane(SClipPlane{}));
}

TEST_F(C3dTest, AnyCullingModeButZeroShowsEveryPlane) {
    matrix_.setRelativeOrigin({.x = -1});
    three_d_.setCullingMode(2);
    EXPECT_TRUE(three_d_.isVisiblePlane(kFacingPlusX));
    three_d_.setCullingMode(0);
    EXPECT_FALSE(three_d_.isVisiblePlane(kFacingPlusX));
}

} // namespace
} // namespace nocturne::engine
