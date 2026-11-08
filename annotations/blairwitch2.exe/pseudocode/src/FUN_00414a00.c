// Name: FUN_00414a00
// Address: 00414a00
// Address Range: [[00414a00, 00414a5b]]
// Convention: unknown
// Signature: int FUN_00414a00(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00414a00(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f3374;
  FUN_005478b0(iVar3 + 0x2b4,"beast.dfm");
  uVar2 = _DAT_005f336c;
  uVar1 = _DAT_005f3368;
  *(uint *)(iVar3 + 0x3430) = 0x41200000;
  *(uint *)(iVar3 + 0x3434) = 0x41200000;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
