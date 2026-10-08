#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::engine {

SMRGLHeaderExtended *badMRGLStruct(SMRGLHeaderExtended *prim);
SMRGLHeaderExtended *processCameraRelativePoint(core::CQuaternion4f *input_point);
SMRGLHeaderExtended *transformAndBufferVertices(SMRGLHeaderExtended *mrgl);
int isVisiblePlane(core::SClipPlane *plane);
SMRGLHeaderExtended *processVertexLighting(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended *processTextureCoordinates(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonGrayscaleLitOp5(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonFogColorOp6(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedLitOp7(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedWrappedOp8(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *abortOldFuncOp9(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *processPolygonColor(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp11(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *abortOldFuncOp12(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedUVLitOp14(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedOp15(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp16(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *renderPolygonSolidLitClampedOp17(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp18(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *setRelativeCoord(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedOp21(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *drawLineStrip2D(SLineStrip *line_strip);
SMRGLHeaderExtended *abortOldFuncOp23(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *renderPolygonLitAlphaPlaneMaskedUVOp24(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonAdaptivePlaneMaskedUVOp34(SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonLitNearPlaneOp35(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAdaptiveDepthOp25(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonLitAlphaPlaneMaskedOp26(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogColorDepthOp27(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp28(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *updateAnimatedTexture(SMRGLAnimatedTexture *texture);
SMRGLHeaderExtended *renderPolygonTexturedUVLitOp30(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *setVertexTextureU(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended *renderPolygonDestReadBlendOp33(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAlphaBlendedPlaneMaskedOp36(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAlphaBlendedPlaneMaskedPerspOp37(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedPerspOp39(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedHardwareOp40(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedHardwareOp53(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedPlaneMaskedOp41(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedDepthOp42(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthWriteOp43(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedDepthWriteOp44(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedOp45(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedOp46(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthWriteOp47(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedLitOp48(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthLitOp49(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedOp50(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedClampedOp51(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAdaptiveFogTexturedOp52(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonGrayscaleLitOp54(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonDestReadBlendDepthLitOp55(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonLitAlphaPlaneMaskedUVOp56(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidLitOp62(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsLitOp57(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonVertexAlphaLitOp60(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonBlendedLitOp63(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *setRenderAlphaFromBlock(SMRGLHeaderExtended *block);
int setRenderAlpha(int alpha_color_value);
void setBlendMode(int blend_mode);
SMRGLHeaderExtended *renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAlphaBlendedDepthWritePerspOp59(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsBufferedOp65(SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsDirectOp66(SMRGLHeaderPrimitive *primitive);
void renderPolygonWithRenderFlags(SMRGLHeaderPrimitive *primitive, int render_flags,
                                  int render_state_flags);
void dispatchMRGLBlockChain(SMRGLHeaderExtended *chain);
void drawLine2DFromIndices(int vertex_index1, int vertex_index2);
void clipAndDrawLine2D(SRenderVertex vertex1, SRenderVertex vertex2);

} // namespace nocturne::engine
