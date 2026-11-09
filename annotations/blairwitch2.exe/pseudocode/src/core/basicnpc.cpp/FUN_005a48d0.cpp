// Name: core_basicnpc.cpp_FUN_005a48d0
// Address: 005a48d0
// Address Range: [[005a48d0, 005a48ef] [005a48f1, 005a4915]]
// Convention: unknown
// Signature: void core_basicnpc_cpp_FUN_005a48d0(int param_1)

#include "nocturne.h"

void core_basicnpc_cpp_FUN_005a48d0(int param_1)

{
  int iVar1;
  
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      return;
    }
  }
  return;
}
