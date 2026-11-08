// Name: FUN_004b3820
// Address: 004b3820
// Address Range: [[004b3820, 004b39a1]]
// Convention: unknown
// Signature: void FUN_004b3820(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3820(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_1c;
  uint local_18;
  
  fVar2 = *(float *)(param_1 + 0x3a4) - *(float *)(param_1 + 0x284);
  *(float *)(param_1 + 0x3a4) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x3a4) = 0;
  }
  _DAT_01cb807c = _DAT_01cb807c - *(float *)(param_1 + 0x284);
  if (_DAT_01cb807c < 0.0) {
    _DAT_01cb807c = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3ac)) {
    local_18 = param_1 + 0x3b0;
    local_1c = param_1 + 0x4b0;
    iVar5 = param_1;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)(iVar5 + 0x8c4) - *(float *)(param_1 + 0x284);
        *(float *)(iVar5 + 0x8c4) = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)(param_1 + 0x3ac) + -1;
        *(int *)(param_1 + 0x3ac) = iVar3;
        FUN_005ba1f0(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        FUN_005ba1f0(param_1 + 0x8b0 + iVar1,param_1 + 0x8b0 + iVar1 + 4,
                     (*(int *)(param_1 + 0x3ac) - iVar4) * 4);
        FUN_005ba1f0(param_1 + 0x8c4 + iVar1,param_1 + 0x8c4 + iVar1 + 4,
                     (*(int *)(param_1 + 0x3ac) - iVar4) * 4);
        if (*(int *)(param_1 + 0x3ac) <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar4 < *(int *)(param_1 + 0x3ac));
  }
  return;
}
