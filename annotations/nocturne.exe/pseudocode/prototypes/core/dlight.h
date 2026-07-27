#pragma once

// Function prototypes for core/dlight.cpp
// Generated from Ghidra function signatures

// Original: core_dlight.cpp_staticInit_FUN_0044e0f0
// Address: 0044e0f0
void __cdecl staticInit(void);

// Original: core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
// Address: 0044e110
void CDemonLight::ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: core_dlight.cpp_FUN_0044e1c0
// Address: 0044e1c0
void FUN_0044e1c0(undefined4 param_1);

// Original: core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
// Address: 0044e1e0
void __cdecl CDemonLight::init(int param_1);

// Original: core_dlight.cpp_FUN_0044e2c0
// Address: 0044e2c0
void FUN_0044e2c0(int param_1);

// Original: core_dlight.cpp_getRestoreMemory_FUN_0044e340
// Address: 0044e340
uint __cdecl getRestoreMemory(int param_1);

// Original: core_dlight.cpp_resetRestoreMemoryAllocator_FUN_0044e3b0
// Address: 0044e3b0
void __cdecl resetRestoreMemoryAllocator(void);

// Original: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
// Address: 0044e3c0
void __cdecl CDemonLight::allocMasterZBuffer(int param_1);

// Original: core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_0044e440
// Address: 0044e440
void CDemonLight::freeMasterZBuffer(int param_1);

// Original: core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
// Address: 0044e470
void __cdecl CDemonLight::beginScene(int param_1,int param_2);

// Original: core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044e660
// Address: 0044e660
void __cdecl CDemonLight::blitZBuffer(int param_1,int *param_2);

// Original: core_dlight.cpp_CDemonLight_endScene_FUN_0044e720
// Address: 0044e720
void __cdecl CDemonLight::endScene(int param_1);

// Original: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
// Address: 0044e830
void __cdecl CDemonLight::beginBackgroundScene(int param_1);

// Original: core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044e920
// Address: 0044e920
void __cdecl CDemonLight::endBackgroundScene(int param_1);

// Original: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970
// Address: 0044e970
void CDemonLight::restoreDirtyRegions(int param_1);

// Original: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0044ec60
// Address: 0044ec60
int __cdecl CDemonLight::projectLightAndMarkVisibility(int param_1,int *param_2,byte param_3,byte param_4);

// Original: core_dlight.cpp_FUN_0044ed50
// Address: 0044ed50
void FUN_0044ed50(int param_1,int param_2,int param_3);

// Original: core_dlight.cpp_FUN_0044ed80
// Address: 0044ed80
void FUN_0044ed80(int param_1,int param_2,int param_3,int param_4);

// Original: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_0044efb0
// Address: 0044efb0
void __cdecl CDemonLight::clearCircularShadowMapEdges(int param_1);

// Original: core_dlight.cpp_FUN_0044f0b0
// Address: 0044f0b0
void FUN_0044f0b0(int param_1);

// Original: core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_0044f430
// Address: 0044f430
void CDemonLight::renderLightBloomQuad(int param_1);

// Original: core_dlight.cpp_FUN_0044f9b0
// Address: 0044f9b0
void FUN_0044f9b0(int param_1);

// Original: core_dlight.cpp_CDemonLight_allocateFilter_FUN_00450170
// Address: 00450170
void __cdecl CDemonLight::allocateFilter(int param_1);

// Original: core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
// Address: 004501c0
void __cdecl CDemonLight::applyFilter(int param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5);

// Original: core_dlight.cpp_captureLightTextures_FUN_004504e0
// Address: 004504e0
void __cdecl captureLightTextures(void);

// Original: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520
// Address: 00450520
void __cdecl CDemonLight::renderVolumetricLightShaft(int param_1);

// Original: core_dlight.cpp_FUN_00450c90
// Address: 00450c90
void FUN_00450c90(int param_1);

// Original: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350
// Address: 00451350
void __cdecl CDemonLight::renderExternalVolumetricShafts(int param_1);

// Original: core_dlight.cpp_CDemonLight_initializeVisibilityBuffer_FUN_00451a60
// Address: 00451a60
void __cdecl CDemonLight::initializeVisibilityBuffer(int param_1);

// Original: core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0
// Address: 00451aa0
undefined4 __cdecl CDemonLight::testShadowMapRegion(int param_1,int *param_2);

// Original: core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
// Address: 00451b70
void __cdecl renderConeLightGeometry(undefined4 param_1,undefined4 param_2,float param_3,float param_4);

// Original: core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
// Address: 00452080
void __cdecl CDemonLight::setVolumetricIntensity(int param_1,undefined4 param_2);

// Original: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00452110
// Address: 00452110
void __cdecl CDemonLight::drawShadowDepthBuffer(int param_1,int param_2,int param_3,int param_4);

// Original: core_dlight.cpp_FUN_00452500
// Address: 00452500
undefined4 * FUN_00452500(void);

// Original: core_dlight.cpp_FUN_00452510
// Address: 00452510
undefined4 * FUN_00452510(void);

// Original: core_dlight.cpp_FUN_00452520
// Address: 00452520
undefined4 * FUN_00452520(void);
