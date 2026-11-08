// Name: FUN_005b8160
// Address: 005b8160
// Address Range: [[005b8160, 005b81c5]]
// Convention: unknown
// Signature: int FUN_005b8160(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b8160(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_00608224;
  FUN_00569f50(iVar3 + 0x158,"blackdog.dfm");
  uVar1 = _DAT_00608210;
  *(uint *)(iVar3 + 0x2fec) = 0x3f400000;
  uVar2 = _DAT_00608214;
  *(uint *)(iVar3 + 0x2ff0) = 0x3fc00000;
  *(uint *)(iVar3 + 0xc2b0) = 0;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
