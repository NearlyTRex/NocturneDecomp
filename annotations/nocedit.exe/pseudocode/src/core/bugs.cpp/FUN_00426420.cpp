// Name: core_bugs.cpp_FUN_00426420
// Address: 00426420
// Address Range: [[00426420, 004264fb] [004265af, 004268d4]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00426420()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00426420(uint param_1, uint param_2,
   uint param_3, uint param_4) */

uint
core_bugs_cpp_FUN_00426420
          (uint param_1,uint param_2,float unaff_EBX,uint param_4,
          uint param_5,int *param_6,float param_7,float *param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_ffffff84;
  float fVar4;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_44;
  CVector3f local_40 [3];
  float local_18;
  float local_14;
  
  if (*param_6 != 0) {
    return 0;
  }
  pfVar1 = (float *)(param_6 + 8);
  local_68 = *pfVar1 - (float)param_6[2];
  local_64 = (float)param_6[9] - (float)param_6[3];
  local_60 = (float)param_6[10] - (float)param_6[4];
  local_44 = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
  if (local_44 < _DAT_0065b5c8) {
    fVar2 = (float)core_bugs_cpp_FUN_00425b70();
    param_6[3] = (int)fVar2;
    if (param_8 == (float *)0x0) {
      local_40[0].y = _DAT_0065b5c8 * 12f * (float)0.5;
      local_14 = _DAT_0065b5c8 * 1.6018581507970269e-314._0_4_ * (float)0.5;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_14,local_40[0].y);
      param_6[8] = (int)fVar3;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar2,local_40[0].z);
      param_6[10] = (int)fVar2;
      unaff_EBX = (float)core_bugs_cpp_FUN_00425b70();
      param_6[9] = (int)unaff_EBX;
      local_40[0].x = *pfVar1 - (float)param_6[2];
      local_40[0].y = (float)param_6[9] - (float)param_6[3];
      local_40[0].z = (float)param_6[10] - (float)param_6[4];
      if (&local_58 != local_40) {
        local_58.x = local_40[0].x;
        local_58.y = local_40[0].y;
        local_58.z = local_40[0].z;
      }
    }
    else {
      if (pfVar1 != param_8) {
        *pfVar1 = *param_8;
        param_6[9] = (int)param_8[1];
        param_6[10] = (int)param_8[2];
      }
      local_6c = (float)param_6[9] - (float)param_6[3];
      local_68 = (float)param_6[10] - (float)param_6[4];
      if (&local_64 != (float *)&stack0xffffff90) {
        local_64 = (float)param_6[8] - (float)param_6[2];
        local_60 = local_6c;
        local_5c = local_68;
      }
      local_40[0].z = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
      if (local_40[0].z < _DAT_0065b5c8) {
        return 1;
      }
    }
  }
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&stack0xffffff90,&local_58);
  if (in_stack_ffffff84 <= 0.0) {
    return 1;
  }
  local_18 = _DAT_0065b5d0 * param_7;
  if (in_stack_ffffff84 < _DAT_0065b5d0 * param_7) {
    local_18 = in_stack_ffffff84;
  }
  local_18 = local_18 / in_stack_ffffff84;
  local_58.y = local_58.y * local_18;
  local_58.z = local_58.z * local_18;
  local_4c = local_4c * local_18;
  pfVar1 = (float *)(param_6 + 2);
  fVar2 = *pfVar1 + local_58.y;
  fVar3 = (float)param_6[3] + local_58.z;
  fVar4 = (float)param_6[4] + local_4c;
  local_18 = (float)core_bugs_cpp_FUN_00425b70();
  if (local_18 - (float)param_6[3] <= fVar2 * (float)0.40000000000000002) {
    if (pfVar1 != (float *)&stack0xffffff8c) {
      *pfVar1 = fVar3;
      param_6[3] = (int)fVar4;
      param_6[4] = (int)local_6c;
    }
    if ((float)param_6[3] < local_18) {
      param_6[3] = (int)local_18;
    }
  }
  else if (local_4c <= 0.0) {
    param_6[3] = (int)((float)param_6[3] - unaff_EBX);
    local_68 = 1.5707964;
  }
  else {
    param_6[3] = (int)((float)param_6[3] + unaff_EBX);
    local_68 = -1.5707964;
  }
  local_44 = local_68 - (float)param_6[5];
  local_40[0].x = local_64 - (float)param_6[6];
  local_40[0].y = local_60 - (float)param_6[7];
  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40[0].x);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40[0].x);
  local_14 = fVar2 * (float)3.1415926535000001 * (float)4;
  local_18 = -local_14;
  if (unaff_EBX < local_18) {
    unaff_EBX = local_18;
  }
  if (local_14 < unaff_EBX) {
    unaff_EBX = local_14;
  }
  local_14 = -local_14;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)param_6[6] + unaff_EBX);
  param_6[7] = 0;
  param_6[6] = (int)fVar2;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)param_6[5] + unaff_EBX);
  param_6[5] = (int)fVar2;
  return 0;
}
