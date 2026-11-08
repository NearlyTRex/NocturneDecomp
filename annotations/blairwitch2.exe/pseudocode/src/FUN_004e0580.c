// Name: FUN_004e0580
// Address: 004e0580
// Address Range: [[004e0580, 004e060d]]
// Convention: unknown
// Signature: int FUN_004e0580(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e0580(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00487db0(param_1);
  *(uint *)(iVar3 + 0x2b0) = 0x5f92d4;
  FUN_005478b0(iVar3 + 0x2b4,0x5dbda5);
  *(uint *)(iVar3 + 0x3430) = 0x3e800000;
  *(uint *)(iVar3 + 0x3434) = 0x3f000000;
  *(uint *)(iVar3 + 0x280c) = 1;
  *(uint *)(iVar3 + 0x25a8) = 0x41700000;
  uVar1 = _DAT_005f92c0;
  *(uint *)(iVar3 + 0x10afc) = 0;
  uVar2 = _DAT_005f92c4;
  *(uint *)(iVar3 + 0x10b00) = 0;
  *(uint *)(iVar3 + 0x259c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x3438) = uVar1;
  *(uint *)(iVar3 + 0x343c) = uVar2;
  return iVar3;
}
