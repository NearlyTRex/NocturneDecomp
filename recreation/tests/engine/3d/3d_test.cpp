#include "engine/3d/3d.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(Engine3dFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&badMRGLStruct), SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&processCameraRelativePoint),
                                 SMRGLHeaderExtended *(*)(common::CQuaternion4f *)>);
    static_assert(std::is_same_v<decltype(&transformAndBufferVertices),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&isVisiblePlane), int (*)(SClipPlane *)>);
    static_assert(std::is_same_v<decltype(&processVertexLighting),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&processTextureCoordinates),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonGrayscaleLitOp5),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogColorOp6),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedLitOp7),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedWrappedOp8),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp9),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&processPolygonColor),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp11),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp12),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedUVLitOp14),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedOp15),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp16),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidLitClampedOp17),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp18),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&setRelativeCoord),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedOp21),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(
        std::is_same_v<decltype(&drawLineStrip2D), SMRGLHeaderExtended *(*)(SLineStrip *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp23),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedUVOp24),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptivePlaneMaskedUVOp34),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitNearPlaneOp35),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptiveDepthOp25),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedOp26),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogColorDepthOp27),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp28),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&updateAnimatedTexture),
                                 SMRGLHeaderExtended *(*)(SMRGLAnimatedTexture *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedUVLitOp30),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&setVertexTextureU),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonDestReadBlendOp33),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedPlaneMaskedOp36),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedPlaneMaskedPerspOp37),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedPerspOp39),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedHardwareOp40),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedHardwareOp53),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedPlaneMaskedOp41),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedDepthOp42),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthWriteOp43),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedDepthWriteOp44),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedOp45),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedOp46),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthWriteOp47),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedLitOp48),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthLitOp49),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedOp50),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedClampedOp51),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptiveFogTexturedOp52),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonGrayscaleLitOp54),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonDestReadBlendDepthLitOp55),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedUVOp56),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidLitOp62),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsLitOp57),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonVertexAlphaLitOp60),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonBlendedLitOp63),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&setRenderAlphaFromBlock),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&setRenderAlpha), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&setBlendMode), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedDepthWritePerspOp59),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsBufferedOp65),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsDirectOp66),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonWithRenderFlags),
                                 void (*)(SMRGLHeaderPrimitive *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&dispatchMRGLBlockChain), void (*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&drawLine2DFromIndices), void (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&clipAndDrawLine2D),
                                 void (*)(platform::SRenderVertex, platform::SRenderVertex)>);
}

} // namespace
} // namespace nocturne::engine
