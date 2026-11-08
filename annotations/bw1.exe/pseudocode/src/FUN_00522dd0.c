// Name: FUN_00522dd0
// Address: 00522dd0
// Address Range: [[00522dd0, 00522ee0]]
// Convention: unknown
// Signature: void FUN_00522dd0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522dd0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint local_14;
  
  FUN_00484a40(DAT_00612560,0);
  FUN_00483d80(DAT_00612560,1);
  fVar4 = (float10)param_2 * (float10)_DAT_005ea8da * ((float10)_DAT_005ea8e2 - (float10)param_2);
  iVar1 = FUN_005c03a0();
  FUN_00483de0(DAT_00612560,
               (uint)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x60));
      if (iVar3 != local_14) {
        FUN_00484f00(DAT_00612560,iVar3 * 0x48 + param_1 + 0x68);
        local_14 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x60) + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3c;
      FUN_00482210(DAT_00612560,iVar3,0x267);
    } while (iVar1 < *(int *)(param_1 + 0x5c));
  }
  FUN_00484e00(DAT_00612560);
  FUN_00483d80(DAT_00612560,0);
  FUN_00483e20(DAT_00612560,1);
  return;
}
