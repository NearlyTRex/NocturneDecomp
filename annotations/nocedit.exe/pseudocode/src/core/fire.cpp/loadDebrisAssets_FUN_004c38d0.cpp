// Name: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
// Address: 004c38d0
// Address Range: [[004c38d0, 004c396b]]
// Convention: __cdecl
// Signature: void core_fire.cpp_loadDebrisAssets_FUN_004c38d0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004c38d0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 4);
  return;
}
