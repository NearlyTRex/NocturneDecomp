// Name: FUN_00559bf0
// Address: 00559bf0
// Address Range: [[00559bf0, 00559c2c]]
// Convention: unknown
// Signature: bool FUN_00559bf0(int param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00559bf0(int param_1,double param_2)

{
  DWORD DVar1;
  HANDLE hHandle;
  float10 fVar2;
  uint local_8;
  
  if (param_1 == 0) {
    return false;
  }
  fVar2 = (float10)param_2 * (float10)_DAT_00598141;
  FUN_00563a30();
  local_8 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = WaitForSingleObject(hHandle,local_8);
  return DVar1 == 0;
}
