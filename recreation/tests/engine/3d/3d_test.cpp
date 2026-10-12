#include "engine/3d/3d.h"

#include <gtest/gtest.h>

#include <cstdint>
#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(C3d, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C3d::badMRGLStruct),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&C3d::processCameraRelativePoint),
                                 SMRGLHeaderExtended *(C3d::*)(common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&C3d::transformAndBufferVertices),
                                 SMRGLHeaderExtended *(C3d::*)(SMRGLHeaderExtended *)>);
    static_assert(
        std::is_same_v<decltype(&C3d::isVisiblePlane), int (C3d::*)(platform::SClipPlane *)>);
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
    static_assert(std::is_same_v<decltype(&C3d::getCurrentAlphaValue), int (C3d::*)() const>);
    static_assert(
        std::is_same_v<decltype(&C3d::getCurrentRenderColor), std::uint32_t (C3d::*)() const>);
}

TEST(C3d, StartsOpaque) {
    const C3d three_d;
    EXPECT_EQ(three_d.getCurrentAlphaValue(), 0xff);
    EXPECT_EQ(three_d.getCurrentRenderColor(), 0xffffffU);
}

TEST(C3d, TheRenderAlphaIsTheLevelsTopByteInEveryColour) {
    C3d three_d;
    EXPECT_EQ(three_d.setRenderAlpha(0x8000), 0x7f7f7f);
    EXPECT_EQ(three_d.getCurrentAlphaValue(), 0x80);
    EXPECT_EQ(three_d.getCurrentRenderColor(), 0x808080U);
}

TEST(C3d, TheRenderAlphaIsClampedToAByte) {
    C3d three_d;
    EXPECT_EQ(three_d.setRenderAlpha(-0x100), 0xffffff);
    EXPECT_EQ(three_d.getCurrentAlphaValue(), 0);
    EXPECT_EQ(three_d.setRenderAlpha(0x20000), 0);
    EXPECT_EQ(three_d.getCurrentAlphaValue(), 0xff);
}

} // namespace
} // namespace nocturne::engine
