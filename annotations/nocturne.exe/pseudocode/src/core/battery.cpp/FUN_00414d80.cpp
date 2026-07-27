// Name: core_battery.cpp_FUN_00414d80
// Address: 00414d80
// Address Range: [[00414d80, 00414dd7]]
// Convention: unknown
// Signature: int core_battery_cpp_FUN_00414d80(undefined4 param_1)

#include "nocturne.h"

int core_battery_cpp_FUN_00414d80(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_core_battery_cpp_FUN_00414de0_0059a2f4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0x41f00000;
  return iVar1 + -0x150;
}
