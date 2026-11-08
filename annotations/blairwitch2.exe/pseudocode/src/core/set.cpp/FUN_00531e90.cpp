// Name: FUN_00531e90
// Address: 00531e90
// Address Range: [[00531e90, 00531f5a]]
// Convention: unknown
// Signature: void FUN_00531e90(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531e90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (20000 < param_2) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0xe95;
    FUN_004e4500("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  FUN_0046b920(DAT_0060b280,1);
  iVar2 = 0;
  local_14 = 0;
  iVar1 = *DAT_0060b280;
  if (0 < param_2) {
    do {
      FUN_0055d723(iVar1,param_3);
      if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      iVar1 = iVar1 + 0x30;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 0xc;
    } while (iVar2 < param_2);
  }
  if (local_14 == param_2) {
    FUN_0046b920(DAT_0060b280,0);
  }
  FUN_00531ca0(param_1,param_2);
  return;
}
