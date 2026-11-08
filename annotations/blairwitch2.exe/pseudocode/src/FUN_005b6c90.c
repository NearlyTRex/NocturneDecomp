// Name: FUN_005b6c90
// Address: 005b6c90
// Address Range: [[005b6c90, 005b6da0]]
// Convention: unknown
// Signature: void FUN_005b6c90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6c90(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint local_14;
  
  FUN_0046c540(DAT_0060b280,0);
  FUN_0046b880(DAT_0060b280,1);
  fVar4 = (float10)param_2 * (float10)_DAT_005f17bf * ((float10)_DAT_005f17c7 - (float10)param_2);
  iVar1 = FUN_005b7ff0();
  FUN_0046b8e0(DAT_0060b280,
               (uint)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x60));
      if (iVar3 != local_14) {
        FUN_0046ca00(DAT_0060b280,iVar3 * 0x48 + param_1 + 0x68);
        local_14 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x60) + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3c;
      FUN_00469d00(DAT_0060b280,iVar3,0x267);
    } while (iVar1 < *(int *)(param_1 + 0x5c));
  }
  FUN_0046c900(DAT_0060b280);
  FUN_0046b880(DAT_0060b280,0);
  FUN_0046b920(DAT_0060b280,1);
  return;
}
