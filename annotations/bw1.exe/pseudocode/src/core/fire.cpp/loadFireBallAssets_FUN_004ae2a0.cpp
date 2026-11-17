// Name: core_fire.cpp_loadFireBallAssets_FUN_004ae2a0
// Address: 004ae2a0
// Address Range: [[004ae2a0, 004ae2fd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004ae2a0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_004ae2a0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_CKeyFramedModelInstance_01c57234,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_CKeyFramedModelInstance_01c57234)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_CKeyFramedModelInstance_01c573b0,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_CKeyFramedModelInstance_01c573b0)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&g_CKeyFramedModelInstance_01c5752c,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_CKeyFramedModelInstance_01c5752c)
  ;
  return;
}
