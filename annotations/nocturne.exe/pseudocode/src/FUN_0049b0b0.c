// Name: FUN_0049b0b0
// Address: 0049b0b0
// Address Range: [[0049b0b0, 0049b231]]
// Convention: unknown
// Signature: void FUN_0049b0b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b0b0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_1c;
  uint local_18;
  
  fVar2 = *(float *)(param_1 + 900) - *(float *)(param_1 + 0x264);
  *(float *)(param_1 + 900) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 900) = 0;
  }
  _DAT_01c78ac4 = _DAT_01c78ac4 - *(float *)(param_1 + 0x264);
  if (_DAT_01c78ac4 < 0.0) {
    _DAT_01c78ac4 = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x388)) {
    local_18 = param_1 + 0x38c;
    local_1c = param_1 + 0x48c;
    iVar5 = param_1;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)(iVar5 + 0x8a0) - *(float *)(param_1 + 0x264);
        *(float *)(iVar5 + 0x8a0) = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)(param_1 + 0x388) + -1;
        *(int *)(param_1 + 0x388) = iVar3;
        FUN_00566170(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        FUN_00566170(param_1 + 0x88c + iVar1,param_1 + 0x88c + iVar1 + 4,
                     (*(int *)(param_1 + 0x388) - iVar4) * 4);
        FUN_00566170(param_1 + 0x8a0 + iVar1,param_1 + 0x8a0 + iVar1 + 4,
                     (*(int *)(param_1 + 0x388) - iVar4) * 4);
        if (*(int *)(param_1 + 0x388) <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar4 < *(int *)(param_1 + 0x388));
  }
  return;
}
