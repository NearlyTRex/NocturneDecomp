#pragma once

// Function prototypes for core/dcamera.cpp
// Generated from Ghidra function signatures

// Original: core_dcamera.cpp_staticInit_FUN_0043f9c0
// Address: 0043f9c0
void __cdecl staticInit(void);

// Original: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
// Address: 0043fa20
void __cdecl resetFogSamplingOffset(SFogGrid *fog);

// Original: core_dcamera.cpp_generateFogGrid_FUN_0043fa50
// Address: 0043fa50
void __cdecl generateFogGrid(SFogGrid *fog);

// Original: core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80
// Address: 0043fc80
uint __cdecl sampleFogAlongRay(SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length);

// Original: core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60
// Address: 0043fe60
void __cdecl updateFogScrollOffset(SFogGrid *fog_ptr,int time_major,int time_minor);

// Original: core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0
// Address: 0043fee0
CDemonCamera * __cdecl CDemonCamera::ctor(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_dtor_FUN_0043ff30
// Address: 0043ff30
CDemonCamera * __cdecl CDemonCamera::dtor(CDemonCamera *this_ptr,uint flags);

// Original: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
// Address: 0043ff50
void __cdecl CDemonCamera::initLookupTable(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_init_FUN_00440010
// Address: 00440010
void __cdecl CDemonCamera::init(CDemonCamera *this_ptr,int screen_height);

// Original: core_dcamera.cpp_CDemonCamera_FUN_004401b0
// Address: 004401b0
void __cdecl CDemonCamera(CDemonCamera *this_ptr,int param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
// Address: 004401d0
void __cdecl CDemonCamera::free(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
// Address: 00440240
void __cdecl CDemonCamera::setSceneCamera(CDemonCamera *this_ptr,int skip_clear_buffers);

// Original: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270
// Address: 00440270
void __cdecl CDemonCamera::resetSceneCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
// Address: 00440290
void __cdecl CDemonCamera::beginScene(CDemonCamera *this_ptr,int skip_clear_buffers);

// Original: core_dcamera.cpp_CDemonCamera_pushRect_FUN_004405d0
// Address: 004405d0
void __cdecl CDemonCamera::pushRect(CDemonCamera *this_ptr,int left,int top,int right,int bottom);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
// Address: 00440610
void __cdecl CDemonCamera::restoreZBufferRect(CDemonCamera *this_ptr,CRect *rect_ptr);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
// Address: 00440710
void __cdecl CDemonCamera::restoreZBufferRectArray(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
// Address: 00440a20
void __cdecl CDemonCamera::endScene(CDemonCamera *this_ptr,int skip_zbuffer_copy);

// Original: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
// Address: 00440b20
void __cdecl CDemonCamera::beginBackgroundScene(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
// Address: 00440c50
void __cdecl CDemonCamera::endBackgroundScene(CDemonCamera *this_ptr,int restore_zbuffer);

// Original: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40
// Address: 00440d40
void __cdecl CDemonCamera::calculateInverseTransform(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
// Address: 00440fe0
void __cdecl CDemonCamera::updateTransformMatrices(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
// Address: 004410c0
int __stack3_esi CDemonCamera::screenToWorldCoord(CDemonCamera *this_ptr,int screen_x,int screen_y,CVector3i *output_ptr);

// Original: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_00441150
// Address: 00441150
CVector3i * __stack2_esi CDemonCamera::worldToScreenCoord(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
// Address: 004411b0
CVector3i * __stack2_esi CDemonCamera::screenToWorldTransform(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0
// Address: 004412c0
CVector3f * __cdecl CDemonCamera::screenToWorldDirection(CDemonCamera *this_ptr,CVector3f *output_ptr,int screen_x,int screen_y);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
// Address: 00441440
CVector3i * __stack2_esi CDemonCamera::screenToWorldWithAlpha(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);

// Original: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
// Address: 00441610
CVector3i * __stack2_esi CDemonCamera::worldToScreenWithFrustumCull(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr);

// Original: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0
// Address: 004418d0
CVector3i * __stack2_esi CDemonCamera::worldToCameraSpace(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector);

// Original: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
// Address: 00441a10
CVector3i * __stack2_esi CDemonCamera::transformVectorWithAlpha(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector);

// Original: core_dcamera.cpp_CDemonCamera_allocLight_FUN_00441c20
// Address: 00441c20
char * __cdecl CDemonCamera::allocLight(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
// Address: 00441c50
void __cdecl CDemonCamera::precomputeLight(CDemonCamera *this_ptr,CDemonLight *light_source,CRect *rect);

// Original: core_dcamera.cpp_CDemonCamera_FUN_004421b0
// Address: 004421b0
void __cdecl CDemonCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_FUN_004425d0
// Address: 004425d0
void FUN_004425d0(undefined4 param_1,int param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
// Address: 004425f0
int __cdecl CDemonCamera::sampleLightingAntialiased(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity);

// Original: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
// Address: 00442c50
int __cdecl CDemonCamera::calculateAttenuatedDirectionalLight(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,CVector3i *light_direction);

// Original: core_dcamera.cpp_FUN_00442d9c
// Address: 00442d9c
void FUN_00442d9c(void);

// Original: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_00443050
// Address: 00443050
void __cdecl CDemonCamera::restoreTransform(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_00443100
// Address: 00443100
void __cdecl CDemonCamera::convertPaletteToDisplayFormat(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180
// Address: 00443180
void __cdecl CDemonCamera::uploadBackdropTexture(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
// Address: 00443250
void __cdecl CDemonCamera::loadImage(CDemonCamera *this_ptr,char *filename);

// Original: core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
// Address: 00444140
void __cdecl initializeCoronaBuffers(void);

// Original: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00444180
// Address: 00444180
void __cdecl renderCoronaDepthScanline(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left);

// Original: core_dcamera.cpp_renderVolumetricLightScanline_FUN_004442a0
// Address: 004442a0
void __cdecl renderVolumetricLightScanline(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left);

// Original: core_dcamera.cpp_renderFlatColorScanline_FUN_00444440
// Address: 00444440
void __cdecl renderFlatColorScanline(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left);

// Original: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_00444600
// Address: 00444600
void __cdecl renderCoronaProjectedTextureScanline(int scanline_y,int x_start,int x_end);

// Original: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810
// Address: 00444810
void __cdecl CDemonCamera::blurCoronaBufferAndClearEdges(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_log2Custom_FUN_004448f0
// Address: 004448f0
double __cdecl log2Custom(double val);

// Original: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
// Address: 00444920
void __cdecl CDemonCamera::renderLightCoronas(CDemonCamera *this_ptr,CDemonLight *light_source);

// Original: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
// Address: 00444c90
void __cdecl CDemonCamera::addLightmapToCorona(CDemonCamera *this_ptr,CDemonLight *light_source);

// Original: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
// Address: 00444e20
int __cdecl CDemonCamera::isCoronaSufficientlyVisible(CDemonCamera *this_ptr,CDemonLight *light_source);

// Original: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
// Address: 00444ef0
CRect * __stack2_esi CDemonCamera::computeLightExtentBounds(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds);

// Original: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
// Address: 00444f90
void __cdecl CDemonCamera::processCorona(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
// Address: 00445020
int __cdecl CDemonCamera::lockAndRenderToBuffer(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_testCoronaVisibility_FUN_004450b0
// Address: 004450b0
int __cdecl testCoronaVisibility(int start_x,int start_y,int depth_reciprocal);

// Original: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_004451a0
// Address: 004451a0
void __cdecl renderCoronaScanlineSegment(int row_index,int column_start,int column_end);

// Original: core_dcamera.cpp_processCoronaScanline_FUN_00445310
// Address: 00445310
void __cdecl processCoronaScanline(int row,int x_start,int x_end,SCorona *corona);

// Original: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
// Address: 00445650
void __cdecl blendCoronaTextureSpan(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry);

// Original: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00445750
// Address: 00445750
void __cdecl CDemonCamera::renderGlobeCoronas(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render);

// Original: core_dcamera.cpp_transformAndStoreVertex_FUN_00445f70
// Address: 00445f70
void __cdecl transformAndStoreVertex(int vertex_index,float x,float y,float z);

// Original: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
// Address: 00445fe0
int __cdecl CDemonCamera::isBoundingBoxVisible(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max);

// Original: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590
// Address: 00446590
int __cdecl CDemonCamera::isSphereVisible(CDemonCamera *this_ptr,CVector3f *position,float radius);

// Original: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
// Address: 00446740
void __cdecl CDemonCamera::setEffectIntensity(CDemonCamera *this_ptr,float intensity);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00446760
// Address: 00446760
void __cdecl CDemonCamera::screenToWorldRay(CDemonCamera *this_ptr,CVector3f *output_ray,int screen_x,int screen_y);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00446800
// Address: 00446800
void __cdecl CDemonCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00446810
// Address: 00446810
void __cdecl CDemonCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0
// Address: 00446ea0
void __cdecl CDemonCamera::copyFogPlaneToBuffer(CDemonCamera *this_ptr,int plane_index);

// Original: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
// Address: 00446fe0
void __cdecl CDemonCamera::blendFogPlanes(CDemonCamera *this_ptr,int plane_index,uint blend_alpha);

// Original: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0
// Address: 004470f0
void __cdecl CDemonCamera::compositeLightmapToFramebuffer(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
// Address: 004474e0
void __cdecl CDemonCamera::initCameraFog(CDemonCamera *this_ptr,SFog *fog_config);

// Original: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
// Address: 004475a0
int __cdecl CDemonCamera::getFogValueAtPosition(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex);

// Original: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
// Address: 00447670
void __cdecl CDemonCamera::setupPerspectiveAndFog(CDemonCamera *this_ptr,CVector3f *position,SProjectedVertex *projected_vertex);

// Original: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
// Address: 00447760
void __cdecl CDemonCamera::sampleFramebufferPixel(CDemonCamera *this_ptr,SRenderVertex *vertex);

// Original: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0
// Address: 004477f0
void __cdecl CDemonCamera::saveAlphaTransform(CDemonCamera *this_ptr,int alpha_index);

// Original: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
// Address: 00447910
CVector3i * __stack3_esi CDemonCamera::restoreAlphaTransform(CDemonCamera *this_ptr,CVector3i *screen_pos,int alpha_index,CVector3i *world_pos);

// Original: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
// Address: 00447a70
void __cdecl CDemonCamera::generateGammaPalette(CDemonCamera *this_ptr,int gamma_value);

// Original: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
// Address: 00447b30
void __cdecl CDemonCamera::clearFramebufferAndWorkBuffers(CDemonCamera *this_ptr,int clear_color);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00447bb0
// Address: 00447bb0
void __cdecl CDemonCamera(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00447c60
// Address: 00447c60
void __cdecl CDemonCamera(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset);

// Original: core_dcamera.cpp_loadCameraFog_FUN_00447d10
// Address: 00447d10
void __cdecl loadCameraFog(SFog *fog,_FILE *file_handle,int file_version);

// Original: core_dcamera.cpp_saveCameraFog_FUN_00447dd0
// Address: 00447dd0
void __cdecl saveCameraFog(SFog *fog,_FILE *file_handle);

// Original: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00447e80
// Address: 00447e80
void __cdecl CDemonCamera::initCameraShake(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00447f20
// Address: 00447f20
CVector3f * __cdecl CDemonCamera(CDemonCamera *this_ptr,CVector3f *output_bounds);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00448310
// Address: 00448310
void __cdecl CDemonCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_FUN_00448380
// Address: 00448380
void __cdecl CDemonCamera(CDemonCamera *this_ptr);

// Original: core_dcamera.cpp_CVector3f_arrdtor_FUN_004483f0
// Address: 004483f0
CVector3f * __cdecl CVector3f::arrdtor(CVector3f *this_ptr,uint flags);
