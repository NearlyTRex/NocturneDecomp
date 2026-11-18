// Name: core_fire.cpp_loadFireBallAssets_FUN_004992f0
// Address: 004992f0
// Address Range: [[004992f0, 0049934d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004992f0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004992f0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&g_FireEffectFireballModel,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&g_FireEffectFireballSmallModel,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (&g_FireEffectFireballGreenModel,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&g_FireEffectFireballGreenModel);
  return;
}
