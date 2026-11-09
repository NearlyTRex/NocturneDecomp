// Name: core_inv.cpp_FUN_004dad80
// Address: 004dad80
// Address Range: [[004dad80, 004dadaf]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dad80(undefined4 param_1)

#include "nocturne.h"

void core_inv_cpp_FUN_004dad80(uint param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(param_1,g_CTommyGunClassInfo.name_hash);
  if ((iVar1 != 0) && (200 < *(int *)(iVar1 + 0x6c4))) {
    *(uint *)(iVar1 + 0x6c4) = 200;
    return;
  }
  return;
}
