// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_0048af70
// Address: 0048af70
// Address Range: [[0048af70, 0048afd6]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0048af70(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0048af70(CFireEffect *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b84b4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b84cc);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005b84e4);
  core_fire_cpp_loadStakeAssets_FUN_00483290();
  core_fire_cpp_loadFireBallAssets_FUN_00483ff0();
  core_fire_cpp_loadRockAssets_FUN_00484cb0();
  core_fire_cpp_loadDynamiteAssets_FUN_004876a0();
  core_fire_cpp_loadGunFlameAssets_FUN_00488220();
  core_fire_cpp_loadGunFlashAssets_FUN_004850b0();
  core_fire_cpp_loadLightningBoltAssets_FUN_00488ad0();
  core_fire_cpp_loadDebrisAssets_FUN_00486da0();
  return;
}
