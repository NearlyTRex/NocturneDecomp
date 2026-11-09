// Name: unkafter_zombie.cpp_FUN_005caac4
// Address: 005caac4
// Address Range: [[005caac4, 005caaea]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005caac4(undefined4 *param_1)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005caac4(uint *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = param_1[3] + -1;
    param_1[3] = iVar1;
    if (iVar1 == 0) {
      param_1[2] = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    }
  }
  return;
}
