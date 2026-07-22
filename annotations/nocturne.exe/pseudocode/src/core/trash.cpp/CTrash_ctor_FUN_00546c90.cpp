// Name: core_trash.cpp_CTrash_ctor_FUN_00546c90
// Address: 00546c90
// Address Range: [[00546c90, 00546cd3]]
// Convention: unknown
// Signature: int core_trash_cpp_CTrash_ctor_FUN_00546c90(undefined4 param_1)

#include "nocturne.h"

int core_trash_cpp_CTrash_ctor_FUN_00546c90(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_core_trash_cpp_CTrash_setup_FUN_00546ce0_005a3544;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"question.kfm");
  return iVar1 + -0x150;
}
