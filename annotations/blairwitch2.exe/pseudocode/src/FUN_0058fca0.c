// Name: FUN_0058fca0
// Address: 0058fca0
// Address Range: [[0058fca0, 0058fcbd]]
// Convention: unknown
// Signature: bool FUN_0058fca0(HANDLE param_1)

#include "nocturne.h"

bool FUN_0058fca0(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}
