// Name: FUN_00538ad0
// Address: 00538ad0
// Address Range: [[00538ad0, 00538b9a]]
// Convention: unknown
// Signature: void FUN_00538ad0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538ad0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (25000 < param_2) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0xea9;
    FUN_004e4330("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,25000);
  }
  FUN_0046d500(DAT_005f2afc,1);
  iVar2 = 0;
  local_14 = 0;
  iVar1 = *DAT_005f2afc;
  if (0 < param_2) {
    do {
      FUN_005632a3(iVar1,param_3);
      if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      iVar1 = iVar1 + 0x30;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 0xc;
    } while (iVar2 < param_2);
  }
  if (local_14 == param_2) {
    FUN_0046d500(DAT_005f2afc,0);
  }
  FUN_005388e0(param_1,param_2);
  return;
}
