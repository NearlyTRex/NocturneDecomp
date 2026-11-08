// Name: FUN_00581950
// Address: 00581950
// Address Range: [[00581950, 0058198c]]
// Convention: unknown
// Signature: bool FUN_00581950(int param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00581950(int param_1,double param_2)

{
  DWORD DVar1;
  HANDLE hHandle;
  float10 fVar2;
  uint local_8;
  
  if (param_1 == 0) {
    return false;
  }
  fVar2 = (float10)param_2 * (float10)_DAT_005d7e93;
  FUN_005a3120();
  local_8 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = WaitForSingleObject(hHandle,local_8);
  return DVar1 == 0;
}
