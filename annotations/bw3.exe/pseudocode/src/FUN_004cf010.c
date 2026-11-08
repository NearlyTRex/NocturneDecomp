// Name: FUN_004cf010
// Address: 004cf010
// Address Range: [[004cf010, 004cf0ba]]
// Convention: unknown
// Signature: undefined4 FUN_004cf010(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cf010(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  FUN_005a3f00(local_110,0xff,param_2);
  iVar3 = 0;
  FUN_005a3230(param_2,&DAT_005c4791,&DAT_01d4a940);
  if (0 < _DAT_01d4a940) {
    iVar2 = 0x1d4a944;
    do {
      iVar3 = iVar3 + 1;
      FUN_004ce090(iVar2,param_2);
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < _DAT_01d4a940);
  }
  iVar3 = 0;
  uVar1 = FUN_005a3230(param_2,&DAT_005c4795,&DAT_01d276b8);
  if (0 < _DAT_01d276b8) {
    iVar2 = 0x1d276bc;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004cdb50(iVar2,param_2);
      iVar2 = iVar2 + 0x48;
    } while (iVar3 < _DAT_01d276b8);
  }
  return uVar1;
}
