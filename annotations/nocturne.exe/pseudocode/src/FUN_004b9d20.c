// Name: FUN_004b9d20
// Address: 004b9d20
// Address Range: [[004b9d20, 004b9da1]]
// Convention: unknown
// Signature: int FUN_004b9d20(undefined4 param_1)

#include "nocturne.h"

int FUN_004b9d20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b46d0(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_FUN_0059f3e4;
  *(uint *)(iVar1 + 0x1fa3c) = 0;
  *(uint *)(iVar1 + 0x1fa40) = 0;
  FUN_0051e0c0(iVar1 + 0x150,"icepick.dfm");
  *(uint *)(iVar1 + 0x1fa58) = 0x3f800000;
  *(uint *)(iVar1 + 0x1fa54) = 0;
  *(uint *)(iVar1 + 0x1fa50) = *(uint *)(iVar1 + 0x1fa54);
  *(uint *)(iVar1 + 0x1fa4c) = *(uint *)(iVar1 + 0x1fa50);
  *(uint *)(iVar1 + 0x1fa5c) = 0;
  *(uint *)(iVar1 + 0x1fa60) = 0;
  *(uint *)(iVar1 + 0x2434) = 0x43960000;
  return iVar1;
}
