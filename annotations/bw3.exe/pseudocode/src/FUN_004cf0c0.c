// Name: FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf164]]
// Convention: unknown
// Signature: undefined4 FUN_004cf0c0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cf0c0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005a3140(param_2,"--- Gore ---\n");
  iVar3 = 0;
  FUN_005a3140(param_2,&DAT_005c47a7,_DAT_01d4a940);
  if (0 < _DAT_01d4a940) {
    iVar2 = 0x1d4a944;
    do {
      iVar3 = iVar3 + 1;
      FUN_004ce0f0(iVar2,param_2);
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < _DAT_01d4a940);
  }
  iVar3 = 0;
  uVar1 = FUN_005a3140(param_2,&DAT_005c47ab,_DAT_01d276b8);
  if (0 < _DAT_01d276b8) {
    iVar2 = 0x1d276bc;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004cdbe0(iVar2,param_2);
      iVar2 = iVar2 + 0x48;
    } while (iVar3 < _DAT_01d276b8);
  }
  return uVar1;
}
