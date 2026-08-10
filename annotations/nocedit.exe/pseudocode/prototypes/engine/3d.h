#pragma once

// Function prototypes for engine/3d.cpp
// Generated from Ghidra function signatures

// Original: engine_3d.c_abortOldFuncNoOpcode_FUN_00403740
// Address: 00403740
void * __cdecl abortOldFuncNoOpcode(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_badMRGLStruct_FUN_004037b0
// Address: 004037b0
SMRGLHeaderExtended * __cdecl badMRGLStruct(SMRGLHeaderExtended *prim);

// Original: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
SMRGLHeaderExtended * __cdecl processCameraRelativePoint(CQuaternion4f *input_point);

// Original: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
SMRGLHeaderExtended * __cdecl transformAndBufferVertices(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_isVisiblePlane_FUN_00403950
// Address: 00403950
int __cdecl isVisiblePlane(SClipPlane *plane);

// Original: engine_3d.c_lookupLitColor_FUN_004039c0
// Address: 004039c0
uint __cdecl lookupLitColor(int color_value,int lighting_value);

// Original: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// Address: 00403a00
void __cdecl calculatePolygonLighting(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_processVertexLighting_FUN_00403a20
// Address: 00403a20
SMRGLHeaderExtended * __cdecl processVertexLighting(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_processTextureCoordinates_FUN_00403a80
// Address: 00403a80
SMRGLHeaderExtended * __cdecl processTextureCoordinates(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403ad0
// Address: 00403ad0
SMRGLHeaderExtended * __cdecl renderPolygonGrayscaleLitOp5(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonFogColorOp6_FUN_00403ba0
// Address: 00403ba0
SMRGLHeaderExtended * __cdecl renderPolygonFogColorOp6(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedLitOp7_FUN_00403cc0
// Address: 00403cc0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedLitOp7(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00403d60
// Address: 00403d60
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedWrappedOp8(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_abortOldFuncOp9_FUN_00403e00
// Address: 00403e00
SMRGLHeaderExtended * __cdecl abortOldFuncOp9(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_processPolygonColor_FUN_00403e30
// Address: 00403e30
SMRGLHeaderExtended * __cdecl processPolygonColor(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_abortOldFuncOp11_FUN_00403ec0
// Address: 00403ec0
SMRGLHeaderExtended * __cdecl abortOldFuncOp11(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_abortOldFuncOp12_FUN_00403ef0
// Address: 00403ef0
SMRGLHeaderExtended * __cdecl abortOldFuncOp12(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00403f20
// Address: 00403f20
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedUVLitOp14(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404020
// Address: 00404020
void * __cdecl renderPolygonTexturedUVLitPlaneMasked(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00404120
// Address: 00404120
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedOp15(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_abortOldFuncOp16_FUN_004041d0
// Address: 004041d0
SMRGLHeaderExtended * __cdecl abortOldFuncOp16(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404220
// Address: 00404220
SMRGLHeaderExtended * __cdecl renderPolygonSolidLitClampedOp17(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_abortOldFuncOp18_FUN_00404420
// Address: 00404420
SMRGLHeaderExtended * __cdecl abortOldFuncOp18(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_setRelativeCoord_FUN_00404450
// Address: 00404450
SMRGLHeaderExtended * __cdecl setRelativeCoord(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonTexturedNormalizedOp21_FUN_004044a0
// Address: 004044a0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedOp21(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_setActiveRenderColor_FUN_00404540
// Address: 00404540
void __cdecl setActiveRenderColor(void);

// Original: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
SMRGLHeaderExtended * __cdecl drawLineStrip2D(SLineStrip *line_strip);

// Original: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
SMRGLHeaderExtended * __cdecl drawLineStrip3D(SLineStrip *line_strip);

// Original: engine_3d.c_abortOldFuncOp23_FUN_00404690
// Address: 00404690
SMRGLHeaderExtended * __cdecl abortOldFuncOp23(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046c0
// Address: 004046c0
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedUVOp24(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404840
// Address: 00404840
SMRGLHeaderExtended * __cdecl renderPolygonAdaptivePlaneMaskedUVOp34(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_00404a40
// Address: 00404a40
SMRGLHeaderExtended * __cdecl renderPolygonLitNearPlaneOp35(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404ae0
// Address: 00404ae0
SMRGLHeaderExtended * __cdecl renderPolygonAdaptiveDepthOp25(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c60
// Address: 00404c60
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedOp26(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogColorDepthOp27_FUN_00404d50
// Address: 00404d50
SMRGLHeaderExtended * __cdecl renderPolygonFogColorDepthOp27(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_abortOldFuncOp28_FUN_00404df0
// Address: 00404df0
SMRGLHeaderExtended * __cdecl abortOldFuncOp28(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404e40
// Address: 00404e40
void * __cdecl renderPolygonAlphaTexturedNearPlane(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedNearPlane_FUN_00404ee0
// Address: 00404ee0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNearPlane(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaTexturedNormalized_FUN_00404f80
// Address: 00404f80
void * __cdecl renderPolygonAlphaTexturedNormalized(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00405020
// Address: 00405020
void * __cdecl renderPolygonAlphaTexturedNormalized2(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
SMRGLHeaderExtended * __cdecl updateAnimatedTexture(SMRGLAnimatedTexture *texture);

// Original: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00405170
// Address: 00405170
SMRGLHeaderExtended * __cdecl renderPolygonTexturedUVLitOp30(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_setVertexTextureU_FUN_00405270
// Address: 00405270
SMRGLHeaderExtended * __cdecl setVertexTextureU(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_renderPolygonDestReadBlendOp33_FUN_004052b0
// Address: 004052b0
SMRGLHeaderExtended * __cdecl renderPolygonDestReadBlendOp33(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedUVLit_FUN_00405350
// Address: 00405350
SMRGLHeaderExtended * __cdecl renderPolygonTexturedUVLit(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00405430
// Address: 00405430
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedUVLit2(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405510
// Address: 00405510
SMRGLHeaderExtended * __cdecl renderPolygonAlphaTexturedNormalizedLit(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedNormalizedUVLit_FUN_004055b0
// Address: 004055b0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedUVLit(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00405690
// Address: 00405690
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedPlaneMaskedOp36(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057b0
// Address: 004057b0
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedPlaneMaskedPerspOp37(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedPerspOp39_FUN_004058d0
// Address: 004058d0
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedPerspOp39(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonDepthWritePass_FUN_00405960
// Address: 00405960
SMRGLHeaderExtended * __cdecl renderPolygonDepthWritePass(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405a00
// Address: 00405a00
SMRGLHeaderExtended * __cdecl renderPolygonTexturedHardwareOp40(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00405aa0
// Address: 00405aa0
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedHardwareOp53(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b50
// Address: 00405b50
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedPlaneMaskedOp41(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_00405ce0
// Address: 00405ce0
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedDepthOp42(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthWriteOp43_FUN_00405d80
// Address: 00405d80
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthWriteOp43(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405e20
// Address: 00405e20
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedDepthWriteOp44(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedOp45_FUN_00405ec0
// Address: 00405ec0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedOp45(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedOp46_FUN_00405f60
// Address: 00405f60
SMRGLHeaderExtended * __cdecl renderPolygonTexturedOp46(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthWriteOp47_FUN_00406000
// Address: 00406000
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthWriteOp47(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_004060a0
// Address: 004060a0
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedLitOp48(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthLitOp49_FUN_00406150
// Address: 00406150
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthLitOp49(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedNormalizedOp50_FUN_004061f0
// Address: 004061f0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedOp50(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00406290
// Address: 00406290
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedClampedOp51(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406430
// Address: 00406430
SMRGLHeaderExtended * __cdecl renderPolygonAdaptiveFogTexturedOp52(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_004066d0
// Address: 004066d0
SMRGLHeaderExtended * __cdecl renderPolygonGrayscaleLitOp54(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067a0
// Address: 004067a0
SMRGLHeaderExtended * __cdecl renderPolygonDestReadBlendDepthLitOp55(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860
// Address: 00406860
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedUVOp56(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406a20
// Address: 00406a20
SMRGLHeaderExtended * __cdecl renderPolygonSolidLitOp62(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00406b40
// Address: 00406b40
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsLitOp57(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_00406be0
// Address: 00406be0
SMRGLHeaderExtended * __cdecl renderPolygonVertexAlphaLitOp60(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406c80
// Address: 00406c80
SMRGLHeaderExtended * __cdecl renderPolygonBlendedLitOp63(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_setRenderAlphaFromBlock_FUN_00406d60
// Address: 00406d60
SMRGLHeaderExtended * __cdecl setRenderAlphaFromBlock(SMRGLHeaderExtended *block);

// Original: engine_3d.c_setRenderAlpha_FUN_00406d80
// Address: 00406d80
int __cdecl setRenderAlpha(int alpha_color_value);

// Original: engine_3d.c_setBlendMode_FUN_00406dd0
// Address: 00406dd0
void __cdecl setBlendMode(int blend_mode);

// Original: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406de0
// Address: 00406de0
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f20
// Address: 00406f20
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedDepthWritePerspOp59(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_resetRenderBuffer_FUN_00407060
// Address: 00407060
void __cdecl resetRenderBuffer(void);

// Original: engine_3d.c_qsortByRenderDepth_FUN_00407080
// Address: 00407080
int __cdecl qsortByRenderDepth(SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr);

// Original: engine_3d.c_flushPremiumRenderBuffer_FUN_004070c0
// Address: 004070c0
void __cdecl flushPremiumRenderBuffer(void);

// Original: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407290
// Address: 00407290
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsBufferedOp65(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407470
// Address: 00407470
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsDirectOp66(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407620
// Address: 00407620
void __cdecl renderPolygonWithRenderFlags(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags);

// Original: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407720
// Address: 00407720
void __cdecl renderPolygonWithRenderFlagsUV(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags);

// Original: engine_3d.c_setProcessorType_FUN_00407870
// Address: 00407870
void __cdecl setProcessorType(int processor_type);

// Original: engine_3d.c_setRenderingQuality_FUN_00407880
// Address: 00407880
void __cdecl setRenderingQuality(int quality);

// Original: engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
// Address: 00407890
void __cdecl dispatchMRGLBlockChain(SMRGLHeaderExtended *chain);

// Original: engine_3d.c_renderPrim_FUN_00407920
// Address: 00407920
void __cdecl renderPrim(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_addFaceIfVisible_FUN_004079c0
// Address: 004079c0
void __cdecl addFaceIfVisible(SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue);

// Original: engine_3d.c_flushRenderQueue_FUN_00407a30
// Address: 00407a30
void __cdecl flushRenderQueue(void);

// Original: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// Address: 00407aa0
void __cdecl dispatchMRGLToRenderer(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_drawLine2DFromIndices_FUN_00407cf0
// Address: 00407cf0
void __cdecl drawLine2DFromIndices(int vertex_index1,int vertex_index2);

// Original: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
// Address: 00407d70
void __cdecl clipAndDrawLine2D(SRenderVertex vertex1,SRenderVertex vertex2);

// Original: engine_3d.c_drawLine3DFromIndices_FUN_00407ff0
// Address: 00407ff0
void __cdecl drawLine3DFromIndices(int vertex_index1,int vertex_index2);

// Original: engine_3d.c_clipAndDrawLine3D_FUN_00408070
// Address: 00408070
void __cdecl clipAndDrawLine3D(SRenderVertex vertex1,SRenderVertex vertex2);
