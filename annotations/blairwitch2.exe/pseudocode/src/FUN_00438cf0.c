// Name: FUN_00438cf0
// Address: 00438cf0
// Address Range: [[00438cf0, 00439074]]
// Convention: unknown
// Signature: void FUN_00438cf0(int *param_1,float param_2,float *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438cf0(int *param_1,float param_2,float *param_3,uint *param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_1868 [1513];
  float local_a8;
  float local_a4;
  uint local_8c;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  ulonglong local_28;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  uint *puVar8;
  
  bVar9 = 0;
  if (param_1[2] == 0) {
    if (0.0 < param_2) {
      iVar5 = *param_1 + -1;
      local_14 = iVar5;
      if (param_2 < (float)iVar5) {
        fVar10 = (float10)param_2;
        fVar11 = fVar10;
        FUN_005b7ff0();
        local_18 = (int)ROUND(fVar10);
        local_14 = local_18;
        iVar5 = local_18 + 1;
        local_a4 = (float)(fVar11 - (float10)local_18);
      }
      else {
        local_18 = iVar5;
        local_a4 = 0.0;
      }
    }
    else {
      local_18 = param_1[2];
      iVar5 = 0;
      local_a4 = 0.0;
      local_28 = __BITCAST_DOUBLE(CONCAT44(local_28._4_4_,(uint)local_28));
    }
  }
  else {
    fVar2 = (float)*param_1;
    if (0.0 <= param_2) {
      local_28 = (double)FUN_005b84d0((double)(param_2 / fVar2));
      local_a8 = param_2 - (float)local_28 * fVar2;
    }
    else {
      local_28 = (double)FUN_005b84d0((double)(-param_2 / fVar2));
      local_a8 = (float)local_28 * fVar2 + param_2;
      if (local_a8 < 0.0) {
        local_a8 = local_a8 + fVar2;
      }
    }
    fVar10 = (float10)local_a8;
    fVar11 = fVar10;
    FUN_005b7ff0();
    local_18 = (int)ROUND(fVar10);
    local_14 = local_18;
    iVar5 = local_18 + 1;
    local_a4 = (float)(fVar11 - (float10)local_18);
    if (*param_1 <= iVar5) {
      iVar5 = 0;
    }
  }
  iVar4 = local_18 * 0x1c;
  local_20 = iVar4;
  if ((double)local_a4 <= _DAT_005ce07a) {
    pfVar6 = (float *)(param_1[1] + iVar4);
    if (&stack0xffffff84 != pfVar6) {
      local_7c = *pfVar6;
      local_78 = pfVar6[1];
      local_74 = pfVar6[2];
    }
    puVar7 = (uint *)(param_1[1] + 0xc + local_18 * 0x1c);
  }
  else {
    iVar3 = iVar5 * 0x1c;
    iVar1 = param_1[1];
    local_4c = *(float *)(iVar1 + iVar3) * local_a4;
    fVar2 = 1.0 - local_a4;
    local_48 = *(float *)(iVar1 + 4 + iVar3) * local_a4;
    local_44 = *(float *)(iVar1 + 8 + iVar3) * local_a4;
    local_70 = local_4c;
    (&stack0xffffff94)[(uint)bVar9 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_1c = fVar2;
    local_58 = *(float *)(iVar1 + iVar4) * fVar2;
    local_54 = *(float *)(iVar1 + 4 + iVar4) * fVar2;
    local_50 = *(float *)(iVar1 + 8 + iVar4) * fVar2;
    local_34 = local_58;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffac + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffb0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_64 = local_34 + local_70;
    local_60 = local_30 + local_6c;
    local_5c = local_2c + local_68;
    local_40 = local_34 + local_70;
    (&stack0xffffffc4)[(uint)bVar9 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffa0 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xffffff84 != &stack0xffffffc0) {
      local_7c = local_40;
      local_78 = local_3c;
      local_74 = local_38;
    }
    FUN_00593df0(local_18 * 0x1c + param_1[1] + 0xc,iVar5 * 0x1c + param_1[1] + 0xc,local_a4);
    puVar7 = (uint *)&stack0xffffff64;
  }
  puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
  local_8c = *puVar7;
  *(uint *)(&stack0xffffff78 + (uint)bVar9 * -8) = *puVar8;
  *(uint *)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       puVar8[(uint)bVar9 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       (puVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  if (&stack0xffffff84 != param_3) {
    *param_3 = local_7c;
    param_3[1] = local_78;
    param_3[2] = local_74;
    puVar7 = param_4 + (uint)bVar9 * -2 + 1;
    *param_4 = local_8c;
    *puVar7 = *(uint *)(&stack0xffffff78 + (uint)bVar9 * -8);
    puVar7[(uint)bVar9 * -2 + 1] =
         *(uint *)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  puVar7 = param_4 + (uint)bVar9 * -2 + 1;
  *param_4 = local_8c;
  *puVar7 = *(uint *)(&stack0xffffff78 + (uint)bVar9 * -8);
  puVar7[(uint)bVar9 * -2 + 1] =
       *(uint *)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (puVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff7c + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4)
  ;
  return;
}
