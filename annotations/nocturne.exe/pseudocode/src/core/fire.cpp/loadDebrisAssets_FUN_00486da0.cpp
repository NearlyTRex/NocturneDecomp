// Name: core_fire.cpp_loadDebrisAssets_FUN_00486da0
// Address: 00486da0
// Address Range: [[00486da0, 00486e3b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadDebrisAssets_FUN_00486da0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_00486da0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (g_CKeyFramedModelInstance_ARRAY_01c094bc,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            (g_CKeyFramedModelInstance_ARRAY_01c094bc);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            (g_CKeyFramedModelInstance_ARRAY_01c094bc + 4);
  return;
}
