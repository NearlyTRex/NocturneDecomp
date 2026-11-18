// Name: core_fire.cpp_loadDebrisAssets_FUN_0049c680
// Address: 0049c680
// Address Range: [[0049c680, 0049c72c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadDebrisAssets_FUN_0049c680(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_0049c680(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (g_CFireEffectDebrisModels,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (g_CFireEffectDebrisModels + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (g_CFireEffectDebrisModels + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (g_CFireEffectDebrisModels + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (g_CFireEffectDebrisModels + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(g_CFireEffectDebrisModels);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(g_CFireEffectDebrisModels + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(g_CFireEffectDebrisModels + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(g_CFireEffectDebrisModels + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(g_CFireEffectDebrisModels + 4);
  core_fire_cpp_CFireEffect_preloadExplosionStyle_FUN_004a42f0(g_CFireEffect_PTR_005fc5a0,0);
  return;
}
