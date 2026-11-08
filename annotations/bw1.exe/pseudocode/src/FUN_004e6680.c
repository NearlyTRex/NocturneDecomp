// Name: FUN_004e6680
// Address: 004e6680
// Address Range: [[004e6680, 004e672a]]
// Convention: unknown
// Signature: undefined4 FUN_004e6680(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e6680(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  FUN_005c1180(local_110,0xff,param_2);
  iVar3 = 0;
  FUN_005c04b0(param_2,&DAT_005e416d,&DAT_01cf69f8);
  if (0 < _DAT_01cf69f8) {
    iVar2 = 0x1cf69fc;
    do {
      iVar3 = iVar3 + 1;
      FUN_004e5600(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01cf69f8);
  }
  iVar3 = 0;
  uVar1 = FUN_005c04b0(param_2,&DAT_005e4171,&DAT_01cd56b0);
  if (0 < _DAT_01cd56b0) {
    iVar2 = 0x1cd56b4;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004e4fa0(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01cd56b0);
  }
  return uVar1;
}
