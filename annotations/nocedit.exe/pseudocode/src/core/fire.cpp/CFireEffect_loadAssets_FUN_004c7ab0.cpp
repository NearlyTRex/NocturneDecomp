// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
// Address: 004c7ab0
// Address Range: [[004c7ab0, 004c7b16]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectSparkTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FireEffectBlueSparkTexture);
  core_fire_cpp_loadStakeAssets_FUN_004bfe00();
  core_fire_cpp_loadFireBallAssets_FUN_004c0ad0();
  core_fire_cpp_loadRockAssets_FUN_004c17e0();
  core_fire_cpp_loadDynamiteAssets_FUN_004c41d0();
  core_fire_cpp_loadGunFlameTextures_FUN_004c4d50();
  core_fire_cpp_loadGunFlashAssets_FUN_004c1be0();
  core_fire_cpp_loadLightningBoltAssets_FUN_004c5600();
  core_fire_cpp_loadDebrisAssets_FUN_004c38d0();
  return;
}
