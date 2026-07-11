// Name: FUN_004dfea0
// Address: 004dfea0
// Address Range: [[004dfea0, 004dffb0]]
// Convention: unknown
// Signature: void FUN_004dfea0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfea0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint local_14;
  
  FUN_004619f0(DAT_005ae704,0);
  FUN_00460fb0(DAT_005ae704,1);
  fVar4 = (float10)param_2 * (float10)_DAT_0058ad6c * ((float10)_DAT_0058ad74 - (float10)param_2);
  iVar1 = FUN_00563a30();
  FUN_00461010(DAT_005ae704,
               (uint)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
               (int)((ulonglong)((longlong)iVar1 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x60));
      if (iVar3 != local_14) {
        FUN_00461eb0(DAT_005ae704,iVar3 * 0x48 + param_1 + 0x68);
        local_14 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x60) + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x3c;
      FUN_0045f460(DAT_005ae704,iVar3,0x267);
    } while (iVar1 < *(int *)(param_1 + 0x5c));
  }
  FUN_00461db0(DAT_005ae704);
  FUN_00460fb0(DAT_005ae704,0);
  FUN_00461050(DAT_005ae704,1);
  return;
}
