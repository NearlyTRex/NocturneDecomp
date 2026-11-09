// Name: core_fire.cpp_loadFireBallAssets_FUN_00495900
// Address: 00495900
// Address Range: [[00495900, 0049595d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00495900(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_loadFireBallAssets_FUN_00495900(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)0x1c3e074,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)0x1c3e074);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)0x1c3e1f0,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)0x1c3e1f0);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)0x1c3e36c,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)0x1c3e36c);
  return;
}
