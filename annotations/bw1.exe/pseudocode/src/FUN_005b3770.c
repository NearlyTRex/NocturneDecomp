// Name: FUN_005b3770
// Address: 005b3770
// Address Range: [[005b3770, 005b37ac]]
// Convention: unknown
// Signature: bool FUN_005b3770(int param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005b3770(int param_1,double param_2)

{
  DWORD DVar1;
  HANDLE hHandle;
  float10 fVar2;
  uint local_8;
  
  if (param_1 == 0) {
    return false;
  }
  fVar2 = (float10)param_2 * (float10)_DAT_005f9e72;
  FUN_005c03a0();
  local_8 = (DWORD)(longlong)ROUND(fVar2);
  DVar1 = WaitForSingleObject(hHandle,local_8);
  return DVar1 == 0;
}
