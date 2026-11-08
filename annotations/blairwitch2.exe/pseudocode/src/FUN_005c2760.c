// Name: FUN_005c2760
// Address: 005c2760
// Address Range: [[005c2760, 005c27c1]]
// Convention: unknown
// Signature: void FUN_005c2760(undefined4 *param_1)

#include "nocturne.h"

void FUN_005c2760(uint *param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetCurrentThreadId();
  if (DVar1 != param_1[2]) {
    if (param_1[1] == 0) {
      FUN_005c2760(&DAT_02681040);
      if (param_1[1] == 0) {
        uVar2 = FUN_005c2624();
        param_1[1] = 1;
        *param_1 = uVar2;
      }
      FUN_005c27c4(&DAT_02681040);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    param_1[2] = DVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}
