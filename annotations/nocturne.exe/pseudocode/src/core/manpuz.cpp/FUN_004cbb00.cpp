// Name: core_manpuz.cpp_FUN_004cbb00
// Address: 004cbb00
// Address Range: [[004cbb00, 004cbb4d]]
// Convention: unknown
// Signature: int core_manpuz_cpp_FUN_004cbb00(undefined4 param_1)

#include "nocturne.h"

int core_manpuz_cpp_FUN_004cbb00(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_core_manpuz_cpp_FUN_004cbb50_005a0134;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"mirrhack.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x150;
}
