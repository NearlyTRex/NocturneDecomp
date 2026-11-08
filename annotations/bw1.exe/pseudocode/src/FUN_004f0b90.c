// Name: FUN_004f0b90
// Address: 004f0b90
// Address Range: [[004f0b90, 004f0c11]]
// Convention: unknown
// Signature: int FUN_004f0b90(undefined4 param_1)

#include "nocturne.h"

int FUN_004f0b90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ea830(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_00602634;
  *(uint *)(iVar1 + 0x1ffac) = 0;
  *(uint *)(iVar1 + 0x1ffb0) = 0;
  FUN_00569f50(iVar1 + 0x158,"icepick.dfm");
  *(uint *)(iVar1 + 0x1ffc8) = 0x3f800000;
  *(uint *)(iVar1 + 0x1ffc4) = 0;
  *(uint *)(iVar1 + 0x1ffc0) = *(uint *)(iVar1 + 0x1ffc4);
  *(uint *)(iVar1 + 0x1ffbc) = *(uint *)(iVar1 + 0x1ffc0);
  *(uint *)(iVar1 + 0x1ffcc) = 0;
  *(uint *)(iVar1 + 0x1ffd0) = 0;
  *(uint *)(iVar1 + 0x2538) = 0x43960000;
  return iVar1;
}
