// Name: core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0
// Address: 004227b0
// Address Range: [[004227b0, 00422c64]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(undefined4 param_1,int *param_2,float param_3,float *param_4)

#include "nocturne.h"

uint core_bugs_cpp_CBugs_updateBugPathfinding_FUN_004227b0(uint param_1,int *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
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
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*param_2 != 0) {
    return 0;
  }
  pfVar1 = (float *)(param_2 + 8);
  local_68 = *pfVar1 - (float)param_2[2];
  local_64 = (float)param_2[9] - (float)param_2[3];
  local_60 = (float)param_2[10] - (float)param_2[4];
  local_90 = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
  local_44 = local_90;
  if (local_90 < 0.5f) {
    local_14 = (float)core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00
                                (param_1,param_2[2],param_2[4]);
    param_2[3] = (int)local_14;
    if (param_4 == (float *)0x0) {
      local_40 = 0.5f * 12.0f * (float)0.5;
      local_18 = 0.5f * 1.6018581507970269e-314._0_4_ * (float)0.5;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,local_40);
      param_2[8] = (int)local_14;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(local_18,local_40);
      param_2[10] = (int)local_14;
      local_14 = (float)core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00
                                  (param_1,param_2[8],param_2[10]);
      param_2[9] = (int)local_14;
      local_50 = *pfVar1 - (float)param_2[2];
      local_4c = (float)param_2[9] - (float)param_2[3];
      local_48 = (float)param_2[10] - (float)param_2[4];
      if (&local_68 != &local_50) {
        local_68 = local_50;
        local_64 = local_4c;
        local_60 = local_48;
      }
      local_90 = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
    }
    else {
      if (pfVar1 != param_4) {
        *pfVar1 = *param_4;
        param_2[9] = (int)param_4[1];
        param_2[10] = (int)param_4[2];
      }
      local_74 = (float)param_2[8] - (float)param_2[2];
      local_70 = (float)param_2[9] - (float)param_2[3];
      local_6c = (float)param_2[10] - (float)param_2[4];
      if (&local_68 != &local_74) {
        local_68 = local_74;
        local_64 = local_70;
        local_60 = local_6c;
      }
      local_90 = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
      local_3c = local_90;
      if (local_90 < 0.5f) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_80,&local_68);
  if (local_90 <= 0.0) {
    return 1;
  }
  local_1c = 3.0f * param_3;
  if (local_90 < local_1c) {
    local_1c = local_90;
  }
  local_2c = local_1c / local_90;
  local_68 = local_68 * local_2c;
  local_64 = local_64 * local_2c;
  local_60 = local_60 * local_2c;
  pfVar1 = (float *)(param_2 + 2);
  local_8c = *pfVar1 + local_68;
  local_88 = (float)param_2[3] + local_64;
  local_84 = (float)param_2[4] + local_60;
  local_30 = (float)core_bugs_cpp_CBugs_sampleGroundHeight_FUN_00421f00(param_1,local_8c,local_84);
  if (local_30 - (float)param_2[3] <= local_90 * (float)0.40000000000000002) {
    if (pfVar1 != &local_8c) {
      *pfVar1 = local_8c;
      param_2[3] = (int)local_88;
      param_2[4] = (int)local_84;
    }
    if ((float)param_2[3] < local_30) {
      param_2[3] = (int)local_30;
    }
  }
  else if (local_64 <= 0.0) {
    param_2[3] = (int)((float)param_2[3] - local_1c);
    local_80 = 1.5707964;
  }
  else {
    param_2[3] = (int)((float)param_2[3] + local_1c);
    local_80 = -1.5707964;
  }
  local_5c = local_80 - (float)param_2[5];
  local_58 = local_7c - (float)param_2[6];
  local_54 = local_78 - (float)param_2[7];
  local_14 = local_30;
  local_24 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_58);
  local_14 = local_24;
  local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_5c);
  local_20 = param_3 * (float)3.1415926535000001 * (float)4;
  local_38 = -local_20;
  if (local_24 < local_38) {
    local_24 = local_38;
  }
  if (local_20 < local_24) {
    local_24 = local_20;
  }
  local_34 = -local_20;
  local_28 = local_14;
  if (local_14 < local_34) {
    local_28 = local_34;
  }
  if (local_20 < local_28) {
    local_28 = local_20;
  }
  local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((float)param_2[6] + local_24);
  param_2[7] = 0;
  param_2[6] = (int)local_14;
  iVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00((float)param_2[5] + local_28);
  param_2[5] = iVar2;
  return 0;
}
