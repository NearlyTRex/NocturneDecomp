// Name: FUN_005433a0
// Address: 005433a0
// Address Range: [[005433a0, 005433cd]]
// Convention: unknown
// Signature: int FUN_005433a0(undefined4 param_1)

#include "nocturne.h"

int FUN_005433a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ee950(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_005a2d44;
  FUN_0051e0c0(iVar1 + 0x150,"drummer.dfm");
  return iVar1;
}
