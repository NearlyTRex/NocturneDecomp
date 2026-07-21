// Name: core_stranger.cpp_CStranger_processPickupComplete_FUN_0053beb0
// Address: 0053beb0
// Address Range: [[0053beb0, 0053bf28]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(int param_1)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fa08) != 0) {
    if (*(int *)(param_1 + 0x1faa0) != 4) {
      FUN_0046fb40(0x01BCD074,"@actionPending = %d\nstranger.cpp line %d" + 1,
                   *(int *)(param_1 + 0x1faa0),0xd49);
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_1 + 0x1fa08),DAT_00764230);
    if (iVar1 != 0) {
      FUN_0040f1a0(iVar1,param_1 + 0x1f5a0);
    }
    *(uint *)(param_1 + 0x1faa0) = 1;
    *(uint *)(param_1 + 0x1fa08) = 0;
  }
  return;
}
