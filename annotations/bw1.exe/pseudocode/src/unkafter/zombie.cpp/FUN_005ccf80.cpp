// Name: unkafter_zombie.cpp_FUN_005ccf80
// Address: 005ccf80
// Address Range: [[005ccf80, 005ccfa9]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005ccf80(int param_1)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005ccf80(int param_1)

{
  DWORD DVar1;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0xc) = 1;
    unkafter_zombie_cpp_FUN_005cb0a0(param_1,0);
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0xda) = DVar1;
  }
  return;
}
