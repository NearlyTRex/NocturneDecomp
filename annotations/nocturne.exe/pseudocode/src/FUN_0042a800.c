// Name: FUN_0042a800
// Address: 0042a800
// Address Range: [[0042a800, 0042a9c1]]
// Convention: unknown
// Signature: void FUN_0042a800(int param_1)

#include "nocturne.h"

void FUN_0042a800(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_20;
  int local_18;
  
  if (*(char *)(param_1 + 0x23b0) != '\0') {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar2 = iVar2 + 0x50;
      iVar6 = iVar4 * 0x50 + param_1;
      do {
        iVar3 = iVar6 + 4;
        *(uint *)(iVar6 + 0xb64c) = 0x501502f9;
        iVar6 = iVar3;
      } while (iVar3 != iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x14);
    iVar2 = FUN_004e1890(param_1 + 0x150);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2620)) {
      iVar6 = param_1 + 0x262c;
      do {
        piVar5 = (int *)(iVar4 * 0x38 + param_1 + 0x2624);
        iVar3 = FUN_004e1010(iVar2,iVar6,1);
        piVar5[0xb] = iVar3;
        piVar5[0xc] = *(int *)(iVar2 + 0x9cc + iVar3 * 0x54c);
        piVar5[0xd] = (int)((float)piVar5[0xc] / *(float *)(iVar2 + 0x988 + piVar5[0xb] * 0x54c));
        if (-1 < piVar5[10]) {
          *(int *)(param_1 + *piVar5 * 0x50 + 0xb64c + piVar5[1] * 4) = piVar5[0xd];
        }
        if (piVar5[10] < 1) {
          *(int *)(param_1 + piVar5[1] * 0x50 + 0xb64c + *piVar5 * 4) = piVar5[0xd];
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x38;
      } while (iVar4 < *(int *)(param_1 + 0x2620));
    }
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar6 = iVar2 + iVar4;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + 0x50;
      *(uint *)(iVar6 + 0xb64c) = 0;
    } while (iVar4 != 0x50);
    local_20 = param_1;
    do {
      iVar4 = 0;
      local_18 = local_20;
      iVar2 = param_1;
      do {
        iVar2 = iVar2 + 0x50;
        iVar3 = iVar4 * 0x50 + param_1;
        iVar6 = local_20;
        do {
          fVar1 = *(float *)(local_18 + 0xb64c) + *(float *)(iVar3 + 0xb64c);
          if (fVar1 < *(float *)(iVar6 + 0xb64c)) {
            *(float *)(iVar6 + 0xb64c) = fVar1;
          }
          iVar3 = iVar3 + 4;
          iVar6 = iVar6 + 4;
        } while (iVar3 != iVar2);
        iVar4 = iVar4 + 1;
        local_18 = local_18 + 4;
      } while (iVar4 < 0x14);
      local_20 = local_20 + 0x50;
    } while (local_20 != param_1 + 0x640);
  }
  return;
}
