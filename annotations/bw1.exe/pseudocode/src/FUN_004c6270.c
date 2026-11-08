// Name: FUN_004c6270
// Address: 004c6270
// Address Range: [[004c6270, 004c6387]]
// Convention: unknown
// Signature: int FUN_004c6270(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c6270(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004ea830(param_1);
  iVar2 = FUN_0043e5c0(iVar2 + 0x1ffec);
  *(byte ***)(iVar2 + -0x1fe98) = &PTR_FUN_00600da4;
  *(uint *)(iVar2 + -0x40) = 0;
  *(uint *)(iVar2 + -0x3c) = 0;
  *(uint *)(iVar2 + -0x38) = 0;
  *(uint *)(iVar2 + -0x34) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x30) = 0;
  *(uint *)(iVar2 + -0x2c) = 0xbf060a92;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -4) = 0;
  uVar1 = _DAT_00600d8c;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + 0x3ab30) = uVar1;
  *(uint *)(iVar2 + -0x24) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x18);
  FUN_00569f50(iVar2 + -0x1fe94,"?gabriela.dfm" + 1);
  FUN_00468950(*(int *)(iVar2 + -0x1cc) + 0x158,0x5e0e49);
  return iVar2 + -0x1ffec;
}
