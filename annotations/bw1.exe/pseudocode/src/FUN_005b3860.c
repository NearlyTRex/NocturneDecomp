// Name: FUN_005b3860
// Address: 005b3860
// Address Range: [[005b3860, 005b38b5]]
// Convention: unknown
// Signature: void FUN_005b3860(double param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b3860(double param_1)

{
  float10 fVar1;
  ulonglong local_8;
  
  if (param_1 <= 0.0) {
    Sleep(0);
    return;
  }
  local_8 = (double)FUN_005c31f7(param_1 * _DAT_005f9e7a);
  fVar1 = (float10)local_8;
  FUN_005c03a0();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
