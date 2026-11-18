// Name: core_fire.cpp_loadDebrisAssets_FUN_00498c90
// Address: 00498c90
// Address Range: [[00498c90, 00498d2b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadDebrisAssets_FUN_00498c90(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_00498c90(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (g_CFireEffectDebrisModels,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (g_CFireEffectDebrisModels + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (g_CFireEffectDebrisModels + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (g_CFireEffectDebrisModels + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (g_CFireEffectDebrisModels + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(g_CFireEffectDebrisModels);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(g_CFireEffectDebrisModels + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(g_CFireEffectDebrisModels + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(g_CFireEffectDebrisModels + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(g_CFireEffectDebrisModels + 4);
  return;
}
