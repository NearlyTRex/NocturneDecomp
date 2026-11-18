// Name: core_fire.cpp_loadFireBallAssets_FUN_00483ff0
// Address: 00483ff0
// Address Range: [[00483ff0, 0048404d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00483ff0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00483ff0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_FireEffectFireballModel,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_FireEffectFireballSmallModel,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_FireEffectFireballGreenModel,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_FireEffectFireballGreenModel);
  return;
}
