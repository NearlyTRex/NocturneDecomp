// Name: FUN_00559cc0
// Address: 00559cc0
// Address Range: [[00559cc0, 00559d15]]
// Convention: unknown
// Signature: void FUN_00559cc0(double param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559cc0(double param_1)

{
  float10 fVar1;
  ulonglong local_8;
  
  if (param_1 <= 0.0) {
    Sleep(0);
    return;
  }
  local_8 = (double)FUN_00567121(param_1 * _DAT_00598149);
  fVar1 = (float10)local_8;
  FUN_00563a30();
  Sleep((DWORD)(longlong)ROUND(fVar1));
  return;
}
