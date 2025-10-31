#pragma once

// Function prototypes for core/dlight.cpp
// Generated from Ghidra function signatures

// Original: core_dlight.cpp_staticInit_FUN_00472680
// Address: 00472680
void staticInit(void);

// Original: core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
// Address: 004726a0
CDemonLight * CDemonLight::ctor(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_dtor_FUN_00472760
// Address: 00472760
CDemonLight * CDemonLight::dtor(CDemonLight * this_ptr, uint d1, uint d2, uint d3);

// Original: core_dlight.cpp_CDemonLight_init_FUN_004727c0
// Address: 004727c0
void CDemonLight::init(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_free_FUN_004728b0
// Address: 004728b0
void CDemonLight::free(CDemonLight * this_ptr);

// Original: core_dlight.cpp_getRestoreMemory_FUN_00472950
// Address: 00472950
int getRestoreMemory(int pixel_count);

// Original: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
// Address: 004729c0
void resetRestoreMemoryAllocator(void);

// Original: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
// Address: 004729d0
void CDemonLight::allocMasterZBuffer(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
// Address: 00472a50
void CDemonLight::freeMasterZBuffer(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80
// Address: 00472a80
void CDemonLight::beginScene(CDemonLight * this_ptr, int skip_clear_buffers);

// Original: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
// Address: 00472c70
void CDemonLight::blitZBuffer(CDemonLight * this_ptr, CRect * source_rect);

// Original: core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
// Address: 00472d30
void CDemonLight::endScene(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
// Address: 00472e40
void CDemonLight::beginBackgroundScene(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30
// Address: 00472f30
void CDemonLight::endBackgroundScene(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
// Address: 00472f80
void CDemonLight::restoreDirtyRegions(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00473270
// Address: 00473270
ushort * CDemonLight::projectLightAndMarkVisibility(CDemonLight * this_ptr, CVector3i * projected_coord, uchar x_round_flag, uchar y_round_flag);

// Original: core_dlight.cpp_drawGrayscalePixel_FUN_00473360
// Address: 00473360
void drawGrayscalePixel(int x, int y, int grayscale_value);

// Original: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
// Address: 00473390
void CDemonLight::renderShadowMapDebugView(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size);

// Original: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
// Address: 004735c0
void CDemonLight::clearCircularShadowMapEdges(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
// Address: 004736c0
void CDemonLight::renderCoronaGeometry(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20
// Address: 00473a20
void CDemonLight::renderLightBloomQuad(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
// Address: 00473f90
void CDemonLight::renderLightGlowSprites(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
// Address: 00474720
void CDemonLight::allocateFilter(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
// Address: 00474770
void CDemonLight::applyFilter(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, int filter_pos_y);

// Original: core_dlight.cpp_captureLightTextures_FUN_00474a90
// Address: 00474a90
void captureLightTextures(void);

// Original: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
// Address: 00474ad0
void CDemonLight::renderVolumetricLightShaft(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
void CDemonLight::renderRadialVolumetricScattering(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
// Address: 004758d0
void CDemonLight::renderExternalVolumetricShafts(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00475fc0
// Address: 00475fc0
void CDemonLight::initializeVisibilityBuffer(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
// Address: 00476000
int CDemonLight::testShadowMapRegion(CDemonLight * this_ptr, CRect * rect);

// Original: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
// Address: 004760d0
void renderConeLightGeometry(CVector3f * position, CVector3i * rotation, float param_3, float max_distance);

// Original: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
// Address: 004765e0
void CDemonLight::setVolumetricIntensity(CDemonLight * this_ptr, float intensity);

// Original: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
// Address: 00476670
void CDemonLight::drawShadowDepthBuffer(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset);

// Original: core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60
// Address: 00476a60
int CDemonLight::testLightVolumeVisibility(CDemonLight * this_ptr);

// Original: core_dlight.cpp_CDemonLight_copy_FUN_00476c20
// Address: 00476c20
CDemonLight * CDemonLight::copy(CDemonLight * this_ptr, CDemonLight * other);

// Original: core_dlight.cpp_CDemonLight_copy_FUN_00476c30
// Address: 00476c30
CDemonLight * CDemonLight::copy(CDemonLight * this_ptr, CDemonLight * other);

// Original: core_dlight.cpp_CDemonLight_copy_FUN_00476c40
// Address: 00476c40
CDemonLight * CDemonLight::copy(CDemonLight * this_ptr, CDemonLight * other);
