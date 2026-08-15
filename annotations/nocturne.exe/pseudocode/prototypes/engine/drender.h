#pragma once

// Function prototypes for engine/drender.cpp
// Generated from Ghidra function signatures

// Original: engine_drender.cpp_FUN_004579c0
// Address: 004579c0
int * FUN_004579c0(int param_1,int *param_2);

// Original: engine_drender.cpp_renderTriangleTextured_FUN_00457a00
// Address: 00457a00
void __cdecl renderTriangleTextured(int *vertex_indices,int vertex_count);

// Original: engine_drender.cpp_renderTriangleSimple_FUN_00458080
// Address: 00458080
void __cdecl renderTriangleSimple(CVector3i *vertex_indices,int vertex_count);

// Original: engine_drender.cpp_staticInit_FUN_0045ecf0
// Address: 0045ecf0
void __cdecl staticInit(void);

// Original: engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00
// Address: 0045ed00
CDemonRenderer * __cdecl CDemonRenderer::ctor(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40
// Address: 0045ed40
void __cdecl CDemonRenderer::setProjectionMode(CDemonRenderer *this_ptr,int mode);

// Original: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
// Address: 0045ed80
void __cdecl CDemonRenderer::clipAndFillPoly(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices);

// Original: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
// Address: 0045ee60
void __cdecl CDemonRenderer::renderSolidColorDepthDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
// Address: 0045eee0
void __cdecl CDemonRenderer::renderSolidColorPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90
// Address: 0045ef90
void __cdecl CDemonRenderer::renderZPrepassPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
// Address: 0045f090
int __cdecl CDemonRenderer::countVisiblePixelsPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
// Address: 0045f190
int __cdecl CDemonRenderer::renderDepthProfiledDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270
// Address: 0045f270
void __cdecl CDemonRenderer::renderNearPlaneTexturedPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
// Address: 0045f3c0
void __cdecl CDemonRenderer::renderTexturedDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
// Address: 0045f460
void __cdecl CDemonRenderer::renderTexturedPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0
// Address: 0045f5e0
void __cdecl CDemonRenderer::renderTexturedFace(CDemonRenderer *this_ptr,SInputFace *face,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_0045f700
// Address: 0045f700
void __cdecl CDemonRenderer::renderAlphaBlendedDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
// Address: 0045f790
void __cdecl CDemonRenderer::renderAlphaBlendedPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0
// Address: 0045f8d0
void __cdecl CDemonRenderer::renderAlphaBlendedFace(CDemonRenderer *this_ptr,SInputFace *face);

// Original: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0
// Address: 0045f9d0
void __cdecl CDemonRenderer::renderDecalPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
// Address: 0045fb00
void __cdecl CDemonRenderer::renderSolidTexturedPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0045fc00
// Address: 0045fc00
void __cdecl CDemonRenderer::renderFullEffectsDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderFullEffectsPoly_FUN_0045fce0
// Address: 0045fce0
void __cdecl CDemonRenderer::renderFullEffectsPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0045fe40
// Address: 0045fe40
void __cdecl CDemonRenderer::renderDestReadBlendDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
// Address: 0045ff20
void __cdecl CDemonRenderer::renderDestReadBlendPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
// Address: 00460080
void __cdecl CDemonRenderer::renderVertexAlphaDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
// Address: 00460150
void __cdecl CDemonRenderer::renderVertexAlphaPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
// Address: 004602a0
void __cdecl CDemonRenderer::renderBlendedDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
// Address: 00460370
void __cdecl CDemonRenderer::renderBlendedPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0
// Address: 004604c0
void __cdecl CDemonRenderer::renderOverlayDirect(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim);

// Original: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590
// Address: 00460590
void __cdecl CDemonRenderer::renderOverlayPoly(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly);

// Original: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
// Address: 004606e0
void __cdecl CDemonRenderer::setCameraOrigin(CDemonRenderer *this_ptr,CVector3i *origin);

// Original: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
// Address: 00460700
void __cdecl CDemonRenderer::setCameraOriginFromScaledPoint(CDemonRenderer *this_ptr,CVector3f *point_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setCameraRotationFromPoint_FUN_00460760
// Address: 00460760
void __cdecl CDemonRenderer::setCameraRotationFromPoint(CDemonRenderer *this_ptr,CVector3i *rotation);

// Original: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
// Address: 00460780
void __cdecl CDemonRenderer::setupSceneRendering(CDemonRenderer *this_ptr,CVector3f *euler_angles);

// Original: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
// Address: 004607b0
void __cdecl CDemonRenderer::setupCameraAndProjection(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix);

// Original: engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_004609d0
// Address: 004609d0
void __cdecl CDemonRenderer::copyAndTransform3DPoint(CDemonRenderer *this_ptr,CVector3f *input_point);

// Original: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
// Address: 00460a00
void __cdecl CDemonRenderer::processCameraRelativeVertex(CDemonRenderer *this_ptr,CVector3f *world_position);

// Original: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
// Address: 00460a50
void __cdecl CDemonRenderer::applyDirectTransform(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation);

// Original: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
// Address: 00460aa0
void __cdecl CDemonRenderer::applyScaledTransform(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation);

// Original: engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0
// Address: 00460be0
void __cdecl CDemonRenderer::matrixPush(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
// Address: 00460bf0
void __cdecl CDemonRenderer::matrixPop(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
// Address: 00460c00
void __cdecl CDemonRenderer::setProjectionScale(CDemonRenderer *this_ptr,float field_of_view);

// Original: engine_drender.cpp_FUN_00460c26
// Address: 00460c26
void FUN_00460c26(void);

// Original: engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40
// Address: 00460c40
void __cdecl CDemonRenderer::setLightIntensity(CDemonRenderer *this_ptr,float intensity);

// Original: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70
// Address: 00460c70
void __cdecl CDemonRenderer::setLightDirection(CDemonRenderer *this_ptr,CVector3i *direction);

// Original: engine_drender.cpp_CDemonRenderer_scaleAndSetDirectionalLight_FUN_00460c90
// Address: 00460c90
void __cdecl CDemonRenderer::scaleAndSetDirectionalLight(CDemonRenderer *this_ptr,CVector3f *light_direction);

// Original: engine_drender.cpp_FUN_00460d10
// Address: 00460d10
void FUN_00460d10(void);

// Original: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
// Address: 00460d30
CVector3f * __cdecl CDemonRenderer::getCameraOriginWorld(CDemonRenderer *this_ptr,CVector3f *output);

// Original: engine_drender.cpp_FUN_00460d90
// Address: 00460d90
void FUN_00460d90(void);

// Original: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
// Address: 00460db0
CVector3f * __cdecl CDemonRenderer::getCameraRotationRadians(CDemonRenderer *this_ptr,CVector3f *output);

// Original: engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_00460e20
// Address: 00460e20
float __cdecl CDemonRenderer::calculateProjectionFactor(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
// Address: 00460e40
void __cdecl CDemonRenderer::pushViewport(CDemonRenderer *this_ptr,int x,int y,int width,int height);

// Original: engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
// Address: 00460e70
void __cdecl CDemonRenderer::popViewport(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
// Address: 00460e80
void __cdecl CDemonRenderer::renderCustomScanline(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim,CustomScanlineFunc *scanline_renderer);

// Original: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
// Address: 00460f10
void __cdecl CDemonRenderer::setCurrentPolygonColor(CDemonRenderer *this_ptr,int color);

// Original: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
// Address: 00460f20
void __cdecl CDemonRenderer::setRGBAColor(CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component);

// Original: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
// Address: 00460fa0
void __cdecl CDemonRenderer::setPlaneCullingEnabled(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
// Address: 00460fb0
void __cdecl CDemonRenderer::setRenderingState(CDemonRenderer *this_ptr,int state_flag);

// Original: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
// Address: 00461000
void __cdecl CDemonRenderer::setBlendMode(CDemonRenderer *this_ptr,int blend_mode);

// Original: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
// Address: 00461010
int __cdecl CDemonRenderer::setRenderAlpha(CDemonRenderer *this_ptr,int render_alpha);

// Original: engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
// Address: 00461020
void __cdecl CDemonRenderer::setRenderAlphaNormalized(CDemonRenderer *this_ptr,float render_alpha);

// Original: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
// Address: 00461050
void __cdecl CDemonRenderer::enableFaceCapture(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
// Address: 00461070
void __cdecl CDemonRenderer::setFaceCount(CDemonRenderer *this_ptr,int value);

// Original: engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
// Address: 00461090
int __cdecl CDemonRenderer::getFaceCount(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
// Address: 004610a0
void __cdecl CDemonRenderer::clipAndDrawLine3D(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2);

// Original: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
// Address: 004613a0
void __cdecl CDemonRenderer::setAlphaMask(CDemonRenderer *this_ptr,int alpha_mask);

// Original: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
// Address: 004613b0
int __cdecl CDemonRenderer::getAlphaMask(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
// Address: 004613c0
void __cdecl CDemonRenderer::enableAdvancedCulling(CDemonRenderer *this_ptr,int enabled);

// Original: engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004613d0
// Address: 004613d0
void __cdecl CDemonRenderer::renderTriangleBatch(CDemonRenderer *this_ptr,SMRGLPrimitiveTriangle *primitive_array,int primitive_count ,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440
// Address: 00461440
void __cdecl CDemonRenderer::renderQuadBatch(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
// Address: 004614b0
void __cdecl CDemonRenderer::renderFacetList(CDemonRenderer *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int primitive_stride,int render_flags);

// Original: engine_drender.cpp_FUN_00461720
// Address: 00461720
void __cdecl FUN_00461720(CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
// Address: 004619f0
void __cdecl CDemonRenderer::setTextureCaptureMode(CDemonRenderer *this_ptr,int enable_advanced_mode);

// Original: engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_00461a30
// Address: 00461a30
void __cdecl CDemonRenderer::processVisiblePrimitive(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0
// Address: 00461ad0
void __cdecl CDemonRenderer::processQuadPrimitive(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *quad_primitive,int render_flags);

// Original: engine_drender.cpp_CDemonRenderer_captureFace_FUN_00461bd0
// Address: 00461bd0
void __cdecl CDemonRenderer::captureFace(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags);

// Original: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_00461d50
// Address: 00461d50
int __cdecl qsortByCapturedFaceDepthAscending(SFace **face_ptr_a,SFace **face_ptr_b);

// Original: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80
// Address: 00461d80
int __cdecl qsortByCapturedFaceDepthDescending(SFace **face_ptr_a,SFace **face_ptr_b);

// Original: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
// Address: 00461db0
void __cdecl CDemonRenderer::processCapturedFaces(CDemonRenderer *this_ptr);

// Original: engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
// Address: 00461eb0
void __cdecl CDemonRenderer::captureTexture(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture);

// Original: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60
// Address: 00461f60
void __cdecl CDemonRenderer::updateTexture(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette);

// Original: engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
// Address: 00461f80
int __cdecl CDemonRenderer::depthTest(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr);
