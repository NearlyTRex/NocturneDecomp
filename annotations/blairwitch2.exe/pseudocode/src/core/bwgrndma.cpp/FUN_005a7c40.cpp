// Name: core_bwgrndma.cpp_FUN_005a7c40
// Address: 005a7c40
// Address Range: [[005a7c40, 005a7c85]]
// Convention: unknown
// Signature: void core_bwgrndma_cpp_FUN_005a7c40(int param_1)

#include "nocturne.h"

void core_bwgrndma_cpp_FUN_005a7c40(int param_1)

{
  int iVar1;
  
  iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      return;
    }
  }
  return;
}
