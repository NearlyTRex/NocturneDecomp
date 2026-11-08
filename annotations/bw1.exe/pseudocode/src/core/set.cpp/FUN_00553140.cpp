// Name: FUN_00553140
// Address: 00553140
// Address Range: [[00553140, 0055320a]]
// Convention: unknown
// Signature: void FUN_00553140(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553140(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (20000 < param_2) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0xe91;
    FUN_005030e0("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  FUN_00483e20(DAT_00612560,1);
  iVar2 = 0;
  local_14 = 0;
  iVar1 = *DAT_00612560;
  if (0 < param_2) {
    do {
      FUN_00580173(iVar1,param_3);
      if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      iVar1 = iVar1 + 0x30;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 0xc;
    } while (iVar2 < param_2);
  }
  if (local_14 == param_2) {
    FUN_00483e20(DAT_00612560,0);
  }
  FUN_00552f50(param_1,param_2);
  return;
}
