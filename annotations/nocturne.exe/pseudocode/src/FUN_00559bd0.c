// Name: FUN_00559bd0
// Address: 00559bd0
// Address Range: [[00559bd0, 00559bed]]
// Convention: unknown
// Signature: bool FUN_00559bd0(HANDLE param_1)

#include "nocturne.h"

bool FUN_00559bd0(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}
