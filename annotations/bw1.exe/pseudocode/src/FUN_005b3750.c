// Name: FUN_005b3750
// Address: 005b3750
// Address Range: [[005b3750, 005b376d]]
// Convention: unknown
// Signature: bool FUN_005b3750(HANDLE param_1)

#include "nocturne.h"

bool FUN_005b3750(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}
