// Name: core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350
// Address: 004a7350
// Address Range: [[004a7350, 004a7441]]
// Convention: unknown
// Signature: int core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(param_1);
  *(byte ***)(iVar3 + 0x14c) = &PTR_core_gargoyle_cpp_CGargoyle_setup_FUN_004a7450_0059df54;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar3 + 0x150,"gargoyle.dfm");
  *(uint *)(iVar3 + 0x2dd4) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2dd8) = 0x3f19999a;
  *(uint *)(iVar3 + 0x2608) = 2;
  *(uint *)(iVar3 + 0x2434) = 0x41f00000;
  *(uint *)(iVar3 + 0x108) = 0xffff;
  *(uint *)(iVar3 + 0x10c) = 0xffff;
  *(uint *)(iVar3 + 0x110) = 0xffff;
  *(uint *)(iVar3 + 0xbd6c) = 0xffff;
  *(uint *)(iVar3 + 0xbd70) = 0xffff;
  *(uint *)(iVar3 + 0xbd74) = 0xffff;
  *(uint *)(iVar3 + 0xbd54) = 0x80;
  *(uint *)(iVar3 + 0xbd58) = 0x80;
  *(uint *)(iVar3 + 0xbd5c) = 0x80;
  *(uint *)(iVar3 + 0xbd60) = 0;
  uVar1 = _DAT_0059df40;
  *(uint *)(iVar3 + 0xbd78) = 0;
  uVar2 = _DAT_0059df44;
  *(uint *)(iVar3 + 0xbd7c) = 0;
  *(uint *)(iVar3 + 0x261c) = 0;
  *(uint *)(iVar3 + 0x2ddc) = uVar1;
  *(uint *)(iVar3 + 0x2de0) = uVar2;
  return iVar3;
}
