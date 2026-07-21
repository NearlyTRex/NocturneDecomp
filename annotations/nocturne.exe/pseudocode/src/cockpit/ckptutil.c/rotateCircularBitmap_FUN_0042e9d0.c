// Name: cockpit_ckptutil.c_rotateCircularBitmap_FUN_0042e9d0
// Address: 0042e9d0
// Address Range: [[0042e9d0, 0042eaf6]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_rotateCircularBitmap_FUN_0042e9d0(int param_1,int param_2,uint param_3,uint param_4)

#include "nocturne.h"

void cockpit_ckptutil_c_rotateCircularBitmap_FUN_0042e9d0(int param_1,int param_2,uint param_3,uint param_4)

{
  byte uVar1;
  uint uVar2;
  byte *puVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  int aiStack_28 [5];
  uint uStack_14;
  
  aiStack_28[2] = param_2 * param_4;
  aiStack_28[4] = param_2 / 2;
  if (param_4 == 1) {
    uVar10 = 0;
    if (param_3 != 0) {
      iVar7 = 0;
      do {
        puVar5 = (byte *)(param_1 + iVar7) + aiStack_28[2];
        uVar2 = 0;
        puVar3 = (byte *)(param_1 + iVar7);
        if (aiStack_28[4] != 0) {
          do {
            puVar5 = puVar5 + -1;
            uVar1 = *puVar3;
            *puVar3 = *puVar5;
            uVar2 = uVar2 + 1;
            *puVar5 = uVar1;
            puVar3 = puVar3 + 1;
          } while (uVar2 < (uint)aiStack_28[4]);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + aiStack_28[2];
      } while (uVar10 < param_3);
    }
  }
  else {
    aiStack_28[3] = 0;
    if (param_3 != 0) {
      do {
        puVar4 = (uint *)(aiStack_28[3] * aiStack_28[2] + param_1);
        uStack_14 = 0;
        puVar6 = (uint *)((int)puVar4 + (aiStack_28[2] - param_4));
        if (aiStack_28[4] != 0) {
          do {
            puVar8 = puVar4;
            piVar9 = aiStack_28;
            for (uVar10 = param_4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *piVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              piVar9 = piVar9 + 1;
            }
            for (uVar10 = param_4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(byte *)piVar9 = *(byte *)puVar8;
              puVar8 = (uint *)((int)puVar8 + 1);
              piVar9 = (uint *)((int)piVar9 + 1);
            }
            puVar8 = puVar6;
            puVar11 = puVar4;
            for (uVar10 = param_4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar10 = param_4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(byte *)puVar11 = *(byte *)puVar8;
              puVar8 = (uint *)((int)puVar8 + 1);
              puVar11 = (uint *)((int)puVar11 + 1);
            }
            piVar9 = aiStack_28;
            puVar8 = puVar6;
            for (uVar10 = param_4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar8 = *piVar9;
              piVar9 = piVar9 + 1;
              puVar8 = puVar8 + 1;
            }
            for (uVar10 = param_4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(byte *)puVar8 = *(byte *)piVar9;
              piVar9 = (uint *)((int)piVar9 + 1);
              puVar8 = (uint *)((int)puVar8 + 1);
            }
            puVar4 = (uint *)((int)puVar4 + param_4);
            uStack_14 = uStack_14 + 1;
            puVar6 = (uint *)((int)puVar6 - param_4);
          } while (uStack_14 < (uint)aiStack_28[4]);
        }
        aiStack_28[3] = aiStack_28[3] + 1;
      } while ((uint)aiStack_28[3] < param_3);
    }
  }
  return;
}
