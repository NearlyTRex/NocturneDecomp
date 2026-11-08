// Name: FUN_004fa6d0
// Address: 004fa6d0
// Address Range: [[004fa6d0, 004fa7e0]]
// Convention: unknown
// Signature: void FUN_004fa6d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fa6d0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint local_14;
  
  FUN_0046e120(DAT_005f2afc,0);
  FUN_0046d460(DAT_005f2afc,1);
  fVar4 = (float10)param_2 * (float10)_DAT_005c96eb * ((float10)_DAT_005c96f3 - (float10)param_2);
  iVar1 = FUN_005a3120();
  FUN_0046d4c0(DAT_005f2afc,
               (uint)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x60));
      if (iVar3 != local_14) {
        FUN_0046e5e0(DAT_005f2afc,iVar3 * 0x48 + param_1 + 0x68);
        local_14 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x60) + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3c;
      FUN_0046b8f0(DAT_005f2afc,iVar3,0x267);
    } while (iVar1 < *(int *)(param_1 + 0x5c));
  }
  FUN_0046e4e0(DAT_005f2afc);
  FUN_0046d460(DAT_005f2afc,0);
  FUN_0046d500(DAT_005f2afc,1);
  return;
}
