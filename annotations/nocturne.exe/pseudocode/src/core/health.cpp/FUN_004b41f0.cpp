// Name: core_health.cpp_FUN_004b41f0
// Address: 004b41f0
// Address Range: [[004b41f0, 004b4247]]
// Convention: unknown
// Signature: int core_health_cpp_FUN_004b41f0(undefined4 param_1)

#include "nocturne.h"

int core_health_cpp_FUN_004b41f0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_core_health_cpp_FUN_004b4250_0059ea14;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"bullet.kfm");
  *(uint *)(iVar1 + 0x17c) = 1;
  *(uint *)(iVar1 + 0x180) = 0x42480000;
  return iVar1 + -0x150;
}
