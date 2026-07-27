// Name: core_flies.cpp_FUN_0048eef0
// Address: 0048eef0
// Address Range: [[0048eef0, 0048efa5]]
// Convention: unknown
// Signature: int core_flies_cpp_FUN_0048eef0(undefined4 param_1)

#include "nocturne.h"

int core_flies_cpp_FUN_0048eef0(uint param_1)

{
  int iVar1;
  uint local_c [3];
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  iVar1 = __arrinit(iVar1 + 0x160,200,&g_SFlyTypeInfo_0059db10);
  *(byte ***)(iVar1 + -0x14) = &PTR_core_flies_cpp_CFlies_setup_FUN_0048efb0_0059da34;
  *(uint *)(iVar1 + -4) = 0x14;
  if ((uint *)(iVar1 + -0x10) != local_c) {
    *(uint *)(iVar1 + -0x10) = 0x40a00000;
    *(uint *)(iVar1 + -0xc) = 0x40a00000;
    *(uint *)(iVar1 + -8) = 0x40a00000;
  }
  *(uint *)(iVar1 + 0x28ac) = 0;
  *(uint *)(iVar1 + 0x28a8) = 0;
  *(uint *)(iVar1 + 0x28a0) = 0;
  *(uint *)(iVar1 + 0x28b0) = 0;
  *(uint *)(iVar1 + 0x28b4) = 1;
  *(uint *)(iVar1 + 0x28a4) = 0;
  return iVar1 + -0x160;
}
