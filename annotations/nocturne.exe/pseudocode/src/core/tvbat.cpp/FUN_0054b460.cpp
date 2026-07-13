// Name: FUN_0054b460
// Address: 0054b460
// Address Range: [[0054b460, 0054bfb4]]
// Convention: unknown
// Signature: void FUN_0054b460(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b460(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_168;
  byte auStack_164 [4];
  float fStack_160;
  int iStack_130;
  int iStack_12c;
  byte local_128 [20];
  float fStack_114;
  float fStack_110;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(int *)(param_1 + 0xbecc) != 0) && (*(int *)(param_1 + 0xbf58) == 0)) {
    iVar7 = 0;
    for (iVar8 = 0; iVar8 < *(int *)(0x01E57284 + 0x150bf4); iVar8 = iVar8 + 1) {
      iVar4 = FUN_0040d7e0(*(uint *)(iVar7 + 0x150bf8 + 0x01E57284),"CVampireBoss")
      ;
      if (iVar4 != 0) {
        *(uint *)(param_1 + 0xbf58) = *(uint *)(iVar7 + 0x150bf8 + 0x01E57284);
        break;
      }
      iVar7 = iVar7 + 4;
    }
  }
  if ((*(int *)(param_1 + 0xbecc) != 0) && (iVar7 = *(int *)(param_1 + 0xbf58), iVar7 != 0)) {
    if ((uint *)(param_1 + 0xbeac) != (uint *)(iVar7 + 0x20)) {
      *(uint *)(param_1 + 0xbeac) = *(uint *)(iVar7 + 0x20);
      *(uint *)(param_1 + 0xbeb0) = *(uint *)(iVar7 + 0x24);
      *(uint *)(param_1 + 0xbeb4) = *(uint *)(iVar7 + 0x28);
    }
    *(float *)(param_1 + 0xbeb0) = *(float *)(param_1 + 0xbeb0) + _DAT_00596fbd;
  }
  iVar7 = *(int *)(param_1 + 0xbee0);
  if (iVar7 == 2) {
    return;
  }
  if (iVar7 == 3) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x20);
  if (iVar7 == 1) {
    local_dc = *pfVar1;
    local_d8 = *(float *)(param_1 + 0x24);
    local_d4 = *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0xbed8) = param_2 * (float)_DAT_00597005 + *(float *)(param_1 + 0xbed8);
    local_94 = *(float *)(param_1 + 0xbed4) * param_2;
    local_90 = *(float *)(param_1 + 0xbed8) * param_2;
    local_8c = *(float *)(param_1 + 0xbedc) * param_2;
    *pfVar1 = *pfVar1 + local_94;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + local_90;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + local_8c;
    *(float *)(param_1 + 0x38) =
         param_2 * *(float *)(param_1 + 0xbec0) * _DAT_0059700d + *(float *)(param_1 + 0x38);
    fVar5 = (float)FUN_00467a00();
    if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
      fVar2 = (*(float *)(param_1 + 0x24) - local_d8) * fVar5 * _DAT_00597011;
      fVar3 = (*(float *)(param_1 + 0x28) - local_d4) * fVar5 * _DAT_00597011;
      *pfVar1 = local_dc + (*pfVar1 - local_dc) * fVar5 * _DAT_00597011;
      *(float *)(param_1 + 0x24) = local_d8 + fVar2;
      *(float *)(param_1 + 0x28) = local_d4 + fVar3;
      *(uint *)(param_1 + 0xbedc) = 0;
      *(uint *)(param_1 + 0xbed8) = *(uint *)(param_1 + 0xbedc);
      *(float *)(param_1 + 0xbed4) = *(float *)(param_1 + 0xbed8);
    }
    if (&local_88 != local_d0) {
      local_88 = local_dc - *(float *)(param_1 + 0x20);
      local_84 = local_d8 - *(float *)(param_1 + 0x24);
      local_80 = local_d4 - *(float *)(param_1 + 0x28);
    }
    if ((float)_DAT_00597015 <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) {
      return;
    }
    *(uint *)(param_1 + 0xbee0) = 2;
    return;
  }
  local_7c = *pfVar1;
  local_78 = *(float *)(param_1 + 0x24);
  local_74 = *(float *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0xbecc) == 0) {
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(int *)(param_1 + 0xbca4) = iVar7;
    if (iVar7 != 0) {
      if (&local_58 != (float *)(iVar7 + 0x20)) {
        local_58 = *(float *)(iVar7 + 0x20);
        local_54 = *(float *)(iVar7 + 0x24);
        local_50 = *(float *)(iVar7 + 0x28);
      }
      local_18 = (float)(*(int *)(param_1 + 0x6c) % 8 + -4);
      local_54 = (float)(int)local_18 * (float)_DAT_00596fcd +
                 *(float *)(param_1 + 0xbec8) + (float)_DAT_00596fc5 + local_54;
      goto LAB_0054b592;
    }
  }
  else {
    *(uint *)(param_1 + 0xbca4) = 0;
  }
  if (&local_58 != (float *)(param_1 + 0xbeac)) {
    local_58 = *(float *)(param_1 + 0xbeac);
    local_54 = *(float *)(param_1 + 0xbeb0);
    local_50 = *(float *)(param_1 + 0xbeb4);
  }
