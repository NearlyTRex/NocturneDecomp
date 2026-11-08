// Name: FUN_00581930
// Address: 00581930
// Address Range: [[00581930, 0058194d]]
// Convention: unknown
// Signature: bool FUN_00581930(HANDLE param_1)

#include "nocturne.h"

bool FUN_00581930(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}
