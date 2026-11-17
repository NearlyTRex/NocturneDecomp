// Name: core_fire.cpp_loadStakeAssets_FUN_004acad0
// Address: 004acad0
// Address Range: [[004acad0, 004acaef]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadStakeAssets_FUN_004acad0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadStakeAssets_FUN_004acad0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_FireEffectFlamingStakeModel,"stake.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_FireEffectFlamingStakeModel);
  return;
}
