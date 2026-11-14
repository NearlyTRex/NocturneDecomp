// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0
// Address: 0049d1c0
// Address Range: [[0049d1c0, 0049d22b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0049d1c0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0049d1c0(CFireEffect *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006150f4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061510c);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00615124);
  core_fire_cpp_loadStakeAssets_FUN_00494130();
  core_fire_cpp_loadFireBallAssets_FUN_00495900();
  core_fire_cpp_loadRockAssets_FUN_00496610();
  core_fire_cpp_loadDynamiteAssets_FUN_004995e0();
  core_fire_cpp_loadGunFlameAssets_FUN_0049a150();
  core_fire_cpp_loadGunFlashAssets_FUN_00496c40();
  core_fire_cpp_loadLightningBoltAssets_FUN_0049aab0();
  core_fire_cpp_loadDebrisAssets_FUN_00498c90();
  core_muzzle_cpp_FUN_0059d5f0();
  return;
}
