// Name: FUN_004c9e70
// Address: 004c9e70
// Address Range: [[004c9e70, 004c9f1a]]
// Convention: unknown
// Signature: undefined4 FUN_004c9e70(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c9e70(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  FUN_005b9600(local_110,0xff,param_2);
  iVar3 = 0;
  FUN_005b8100(param_2,&DAT_005d958a,&DAT_01cdde40);
  if (0 < _DAT_01cdde40) {
    iVar2 = 0x1cdde44;
    do {
      iVar3 = iVar3 + 1;
      FUN_004c8da0(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01cdde40);
  }
  iVar3 = 0;
  uVar1 = FUN_005b8100(param_2,&DAT_005d958e,&DAT_01cbcaf8);
  if (0 < _DAT_01cbcaf8) {
    iVar2 = 0x1cbcafc;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004c86c0(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01cbcaf8);
  }
  return uVar1;
}
