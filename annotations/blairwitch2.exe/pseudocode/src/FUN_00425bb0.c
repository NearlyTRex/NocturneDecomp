// Name: FUN_00425bb0
// Address: 00425bb0
// Address Range: [[00425bb0, 00425fa4]]
// Convention: unknown
// Signature: void FUN_00425bb0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425bb0(int param_1,int param_2,int param_3)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float *apfStackY_10b0 [1016];
  uint local_c8;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4 [3];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [4];
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
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
  
  bVar9 = 0;
  if (-1 < param_3) {
    iVar4 = -1;
    local_4c = (float *)(param_1 + 0x30c);
    iVar8 = 0;
    local_2c = 0.0;
    iVar5 = param_2;
    pfVar7 = local_4c;
    if (0 < *(int *)(param_2 + 0x1d1f8)) {
      do {
        if ((*(int *)(iVar5 + 0x1d21c) == param_3) &&
           (local_28 = SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]),
           local_2c < local_28)) {
          iVar4 = iVar8;
          local_2c = local_28;
        }
        iVar5 = iVar5 + 0x24;
        iVar8 = iVar8 + 1;
        pfVar7 = pfVar7 + 3;
      } while (iVar8 < *(int *)(param_2 + 0x1d1f8));
    }
    if (iVar4 != -1) {
      pfVar6 = local_4c + param_3 * 3;
      pfVar7 = local_4c + iVar4 * 3;
      local_98 = *pfVar7 - *pfVar6;
      local_94 = pfVar7[1] - pfVar6[1];
      local_90 = pfVar7[2] - pfVar6[2];
      fVar10 = SQRT((float10)local_90 * (float10)local_90 +
                    (float10)local_98 * (float10)local_98 + (float10)local_94 * (float10)local_94) *
               (float10)_DAT_005ccd2e;
      local_74 = local_98;
      local_70 = local_94;
      local_6c = local_90;
      FUN_005b7ff0();
      local_18 = (int)ROUND(fVar10);
      local_34 = local_18 + 1;
      local_20 = 0;
      if (0 < local_34) {
        local_40 = param_1 + 0x1134;
        local_44 = param_1 + 0x3a20;
        local_3c = param_1 + 0x3570;
        local_48 = param_1 + 0x2b4;
        local_38 = local_18 + 2;
        while (*(int *)(param_1 + 0x3564) < 0x32) {
          *(uint *)(param_1 + 0xfc) = 1;
          local_1c = (uint *)(local_3c + *(int *)(param_1 + 0x3564) * 0x18);
          *(int *)(param_1 + 0x3564) = *(int *)(param_1 + 0x3564) + 1;
          uVar3 = FUN_00547810(local_48);
          uVar3 = FUN_00543190(uVar3,param_3);
          puVar2 = local_1c;
          *local_1c = uVar3;
          local_1c[1] = param_3;
          local_18 = local_38;
          local_14 = local_20 + 1;
          local_24 = (float)(local_20 + 1);
          fVar1 = (float)local_38;
          local_8c = local_74 * local_24;
          local_88[0] = local_70 * local_24;
          local_88[1] = local_6c * local_24;
          local_bc = local_74 * local_24;
          local_b8[(uint)bVar9 * -2] = local_88[(uint)bVar9 * -2];
          local_b8[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 1] =
               (float)local_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -8];
          local_30 = fVar1;
          fVar1 = 1.0 / fVar1;
          local_b8[2] = local_bc * fVar1;
          local_b8[3] = local_b8[0] * fVar1;
          local_a8 = local_b8[1] * fVar1;
          local_68 = local_bc * fVar1;
          local_64[(uint)bVar9 * -2] = (float *)local_b8[(uint)bVar9 * 0xfffffffe + 3];
          local_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               (float *)local_b8[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 4];
          if ((float *)(puVar2 + 2) != &local_68) {
            puVar2[2] = local_68;
            puVar2[3] = local_64[0];
            puVar2[4] = local_64[1];
          }
          FUN_00591530(local_1c + 2,local_1c[1] * 0x30 + local_40);
          pfVar7 = local_b8 + 5;
          local_a4[0] = (float)local_64[2];
          local_b8[(uint)bVar9 * 0xfffffffe + 6] = (float)local_64[(uint)bVar9 * -2 + 3];
          local_b8[(uint)bVar9 * 0xfffffffe + (uint)bVar9 * 0xfffffffe + 7] =
               (float)local_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          FUN_00408d70(param_1,pfVar7);
          local_88[2] = (float)local_c8;
          local_64[(uint)bVar9 * -2 + -6] = *(float **)(&stack0xffffff3c + (uint)bVar9 * -8);
          local_64[(uint)bVar9 * -2 + (uint)bVar9 * -2 + -5] =
               *(float **)(&stack0xffffff40 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
          iVar4 = (*(int *)(param_1 + 0x3564) + -1) * 0x400 + local_44;
          *(float *)(iVar4 + 0x20) = local_88[2];
          *(float *)(iVar4 + 0x24) = local_88[3];
          *(uint *)(iVar4 + 0x28) = local_78;
          *(uint *)(param_1 + 0x3d28 + (*(int *)(param_1 + 0x3564) + -1) * 0x400) = 0;
          local_1c[5] = 0x3f000000;
          fVar1 = (float)_DAT_005ccd2e;
          *(float *)(param_1 + 0x3cd4 + (*(int *)(param_1 + 0x3564) + -1) * 0x400) =
               (float)local_1c[5] * fVar1;
          *(uint *)(param_1 + 0x3cd8 + (*(int *)(param_1 + 0x3564) + -1) * 0x400) =
               local_1c[5];
          *(float *)(param_1 + 0x3cdc + (*(int *)(param_1 + 0x3564) + -1) * 0x400) =
               (float)local_1c[5] * fVar1;
          *(uint *)(param_1 + 0x3d24 + (*(int *)(param_1 + 0x3564) + -1) * 0x400) =
               *(uint *)(param_1 + 0x3568);
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
