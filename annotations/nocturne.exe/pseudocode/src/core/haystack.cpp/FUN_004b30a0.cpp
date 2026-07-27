// Name: core_haystack.cpp_FUN_004b30a0
// Address: 004b30a0
// Address Range: [[004b30a0, 004b3103]]
// Convention: unknown
// Signature: int core_haystack_cpp_FUN_004b30a0(undefined4 param_1)

#include "nocturne.h"

int core_haystack_cpp_FUN_004b30a0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_FUN_004b46d0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_haystack_cpp_FUN_004b3110_0059e884;
  *(uint *)(iVar1 + 0x1fa3c) = 0;
  *(uint *)(iVar1 + 0x1fa40) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + 0x150,"haystack.dfm");
  *(uint *)(iVar1 + 0x1fa50) = 0x3f800000;
  *(uint *)(iVar1 + 0x1fa4c) = 0;
  *(uint *)(iVar1 + 0x1fa48) = *(uint *)(iVar1 + 0x1fa4c);
  *(uint *)(iVar1 + 0x1fa44) = *(uint *)(iVar1 + 0x1fa48);
  return iVar1;
}
