// Name: core_crate.cpp_FUN_0043c810
// Address: 0043c810
// Address Range: [[0043c810, 0043c867]]
// Convention: unknown
// Signature: int core_crate_cpp_FUN_0043c810(undefined4 param_1)

#include "nocturne.h"

int core_crate_cpp_FUN_0043c810(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_core_crate_cpp_CCrate_setup_FUN_0043c870_0059ba34;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x17c) = 0;
  return iVar1 + -0x150;
}
