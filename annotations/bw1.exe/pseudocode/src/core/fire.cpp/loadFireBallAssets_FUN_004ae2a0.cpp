// Name: core_fire.cpp_loadFireBallAssets_FUN_004ae2a0
// Address: 004ae2a0
// Address Range: [[004ae2a0, 004ae2fd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004ae2a0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004ae2a0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_FireEffectFireballModel,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_FireEffectFireballSmallModel,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_FireEffectFireballGreenModel,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_FireEffectFireballGreenModel);
  return;
}
