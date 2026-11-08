// Name: FUN_0058fd90
// Address: 0058fd90
// Address Range: [[0058fd90, 0058fde5]]
// Convention: unknown
// Signature: void FUN_0058fd90(double param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058fd90(double param_1)

{
  float10 fVar1;
  ulonglong local_8;
  
  if (param_1 <= 0.0) {
    Sleep(0);
    return;
  }
  local_8 = (double)FUN_005bae37(param_1 * _DAT_005eeaa2);
  fVar1 = (float10)local_8;
  FUN_005b7ff0();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
