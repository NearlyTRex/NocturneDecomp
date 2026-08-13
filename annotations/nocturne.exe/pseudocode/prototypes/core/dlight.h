#pragma once

// Function prototypes for core/dlight.cpp
// Generated from Ghidra function signatures

// Original: core_dlight.cpp_staticInit_FUN_0044e0f0
// Address: 0044e0f0
void __cdecl staticInit(void);

// Original: core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
// Address: 0044e110
CDemonLight * __cdecl CDemonLight::ctor(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height);

// Original: core_dlight.cpp_CDemonLight_dtor_FUN_0044e1c0
// Address: 0044e1c0
CDemonLight * __cdecl CDemonLight::dtor(CDemonLight *this_ptr,uint flags);

// Original: core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
// Address: 0044e1e0
void __cdecl CDemonLight::init(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_FUN_0044e2c0
// Address: 0044e2c0
void __cdecl CDemonLight(CDemonLight *this_ptr);

// Original: core_dlight.cpp_getRestoreMemory_FUN_0044e340
// Address: 0044e340
void * __cdecl getRestoreMemory(int pixel_count);

// Original: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0
// Address: 0044e3b0
void __cdecl resetRestoreMemoryAllocator(void);

// Original: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
// Address: 0044e3c0
void __cdecl CDemonLight::allocMasterZBuffer(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440
// Address: 0044e440
void __cdecl CDemonLight::freeMasterZBuffer(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
// Address: 0044e470
void __cdecl CDemonLight::beginScene(CDemonLight *this_ptr,int skip_clear_buffers);

// Original: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660
// Address: 0044e660
void __cdecl CDemonLight::blitZBuffer(CDemonLight *this_ptr,CRect *source_rect);

// Original: core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
// Address: 0044e720
void __cdecl CDemonLight::endScene(CDemonLight *this_ptr,int restore_viewport_state);

// Original: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
// Address: 0044e830
void __cdecl CDemonLight::beginBackgroundScene(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920
// Address: 0044e920
void __cdecl CDemonLight::endBackgroundScene(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970
// Address: 0044e970
void __cdecl CDemonLight::restoreDirtyRegions(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
// Address: 0044ec60
ushort * __cdecl CDemonLight::projectLightAndMarkVisibility(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag);

// Original: core_dlight.cpp_drawGrayscalePixel_FUN_0044ed50
// Address: 0044ed50
void __cdecl drawGrayscalePixel(int x,int y,int grayscale_value);

// Original: core_dlight.cpp_FUN_0044ed80
// Address: 0044ed80
void FUN_0044ed80(char *param_1,int param_2,int param_3,int param_4);

// Original: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
// Address: 0044efb0
void __cdecl CDemonLight::clearCircularShadowMapEdges(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_FUN_0044f0b0
// Address: 0044f0b0
void __cdecl CDemonLight(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430
// Address: 0044f430
void __cdecl CDemonLight::renderLightBloomQuad(CDemonLight *this_ptr);

// Original: core_dlight.cpp_FUN_0044f9b0
// Address: 0044f9b0
void FUN_0044f9b0(int param_1);

// Original: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
// Address: 00450170
void __cdecl CDemonLight::allocateFilter(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
// Address: 004501c0
void __cdecl CDemonLight::applyFilter(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y);

// Original: core_dlight.cpp_captureLightTextures_FUN_004504e0
// Address: 004504e0
void __cdecl captureLightTextures(void);

// Original: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520
// Address: 00450520
void __cdecl CDemonLight::renderVolumetricLightShaft(CDemonLight *this_ptr);

// Original: core_dlight.cpp_FUN_00450c90
// Address: 00450c90
void FUN_00450c90(int param_1);

// Original: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350
// Address: 00451350
void __cdecl CDemonLight::renderExternalVolumetricShafts(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60
// Address: 00451a60
void __cdecl CDemonLight::initializeVisibilityBuffer(CDemonLight *this_ptr);

// Original: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0
// Address: 00451aa0
int __cdecl CDemonLight::testShadowMapRegion(CDemonLight *this_ptr,CRect *rect);

// Original: core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
// Address: 00451b70
void __cdecl renderConeLightGeometry(CVector3f *position,CVector3f *rotation,float fov,float falloff);

// Original: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
// Address: 00452080
void __cdecl CDemonLight::setVolumetricIntensity(CDemonLight *this_ptr,float intensity);

// Original: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
// Address: 00452110
void __cdecl CDemonLight::drawShadowDepthBuffer(CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset);

// Original: core_dlight.cpp_FUN_00452500
// Address: 00452500
undefined4 * FUN_00452500(void);

// Original: core_dlight.cpp_FUN_00452510
// Address: 00452510
undefined4 * FUN_00452510(void);

// Original: core_dlight.cpp_FUN_00452520
// Address: 00452520
undefined4 * FUN_00452520(void);
