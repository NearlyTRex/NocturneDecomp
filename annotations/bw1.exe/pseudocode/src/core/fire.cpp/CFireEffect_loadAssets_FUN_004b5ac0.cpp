// Name: core_fire.cpp_CFireEffect_loadAssets_FUN_004b5ac0
// Address: 004b5ac0
// Address Range: [[004b5ac0, 004b5b2b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004b5ac0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004b5ac0(CFireEffect *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c3d4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c3ec);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c404);
  core_fire_cpp_FUN_004acad0();
  core_fire_cpp_loadFireBallAssets_FUN_004ae2a0();
  core_fire_cpp_FUN_004aefb0();
  core_fire_cpp_FUN_004af120();
  core_fire_cpp_FUN_004b1f80();
  core_fire_cpp_loadGunFlameAssets_FUN_004b2af0();
  core_fire_cpp_FUN_004af5e0();
  core_fire_cpp_loadLightningBoltAssets_FUN_004b3450();
  core_fire_cpp_loadDebrisAssets_FUN_004b1630();
  return;
}
