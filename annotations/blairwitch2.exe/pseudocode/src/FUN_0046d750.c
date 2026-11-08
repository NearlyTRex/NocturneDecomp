// Name: FUN_0046d750
// Address: 0046d750
// Address Range: [[0046d750, 0046d7bf]]
// Convention: unknown
// Signature: int FUN_0046d750(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046d750(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f5984;
  FUN_005478b0(iVar3 + 0x2b4,"drone.dfm");
  *(uint *)(iVar3 + 0x3430) = 0x3f400000;
  uVar1 = _DAT_005f596c;
  *(uint *)(iVar3 + 0x3434) = 0x3fc00000;
  uVar2 = _DAT_005f5970;
  *(uint *)(iVar3 + 0x280c) = 1;
  *(uint *)(iVar3 + 0x25a8) = 0x42960000;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
