// Name: FUN_0042a3d0
// Address: 0042a3d0
// Address Range: [[0042a3d0, 0042a591]]
// Convention: unknown
// Signature: void FUN_0042a3d0(int param_1)

#include "nocturne.h"

void FUN_0042a3d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_20;
  int local_18;
  
  if (*(char *)(param_1 + 0x2514) != '\0') {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar2 = iVar2 + 0x58;
      iVar6 = iVar4 * 0x58 + param_1;
      do {
        iVar3 = iVar6 + 4;
        *(uint *)(iVar6 + 0x10230) = 0x501502f9;
        iVar6 = iVar3;
      } while (iVar3 != iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x16);
    iVar2 = FUN_00503860(param_1 + 0x2b4);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2830)) {
      iVar6 = param_1 + 0x283c;
      do {
        piVar5 = (int *)(iVar4 * 0x38 + param_1 + 0x2834);
        iVar3 = FUN_00502f10(iVar2,iVar6,1);
        piVar5[0xb] = iVar3;
        piVar5[0xc] = *(int *)(iVar2 + 0x1c8c + iVar3 * 0x118);
        piVar5[0xd] = (int)((float)piVar5[0xc] / *(float *)(iVar2 + 0x1c48 + piVar5[0xb] * 0x118));
        if (-1 < piVar5[10]) {
          *(int *)(param_1 + *piVar5 * 0x58 + 0x10230 + piVar5[1] * 4) = piVar5[0xd];
        }
        if (piVar5[10] < 1) {
          *(int *)(param_1 + piVar5[1] * 0x58 + 0x10230 + *piVar5 * 4) = piVar5[0xd];
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x38;
      } while (iVar4 < *(int *)(param_1 + 0x2830));
    }
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar6 = iVar2 + iVar4;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 0x58;
      *(uint *)(iVar6 + 0x10230) = 0;
    } while (iVar4 != 0x58);
    local_20 = param_1;
    do {
      iVar4 = 0;
      local_18 = local_20;
      iVar2 = param_1;
      do {
        iVar2 = iVar2 + 0x58;
        iVar3 = iVar4 * 0x58 + param_1;
        iVar6 = local_20;
        do {
          fVar1 = *(float *)(local_18 + 0x10230) + *(float *)(iVar3 + 0x10230);
          if (fVar1 < *(float *)(iVar6 + 0x10230)) {
            *(float *)(iVar6 + 0x10230) = fVar1;
          }
          iVar3 = iVar3 + 4;
          iVar6 = iVar6 + 4;
        } while (iVar3 != iVar2);
        iVar4 = iVar4 + 1;
        local_18 = local_18 + 4;
      } while (iVar4 < 0x16);
      local_20 = local_20 + 0x58;
    } while (local_20 != param_1 + 0x790);
  }
  return;
}
