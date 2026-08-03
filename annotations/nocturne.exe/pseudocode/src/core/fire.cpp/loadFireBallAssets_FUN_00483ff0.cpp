// Name: core_fire.cpp_loadFireBallAssets_FUN_00483ff0
// Address: 00483ff0
// Address Range: [[00483ff0, 0048404d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00483ff0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00483ff0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_CKeyFramedModelInstance_01c08ec4,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_CKeyFramedModelInstance_01c08ec4)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_CKeyFramedModelInstance_01c09040,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_CKeyFramedModelInstance_01c09040)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&g_CKeyFramedModelInstance_01c091bc,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&g_CKeyFramedModelInstance_01c091bc)
  ;
  return;
}
