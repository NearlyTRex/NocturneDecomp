// Name: core_fire.cpp_loadDebrisAssets_FUN_004b1630
// Address: 004b1630
// Address Range: [[004b1630, 004b16cb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004b1630(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004b1630(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (g_CFireEffectDebrisModels,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (g_CFireEffectDebrisModels + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (g_CFireEffectDebrisModels + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (g_CFireEffectDebrisModels + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (g_CFireEffectDebrisModels + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(g_CFireEffectDebrisModels);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(g_CFireEffectDebrisModels + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(g_CFireEffectDebrisModels + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(g_CFireEffectDebrisModels + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(g_CFireEffectDebrisModels + 4);
  return;
}
