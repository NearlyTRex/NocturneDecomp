#pragma once

#include "common/fwd.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

namespace nocturne::engine {

SMRGLHeaderExtended *badMRGLStruct(SMRGLHeaderExtended *prim);
SMRGLHeaderExtended *processCameraRelativePoint(common::CQuaternion4f *input_point);
SMRGLHeaderExtended *transformAndBufferVertices(SMRGLHeaderExtended *mrgl);
int isVisiblePlane(platform::SClipPlane *plane);
SMRGLHeaderExtended *processVertexLighting(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended *processTextureCoordinates(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonGrayscaleLitOp5(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonFogColorOp6(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedLitOp7(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedWrappedOp8(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *abortOldFuncOp9(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *processPolygonColor(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp11(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *abortOldFuncOp12(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedUVLitOp14(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedOp15(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp16(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *renderPolygonSolidLitClampedOp17(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp18(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *setRelativeCoord(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedOp21(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *drawLineStrip2D(SLineStrip *line_strip);
SMRGLHeaderExtended *abortOldFuncOp23(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *
renderPolygonLitAlphaPlaneMaskedUVOp24(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *
renderPolygonAdaptivePlaneMaskedUVOp34(platform::SMRGLHeaderPrimitive *primitive);
SMRGLHeaderExtended *renderPolygonLitNearPlaneOp35(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAdaptiveDepthOp25(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonLitAlphaPlaneMaskedOp26(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogColorDepthOp27(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *abortOldFuncOp28(SMRGLHeaderExtended *primitive);
SMRGLHeaderExtended *updateAnimatedTexture(SMRGLAnimatedTexture *texture);
SMRGLHeaderExtended *renderPolygonTexturedUVLitOp30(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *setVertexTextureU(SMRGLHeaderExtended *mrgl);
SMRGLHeaderExtended *renderPolygonDestReadBlendOp33(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAlphaBlendedPlaneMaskedOp36(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *
renderPolygonAlphaBlendedPlaneMaskedPerspOp37(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedPerspOp39(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedHardwareOp40(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedHardwareOp53(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedPlaneMaskedOp41(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedDepthOp42(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthWriteOp43(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFogTexturedDepthWriteOp44(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedOp45(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedOp46(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthWriteOp47(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedLitOp48(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedDepthLitOp49(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonTexturedNormalizedOp50(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidTexturedClampedOp51(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonAdaptiveFogTexturedOp52(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonGrayscaleLitOp54(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonDestReadBlendDepthLitOp55(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonLitAlphaPlaneMaskedUVOp56(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonSolidLitOp62(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsLitOp57(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonVertexAlphaLitOp60(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonBlendedLitOp63(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *setRenderAlphaFromBlock(SMRGLHeaderExtended *block);
int setRenderAlpha(int alpha_color_value);
void setBlendMode(int blend_mode);
SMRGLHeaderExtended *
renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *
renderPolygonAlphaBlendedDepthWritePerspOp59(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsBufferedOp65(platform::SMRGLHeaderPrimitive *prim);
SMRGLHeaderExtended *renderPolygonFullEffectsDirectOp66(platform::SMRGLHeaderPrimitive *primitive);
void renderPolygonWithRenderFlags(platform::SMRGLHeaderPrimitive *primitive, int render_flags,
                                  int render_state_flags);
void dispatchMRGLBlockChain(SMRGLHeaderExtended *chain);
void drawLine2DFromIndices(int vertex_index1, int vertex_index2);
void clipAndDrawLine2D(platform::SRenderVertex vertex1, platform::SRenderVertex vertex2);

} // namespace nocturne::engine
