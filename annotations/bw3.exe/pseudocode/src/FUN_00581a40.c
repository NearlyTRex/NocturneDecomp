// Name: FUN_00581a40
// Address: 00581a40
// Address Range: [[00581a40, 00581a95]]
// Convention: unknown
// Signature: void FUN_00581a40(double param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581a40(double param_1)

{
  float10 fVar1;
  ulonglong local_8;
  
  if (param_1 <= 0.0) {
    Sleep(0);
    return;
  }
  local_8 = (double)FUN_005a6067(param_1 * _DAT_005d7e9b);
  fVar1 = (float10)local_8;
  FUN_005a3120();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
