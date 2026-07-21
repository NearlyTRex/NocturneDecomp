// Name: core_lever.cpp_CLever_ctor_FUN_004c6040
// Address: 004c6040
// Address Range: [[004c6040, 004c6101]]
// Convention: unknown
// Signature: int core_lever_cpp_CLever_ctor_FUN_004c6040(undefined4 param_1)

#include "nocturne.h"

int core_lever_cpp_CLever_ctor_FUN_004c6040(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(iVar1 + 0x150);
  FUN_00481620(iVar1 + 0x2c8);
  *(byte ***)(iVar1 + -4) = &PTR_core_lever_cpp_CLever_setup_FUN_004c6110_0059fc44;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar1,"glever.kfm");
  *(uint *)(iVar1 + 0x180) = 0;
  *(byte *)(iVar1 + 0x188) = 0;
  *(byte *)(iVar1 + 0x1ec) = 0;
  *(byte *)(iVar1 + 0x250) = 0;
  *(uint *)(iVar1 + 0x184) = 0;
  *(uint *)(iVar1 + 0x2b4) = 1;
  *(uint *)(iVar1 + 0x2b8) = 0;
  *(uint *)(iVar1 + 700) = 0x17;
  *(uint *)(iVar1 + 0x2c0) = 0;
  *(uint *)(iVar1 + 0x2c4) = 0;
  *(uint *)(iVar1 + 0x6b4) = 2;
  *(uint *)(iVar1 + 0x6b8) = 1;
  return iVar1 + -0x150;
}
