// Name: FUN_004b4d50
// Address: 004b4d50
// Address Range: [[004b4d50, 004b4ed1]]
// Convention: unknown
// Signature: void FUN_004b4d50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4d50(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_1c;
  uint local_18;
  
  fVar2 = *(float *)(param_1 + 0x434) - *(float *)(param_1 + 0x314);
  *(float *)(param_1 + 0x434) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0x434) = 0;
  }
  _DAT_01d22af4 = _DAT_01d22af4 - *(float *)(param_1 + 0x314);
  if (_DAT_01d22af4 < 0.0) {
    _DAT_01d22af4 = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x43c)) {
    local_18 = param_1 + 0x440;
    local_1c = param_1 + 0x540;
    iVar5 = param_1;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)(iVar5 + 0x954) - *(float *)(param_1 + 0x314);
        *(float *)(iVar5 + 0x954) = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)(param_1 + 0x43c) + -1;
        *(int *)(param_1 + 0x43c) = iVar3;
        FUN_005a54c0(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        FUN_005a54c0(param_1 + 0x940 + iVar1,param_1 + 0x940 + iVar1 + 4,
                     (*(int *)(param_1 + 0x43c) - iVar4) * 4);
        FUN_005a54c0(param_1 + 0x954 + iVar1,param_1 + 0x954 + iVar1 + 4,
                     (*(int *)(param_1 + 0x43c) - iVar4) * 4);
        if (*(int *)(param_1 + 0x43c) <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar4 < *(int *)(param_1 + 0x43c));
  }
  return;
}
