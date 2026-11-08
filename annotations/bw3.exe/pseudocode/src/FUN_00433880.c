// Name: FUN_00433880
// Address: 00433880
// Address Range: [[00433880, 00433a5f]]
// Convention: unknown
// Signature: void FUN_00433880(int param_1)

#include "nocturne.h"

void FUN_00433880(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_20;
  int local_18;
  
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar2 = iVar2 + 0x84;
      iVar6 = iVar4 * 0x84 + param_1;
      do {
        iVar3 = iVar6 + 4;
        *(uint *)(iVar6 + 0xbc74) = 0x501502f9;
        iVar6 = iVar3;
      } while (iVar3 != iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x21);
    iVar2 = FUN_004fc310(param_1 + 0x158);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x27c4)) {
      iVar6 = param_1 + 0x27d0;
      do {
        piVar5 = (int *)(iVar4 * 0x38 + param_1 + 0x27c8);
        iVar3 = FUN_004fb9c0(iVar2,iVar6,1);
        piVar5[0xb] = iVar3;
        piVar5[0xc] = *(int *)(iVar2 + 0x1c8c + iVar3 * 0x120);
        piVar5[0xd] = (int)((float)piVar5[0xc] / *(float *)(iVar2 + 0x1c48 + piVar5[0xb] * 0x120));
        if (-1 < piVar5[10]) {
          *(int *)(param_1 + *piVar5 * 0x84 + 0xbc74 + piVar5[1] * 4) = piVar5[0xd];
        }
        if (piVar5[10] < 1) {
          *(int *)(param_1 + piVar5[1] * 0x84 + 0xbc74 + *piVar5 * 4) = piVar5[0xd];
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x38;
      } while (iVar4 < *(int *)(param_1 + 0x27c4));
    }
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar6 = iVar2 + iVar4;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 0x84;
      *(uint *)(iVar6 + 0xbc74) = 0;
    } while (iVar4 != 0x84);
    local_20 = param_1;
    do {
      iVar4 = 0;
      local_18 = local_20;
      iVar2 = param_1;
      do {
        iVar2 = iVar2 + 0x84;
        iVar3 = iVar4 * 0x84 + param_1;
        iVar6 = local_20;
        do {
          fVar1 = *(float *)(local_18 + 0xbc74) + *(float *)(iVar3 + 0xbc74);
          if (fVar1 < *(float *)(iVar6 + 0xbc74)) {
            *(float *)(iVar6 + 0xbc74) = fVar1;
          }
          iVar3 = iVar3 + 4;
          iVar6 = iVar6 + 4;
        } while (iVar3 != iVar2);
        iVar4 = iVar4 + 1;
        local_18 = local_18 + 4;
      } while (iVar4 < 0x21);
      local_20 = local_20 + 0x84;
    } while (local_20 != param_1 + 0x1104);
  }
  return;
}
