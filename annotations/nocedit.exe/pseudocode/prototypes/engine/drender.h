#pragma once

// Function prototypes for engine/drender.cpp
// Generated from Ghidra function signatures

// Original: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
void __cdecl renderTriangleTextured(int *vertex_indices,int vertex_count);

// Original: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// Address: 004839f0
void __cdecl renderTriangleSimple(CVector3i *vertex_indices,int vertex_count);

// Original: engine_drender.cpp_staticInit_FUN_0048a6b0
// Address: 0048a6b0
void __cdecl staticInit(void);

// Original: engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
// Address: 0048a6c0
CDemonRenderer * __cdecl CDemonRenderer::ctor(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700
// Address: 0048a700
void __cdecl CDemonRenderer::setProjectionMode(CDemonRenderer *this_ptr,int mode);

// Original: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
// Address: 0048a740
void __cdecl CDemonRenderer::clipAndFillPoly(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices);

// Original: engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
// Address: 0048a820
void __cdecl CDemonRenderer::renderBasicTextured(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
// Address: 0048a8a0
void __cdecl CDemonRenderer::renderBasicTexturedVariant(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderAlternativeDepth_FUN_0048a950
// Address: 0048a950
void __cdecl CDemonRenderer::renderAlternativeDepth(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
// Address: 0048aa50
int __cdecl CDemonRenderer::renderStandardTextured(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
// Address: 0048ab50
int __cdecl CDemonRenderer::renderTexturedBasic(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
// Address: 0048ac40
void __cdecl CDemonRenderer::renderTexturedLitNearPlane(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90
// Address: 0048ad90
void __cdecl CDemonRenderer::renderPerspectiveTextured(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
// Address: 0048ae10
void __cdecl CDemonRenderer::renderPerspective(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
// Address: 0048aeb0
void __cdecl CDemonRenderer::renderWireframeVariant(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
// Address: 0048b030
void __cdecl CDemonRenderer::renderWireframeAdvanced(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderPremiumDirect_FUN_0048b150
// Address: 0048b150
void __cdecl CDemonRenderer::renderPremiumDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
// Address: 0048b1e0
void __cdecl CDemonRenderer::renderPremium(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderPremiumVariant_FUN_0048b320
// Address: 0048b320
void __cdecl CDemonRenderer::renderPremiumVariant(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420
// Address: 0048b420
void __cdecl CDemonRenderer::renderSpecialDepth(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
// Address: 0048b550
void __cdecl CDemonRenderer::renderPerspectiveLit(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650
// Address: 0048b650
void __cdecl CDemonRenderer::renderEnhancedQualityDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730
// Address: 0048b730
void __cdecl CDemonRenderer::renderEnhancedQualityWithIndices(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890
// Address: 0048b890
void __cdecl CDemonRenderer::renderUltraPremiumDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
// Address: 0048b970
void __cdecl CDemonRenderer::renderUltraPremium(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
// Address: 0048bad0
void __cdecl CDemonRenderer::renderMaximumQuality(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
// Address: 0048bba0
void __cdecl CDemonRenderer::renderMaximumQualityVariant(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
// Address: 0048bcf0
void __cdecl CDemonRenderer::renderEnhancedQuality(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
// Address: 0048bdc0
void __cdecl CDemonRenderer::renderEnhancedQualityVariant(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
// Address: 0048bf10
void __cdecl CDemonRenderer::renderComplexMultiFeature(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0
// Address: 0048bfe0
void __cdecl CDemonRenderer::renderComplexMultiFeatureWithIndices(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
// Address: 0048c130
void __cdecl CDemonRenderer::setCameraOrigin(CDemonRenderer *this_ptr,CVector3i *origin);

// Original: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
// Address: 0048c150
void __cdecl CDemonRenderer::setCameraOriginFromScaledPoint(CDemonRenderer *this_ptr,CVector3i *point_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_0048c1b0
// Address: 0048c1b0
void __cdecl CDemonRenderer::setCameraRotationFromPoint(CDemonRenderer *this_ptr,CVector3i *rotation);

// Original: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
// Address: 0048c1d0
void __cdecl CDemonRenderer::setupSceneRendering(CDemonRenderer *this_ptr,CVector3f *euler_angles);

// Original: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// Address: 0048c200
void __cdecl CDemonRenderer::setupCameraAndProjection(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix);

// Original: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
// Address: 0048c420
void __cdecl CDemonRenderer::copyAndTransform3DPoint(CDemonRenderer *this_ptr,CVector3f *input_point);

// Original: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// Address: 0048c450
void __cdecl CDemonRenderer::processCameraRelativeVertex(CDemonRenderer *this_ptr,CVector3f *world_position);

// Original: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
// Address: 0048c4a0
void __cdecl CDemonRenderer::applyDirectTransform(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);

// Original: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
void __cdecl CDemonRenderer::applyScaledTransform(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);

// Original: engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0048c630
// Address: 0048c630
void __cdecl CDemonRenderer::matrixPush(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
// Address: 0048c640
void __cdecl CDemonRenderer::matrixPop(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
// Address: 0048c650
void __cdecl CDemonRenderer::setProjectionScale(CDemonRenderer *this_ptr,float field_of_view);

// Original: engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
// Address: 0048c670
void __cdecl CDemonRenderer::setProjectionScaleSimple(CDemonRenderer *this_ptr,float scale_factor);

// Original: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_0048c690
// Address: 0048c690
void __cdecl CDemonRenderer::setLightIntensity(CDemonRenderer *this_ptr,float intensity);

// Original: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
// Address: 0048c6c0
void __cdecl CDemonRenderer::setLightDirection(CDemonRenderer *this_ptr,CVector3i *direction);

// Original: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_0048c6e0
// Address: 0048c6e0
void __cdecl CDemonRenderer::scaleAndSetDirectionalLight(CDemonRenderer *this_ptr,CVector3f *light_direction);

// Original: engine_drender.cpp_CDemonRenderer_calculateVertexLight_FUN_0048c740
// Address: 0048c740
void __cdecl CDemonRenderer::calculateVertexLight(CDemonRenderer *this_ptr,int vertex_index,CVector3i *vertex_position);

// Original: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// Address: 0048c760
CVector3i * __stack_esi CDemonRenderer::getCameraOriginToBuffer(CDemonRenderer *this_ptr,CVector3i *output);

// Original: engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
// Address: 0048c780
CVector3f * __cdecl CDemonRenderer::getCameraOriginScaled(CDemonRenderer *this_ptr,CVector3f *output);

// Original: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
// Address: 0048c7e0
CVector3i * __stack_esi CDemonRenderer::getCameraRotationToBuffer(CDemonRenderer *this_ptr,CVector3i *output);

// Original: engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
// Address: 0048c800
float * __cdecl CDemonRenderer::getCameraRotationAsRadians(CDemonRenderer *this_ptr,float *output);

// Original: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
// Address: 0048c870
float __cdecl CDemonRenderer::calculateProjectionFactor(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
// Address: 0048c890
void __cdecl CDemonRenderer::pushViewport(CDemonRenderer *this_ptr,int x,int y,int width,int height);

// Original: engine_drender.cpp_CDemonRenderer_popViewport_FUN_0048c8c0
// Address: 0048c8c0
void __cdecl CDemonRenderer::popViewport(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
// Address: 0048c8d0
void __cdecl CDemonRenderer::renderCustomScanline(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,RenderScanlineFunc *scanline_renderer);

// Original: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
// Address: 0048c960
void __cdecl CDemonRenderer::setCurrentPolygonColor(CDemonRenderer *this_ptr,int color);

// Original: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
// Address: 0048c970
void __cdecl CDemonRenderer::setRGBAColor(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component);

// Original: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
// Address: 0048c9f0
void __cdecl CDemonRenderer::setPlaneCullingEnabled(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
// Address: 0048ca00
void __cdecl CDemonRenderer::setRenderingState(CDemonRenderer *this_ptr,int state_flag);

// Original: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
// Address: 0048ca50
void __cdecl CDemonRenderer::setBlendMode(CDemonRenderer *this_ptr,int blend_mode);

// Original: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
// Address: 0048ca60
int __cdecl CDemonRenderer::setRenderAlpha(CDemonRenderer *this_ptr,int render_alpha);

// Original: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_0048ca70
// Address: 0048ca70
void __cdecl CDemonRenderer::setRenderAlphaNormalized(CDemonRenderer *this_ptr,float render_alpha);

// Original: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
// Address: 0048caa0
void __cdecl CDemonRenderer::enableFaceCapture(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
// Address: 0048cac0
void __cdecl CDemonRenderer::setFaceCount(CDemonRenderer *this_ptr,int value);

// Original: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
// Address: 0048cae0
int __cdecl CDemonRenderer::getFaceCount(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
void __cdecl CDemonRenderer::clipAndDrawLine3D(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2);

// Original: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
// Address: 0048cdf0
void __cdecl CDemonRenderer::setAlphaMask(CDemonRenderer *this_ptr,int alpha_mask);

// Original: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
// Address: 0048ce00
int __cdecl CDemonRenderer::getAlphaMask(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
// Address: 0048ce10
void __cdecl CDemonRenderer::enableAdvancedCulling(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20
// Address: 0048ce20
void __cdecl CDemonRenderer::renderFaceBatch(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
// Address: 0048ce90
void __cdecl CDemonRenderer::renderPrimitiveBatch(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
// Address: 0048cf00
void __cdecl CDemonRenderer::renderTriangleFacetList(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,int primitive_stride,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
// Address: 0048d170
void __cdecl CDemonRenderer::renderFaceList(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410
// Address: 0048d410
void __cdecl CDemonRenderer::renderGeometryBatch(CDemonRenderer *this_ptr,int *vertex_indices,int face_count,int vertices_per_face,int render_mode);

// Original: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
// Address: 0048d6c0
void __cdecl CDemonRenderer::setTextureCaptureMode(CDemonRenderer *this_ptr,int enable_advanced_mode);

// Original: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0048d700
// Address: 0048d700
void __cdecl CDemonRenderer::processVisiblePrimitive(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0048d7a0
// Address: 0048d7a0
void __cdecl CDemonRenderer::processQuadPrimitive(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
// Address: 0048d8a0
void __cdecl CDemonRenderer::captureFace(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags);

// Original: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
// Address: 0048da20
int __cdecl qsortByCapturedFaceDepthAscending(SFace **face_ptr_a,SFace **face_ptr_b);

// Original: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
// Address: 0048da50
int __cdecl qsortByCapturedFaceDepthDescending(SFace **face_ptr_a,SFace **face_ptr_b);

// Original: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
// Address: 0048da80
void __cdecl CDemonRenderer::processCapturedFaces(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
// Address: 0048db80
void __cdecl CDemonRenderer::captureTexture(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture);

// Original: engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20
// Address: 0048dc20
void __cdecl CDemonRenderer::updateTextureWithPalette(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update);

// Original: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
// Address: 0048dc30
void __cdecl CDemonRenderer::updateTexture(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette);

// Original: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
// Address: 0048dc50
int __cdecl CDemonRenderer::depthTest(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0048dcc0
// Address: 0048dcc0
void __cdecl CDemonRenderer::setupCameraAndViewport(CDemonRenderer *this_ptr,SCameraViewportState *camera_state);

// Original: engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0048de20
// Address: 0048de20
void __cdecl CDemonRenderer::getCameraAndViewportState(CDemonRenderer *this_ptr,SCameraViewportState *output_state);
