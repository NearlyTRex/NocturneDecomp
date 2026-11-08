// Name: FUN_005afd10
// Address: 005afd10
// Address Range: [[005afd10, 005afd39]]
// Convention: unknown
// Signature: void FUN_005afd10(int param_1)

#include "nocturne.h"

void FUN_005afd10(int param_1)

{
  DWORD DVar1;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0xc) = 1;
    FUN_005adf10(param_1,0);
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0xda) = DVar1;
  }
  return;
}
