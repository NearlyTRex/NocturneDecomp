#pragma once

// Function prototypes for core/dcamera.cpp
// Generated from Ghidra function signatures

// Original: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
// Address: 0043fa20
void resetFogSamplingOffset(int param_1);

// Original: core_dcamera.cpp_generateFogGrid_FUN_0043fa50
// Address: 0043fa50
void __cdecl generateFogGrid(int param_1);

// Original: core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80
// Address: 0043fc80
uint sampleFogAlongRay(int param_1,int *param_2,int *param_3,int param_4);

// Original: core_dcamera.cpp_updateFogScrollOffset_FUN_0043fe60
// Address: 0043fe60
void __cdecl updateFogScrollOffset(int param_1,int param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0
// Address: 0043fee0
void __cdecl CDemonCamera::ctor(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0043ff50
// Address: 0043ff50
void __cdecl CDemonCamera::initLookupTable(undefined4 param_1);

// Original: core_dcamera.cpp_CDemonCamera_init_FUN_00440010
// Address: 00440010
void __cdecl CDemonCamera::init(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_free_FUN_004401d0
// Address: 004401d0
void __cdecl CDemonCamera::free(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00440240
// Address: 00440240
void CDemonCamera::setSceneCamera(undefined4 param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270
// Address: 00440270
void __cdecl CDemonCamera::resetSceneCamera(void);

// Original: core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
// Address: 00440290
void __cdecl CDemonCamera::beginScene(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00440610
// Address: 00440610
void __cdecl CDemonCamera::restoreZBufferRect(int param_1,int *param_2);

// Original: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00440710
// Address: 00440710
void __cdecl CDemonCamera::restoreZBufferRectArray(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
// Address: 00440a20
void CDemonCamera::endScene(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00440b20
// Address: 00440b20
void __cdecl CDemonCamera::beginBackgroundScene(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
// Address: 00440c50
void __cdecl CDemonCamera::endBackgroundScene(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00440d40
// Address: 00440d40
void __cdecl CDemonCamera::calculateInverseTransform(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0
// Address: 00440fe0
void __cdecl CDemonCamera::updateTransformMatrices(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
// Address: 004410c0
void CDemonCamera::screenToWorldCoord(int param_1,int param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
// Address: 004411b0
int * CDemonCamera::screenToWorldTransform(int param_1,int *param_2);

// Original: core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_004412c0
// Address: 004412c0
float * CDemonCamera::screenToWorldDirection(int param_1,float *param_2,int param_3,int param_4);

// Original: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
// Address: 00441610
void CDemonCamera::worldToScreenWithFrustumCull(int param_1,int *param_2);

// Original: core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
// Address: 00441a10
uint * __stack2_esi CDemonCamera::transformVectorWithAlpha(int param_1,int *param_2,uint *param_3);

// Original: core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_00441c50
// Address: 00441c50
void __cdecl CDemonCamera::precomputeLight(int param_1,int param_2,int *param_3);

// Original: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_004425f0
// Address: 004425f0
int __cdecl CDemonCamera::sampleLightingAntialiased(undefined4 param_1,int *param_2,int param_3,int param_4);

// Original: core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
// Address: 00442c50
undefined4 CDemonCamera::calculateAttenuatedDirectionalLight(undefined4 param_1,int *param_2,int param_3,int *param_4);

// Original: core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250
// Address: 00443250
void __cdecl CDemonCamera::loadImage(int param_1,char *param_2);

// Original: core_dcamera.cpp_initializeCoronaBuffers_FUN_00444140
// Address: 00444140
void __cdecl initializeCoronaBuffers(void);

// Original: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810
// Address: 00444810
undefined8 __cdecl CDemonCamera::blurCoronaBufferAndClearEdges(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
// Address: 00444920
void CDemonCamera::renderLightCoronas(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00444c90
// Address: 00444c90
void __cdecl CDemonCamera::addLightmapToCorona(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00444e20
// Address: 00444e20
undefined4 __cdecl CDemonCamera::isCoronaSufficientlyVisible(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_processCorona_FUN_00444f90
// Address: 00444f90
void CDemonCamera::processCorona(int param_1);

// Original: core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020
// Address: 00445020
undefined4 __cdecl CDemonCamera::lockAndRenderToBuffer(undefined4 param_1);

// Original: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00445650
// Address: 00445650
void __cdecl blendCoronaTextureSpan(int param_1,int param_2,int param_3,int param_4);

// Original: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
// Address: 00445fe0
undefined4 __cdecl CDemonCamera::isBoundingBoxVisible(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5);

// Original: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590
// Address: 00446590
undefined4 __cdecl CDemonCamera::isSphereVisible(int param_1,float *param_2,float param_3);

// Original: core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
// Address: 00446740
void __cdecl CDemonCamera::setEffectIntensity(int param_1,float param_2);

// Original: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00446ea0
// Address: 00446ea0
void __cdecl CDemonCamera::copyFogPlaneToBuffer(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_blendFogPlanes_FUN_00446fe0
// Address: 00446fe0
int __cdecl CDemonCamera::blendFogPlanes(int param_1,int param_2,uint param_3);

// Original: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0
// Address: 004474e0
void CDemonCamera::initCameraFog(undefined4 param_1,int *param_2);

// Original: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
// Address: 004475a0
int CDemonCamera::getFogValueAtPosition(int param_1,int *param_2);

// Original: core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
// Address: 00447670
void CDemonCamera::setupPerspectiveAndFog(undefined4 param_1,float *param_2,undefined4 param_3);

// Original: core_dcamera.cpp_CDemonCamera_sampleFramebufferPixel_FUN_00447760
// Address: 00447760
void __cdecl CDemonCamera::sampleFramebufferPixel(int param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
// Address: 00447910
void CDemonCamera::restoreAlphaTransform(int param_1,int *param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
// Address: 00447a70
void __cdecl CDemonCamera::generateGammaPalette(undefined4 param_1,int param_2);

// Original: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
// Address: 00447b30
void __cdecl CDemonCamera::clearFramebufferAndWorkBuffers(int param_1,undefined4 param_2);

// Original: core_dcamera.cpp_loadCameraFog_FUN_00447d10
// Address: 00447d10
void __cdecl loadCameraFog(int param_1,undefined4 param_2,int param_3);

// Original: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00447e80
// Address: 00447e80
void __cdecl CDemonCamera::initCameraShake(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5);
