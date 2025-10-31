#pragma once

// Function prototypes for core/dcamera.cpp
// Generated from Ghidra function signatures

// Original: core_dcamera.cpp_staticInit_FUN_0044bb10
// Address: 0044bb10
void staticInit(void);

// Original: core_dcamera.cpp_getLightmapPaletteValue_FUN_0044bb50
// Address: 0044bb50
uint getLightmapPaletteValue(int palette_index);

// Original: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
// Address: 0044bb70
void resetFogSamplingOffset(SFogGrid * fog);

// Original: core_dcamera.cpp_generateFogGrid_FUN_0044bba0
// Address: 0044bba0
void generateFogGrid(SFogGrid * fog);

// Original: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
// Address: 0044bdd0
uint sampleFogAlongRay(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length);

// Original: core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
// Address: 0044bfb0
void updateFogScrollOffset(SFogGrid * fog_ptr, int time_major, int time_minor);

// Original: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
// Address: 0044c030
CDemonCamera * CDemonCamera::ctor(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
// Address: 0044c090
CDemonCamera * CDemonCamera::dtor(CDemonCamera * this_ptr, uint d1, uint d2, uint d3);

// Original: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0
// Address: 0044c0f0
void CDemonCamera::initLookupTable(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
// Address: 0044c190
void CDemonCamera::init(CDemonCamera * this_ptr, int screen_height);

// Original: core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
// Address: 0044c360
void CDemonCamera::free(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
// Address: 0044c3e0
void CDemonCamera::setSceneCamera(CDemonCamera * this_ptr, int skip_clear_buffers);

// Original: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
// Address: 0044c410
void CDemonCamera::resetSceneCamera(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
// Address: 0044c430
void CDemonCamera::beginScene(CDemonCamera * this_ptr, int skip_clear_buffers);

// Original: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
// Address: 0044c740
void CDemonCamera::pushRect(CDemonCamera * this_ptr, int left, int top, int right, int bottom);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// Address: 0044c780
void CDemonCamera::restoreZBufferRect(CDemonCamera * this_ptr, CRect * rect_ptr);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// Address: 0044c860
void CDemonCamera::restoreZBufferRectArray(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
// Address: 0044cb80
void CDemonCamera::endScene(CDemonCamera * this_ptr, int skip_zbuffer_copy);

// Original: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70
// Address: 0044cc70
void CDemonCamera::beginBackgroundScene(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0
// Address: 0044cdf0
int CDemonCamera::endBackgroundScene(CDemonCamera * this_ptr, int restore_zbuffer);

// Original: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_0044cf20
// Address: 0044cf20
void CDemonCamera::calculateInverseTransform(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0044d1c0
// Address: 0044d1c0
void CDemonCamera::updateTransformMatrices(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
// Address: 0044d2a0
void CDemonCamera::screenToWorldCoord(CDemonCamera * this_ptr, CVector3i * output_ptr, int screen_x, int screen_y);

// Original: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
// Address: 0044d310
void CDemonCamera::worldToScreenCoord(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
// Address: 0044d370
CVector3i * CDemonCamera::screenToWorldTransform(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
// Address: 0044d480
CVector3f * CDemonCamera::screenToWorldDirection(CDemonCamera * this_ptr, CVector3f * output_ptr, int screen_x, int screen_y);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
// Address: 0044d600
CVector3i * CDemonCamera::screenToWorldWithAlpha(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr);

// Original: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
CVector3i * CDemonCamera::worldToScreenWithFrustumCull(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr);

// Original: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
// Address: 0044da90
CVector3i * CDemonCamera::worldToCameraSpace(CDemonCamera * this_ptr, CVector3i * output_vector, CVector3i * input_vector);

// Original: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0
// Address: 0044dbd0
void CDemonCamera::transformVectorWithAlpha(CDemonCamera * this_ptr, CVector3i * input_vector, CVector3i * output_vector);

// Original: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044dde0
// Address: 0044dde0
char * CDemonCamera::allocLight(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10
// Address: 0044de10
void * CDemonCamera::precomputeLight(CDemonCamera * this_ptr, CDemonLight * light_source, CRect * rect);

// Original: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360
// Address: 0044e360
CDemonCamera * CDemonCamera::precomputeNormals(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0044e790
// Address: 0044e790
int CDemonCamera::sampleLightingAntialiased(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, int intensity);

// Original: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
// Address: 0044edf0
int CDemonCamera::calculateAttenuatedDirectionalLight(CDemonCamera * this_ptr, CVector3i * world_pos, CDemonLight * light_source, CVector3i * light_direction);

// Original: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0044ef30
// Address: 0044ef30
void CDemonCamera::saveCameraTransform(CDemonCamera * this_ptr, CVector3f * new_position, CMatrix3x3f * rotation_matrix, CMatrix3x3f * transform_matrix);

// Original: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
// Address: 0044f1e0
void CDemonCamera::restoreTransform(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290
// Address: 0044f290
void CDemonCamera::convertPaletteToDisplayFormat(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310
// Address: 0044f310
void CDemonCamera::uploadBackdropTexture(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0
// Address: 0044f3e0
void CDemonCamera::loadImage(CDemonCamera * this_ptr, char * filename);

// Original: core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0
// Address: 004502e0
void initializeCoronaBuffers(void);

// Original: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
// Address: 00450320
void renderCoronaDepthScanline(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);

// Original: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// Address: 00450440
void renderVolumetricLightScanline(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);

// Original: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
// Address: 004505e0
void renderFlatColorScanline(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y);

// Original: core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0
// Address: 004507a0
void renderCoronaProjectedTextureScanline(int scanline_y, int x_start, int x_end);

// Original: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004509b0
// Address: 004509b0
void CDemonCamera::blurCoronaBufferAndClearEdges(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_log2Custom_FUN_00450a90
// Address: 00450a90
double log2Custom(void);

// Original: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
// Address: 00450ac0
void CDemonCamera::renderLightCoronas(CDemonCamera * this_ptr, CDemonLight * light_source);

// Original: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
// Address: 00450e30
void CDemonCamera::addLightmapToCorona(CDemonCamera * this_ptr, CDemonLight * light_source);

// Original: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
// Address: 00450fc0
int CDemonCamera::isCoronaSufficientlyVisible(CDemonCamera * this_ptr, CDemonLight * light_source);

// Original: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
// Address: 00451090
void CDemonCamera::computeLightExtentBounds(CDemonCamera * this_ptr, CDemonLight * light, CRect * out_bounds);

// Original: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00451130
// Address: 00451130
void CDemonCamera::processCorona(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0
// Address: 004511c0
int CDemonCamera::lockAndRenderToBuffer(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_testCoronaVisibility_FUN_00451250
// Address: 00451250
int testCoronaVisibility(int start_x, int start_y, int depth_reciprocal);

// Original: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
// Address: 00451340
void renderCoronaScanlineSegment(int row_index, int column_start, int column_end);

// Original: core_dcamera.cpp_processCoronaScanline_FUN_004514b0
// Address: 004514b0
void processCoronaScanline(int row, int x_start, int x_end, SCorona * corona_buffer);

// Original: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
// Address: 004517f0
void blendCoronaTextureSpan(int scanline_y, int x_start, int x_end, int source_buffer_offset);

// Original: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0
// Address: 004518f0
void CDemonCamera::renderLightCoronas(CDemonCamera * this_ptr, void * p1, int p2);

// Original: core_dcamera.cpp_transformAndStoreVertex_FUN_00452110
// Address: 00452110
void transformAndStoreVertex(int vertex_index, float x, float y, float z);

// Original: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
// Address: 00452180
int CDemonCamera::isBoundingBoxVisible(CDemonCamera * this_ptr, CVector3f * position, CVector3f * min_corner, CVector3f * max_corner);

// Original: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
// Address: 00452730
int CDemonCamera::isSphereVisible(CDemonCamera * this_ptr, CVector3f * position, float radius);

// Original: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
// Address: 004528e0
void CDemonCamera::setEffectIntensity(CDemonCamera * this_ptr, float intensity);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900
// Address: 00452900
void CDemonCamera::screenToWorldRay(CDemonCamera * this_ptr, CVector3f * output_ray, CVector3i * screen_coords, int depth);

// Original: core_dcamera.cpp_CDemonCamera_generateFogGrid_FUN_004529a0
// Address: 004529a0
void CDemonCamera::generateFogGrid(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0
// Address: 004529b0
void CDemonCamera::saveBackdrop(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
// Address: 00453020
void CDemonCamera::copyFogPlaneToBuffer(CDemonCamera * this_ptr, int plane_index);

// Original: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00453160
// Address: 00453160
void CDemonCamera::blendFogPlanes(CDemonCamera * this_ptr, int plane_index, uint blend_alpha);

// Original: core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270
// Address: 00453270
void CDemonCamera::compositeLightmapToFramebuffer(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
void CDemonCamera::initCameraFog(CDemonCamera * this_ptr, SFog * fog_config);

// Original: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// Address: 00453700
int CDemonCamera::getFogValueAtPosition(CDemonCamera * this_ptr, CVector3i * world_position);

// Original: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_004537d0
// Address: 004537d0
void CDemonCamera::setupPerspectiveAndFog(CDemonCamera * this_ptr, CVector3f * position, float max_distance);

// Original: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_004538c0
// Address: 004538c0
void CDemonCamera::sampleFramebufferPixel(CDemonCamera * this_ptr, SRenderVertex * vertex);

// Original: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
void CDemonCamera::saveAlphaTransform(CDemonCamera * this_ptr, int alpha_index);

// Original: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
// Address: 00453a70
CVector3i * CDemonCamera::restoreAlphaTransform(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos);

// Original: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0
// Address: 00453bd0
void CDemonCamera::generateGammaPalette(CDemonCamera * this_ptr, int gamma_value);

// Original: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00453c90
// Address: 00453c90
void CDemonCamera::clearFramebufferAndWorkBuffers(CDemonCamera * this_ptr, int clear_color);

// Original: core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10
// Address: 00453d10
void CDemonCamera::blendLightmapPixel32(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset);

// Original: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00453db0
// Address: 00453db0
void CDemonCamera::blendLightmapPixel16(CDemonCamera * this_ptr, int screen_x, int screen_y, int offset);

// Original: core_dcamera.cpp_loadCameraFog_FUN_00453e50
// Address: 00453e50
void loadCameraFog(SFog * fog, FILE * file_handle, int file_version);

// Original: core_dcamera.cpp_saveCameraFog_FUN_00453f10
// Address: 00453f10
void saveCameraFog(SFog * fog, FILE * file_handle);

// Original: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// Address: 00453fc0
void CDemonCamera::initCameraShake(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, float decay_time);

// Original: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
CVector3f * CDemonCamera::computeVisibleFrustumBounds(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box);

// Original: core_dcamera.cpp_CDemonCamera_saveZBufferScanlines_FUN_00454450
// Address: 00454450
void CDemonCamera::saveZBufferScanlines(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferScanlines_FUN_004544a0
// Address: 004544a0
void CDemonCamera::restoreZBufferScanlines(CDemonCamera * this_ptr);

// Original: core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0
// Address: 004544f0
int CDemonCamera::testBoxOcclusion(CDemonCamera * this_ptr, CVector3i * corners);

// Original: core_dcamera.cpp_freeVectors_FUN_00454700
// Address: 00454700
void freeVectors(CVector3f * * array);
