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
    static_assert(std::is_same_v<decltype(&isVisiblePlane), int (*)(platform::SClipPlane *)>);
    static_assert(std::is_same_v<decltype(&processVertexLighting),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&processTextureCoordinates),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonGrayscaleLitOp5),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogColorOp6),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedLitOp7),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedWrappedOp8),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp9),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&processPolygonColor),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp11),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp12),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedUVLitOp14),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedOp15),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp16),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidLitClampedOp17),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp18),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&setRelativeCoord),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedOp21),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(
        std::is_same_v<decltype(&drawLineStrip2D), SMRGLHeaderExtended *(*)(SLineStrip *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp23),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedUVOp24),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptivePlaneMaskedUVOp34),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitNearPlaneOp35),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptiveDepthOp25),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedOp26),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogColorDepthOp27),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&abortOldFuncOp28),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&updateAnimatedTexture),
                                 SMRGLHeaderExtended *(*)(SMRGLAnimatedTexture *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedUVLitOp30),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&setVertexTextureU),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonDestReadBlendOp33),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedPlaneMaskedOp36),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedPlaneMaskedPerspOp37),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedPerspOp39),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedHardwareOp40),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedHardwareOp53),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedPlaneMaskedOp41),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedDepthOp42),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthWriteOp43),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFogTexturedDepthWriteOp44),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedOp45),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedOp46),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthWriteOp47),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedLitOp48),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedDepthLitOp49),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonTexturedNormalizedOp50),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidTexturedClampedOp51),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAdaptiveFogTexturedOp52),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonGrayscaleLitOp54),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonDestReadBlendDepthLitOp55),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonLitAlphaPlaneMaskedUVOp56),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSolidLitOp62),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsLitOp57),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonVertexAlphaLitOp60),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonBlendedLitOp63),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&setRenderAlphaFromBlock),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&setRenderAlpha), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&setBlendMode), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonAlphaBlendedDepthWritePerspOp59),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsBufferedOp65),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonFullEffectsDirectOp66),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLHeaderPrimitive *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonWithRenderFlags),
                                 void (*)(platform::SMRGLHeaderPrimitive *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&dispatchMRGLBlockChain), void (*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&drawLine2DFromIndices), void (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&clipAndDrawLine2D),
                                 void (*)(platform::SRenderVertex, platform::SRenderVertex)>);
}

} // namespace
} // namespace nocturne::engine
