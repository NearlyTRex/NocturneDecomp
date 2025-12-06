// Name: core_fire.cpp_loadStakeAssets_FUN_004bfe00
// Address: 004bfe00
// Address Range: [[004bfe00, 004bfe1f]]
// Convention: __cdecl
// Signature: void core_fire.cpp_loadStakeAssets_FUN_004bfe00(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadStakeAssets_FUN_004bfe00(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&g_FireEffectFlamingStakeModel,"stake.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&g_FireEffectFlamingStakeModel);
  return;
}
