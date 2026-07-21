// Name: core_ladder.cpp_CLadder_ctor_FUN_004c4290
// Address: 004c4290
// Address Range: [[004c4290, 004c4335]]
// Convention: unknown
// Signature: int core_ladder_cpp_CLadder_ctor_FUN_004c4290(undefined4 param_1)

#include "nocturne.h"

int core_ladder_cpp_CLadder_ctor_FUN_004c4290(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  *(byte ***)(iVar1 + -4) = &PTR_FUN_0059f954;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"null.kfm");
  *(uint *)(iVar1 + 0x17c) = 0x40000000;
  *(uint *)(iVar1 + 0x180) = 0x41200000;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x188) = 0;
  *(uint *)(iVar1 + 0x194) = 0;
  *(uint *)(iVar1 + 400) = *(uint *)(iVar1 + 0x194);
  *(uint *)(iVar1 + 0x18c) = *(uint *)(iVar1 + 400);
  *(uint *)(iVar1 + 0x1a0) = 0;
  *(uint *)(iVar1 + 0x19c) = *(uint *)(iVar1 + 0x1a0);
  *(uint *)(iVar1 + 0x198) = *(uint *)(iVar1 + 0x19c);
  *(uint *)(iVar1 + 0x1a4) = 0;
  return iVar1 + -0x150;
}
