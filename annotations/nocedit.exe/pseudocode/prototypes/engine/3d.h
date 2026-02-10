#pragma once

// Function prototypes for engine/3d.cpp
// Generated from Ghidra function signatures

// Original: engine_3d.c_oldFunction_FUN_00403740
// Address: 00403740
void * __cdecl oldFunction(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_badMRGLStruct_FUN_004037b0
// Address: 004037b0
SMRGLHeaderExtended * __cdecl badMRGLStruct(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
SMRGLHeaderExtended * __cdecl processCameraRelativePoint(CQuaternion4f *input_point);

// Original: engine_3d.c_transformAndBufferVertices_FUN_00403840
// Address: 00403840
SMRGLHeaderExtended * __cdecl transformAndBufferVertices(SVertexBatch *vertex_source,SVertexBatch *processing_params);

// Original: engine_3d.c_isVisiblePlane_FUN_00403950
// Address: 00403950
int __cdecl isVisiblePlane(SClipPlane *plane);

// Original: engine_3d.c_makeGrayscaleColor_FUN_004039c0
// Address: 004039c0
uint __cdecl makeGrayscaleColor(int intensity);

// Original: engine_3d.c_calculatePolygonLighting_FUN_00403a00
// Address: 00403a00
void __cdecl calculatePolygonLighting(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_processVertexLighting_FUN_00403a20
// Address: 00403a20
SMRGLHeaderExtended * __cdecl processVertexLighting(SVertexBatch *vertex_batch);

// Original: engine_3d.c_processTextureCoordinates_FUN_00403a80
// Address: 00403a80
SMRGLHeaderExtended * __cdecl processTextureCoordinates(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0
// Address: 00403ad0
SMRGLHeaderExtended * __cdecl renderPolygonLastPixelMode(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygon_FUN_00403ba0
// Address: 00403ba0
SMRGLHeaderExtended * __cdecl renderPolygon(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
// Address: 00403cc0
SMRGLHeaderExtended * __cdecl renderPolygonTextureEnable(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60
// Address: 00403d60
SMRGLHeaderExtended * __cdecl renderPrimitiveUVWrappedSpecial(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_oldFunction_FUN_00403e00
// Address: 00403e00
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_processPolygonColor_FUN_00403e30
// Address: 00403e30
SMRGLHeaderExtended * __cdecl processPolygonColor(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_oldFunction_FUN_00403ec0
// Address: 00403ec0
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_oldFunction_FUN_00403ef0
// Address: 00403ef0
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonTextureNormalized_FUN_00403f20
// Address: 00403f20
SMRGLHeaderExtended * __cdecl renderPolygonTextureNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
// Address: 00404020
void * __cdecl renderOverlayTextureEnable(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonVertexLit_FUN_00404120
// Address: 00404120
SMRGLHeaderExtended * __cdecl renderPolygonVertexLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_oldFunction_FUN_004041d0
// Address: 004041d0
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonLitDetailed_FUN_00404220
// Address: 00404220
SMRGLHeaderExtended * __cdecl renderPolygonLitDetailed(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_oldFunction_FUN_00404420
// Address: 00404420
SMRGLHeaderExtended * oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_setRelativeCoord_FUN_00404450
// Address: 00404450
SMRGLHeaderExtended * __cdecl setRelativeCoord(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0
// Address: 004044a0
SMRGLHeaderExtended * __cdecl renderPolygonTextureNormalized(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_setActiveRenderColor_FUN_00404540
// Address: 00404540
void __cdecl setActiveRenderColor(void);

// Original: engine_3d.c_drawLineStrip2D_FUN_00404570
// Address: 00404570
SMRGLHeaderExtended * __cdecl drawLineStrip2D(SLineStrip *line_strip);

// Original: engine_3d.c_drawLineStrip3D_FUN_00404600
// Address: 00404600
void __cdecl drawLineStrip3D(SLineStrip *line_strip);

// Original: engine_3d.c_oldFunction_FUN_00404690
// Address: 00404690
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
// Address: 004046c0
SMRGLHeaderExtended * __cdecl renderPrimitivePlaneMaskedComplex(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840
// Address: 00404840
SMRGLHeaderExtended * __cdecl renderPrimitiveAdaptivePlaneMasked(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonPlaneMaskedNearPlane_FUN_00404a40
// Address: 00404a40
SMRGLHeaderExtended * __cdecl renderPolygonPlaneMaskedNearPlane(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0
// Address: 00404ae0
SMRGLHeaderExtended * __cdecl renderPolygonAdaptiveDepthMode(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
// Address: 00404c60
SMRGLHeaderExtended * __cdecl renderPolygonPlaneMaskedComplex(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
// Address: 00404d50
SMRGLHeaderExtended * __cdecl renderPolygonUVMappedComplex(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_oldFunction_FUN_00404df0
// Address: 00404df0
SMRGLHeaderExtended * __cdecl oldFunction(SMRGLHeaderExtended *primitive);

// Original: engine_3d.c_renderPolygonVertexLitNearPlane_FUN_00404e40
// Address: 00404e40
void * __cdecl renderPolygonVertexLitNearPlane(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureNearPlane_FUN_00404ee0
// Address: 00404ee0
void * __cdecl renderPolygonTextureNearPlane(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80
// Address: 00404f80
void * __cdecl renderPolygonVertexLitNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020
// Address: 00405020
void * __cdecl renderPolygonVertexLitNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
SMRGLHeaderExtended * __cdecl updateAnimatedTexture(SAnimatedTexture *anim_texture);

// Original: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170
// Address: 00405170
SMRGLHeaderExtended * __cdecl renderPolygonUVTextureEnable(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_setVertexTextureU_FUN_00405270
// Address: 00405270
SMRGLHeaderExtended * __cdecl setVertexTextureU(SVertexBatch *vertex_batch);

// Original: engine_3d.c_renderPolygonLitComplexAlpha_FUN_004052b0
// Address: 004052b0
SMRGLHeaderExtended * __cdecl renderPolygonLitComplexAlpha(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350
// Address: 00405350
SMRGLHeaderExtended * __cdecl renderPolygonUVTextureEnable(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430
// Address: 00405430
SMRGLHeaderExtended * __cdecl renderPolygonUVTextureNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510
// Address: 00405510
SMRGLHeaderExtended * __cdecl renderPolygonUVVertexLitNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0
// Address: 004055b0
SMRGLHeaderExtended * __cdecl renderPolygonPerspectiveNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
// Address: 00405690
SMRGLHeaderExtended * __cdecl renderPolygonEnginePlaneMaskedEffect(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
// Address: 004057b0
SMRGLHeaderExtended * __cdecl renderPolygonEnginePlaneMaskedAdvanced(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0
// Address: 004058d0
SMRGLHeaderExtended * __cdecl renderPolygonUVWrappedAdvanced(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
// Address: 00405960
SMRGLHeaderExtended * __cdecl renderPolygonDepthWriteTextured(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00
// Address: 00405a00
SMRGLHeaderExtended * __cdecl renderPolygonUVTextureEnable(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0
// Address: 00405aa0
SMRGLHeaderExtended * __cdecl renderPolygonUVVertexLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
// Address: 00405b50
SMRGLHeaderExtended * __cdecl renderPolygonTextureWrappedPlaneMasked(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureWrappedStandard_FUN_00405ce0
// Address: 00405ce0
SMRGLHeaderExtended * __cdecl renderPolygonTextureWrappedStandard(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80
// Address: 00405d80
SMRGLHeaderExtended * __cdecl renderPolygonDepthWriteTexturedLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20
// Address: 00405e20
SMRGLHeaderExtended * __cdecl renderPolygonDepthWriteTexturedAdvanced(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTexturedBasic_FUN_00405ec0
// Address: 00405ec0
SMRGLHeaderExtended * __cdecl renderPolygonTexturedBasic(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60
// Address: 00405f60
SMRGLHeaderExtended * __cdecl renderPolygonOverlayTextured(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000
// Address: 00406000
SMRGLHeaderExtended * __cdecl renderPolygonDepthWriteTexturedLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0
// Address: 004060a0
SMRGLHeaderExtended * __cdecl renderPolygonTexturePerspectiveCorrect(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150
// Address: 00406150
SMRGLHeaderExtended * __cdecl renderPolygonTextureWrappedLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0
// Address: 004061f0
SMRGLHeaderExtended * __cdecl renderPolygonUVTextureNormalized(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290
// Address: 00406290
SMRGLHeaderExtended * __cdecl renderPolygonTexturePerspectiveCorrect(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430
// Address: 00406430
SMRGLHeaderExtended * __cdecl renderPolygonTextureAdaptiveWrapped(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0
// Address: 004066d0
SMRGLHeaderExtended * __cdecl renderPolygonLastPixelMode(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0
// Address: 004067a0
SMRGLHeaderExtended * __cdecl renderPolygonPerspectiveAlphaSpecial(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860
// Address: 00406860
SMRGLHeaderExtended * __cdecl renderPolygonPlaneMaskedDetailedComplex(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonLitDetailed_FUN_00406a20
// Address: 00406a20
SMRGLHeaderExtended * __cdecl renderPolygonLitDetailed(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40
// Address: 00406b40
SMRGLHeaderExtended * __cdecl renderPolygonExtremeQualityMode(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0
// Address: 00406be0
SMRGLHeaderExtended * __cdecl renderPolygonEngineDepthLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80
// Address: 00406c80
SMRGLHeaderExtended * __cdecl renderPolygonEngineEnhancedDepthLit(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_setRenderAlpha_FUN_00406d60
// Address: 00406d60
SMRGLHeaderExtended * __cdecl setRenderAlpha(SMRGLHeaderExtended *block);

// Original: engine_3d.c_setRenderAlpha_FUN_00406d80
// Address: 00406d80
void __cdecl setRenderAlpha(int alpha_color_value);

// Original: engine_3d.c_setBlendMode_FUN_00406dd0
// Address: 00406dd0
void __cdecl setBlendMode(int blend_mode);

// Original: engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0
// Address: 00406de0
SMRGLHeaderExtended * __cdecl renderPolygonSpecialEffectsPlaneMasked(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20
// Address: 00406f20
SMRGLHeaderExtended * __cdecl renderPolygonSpecialEffectsAdvanced(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_resetRenderBuffer_FUN_00407060
// Address: 00407060
void __cdecl resetRenderBuffer(void);

// Original: engine_3d.c_qsortByRenderDepth_FUN_00407080
// Address: 00407080
int __cdecl qsortByRenderDepth(SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr);

// Original: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0
// Address: 004070c0
SMRGLHeaderExtended * __cdecl renderPolygonEngineAPIPremiumMultiState(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
// Address: 00407290
SMRGLHeaderExtended * __cdecl renderPolygonEngineAPIPremiumMultiState(SMRGLHeaderPrimitive *polygon_info);

// Original: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470
// Address: 00407470
SMRGLHeaderExtended * __cdecl renderPolygonEngineAPIPremiumMultiState(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620
// Address: 00407620
SMRGLHeaderExtended * __cdecl renderPolygonAPIAdaptivePreprocessing(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags, int alpha_blend_flags,int special_render_mode);

// Original: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
// Address: 00407720
SMRGLHeaderExtended * __cdecl renderPolygonAPIAdaptivePreprocessing(SMRGLHeaderPrimitive *polygon_info);

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
SMRGLHeaderExtended * __cdecl renderPrim(SMRGLHeaderPrimitive *primitive);

// Original: engine_3d.c_addFaceIfVisible_FUN_004079c0
// Address: 004079c0
void __cdecl addFaceIfVisible(SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue);

// Original: engine_3d.c_flushRenderQueue_FUN_00407a30
// Address: 00407a30
void __cdecl flushRenderQueue(void);

// Original: engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0
// Address: 00407aa0
void __cdecl dispatchMRGLToRenderer(SVertexBatch *cmd);

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

// Original: engine_3d.c_addPolygonEdge_FUN_004d11c0
// Address: 004d11c0
void __cdecl addPolygonEdge(SRenderVertex *vertex1,SRenderVertex *vertex2);

// Original: engine_3d.c_findHardwareEdgeByYMin_FUN_004d1300
// Address: 004d1300
SHardwareEdge * __cdecl findHardwareEdgeByYMin(int y_min,SHardwareEdge *exclude_edge);

// Original: engine_3d.c_rasterizePolygon_FUN_004d1340
// Address: 004d1340
void __cdecl rasterizePolygon(SRenderVertex **vertices,int vertex_count);

// Original: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
// Address: 005fcfc0
void __cdecl rasterizeTriangle(SRenderVertex *vertex_buffer,int vertex_count,int triangle_count);

// Original: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// Address: 005fd4e0
void __cdecl rasterizePolygon(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer);
