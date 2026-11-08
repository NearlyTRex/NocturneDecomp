// Name: FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fd9dd]]
// Convention: unknown
// Signature: int FUN_004fd950(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004fd950(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00602d34;
  FUN_00569f50(iVar3 + 0x158,"worm.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3e800000;
  *(uint *)(iVar3 + 0x2ff0) = 0x3f000000;
  *(uint *)(iVar3 + 0x27a0) = 1;
  *(uint *)(iVar3 + 0x2538) = 0x41700000;
  uVar1 = _DAT_00602d20;
  *(uint *)(iVar3 + 0xc26c) = 0;
  uVar2 = _DAT_00602d24;
  *(uint *)(iVar3 + 0xc270) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
