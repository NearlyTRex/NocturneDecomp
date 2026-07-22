// Name: core_grave.cpp_CGrave_ctor_FUN_004b0b40
// Address: 004b0b40
// Address Range: [[004b0b40, 004b0bc3]]
// Convention: unknown
// Signature: int core_grave_cpp_CGrave_ctor_FUN_004b0b40(undefined4 param_1)

#include "nocturne.h"

int core_grave_cpp_CGrave_ctor_FUN_004b0b40(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_0059e5d4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"grave1.kfm");
  *(uint *)(iVar1 + 0x17c) = 0;
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x18c) = 1;
  *(byte *)(iVar1 + 400) = 0;
  *(byte *)(iVar1 + 500) = 0;
  return iVar1 + -0x150;
}
