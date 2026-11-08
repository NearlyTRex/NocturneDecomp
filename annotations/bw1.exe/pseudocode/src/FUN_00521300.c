// Name: FUN_00521300
// Address: 00521300
// Address Range: [[00521300, 0052136f]]
// Convention: unknown
// Signature: int FUN_00521300(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00521300(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_0042c080(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_006040b4;
  FUN_00569f50(iVar3 + 0x158,"moocow.dfm");
  *(uint *)(iVar3 + 0x2fec) = 0x3fe00000;
  uVar1 = _DAT_006040a8;
  *(uint *)(iVar3 + 0x2ff0) = 0x40600000;
  uVar2 = _DAT_006040ac;
  *(uint *)(iVar3 + 0xc1d8) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3f490fdb;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
