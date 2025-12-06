// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
// Address: 004c7ab0
// Address Range: [[004c7ab0, 004c7b16]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect *this_ptr)

{
  uint uStack00000008;
  uint uStack0000000c;
  uint uStack00000010;
  uint uStack00000014;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectSparkTexture);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlueSparkTexture);
  core_fire_cpp_loadStakeAssets_FUN_004bfe00();
  uStack00000008 = 0x4c7af7;
  core_fire_cpp_loadFireBallAssets_FUN_004c0ad0();
  uStack0000000c = 0x4c7afc;
  core_fire_cpp_loadRockAssets_FUN_004c17e0();
  uStack00000010 = 0x4c7b01;
  core_fire_cpp_loadDynamiteAssets_FUN_004c41d0();
  uStack00000014 = 0x4c7b06;
  core_fire_cpp_loadGunFlameTextures_FUN_004c4d50();
  uStack00000018 = 0x4c7b0b;
  core_fire_cpp_loadGunFlashAssets_FUN_004c1be0();
  uStack0000001c = 0x4c7b10;
  core_fire_cpp_loadLightningBoltAssets_FUN_004c5600();
  uStack00000020 = 0x4c7b15;
  core_fire_cpp_loadDebrisAssets_FUN_004c38d0();
  return;
}
