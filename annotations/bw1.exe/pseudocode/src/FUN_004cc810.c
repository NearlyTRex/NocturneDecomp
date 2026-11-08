// Name: FUN_004cc810
// Address: 004cc810
// Address Range: [[004cc810, 004cc991]]
// Convention: unknown
// Signature: void FUN_004cc810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc810(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_1c;
  uint local_18;
  
  fVar2 = *(float *)(param_1 + 0x3b4) - *(float *)(param_1 + 0x294);
  *(float *)(param_1 + 0x3b4) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x3b4) = 0;
  }
  _DAT_01cd0aec = _DAT_01cd0aec - *(float *)(param_1 + 0x294);
  if (_DAT_01cd0aec < 0.0) {
    _DAT_01cd0aec = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3bc)) {
    local_18 = param_1 + 0x3c0;
    local_1c = param_1 + 0x4c0;
    iVar5 = param_1;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)(iVar5 + 0x8d4) - *(float *)(param_1 + 0x294);
        *(float *)(iVar5 + 0x8d4) = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)(param_1 + 0x3bc) + -1;
        *(int *)(param_1 + 0x3bc) = iVar3;
        FUN_005c25d0(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        FUN_005c25d0(param_1 + 0x8c0 + iVar1,param_1 + 0x8c0 + iVar1 + 4,
                     (*(int *)(param_1 + 0x3bc) - iVar4) * 4);
        FUN_005c25d0(param_1 + 0x8d4 + iVar1,param_1 + 0x8d4 + iVar1 + 4,
                     (*(int *)(param_1 + 0x3bc) - iVar4) * 4);
        if (*(int *)(param_1 + 0x3bc) <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar4 < *(int *)(param_1 + 0x3bc));
  }
  return;
}
