// Name: FUN_0050c200
// Address: 0050c200
// Address Range: [[0050c200, 0050c2ca]]
// Convention: unknown
// Signature: void FUN_0050c200(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050c200(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (20000 < param_2) {
    _DAT_01cc4800 = "o@..\\core\\set.cpp" + 2;
    _DAT_01cc4804 = 0xce7;
    FUN_004c8440("CDemonSet::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  FUN_00461050(DAT_005ae704,1);
  iVar2 = 0;
  local_14 = 0;
  iVar1 = *DAT_005ae704;
  if (0 < param_2) {
    do {
      FUN_0053075c(iVar1,param_3);
      if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
        local_14 = local_14 + 1;
      }
      iVar1 = iVar1 + 0x30;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 0xc;
    } while (iVar2 < param_2);
  }
  if (local_14 == param_2) {
    FUN_00461050(DAT_005ae704,0);
  }
  FUN_0050c010(param_1,param_2);
  return;
}
