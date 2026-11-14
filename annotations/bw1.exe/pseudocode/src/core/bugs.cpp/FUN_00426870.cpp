// Name: core_bugs.cpp_FUN_00426870
// Address: 00426870
// Address Range: [[00426870, 00426eb8]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_FUN_00426870(CBugs *param_1,int *param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_bugs_cpp_FUN_00426870(CBugs *param_1,int *param_2,float param_3,float *param_4)

{
  float fVar1;
  byte bVar2;
  float afStackY_10c0 [1011];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4 [4];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar2 = 0;
  if (*param_2 != 0) {
    return 0;
  }
  local_28 = (float *)(param_2 + 8);
  local_30 = (float *)(param_2 + 2);
  local_e4 = *local_28 - *local_30;
  local_e0 = (float)param_2[9] - (float)param_2[3];
  local_dc = (float)param_2[10] - (float)param_2[4];
  local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
  local_6c = local_e4;
  local_68 = local_e0;
  local_64 = local_dc;
  local_5c[3] = local_e8;
  if (local_e8 < _DAT_005fd228) {
    local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425ee0
                         (param_1,(float)param_2[2],(float)param_2[4]);
    param_2[3] = (int)local_18;
    if (param_4 == (float *)0x0) {
      local_5c[2] = _DAT_005fd228 * _DAT_005d5134 * (float)_DAT_005d5138;
      local_1c = _DAT_005fd228 * _DAT_005d5140 * (float)_DAT_005d5138;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_1c,local_5c[2]);
      param_2[8] = (int)local_18;
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(local_1c,local_5c[2]);
      param_2[10] = (int)local_18;
      local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425ee0
                           (param_1,(float)param_2[8],(float)param_2[10]);
      param_2[9] = (int)local_18;
      local_cc = *local_28 - *local_30;
      local_c8 = local_28[1] - local_30[1];
      local_c4 = local_28[2] - local_30[2];
      local_78 = *local_28 - *local_30;
      local_a4[(uint)bVar2 * 0xfffffffe + 0xc] =
           (float)*(uint *)((int)&stack0xffffff38 + (uint)bVar2 * -8);
      local_a4[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 0xd] =
           (float)*(uint *)((int)&stack0xffffff3c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff1c != local_a4 + 0xb) {
        local_e4 = local_78;
        local_e0 = local_74;
        local_dc = local_70;
      }
      local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
    }
    else {
      if (param_4 != local_28) {
        *local_28 = *param_4;
        local_28[1] = param_4[1];
        local_28[2] = param_4[2];
      }
      local_a4[2] = (float)param_2[8] - (float)param_2[2];
      local_a4[3] = (float)param_2[9] - (float)param_2[3];
      local_94 = (float)param_2[10] - (float)param_2[4];
      local_d8 = (float)param_2[8] - (float)param_2[2];
      (&stack0xffffff2c)[(uint)bVar2 * 0xfffffffe] = local_a4[(uint)bVar2 * 0xfffffffe + 3];
      *(float *)((int)&stack0xffffff30 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           local_a4[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 4];
      if (&stack0xffffff1c != &stack0xffffff28) {
        local_e4 = local_d8;
        local_e0 = local_d4;
        local_dc = local_d0;
      }
      local_e8 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
      local_48 = local_e8;
      if (local_e8 < _DAT_005fd228) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff1c);
  fVar1 = local_e8;
  local_90 = local_84;
  local_a4[(uint)bVar2 * 0xfffffffe + 6] = local_a4[(uint)bVar2 * 0xfffffffe + 9];
  local_a4[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 7] =
       local_a4[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 10];
  if (fVar1 <= 0.0) {
    return 1;
  }
  local_3c = _DAT_005fd230 * param_3;
  if (local_e8 < _DAT_005fd230 * param_3) {
    local_3c = local_e8;
  }
  local_4c = local_3c / local_e8;
  local_e4 = local_e4 * local_4c;
  local_e0 = local_e0 * local_4c;
  local_dc = local_dc * local_4c;
  local_60 = (float)param_2[2] + local_e4;
  local_5c[0] = (float)param_2[3] + local_e0;
  local_5c[1] = (float)param_2[4] + local_dc;
  local_a8 = local_60;
  *(float *)((int)local_a4 + (uint)bVar2 * -8) = local_5c[(uint)bVar2 * 0xfffffffe];
  local_a4[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 1] =
       local_5c[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 1];
  local_2c = (float *)(param_2 + 2);
  local_18 = core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00425ee0(param_1,local_a8,local_a4[1]);
  local_24 = local_18;
  if (local_18 - (float)param_2[3] <= local_e8 * (float)_DAT_005d5148) {
    if (&local_a8 != local_2c) {
      *local_2c = local_a8;
      local_2c[1] = local_a4[0];
      local_2c[2] = local_a4[1];
    }
    if ((float)param_2[3] < local_18) {
      param_2[3] = (int)local_18;
    }
  }
  else {
    if (local_e0 <= 0.0) {
      fVar1 = (float)param_2[3] - local_3c;
      local_90 = 1.5707964;
    }
    else {
      fVar1 = (float)param_2[3] + local_3c;
      local_90 = -1.5707964;
    }
    param_2[3] = (int)fVar1;
  }
  local_b4 = local_90 - (float)param_2[5];
  local_b0 = local_8c - (float)param_2[6];
  local_ac = local_88 - (float)param_2[7];
  local_c0 = local_90 - (float)param_2[5];
  *(uint *)((int)&stack0xffffff44 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff48 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffff54 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_bc);
  local_18 = local_44;
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_c0);
  local_34 = param_3 * _DAT_005d5150 * _DAT_005d5154;
  local_40 = -local_34;
  if (local_44 < local_40) {
    local_44 = local_40;
  }
  if (local_34 < local_44) {
    local_44 = local_34;
  }
  local_20 = -local_34;
  local_38 = local_18;
  if (local_18 < local_20) {
    local_38 = local_20;
  }
  if (local_34 < local_38) {
    local_38 = local_34;
  }
  local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)param_2[6] + local_44);
  param_2[7] = 0;
  param_2[6] = (int)local_18;
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)param_2[5] + local_38);
  param_2[5] = (int)fVar1;
  return 0;
}
