// Name: FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116eb]]
// Convention: unknown
// Signature: int FUN_00411690(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00411690(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f2ef4;
  FUN_005478b0(iVar3 + 0x2b4,"batcreat.dfm");
  uVar2 = _DAT_005f2ee4;
  uVar1 = _DAT_005f2ee0;
  *(uint *)(iVar3 + 0x3430) = 0x3f19999a;
  *(uint *)(iVar3 + 0x3434) = 0x3fc00000;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
