// Name: FUN_004c9f20
// Address: 004c9f20
// Address Range: [[004c9f20, 004c9fc4]]
// Convention: unknown
// Signature: undefined4 FUN_004c9f20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c9f20(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  FUN_005b8010(param_2,"--- Gore ---\n");
  iVar3 = 0;
  FUN_005b8010(param_2,&DAT_005d95a0,_DAT_01cdde40);
  if (0 < _DAT_01cdde40) {
    iVar2 = 0x1cdde44;
    do {
      iVar3 = iVar3 + 1;
      FUN_004c8e00(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01cdde40);
  }
  iVar3 = 0;
  uVar1 = FUN_005b8010(param_2,&DAT_005d95a4,_DAT_01cbcaf8);
  if (0 < _DAT_01cbcaf8) {
    iVar2 = 0x1cbcafc;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = FUN_004c8750(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01cbcaf8);
  }
  return uVar1;
}
