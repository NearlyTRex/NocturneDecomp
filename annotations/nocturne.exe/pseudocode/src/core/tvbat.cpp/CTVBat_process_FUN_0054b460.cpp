// Name: core_tvbat.cpp_CTVBat_process_FUN_0054b460
// Address: 0054b460
// Address Range: [[0054b460, 0054bfb4]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_process_FUN_0054b460(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tvbat_cpp_CTVBat_process_FUN_0054b460(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint uVar12;
  uint uVar13;
  float local_178;
  float local_170;
  byte local_16c [4];
  float fStack_168;
  int iStack_138;
  int iStack_134;
  byte auStack_130 [20];
  float fStack_11c;
  float fStack_118;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
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
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_18;
  
  if ((*(int *)(param_1 + 0xbecc) != 0) && (*(int *)(param_1 + 0xbf58) == 0)) {
    iVar6 = 0;
    for (iVar7 = 0; iVar7 < *(int *)(0x01E57284 + 0x150bf4); iVar7 = iVar7 + 1) {
      iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0
                        (*(uint *)(iVar6 + 0x150bf8 + 0x01E57284),"CVampireBoss");
      if (iVar4 != 0) {
        *(uint *)(param_1 + 0xbf58) = *(uint *)(iVar6 + 0x150bf8 + 0x01E57284);
        break;
      }
      iVar6 = iVar6 + 4;
    }
  }
  if ((*(int *)(param_1 + 0xbecc) != 0) && (iVar6 = *(int *)(param_1 + 0xbf58), iVar6 != 0)) {
    if ((uint *)(param_1 + 0xbeac) != (uint *)(iVar6 + 0x20)) {
      *(uint *)(param_1 + 0xbeac) = *(uint *)(iVar6 + 0x20);
      *(uint *)(param_1 + 0xbeb0) = *(uint *)(iVar6 + 0x24);
      *(uint *)(param_1 + 0xbeb4) = *(uint *)(iVar6 + 0x28);
    }
    *(float *)(param_1 + 0xbeb0) = *(float *)(param_1 + 0xbeb0) + _DAT_00596fbd;
  }
  iVar6 = *(int *)(param_1 + 0xbee0);
  if (iVar6 == 2) {
    return;
  }
  if (iVar6 == 3) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x20);
  if (iVar6 == 1) {
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
    fVar5 = (float)core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00();
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
    if (&local_88 != &local_d0) {
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
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(int *)(param_1 + 0xbca4) = iVar6;
    if (iVar6 != 0) {
      if (&local_58 != (float *)(iVar6 + 0x20)) {
        local_58 = *(float *)(iVar6 + 0x20);
        local_54 = *(float *)(iVar6 + 0x24);
        local_50 = *(float *)(iVar6 + 0x28);
      }
      local_18 = *(int *)(param_1 + 0x6c) % 8 + -4;
      local_54 = (float)local_18 * (float)_DAT_00596fcd +
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
    iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    if (&local_58 != (float *)(iVar6 + 0x20)) {
      local_58 = *(float *)(iVar6 + 0x20);
      local_54 = *(float *)(iVar6 + 0x24);
      local_50 = *(float *)(iVar6 + 0x28);
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
  uVar13 = 0x54b7af;
  atan2((float10)local_88,(float10)local_80);
  fVar8 = SQRT((float10)local_8c * (float10)local_8c + (float10)local_84 * (float10)local_84);
  uVar12 = 0x54b7d9;
  fVar9 = (float10)atan2((float10)local_88);
  fStack_24 = (float)fVar8;
  fStack_28 = (float)-fVar9;
  if ((*(int *)(param_1 + 0xbca4) != 0) && (*(int *)(param_1 + 0xbecc) != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_130,uVar12,uVar13);
    (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x34))
              (*(int *)(param_1 + 0xbca4),auStack_130);
    iVar6 = *(int *)(param_1 + 0xbca4);
    local_f0 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20);
    local_ec = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24);
    fStack_e8 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28);
    if (&local_90 != &local_f0) {
      local_90 = local_f0;
      local_8c = local_ec;
      local_88 = fStack_e8;
    }
    if (((fStack_11c <= local_8c) && (local_8c <= fStack_118)) && (local_178 < (float)_DAT_00596fd5)
       ) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_16c);
      fStack_168 = 1.0;
      iStack_138 = param_1;
      iStack_134 = param_1;
      (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                (*(int *)(param_1 + 0xbca4),local_16c);
      if (0.0 < fStack_168) {
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200();
      }
    }
  }
  fVar8 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
  fVar9 = (float10)fsin((float10)*(float *)(param_1 + 0x34));
  fVar10 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
  fVar11 = (float10)fcos((float10)*(float *)(param_1 + 0x34));
  fStack_38 = (float)-fVar8;
  fStack_3c = (float)(fVar9 * fVar10);
  fStack_44 = (float)(fVar11 * fVar10);
  fStack_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (fStack_24 - *(float *)(param_1 + 0x34));
  *(float *)(param_1 + 0x34) =
       fStack_24 * param_2 * *(float *)(param_1 + 0xbec0) + *(float *)(param_1 + 0x34);
  local_20 = fStack_24;
  fStack_28 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (fStack_28 - *(float *)(param_1 + 0x30));
  fVar5 = (float)_DAT_00596fdd;
  *(float *)(param_1 + 0xbed4) = *(float *)(param_1 + 0xbec4) * fStack_3c;
  *(float *)(param_1 + 0xbed8) = *(float *)(param_1 + 0xbec4) * fStack_38;
  *(float *)(param_1 + 0xbedc) = *(float *)(param_1 + 0xbec4) * fStack_44;
  *(float *)(param_1 + 0x38) = -fStack_24 * fVar5;
  *(float *)(param_1 + 0x20) =
       fStack_3c * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x24) =
       fStack_38 * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) =
       fStack_44 * *(float *)(param_1 + 0xbec4) * param_2 + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x30) =
       fStack_28 * param_2 * *(float *)(param_1 + 0xbec0) + *(float *)(param_1 + 0x30);
  local_cc = *(float *)(param_1 + 0x20) - local_84;
  local_c8 = *(float *)(param_1 + 0x24) - local_80;
  fStack_c4 = *(float *)(param_1 + 0x28) - local_7c;
  local_170 = (local_c8 * (float)_DAT_00596fc5) / param_2 + (float)_DAT_00596fe5;
  if (local_170 < (float)_DAT_00596fed) {
    local_170 = 10.0;
  }
  if ((float)_DAT_00596ff5 < local_170) {
    local_170 = 60.0;
  }
  *(float *)(param_1 + 0xbea8) =
       (local_170 - *(float *)(param_1 + 0xbea8)) * (float)_DAT_00596ffd +
       *(float *)(param_1 + 0xbea8);
  *(float *)(param_1 + 0xbd24) =
       param_2 * *(float *)(param_1 + 0xbea8) * *(float *)(param_1 + 0xbea4) +
       *(float *)(param_1 + 0xbd24);
  local_20 = fStack_28;
  iVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0xbd28);
  local_20 = *(float *)(iVar6 + 0x100);
  if (*(float *)(param_1 + 0xbd24) < (float)(int)local_20) {
    if (*(float *)(param_1 + 0xbd24) < 0.0) {
      local_20 = (float)((int)local_20 + -1);
      *(float *)(param_1 + 0xbd24) = (float)(int)local_20;
    }
  }
  else {
    *(uint *)(param_1 + 0xbd24) = 0;
  }
  if ((*(char *)(param_1 + 0xbee4) != '\0') &&
     (param_2 = *(float *)(param_1 + 0xbf54) - param_2, *(float *)(param_1 + 0xbf54) = param_2,
     param_2 <= 0.0)) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbf50));
    if ((iVar6 == 0) &&
       (iVar6 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                          ((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0,0x40490000), iVar6 != 0)) {
      uVar12 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,param_1 + 0xbee4);
      *(uint *)(param_1 + 0xbf50) = uVar12;
    }
    uVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (*(uint *)(param_1 + 0xbf48),*(uint *)(param_1 + 0xbf4c));
    *(uint *)(param_1 + 0xbf54) = uVar12;
    return;
  }
  return;
}
