// Name: FUN_0042f4d0
// Address: 0042f4d0
// Address Range: [[0042f4d0, 0042f8d2]]
// Convention: unknown
// Signature: void FUN_0042f4d0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f4d0(int param_1,int param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float *apfStackY_10b0 [1016];
  uint *puVar10;
  uint local_c8;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  uint local_a4;
  float afStack_a0 [10];
  float local_78;
  uint local_74;
  float local_70 [3];
  float *local_64 [6];
  float *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (-1 < param_3) {
    iVar3 = -1;
    local_4c = (float *)(param_1 + 0x1b0);
    iVar7 = 0;
    local_2c = 0.0;
    iVar4 = param_2;
    pfVar6 = local_4c;
    if (0 < *(int *)(param_2 + 0x1de78)) {
      do {
        if ((*(int *)(iVar4 + 0x1de9c) == param_3) &&
           (local_28 = SQRT(pfVar6[2] * pfVar6[2] + *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]),
           local_2c < local_28)) {
          iVar3 = iVar7;
          local_2c = local_28;
        }
        iVar4 = iVar4 + 0x24;
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 3;
      } while (iVar7 < *(int *)(param_2 + 0x1de78));
    }
    if (iVar3 != -1) {
      pfVar5 = local_4c + param_3 * 3;
      pfVar6 = local_4c + iVar3 * 3;
      local_b8[2] = *pfVar6 - *pfVar5;
      local_b8[3] = pfVar6[1] - pfVar5[1];
      local_a8 = pfVar6[2] - pfVar5[2];
      fVar9 = SQRT((float10)local_a8 * (float10)local_a8 +
                   (float10)local_b8[2] * (float10)local_b8[2] +
                   (float10)local_b8[3] * (float10)local_b8[3]) * (float10)_DAT_005d59b7;
      afStack_a0[8] = local_b8[2];
      afStack_a0[9] = local_b8[3];
      local_78 = local_a8;
      FUN_005c03a0();
      local_18 = (int)ROUND(fVar9);
      local_34 = local_18 + 1;
      local_20 = 0;
      if (0 < local_34) {
        local_3c = param_1 + 0xfd8;
        local_44 = param_1 + 0x35dc;
        local_40 = param_1 + 0x312c;
        local_48 = param_1 + 0x158;
        local_38 = local_18 + 2;
        while (*(int *)(param_1 + 0x3120) < 0x32) {
          *(uint *)(param_1 + 0xfc) = 1;
          local_1c = (uint *)(local_40 + *(int *)(param_1 + 0x3120) * 0x18);
          *(int *)(param_1 + 0x3120) = *(int *)(param_1 + 0x3120) + 1;
          uVar2 = FUN_00569eb0(local_48);
          uVar2 = FUN_00565810(uVar2,param_3);
          puVar10 = local_1c;
          *local_1c = uVar2;
          local_1c[1] = param_3;
          local_18 = local_38;
          local_14 = local_20 + 1;
          local_24 = (float)(local_20 + 1);
          fVar1 = (float)local_38;
          local_bc = afStack_a0[8] * local_24;
          local_b8[0] = afStack_a0[9] * local_24;
          local_b8[1] = local_78 * local_24;
          afStack_a0[5] = afStack_a0[8] * local_24;
          *(uint *)((int)afStack_a0 + (uint)bVar8 * -8 + 0x18) =
               *(uint *)((int)local_b8 + (uint)bVar8 * -8);
          local_64[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 0xfffffff8] =
               (float *)local_b8[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1];
          local_30 = fVar1;
          fVar1 = 1.0 / fVar1;
          afStack_a0[2] = afStack_a0[5] * fVar1;
          afStack_a0[3] = afStack_a0[6] * fVar1;
          afStack_a0[4] = afStack_a0[7] * fVar1;
          local_70[2] = afStack_a0[5] * fVar1;
          local_64[(uint)bVar8 * -2] = *(float **)((int)afStack_a0 + (uint)bVar8 * -8 + 0xc);
          local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float **)((int)afStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 0x10);
          if ((float *)(puVar10 + 2) != (float *)((int)local_70 + 8U)) {
            puVar10[2] = local_70[2];
            puVar10[3] = local_64[0];
            puVar10[4] = local_64[1];
          }
          FUN_005b5080(local_1c + 2,local_1c[1] * 0x30 + local_3c);
          puVar10 = &local_a4;
          local_a4 = local_64[2];
          afStack_a0[(uint)bVar8 * 0xfffffffe] = (float)local_64[(uint)bVar8 * -2 + 3];
          *(float **)((int)afStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4) =
               local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          FUN_00408b40(param_1,puVar10);
          local_74 = local_c8;
          local_70[(uint)bVar8 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff3c + (uint)bVar8 * -8);
          local_64[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 0xfffffffe] =
               (float *)*(uint *)(&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          iVar3 = (*(int *)(param_1 + 0x3120) + -1) * 0x2a4 + local_44;
          *(uint *)(iVar3 + 0x20) = local_74;
          *(float *)(iVar3 + 0x24) = local_70[0];
          *(float *)(iVar3 + 0x28) = local_70[1];
          *(uint *)(param_1 + 0x3788 + (*(int *)(param_1 + 0x3120) + -1) * 0x2a4) = 0;
          local_1c[5] = 0x3f000000;
          fVar1 = (float)_DAT_005d59b7;
          *(float *)(param_1 + 0x3734 + (*(int *)(param_1 + 0x3120) + -1) * 0x2a4) =
               (float)local_1c[5] * fVar1;
          *(uint *)(param_1 + 0x3738 + (*(int *)(param_1 + 0x3120) + -1) * 0x2a4) =
               local_1c[5];
          *(float *)(param_1 + 0x373c + (*(int *)(param_1 + 0x3120) + -1) * 0x2a4) =
               fVar1 * (float)local_1c[5];
          *(uint *)(param_1 + 0x3784 + (*(int *)(param_1 + 0x3120) + -1) * 0x2a4) =
               *(uint *)(param_1 + 0x3124);
          local_20 = local_20 + 1;
          if (local_34 <= local_20) {
            return;
          }
        }
      }
    }
  }
  return;
}
