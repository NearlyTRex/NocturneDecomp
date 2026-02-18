// Name: core_bugs.cpp_CBugs_FUN_00426420
// Address: 00426420
// Address Range: [[00426420, 004264fb] [004265af, 004268d4]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_FUN_00426420(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_FUN_00426420(CBugs *this_ptr)

{
  float *pfVar1;
  float fVar2;
  int *in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
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
  
  if (*in_stack_00000008 != 0) {
    return 0;
  }
  pfVar1 = (float *)(in_stack_00000008 + 8);
  local_68.x = *pfVar1 - (float)in_stack_00000008[2];
  local_68.y = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
  local_68.z = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
  local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
  local_44 = local_90;
  if (local_90 < 0.5f) {
    local_14 = (float)core_bugs_cpp_CBugs_FUN_00425b70(this_ptr);
    in_stack_00000008[3] = (int)local_14;
    if (in_stack_00000010 == (float *)0x0) {
      local_40 = 0.5f * 12.0f * (float)0.5;
      local_18 = 0.5f * 1.6018581507970269e-314._0_4_ * (float)0.5;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,local_40);
      in_stack_00000008[8] = (int)local_14;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,local_40);
      in_stack_00000008[10] = (int)local_14;
      local_14 = (float)core_bugs_cpp_CBugs_FUN_00425b70(this_ptr);
      in_stack_00000008[9] = (int)local_14;
      local_50.x = *pfVar1 - (float)in_stack_00000008[2];
      local_50.y = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
      local_50.z = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
      if (&local_68 != &local_50) {
        local_68.x = local_50.x;
        local_68.y = local_50.y;
        local_68.z = local_50.z;
      }
      local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
    }
    else {
      if (pfVar1 != in_stack_00000010) {
        *pfVar1 = *in_stack_00000010;
        in_stack_00000008[9] = (int)in_stack_00000010[1];
        in_stack_00000008[10] = (int)in_stack_00000010[2];
      }
      local_74.x = (float)in_stack_00000008[8] - (float)in_stack_00000008[2];
      local_74.y = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
      local_74.z = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
      if (&local_68 != &local_74) {
        local_68.x = local_74.x;
        local_68.y = local_74.y;
        local_68.z = local_74.z;
      }
      local_90 = SQRT(local_68.z * local_68.z + local_68.x * local_68.x + local_68.y * local_68.y);
      local_3c = local_90;
      if (local_90 < 0.5f) {
        return 1;
      }
    }
  }
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_68);
  if (local_90 <= 0.0) {
    return 1;
  }
  local_1c = 3.0f * in_stack_0000000c;
  if (local_90 < local_1c) {
    local_1c = local_90;
  }
  local_2c = local_1c / local_90;
  local_68.x = local_68.x * local_2c;
  local_68.y = local_68.y * local_2c;
  local_68.z = local_68.z * local_2c;
  pfVar1 = (float *)(in_stack_00000008 + 2);
  local_8c = *pfVar1 + local_68.x;
  local_88 = (float)in_stack_00000008[3] + local_68.y;
  local_84 = (float)in_stack_00000008[4] + local_68.z;
  local_30 = (float)core_bugs_cpp_CBugs_FUN_00425b70(this_ptr);
  if (local_30 - (float)in_stack_00000008[3] <= local_90 * (float)0.40000000000000002) {
    if (pfVar1 != &local_8c) {
      *pfVar1 = local_8c;
      in_stack_00000008[3] = (int)local_88;
      in_stack_00000008[4] = (int)local_84;
    }
    if ((float)in_stack_00000008[3] < local_30) {
      in_stack_00000008[3] = (int)local_30;
    }
  }
  else if (local_68.y <= 0.0) {
    in_stack_00000008[3] = (int)((float)in_stack_00000008[3] - local_1c);
    local_80.x = 1.5707964;
  }
  else {
    in_stack_00000008[3] = (int)((float)in_stack_00000008[3] + local_1c);
    local_80.x = -1.5707964;
  }
  local_5c = local_80.x - (float)in_stack_00000008[5];
  local_58 = local_80.y - (float)in_stack_00000008[6];
  local_54 = local_80.z - (float)in_stack_00000008[7];
  local_14 = local_30;
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_58);
  local_14 = local_24;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_5c);
  local_20 = in_stack_0000000c * (float)3.1415926535000001 * (float)4;
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
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_00000008[6] + local_24);
  in_stack_00000008[7] = 0;
  in_stack_00000008[6] = (int)local_14;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_00000008[5] + local_28);
  in_stack_00000008[5] = (int)fVar2;
  return 0;
}
