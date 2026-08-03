#pragma once

// Function prototypes for engine/3d.cpp
// Generated from Ghidra function signatures

// Original: engine_3d.c_FUN_00404430
// Address: 00404430
undefined4 * FUN_00404430(void);

// Original: engine_3d.c_FUN_005458a0
// Address: 00404480
void FUN_005458a0(void);

// Original: engine_3d.c_FUN_005458d0
// Address: 00404490
void FUN_005458d0(void);

// Original: engine_3d.c_badMRGLStruct_FUN_004044a0
// Address: 004044a0
SMRGLHeaderExtended * __cdecl badMRGLStruct(SMRGLHeaderExtended *prim);

// Original: engine_3d.c_processCameraRelativePoint_FUN_004044d0
// Address: 004044d0
SMRGLHeaderExtended * __cdecl processCameraRelativePoint(CQuaternion4f *input_point);

// Original: engine_3d.c_transformAndBufferVertices_FUN_00404530
// Address: 00404530
SMRGLHeaderExtended * __cdecl transformAndBufferVertices(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_isVisiblePlane_FUN_00404610
// Address: 00404610
int __cdecl isVisiblePlane(SClipPlane *plane);

// Original: engine_3d.c_FUN_00404680
// Address: 00404680
int FUN_00404680(int param_1,int param_2);

// Original: engine_3d.c_calculatePolygonLighting_FUN_00404710
// Address: 00404710
void __cdecl calculatePolygonLighting(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_processVertexLighting_FUN_00404730
// Address: 00404730
SMRGLHeaderExtended * __cdecl processVertexLighting(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_processTextureCoordinates_FUN_00404790
// Address: 00404790
SMRGLHeaderExtended * __cdecl processTextureCoordinates(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_004047e0
// Address: 004047e0
SMRGLHeaderExtended * __cdecl renderPolygonGrayscaleLitOp5(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonFogColorOp6_FUN_004048b0
// Address: 004048b0
SMRGLHeaderExtended * __cdecl renderPolygonFogColorOp6(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedLitOp7_FUN_004049d0
// Address: 004049d0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedLitOp7(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedWrappedOp8_FUN_00404a70
// Address: 00404a70
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedWrappedOp8(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_FUN_00404b10
// Address: 00404b10
int FUN_00404b10(int param_1);

// Original: engine_3d.c_processPolygonColor_FUN_00405140
// Address: 00405140
SMRGLHeaderExtended * __cdecl processPolygonColor(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_oldFunction3_FUN_004051e0
// Address: 004051e0
SMRGLHeaderExtended * __cdecl oldFunction3(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_FUN_00405200
// Address: 00405200
int FUN_00405200(int param_1);

// Original: engine_3d.c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00405240
// Address: 00405240
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedUVLitOp14(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00405340
// Address: 00405340
void * __cdecl renderPolygonTexturedUVLitPlaneMasked(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00405440
// Address: 00405440
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedOp15(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_oldFunction5_FUN_004054f0
// Address: 004054f0
SMRGLHeaderExtended * __cdecl oldFunction5(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00405540
// Address: 00405540
SMRGLHeaderExtended * __cdecl renderPolygonSolidLitClampedOp17(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_FUN_00405740
// Address: 00405740
int FUN_00405740(int param_1);

// Original: engine_3d.c_setRelativeCoord_FUN_00405750
// Address: 00405750
SMRGLHeaderExtended * __cdecl setRelativeCoord(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonTexturedNormalizedOp21_FUN_004057a0
// Address: 004057a0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedOp21(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_setActiveRenderColor_FUN_00405840
// Address: 00405840
void __cdecl setActiveRenderColor(void);

// Original: engine_3d.c_drawLineStrip2D_FUN_00405870
// Address: 00405870
SMRGLHeaderExtended * __cdecl drawLineStrip2D(SLineStrip *line_strip);

// Original: engine_3d.c_drawLineStrip3D_FUN_00405900
// Address: 00405900
SMRGLHeaderExtended * __cdecl drawLineStrip3D(SLineStrip *line_strip);

// Original: engine_3d.c_oldFunction7_FUN_00405990
// Address: 00405990
SMRGLHeaderExtended * __cdecl oldFunction7(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_FUN_004059c0
// Address: 004059c0
void FUN_004059c0(int param_1);

// Original: engine_3d.c_FUN_00405a60
// Address: 00405a60
uint FUN_00405a60(int *param_1,int *param_2);

// Original: engine_3d.c_FUN_00405ab0
// Address: 00405ab0
void FUN_00405ab0(int param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_3d.c_FUN_00405b30
// Address: 00405b30
void FUN_00405b30(void);

// Original: engine_3d.c_FUN_00405b40
// Address: 00405b40
SMRGLHeaderExtended * FUN_00405b40(SMRGLHeaderExtended *param_1);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
// Address: 00405c90
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedUVOp24(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10
// Address: 00405e10
SMRGLHeaderExtended * __cdecl renderPolygonAdaptivePlaneMaskedUVOp34(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_00406010
// Address: 00406010
SMRGLHeaderExtended * __cdecl renderPolygonLitNearPlaneOp35(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0
// Address: 004060b0
SMRGLHeaderExtended * __cdecl renderPolygonAdaptiveDepthOp25(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230
// Address: 00406230
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedOp26(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogColorDepthOp27_FUN_00406320
// Address: 00406320
SMRGLHeaderExtended * __cdecl renderPolygonFogColorDepthOp27(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_oldFunction8_FUN_004063c0
// Address: 004063c0
SMRGLHeaderExtended * __cdecl oldFunction8(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_updateAnimatedTexture_FUN_00406690
// Address: 00406690
SMRGLHeaderExtended * __cdecl updateAnimatedTexture(SMRGLAnimatedTexture *texture);

// Original: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00406740
// Address: 00406740
SMRGLHeaderExtended * __cdecl renderPolygonTexturedUVLitOp30(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_setVertexTextureU_FUN_00406840
// Address: 00406840
SMRGLHeaderExtended * __cdecl setVertexTextureU(SMRGLHeaderExtended *mrgl);

// Original: engine_3d.c_renderPolygonDestReadBlendOp33_FUN_00406880
// Address: 00406880
SMRGLHeaderExtended * __cdecl renderPolygonDestReadBlendOp33(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedUVLit_FUN_00406920
// Address: 00406920
SMRGLHeaderExtended * __cdecl renderPolygonTexturedUVLit(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_FUN_00406a00
// Address: 00406a00
int * FUN_00406a00(SMRGLHeaderPrimitive *param_1);

// Original: engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0
// Address: 00406ae0
SMRGLHeaderExtended * __cdecl renderPolygonAlphaTexturedNormalizedLit(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_FUN_00406b80
// Address: 00406b80
int * FUN_00406b80(SMRGLHeaderPrimitive *param_1);

// Original: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60
// Address: 00406c60
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedPlaneMaskedOp36(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80
// Address: 00406d80
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedPlaneMaskedPerspOp37(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedPerspOp39_FUN_00406ea0
// Address: 00406ea0
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedPerspOp39(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30
// Address: 00406f30
SMRGLHeaderExtended * __cdecl renderPolygonDepthWritePass(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00406fd0
// Address: 00406fd0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedHardwareOp40(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00407070
// Address: 00407070
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedHardwareOp53(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
// Address: 00407120
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedPlaneMaskedOp41(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_004072d0
// Address: 004072d0
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedDepthOp42(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthWriteOp43_FUN_00407370
// Address: 00407370
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthWriteOp43(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFogTexturedDepthWriteOp44_FUN_00407410
// Address: 00407410
SMRGLHeaderExtended * __cdecl renderPolygonFogTexturedDepthWriteOp44(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedOp45_FUN_004074b0
// Address: 004074b0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedOp45(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedOp46_FUN_00407550
// Address: 00407550
SMRGLHeaderExtended * __cdecl renderPolygonTexturedOp46(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthWriteOp47_FUN_004075f0
// Address: 004075f0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthWriteOp47(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedLitOp48_FUN_00407690
// Address: 00407690
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedLitOp48(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedDepthLitOp49_FUN_00407740
// Address: 00407740
SMRGLHeaderExtended * __cdecl renderPolygonTexturedDepthLitOp49(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonTexturedNormalizedOp50_FUN_004077e0
// Address: 004077e0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedNormalizedOp50(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_00407880
// Address: 00407880
SMRGLHeaderExtended * __cdecl renderPolygonSolidTexturedClampedOp51(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20
// Address: 00407a20
SMRGLHeaderExtended * __cdecl renderPolygonAdaptiveFogTexturedOp52(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00407cc0
// Address: 00407cc0
SMRGLHeaderExtended * __cdecl renderPolygonGrayscaleLitOp54(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90
// Address: 00407d90
SMRGLHeaderExtended * __cdecl renderPolygonDestReadBlendDepthLitOp55(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50
// Address: 00407e50
SMRGLHeaderExtended * __cdecl renderPolygonLitAlphaPlaneMaskedUVOp56(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonSolidLitOp62_FUN_00408010
// Address: 00408010
SMRGLHeaderExtended * __cdecl renderPolygonSolidLitOp62(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00408130
// Address: 00408130
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsLitOp57(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_004081d0
// Address: 004081d0
SMRGLHeaderExtended * __cdecl renderPolygonVertexAlphaLitOp60(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270
// Address: 00408270
SMRGLHeaderExtended * __cdecl renderPolygonBlendedLitOp63(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_setRenderAlphaFromBlock_FUN_00408350
// Address: 00408350
SMRGLHeaderExtended * __cdecl setRenderAlphaFromBlock(SMRGLHeaderExtended *block);

// Original: engine_3d.c_setRenderAlpha_FUN_00408370
// Address: 00408370
int __cdecl setRenderAlpha(int alpha_color_value);

// Original: engine_3d.c_setBlendMode_FUN_004083c0
// Address: 004083c0
void __cdecl setBlendMode(int blend_mode);

// Original: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0
// Address: 004083d0
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510
// Address: 00408510
SMRGLHeaderExtended * __cdecl renderPolygonAlphaBlendedDepthWritePerspOp59(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
// Address: 00408880
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsBufferedOp65(SMRGLHeaderPrimitive *prim);

// Original: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60
// Address: 00408a60
SMRGLHeaderExtended * __cdecl renderPolygonFullEffectsDirectOp66(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10
// Address: 00408c10
void __cdecl renderPolygonWithRenderFlags(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags);

// Original: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00408d10
// Address: 00408d10
void __cdecl renderPolygonWithRenderFlagsUV(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags);

// Original: engine_3d.c_FUN_00408e80
// Address: 00408e80
void FUN_00408e80(int *param_1);

// Original: engine_3d.c_flushRenderQueue_FUN_00408f50
// Address: 00408f50
void __cdecl flushRenderQueue(void);

// Original: engine_3d.c_FUN_00408fc0
// Address: 00408fc0
void FUN_00408fc0(SMRGLHeaderPrimitive *param_1);

// Original: engine_3d.c_FUN_00409210
// Address: 00409210
void FUN_00409210(int param_1,int param_2);

// Original: engine_3d.c_clipAndDrawLine2D_FUN_00409290
// Address: 00409290
void __cdecl clipAndDrawLine2D(SRenderVertex vertex1,SRenderVertex vertex2);

// Original: engine_3d.c_FUN_00409510
// Address: 00409510
void FUN_00409510(int param_1,int param_2);

// Original: engine_3d.c_clipAndDrawLine3D_FUN_00409590
// Address: 00409590
void __cdecl clipAndDrawLine3D(SRenderVertex vertex1,SRenderVertex vertex2);

// Original: engine_3d.c_addPolygonEdge_FUN_004940e0
// Address: 004940e0
void __cdecl addPolygonEdge(SRenderVertex *vertex1,SRenderVertex *vertex2);

// Original: engine_3d.c_findHardwareEdgeByYMin_FUN_00494220
// Address: 00494220
SHardwareEdge * __cdecl findHardwareEdgeByYMin(int y_min,SHardwareEdge *exclude_edge);

// Original: engine_3d.c_rasterizePolygonHardware_FUN_00494260
// Address: 00494260
void __cdecl rasterizePolygonHardware(SRenderVertex **vertices,int vertex_count);

// Original: engine_3d.c_addRasterizerEdge_FUN_00562620
// Address: 00562620
void __cdecl addRasterizerEdge(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_3d.c_addRasterizerEdgeWithDepth_FUN_00562740
// Address: 00562740
void __cdecl addRasterizerEdgeWithDepth(SRenderVertex *v0,SRenderVertex *v1);

// Original: engine_3d.c_FUN_00562880
// Address: 00562880
int * FUN_00562880(int param_1,int *param_2);

// Original: engine_3d.c_rasterizeTriangle_FUN_005628c0
// Address: 005628c0
void __cdecl rasterizeTriangle(SRenderVertex *vertex_buffer,int vertex_count);

// Original: engine_3d.c_rasterizePolygonCustom_FUN_00562de0
// Address: 00562de0
void __cdecl rasterizePolygonCustom(SRenderVertex *vertex_buffer,int vertex_count,CustomScanlineFunc *scanline_renderer);
