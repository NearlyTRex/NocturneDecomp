// Name: core_muzzle.cpp_FUN_0059dcb0
// Address: 0059dcb0
// Address Range: [[0059dcb0, 0059dcd0]]
// Convention: unknown
// Signature: void core_muzzle_cpp_FUN_0059dcb0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_muzzle_cpp_FUN_0059dcb0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = core_muzzle_cpp_FUN_0059dce0(param_1);
  if (iVar1 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x848) = param_2;
  return;
}
