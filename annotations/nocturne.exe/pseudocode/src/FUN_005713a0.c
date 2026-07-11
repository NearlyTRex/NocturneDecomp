// Name: FUN_005713a0
// Address: 005713a0
// Address Range: [[005713a0, 005713c9]]
// Convention: unknown
// Signature: void FUN_005713a0(int param_1)

#include "nocturne.h"

void FUN_005713a0(int param_1)

{
  DWORD DVar1;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0xc) = 1;
    FUN_0056e9d0(param_1,0);
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0xda) = DVar1;
  }
  return;
}
