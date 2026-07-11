// Name: FUN_0043b890
// Address: 0043b890
// Address Range: [[0043b890, 0043bb73]]
// Convention: unknown
// Signature: void FUN_0043b890(int *param_1,float param_2,float *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b890(int *param_1,float param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_1850 [1517];
  float local_7c;
  float local_78;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  ulonglong local_24;
  float local_1c;
  int local_18;
  int local_14;
  uint *puVar7;
  
  bVar9 = 0;
  if (param_1[2] == 0) {
    if (0.0 < param_2) {
      iVar8 = *param_1 + -1;
      local_14 = iVar8;
      if (param_2 < (float)iVar8) {
        fVar10 = (float10)param_2;
        fVar11 = fVar10;
        FUN_00563a30();
        local_18 = (int)ROUND(fVar10);
        local_14 = local_18;
        iVar8 = local_18 + 1;
        local_78 = (float)(fVar11 - (float10)local_18);
      }
      else {
        local_18 = iVar8;
        local_78 = 0.0;
      }
      goto LAB_0043b8ca;
    }
    local_18 = param_1[2];
    local_78 = 0.0;
  }
  else {
    fVar3 = (float)*param_1;
    if (0.0 <= param_2) {
      local_24 = (double)FUN_005648c0((double)(param_2 / fVar3));
      local_7c = param_2 - (float)local_24 * fVar3;
    }
    else {
      local_24 = (double)FUN_005648c0((double)(-param_2 / fVar3));
      local_7c = (float)local_24 * fVar3 + param_2;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar3;
      }
    }
    fVar10 = (float10)local_7c;
    fVar11 = fVar10;
    FUN_00563a30();
    local_18 = (int)ROUND(fVar10);
    local_14 = local_18;
    iVar8 = local_18 + 1;
    local_78 = (float)(fVar11 - (float10)local_18);
    if (iVar8 < *param_1) goto LAB_0043b8ca;
  }
  iVar8 = 0;
LAB_0043b8ca:
  iVar4 = local_18 * 0x1c;
  if ((double)local_78 <= _DAT_0057b2c2) {
    pfVar5 = (float *)(param_1[1] + iVar4);
    if (&local_3c != pfVar5) {
      local_3c = *pfVar5;
      local_38 = pfVar5[1];
      local_34 = pfVar5[2];
    }
    puVar6 = (uint *)(param_1[1] + 0xc + local_18 * 0x1c);
  }
  else {
    pfVar5 = (float *)(iVar8 * 0x1c + param_1[1]);
    local_48 = *pfVar5 * local_78;
    local_44 = pfVar5[1] * local_78;
    local_40 = local_78 * pfVar5[2];
    local_1c = 1.0 - local_78;
    iVar2 = param_1[1];
    local_54 = *(float *)(iVar4 + iVar2) * local_1c;
    local_50 = *(float *)(iVar4 + 4 + iVar2) * local_1c;
    local_4c = *(float *)(iVar4 + 8 + iVar2) * local_1c;
    local_30 = local_54 + local_48;
    local_2c = local_50 + local_44;
    local_28 = local_4c + local_40;
    if (&local_3c != &local_30) {
      local_3c = local_30;
      local_38 = local_2c;
      local_34 = local_28;
    }
    FUN_0055d2d0(local_18 * 0x1c + param_1[1] + 0xc,iVar8 * 0x1c + param_1[1] + 0xc,local_78);
    puVar6 = (uint *)&stack0xffffff9c;
  }
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  uVar1 = *puVar6;
  *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8) = *puVar7;
  *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       puVar7[(uint)bVar9 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  if (param_3 != &local_3c) {
    *param_3 = local_3c;
    param_3[1] = local_38;
    param_3[2] = local_34;
    puVar6 = param_4 + (uint)bVar9 * -2 + 1;
    *param_4 = uVar1;
    *puVar6 = *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8);
    puVar6[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  puVar6 = param_4 + (uint)bVar9 * -2 + 1;
  *param_4 = uVar1;
  *puVar6 = *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8);
  puVar6[(uint)bVar9 * -2 + 1] =
       *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (puVar6 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4)
  ;
  return;
}
