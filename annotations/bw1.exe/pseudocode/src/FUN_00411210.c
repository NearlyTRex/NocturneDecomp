// Name: FUN_00411210
// Address: 00411210
// Address Range: [[00411210, 00411275]]
// Convention: unknown
// Signature: int FUN_00411210(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00411210(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005fbfe4;
  FUN_00569f50(iVar3 + 0x158,"batcreat.dfm");
  uVar1 = _DAT_005fbfd0;
  *(uint *)(iVar3 + 0x2fec) = 0x3f19999a;
  uVar2 = _DAT_005fbfd4;
  *(uint *)(iVar3 + 0x2ff0) = 0x3fc00000;
  *(uint *)(iVar3 + 0xc268) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