LAB_0054b592:
  local_b8 = *(float *)(param_1 + 0xbeac) - *(float *)(param_1 + 0x20);
  local_b4 = *(float *)(param_1 + 0xbeb0) - *(float *)(param_1 + 0x24);
  local_b0 = *(float *)(param_1 + 0xbeb4) - *(float *)(param_1 + 0x28);
  if (&local_88 != &local_b8) {
    local_88 = local_b8;
    local_84 = local_b4;
    local_80 = local_b0;
  }
  if (((*(float *)(param_1 + 0xbeb8) <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) ||
      (*(float *)(param_1 + 0xbebc) <= ABS(local_84))) && (&local_58 != (float *)(param_1 + 0xbeac))
     ) {
    local_58 = *(float *)(param_1 + 0xbeac);
    local_54 = *(float *)(param_1 + 0xbeb0);
    local_50 = *(float *)(param_1 + 0xbeb4);
  }
  if (0.0 < *(float *)(param_1 + 0xbed0)) {
    fVar5 = *(float *)(param_1 + 0xbed0) - param_2;
    *(float *)(param_1 + 0xbed0) = fVar5;
    if (fVar5 < 0.0) {
      *(uint *)(param_1 + 0xbed0) = 0;
    }
    if (*0x01CEA280 != 0) {
      _DAT_01cc4800 = "..\\core\\tvbat.cpp";
      _DAT_01cc4804 = 0x10a;
      FUN_004c8440("CTVBat::process - can't follow orders in network game!");
    }
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_58 != (float *)(iVar7 + 0x20)) {
      local_58 = *(float *)(iVar7 + 0x20);
      local_54 = *(float *)(iVar7 + 0x24);
      local_50 = *(float *)(iVar7 + 0x28);
    }
    local_54 = *(float *)(param_1 + 0xbec8) + (float)_DAT_00596fc5 + local_54;
    *(uint *)(param_1 + 0xbca4) = *(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  local_70 = local_58 - *(float *)(param_1 + 0x20);
  local_6c = local_54 - *(float *)(param_1 + 0x24);
  local_68 = local_50 - *(float *)(param_1 + 0x28);
  if (&local_88 != &local_70) {
    local_88 = local_70;
    local_84 = local_6c;
    local_80 = local_68;
  }
  FUN_00566c81();
  fVar9 = SQRT((float10)local_88 * (float10)local_88 + (float10)local_80 * (float10)local_80);
  fVar10 = (float10)local_84;
  fVar5 = (float)fVar9;
  FUN_00566c81();
  local_1c = (float)fVar9;
  local_20 = (float)-fVar10;
  if ((*(int *)(param_1 + 0xbca4) != 0) && (*(int *)(param_1 + 0xbecc) != 0)) {
    FUN_00511990(local_128);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x34))
              (*(int *)(param_1 + 0xbca4),local_128);
    iVar7 = *(int *)(param_1 + 0xbca4);
    fStack_e8 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20);
    fStack_e4 = *(float *)(param_1 + 0x24) - *(float *)(iVar7 + 0x24);
    fStack_e0 = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28);
    if (&local_88 != &fStack_e8) {
      local_88 = fStack_e8;
      local_84 = fStack_e4;
      local_80 = fStack_e0;
    }
    if (((fStack_114 <= local_84) && (local_84 <= fStack_110)) && (fVar5 < (float)_DAT_00596fd5)) {
      FUN_00423ed0(auStack_164);
      fStack_160 = 1.0;
      iStack_130 = param_1;
      iStack_12c = param_1;
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                (*(int *)(param_1 + 0xbca4),auStack_164);
      if (0.0 < fStack_160) {
        FUN_004b0200();
      }
    }
  }
  fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
  fVar10 = (float10)fsin((float10)*(float *)(param_1 + 0x34));
  fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
  fVar12 = (float10)fcos((float10)*(float *)(param_1 + 0x34));
  fStack_30 = (float)-fVar9;
  fStack_34 = (float)(fVar10 * fVar11);
  fStack_3c = (float)(fVar12 * fVar11);
  local_1c = (float)FUN_0040df00(local_1c - *(float *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) =
       local_1c * param_2 * *(float *)(param_1 + 0xbec0) + *(float *)(param_1 + 0x34);
  local_18 = local_1c;
  local_20 = (float)FUN_0040df00(local_20 - *(float *)(param_1 + 0x30));
  fVar5 = (float)_DAT_00596fdd;
  *(float *)(param_1 + 0xbed4) = *(float *)(param_1 + 0xbec4) * fStack_34;
  *(float *)(param_1 + 0xbed8) = *(float *)(param_1 + 0xbec4) * fStack_30;
  *(float *)(param_1 + 0xbedc) = *(float *)(param_1 + 0xbec4) * fStack_3c;
  *(float *)(param_1 + 0x38) = -local_1c * fVar5;
  *(float *)(param_1 + 0x20) =
       fStack_34 * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) =
       fStack_30 * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) =
       fStack_3c * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x30) =
       local_20 * param_2 * *(float *)(param_1 + 0xbec0) + *(float *)(param_1 + 0x30);
  fStack_c4 = *(float *)(param_1 + 0x20) - local_7c;
  fStack_c0 = *(float *)(param_1 + 0x24) - local_78;
  fStack_bc = *(float *)(param_1 + 0x28) - local_74;
  fStack_168 = (fStack_c0 * (float)_DAT_00596fc5) / param_2 + (float)_DAT_00596fe5;
  if (fStack_168 < (float)_DAT_00596fed) {
    fStack_168 = 10.0;
  }
  if ((float)_DAT_00596ff5 < fStack_168) {
    fStack_168 = 60.0;
  }
  *(float *)(param_1 + 0xbea8) =
       (fStack_168 - *(float *)(param_1 + 0xbea8)) * (float)_DAT_00596ffd +
       *(float *)(param_1 + 0xbea8);
  *(float *)(param_1 + 0xbd24) =
       param_2 * *(float *)(param_1 + 0xbea8) * *(float *)(param_1 + 0xbea4) +
       *(float *)(param_1 + 0xbd24);
  local_18 = local_20;
  iVar7 = FUN_00454530(param_1 + 0xbd28);
  local_18 = *(float *)(iVar7 + 0x100);
  if (*(float *)(param_1 + 0xbd24) < (float)(int)local_18) {
    if (*(float *)(param_1 + 0xbd24) < 0.0) {
      local_18 = (float)((int)local_18 + -1);
      *(float *)(param_1 + 0xbd24) = (float)(int)local_18;
    }
  }
  else {
    *(uint *)(param_1 + 0xbd24) = 0;
  }
  if ((*(char *)(param_1 + 0xbee4) != '\0') &&
     (param_2 = *(float *)(param_1 + 0xbf54) - param_2, *(float *)(param_1 + 0xbf54) = param_2,
     param_2 <= 0.0)) {
    iVar7 = FUN_00526c50(*(uint *)(param_1 + 0xbf50));
    if ((iVar7 == 0) &&
       (iVar7 = FUN_00527880((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                             (double)*(float *)(param_1 + 0x28),0,0x40490000), iVar7 != 0)) {
      uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,param_1 + 0xbee4);
      *(uint *)(param_1 + 0xbf50) = uVar6;
    }
    uVar6 = FUN_0040dda0(*(uint *)(param_1 + 0xbf48),*(uint *)(param_1 + 0xbf4c));
    *(uint *)(param_1 + 0xbf54) = uVar6;
    return;
  }
  return;
}
