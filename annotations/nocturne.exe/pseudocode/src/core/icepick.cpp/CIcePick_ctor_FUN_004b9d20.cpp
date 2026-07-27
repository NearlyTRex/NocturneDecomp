// Name: core_icepick.cpp_CIcePick_ctor_FUN_004b9d20
// Address: 004b9d20
// Address Range: [[004b9d20, 004b9da1]]
// Convention: unknown
// Signature: int core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(undefined4 param_1)

#include "nocturne.h"

int core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(uint param_1)

{
  int iVar1;
  
  iVar1 = core_hero_cpp_FUN_004b46d0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_icepick_cpp_CIcePick_setup_FUN_004b9db0_0059f3e4;
  *(uint *)(iVar1 + 0x1fa3c) = 0;
  *(uint *)(iVar1 + 0x1fa40) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1 + 0x150,"icepick.dfm")
  ;
  *(uint *)(iVar1 + 0x1fa58) = 0x3f800000;
  *(uint *)(iVar1 + 0x1fa54) = 0;
  *(uint *)(iVar1 + 0x1fa50) = *(uint *)(iVar1 + 0x1fa54);
  *(uint *)(iVar1 + 0x1fa4c) = *(uint *)(iVar1 + 0x1fa50);
  *(uint *)(iVar1 + 0x1fa5c) = 0;
  *(uint *)(iVar1 + 0x1fa60) = 0;
  *(uint *)(iVar1 + 0x2434) = 0x43960000;
  return iVar1;
}
