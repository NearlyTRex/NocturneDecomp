// Name: core_bugs.cpp_FUN_00426420
// Address: 00426420
// Address Range: [[00426420, 004264fb] [004265af, 004268d4]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00426420()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_00426420(uint param_1, uint param_2,
   uint param_3, uint param_4) */

uint core_bugs_cpp_FUN_00426420(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int *in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  float in_stack_ffffff80;
  float fVar4;
  float fVar5;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_48;
  CVector3f local_44 [3];
  float local_1c;
  float local_18;
  float local_14;
  
  if (*in_stack_00000008 != 0) {
    return 0;
  }
  pfVar1 = (float *)(in_stack_00000008 + 8);
  local_68 = *pfVar1 - (float)in_stack_00000008[2];
  local_64 = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
  local_60 = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
  local_44[0].x = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
  if (local_44[0].x < _DAT_0065b5c8) {
    iVar2 = core_bugs_cpp_FUN_00425b70();
    in_stack_00000008[3] = iVar2;
    if (in_stack_00000010 == (float *)0x0) {
      local_44[0].y = _DAT_0065b5c8 * 12f * (float)0.5;
      local_18 = _DAT_0065b5c8 * 1.6018581507970269e-314._0_4_ * (float)0.5;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,local_44[0].y);
      in_stack_00000008[8] = (int)fVar3;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_14,local_44[0].z);
      in_stack_00000008[10] = (int)fVar3;
      unaff_ESI = (float)core_bugs_cpp_FUN_00425b70();
      in_stack_00000008[9] = (int)unaff_ESI;
      local_44[0].x = *pfVar1 - (float)in_stack_00000008[2];
      local_44[0].y = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
      local_44[0].z = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
      if (&local_5c != local_44) {
        local_5c.x = local_44[0].x;
        local_5c.y = local_44[0].y;
        local_5c.z = local_44[0].z;
      }
    }
    else {
      if (pfVar1 != in_stack_00000010) {
        *pfVar1 = *in_stack_00000010;
        in_stack_00000008[9] = (int)in_stack_00000010[1];
        in_stack_00000008[10] = (int)in_stack_00000010[2];
      }
      local_70 = (float)in_stack_00000008[9] - (float)in_stack_00000008[3];
      local_6c = (float)in_stack_00000008[10] - (float)in_stack_00000008[4];
      if (&local_68 != (float *)&stack0xffffff8c) {
        local_68 = (float)in_stack_00000008[8] - (float)in_stack_00000008[2];
        local_64 = local_70;
        local_60 = local_6c;
      }
      local_44[0].z = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
      if (local_44[0].z < _DAT_0065b5c8) {
        return 1;
      }
    }
  }
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&stack0xffffff8c,&local_5c);
  if (in_stack_ffffff80 <= 0.0) {
    return 1;
  }
  local_1c = _DAT_0065b5d0 * in_stack_0000000c;
  if (in_stack_ffffff80 < _DAT_0065b5d0 * in_stack_0000000c) {
    local_1c = in_stack_ffffff80;
  }
  local_1c = local_1c / in_stack_ffffff80;
  local_5c.y = local_5c.y * local_1c;
  local_5c.z = local_5c.z * local_1c;
  local_50 = local_50 * local_1c;
  pfVar1 = (float *)(in_stack_00000008 + 2);
  fVar3 = *pfVar1 + local_5c.y;
  fVar4 = (float)in_stack_00000008[3] + local_5c.z;
  fVar5 = (float)in_stack_00000008[4] + local_50;
  local_1c = (float)core_bugs_cpp_FUN_00425b70();
  if (local_1c - (float)in_stack_00000008[3] <= fVar3 * (float)0.40000000000000002) {
    if (pfVar1 != (float *)&stack0xffffff88) {
      *pfVar1 = fVar4;
      in_stack_00000008[3] = (int)fVar5;
      in_stack_00000008[4] = (int)local_70;
    }
    if ((float)in_stack_00000008[3] < local_1c) {
      in_stack_00000008[3] = (int)local_1c;
    }
  }
  else if (local_50 <= 0.0) {
    in_stack_00000008[3] = (int)((float)in_stack_00000008[3] - unaff_ESI);
    local_6c = 1.5707964;
  }
  else {
    in_stack_00000008[3] = (int)((float)in_stack_00000008[3] + unaff_ESI);
    local_6c = -1.5707964;
  }
  local_48 = local_6c - (float)in_stack_00000008[5];
  local_44[0].x = local_68 - (float)in_stack_00000008[6];
  local_44[0].y = local_64 - (float)in_stack_00000008[7];
  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_44[0].x);
  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_44[0].x);
  local_18 = in_stack_0000000c * (float)3.1415926535000001 * (float)4;
  local_1c = -local_18;
  if (unaff_ESI < local_1c) {
    unaff_ESI = local_1c;
  }
  if (local_18 < unaff_ESI) {
    unaff_ESI = local_18;
  }
  local_18 = -local_18;
  fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_00000008[6] + unaff_ESI);
  in_stack_00000008[7] = 0;
  in_stack_00000008[6] = (int)fVar3;
  fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_00000008[5] + unaff_ESI);
  in_stack_00000008[5] = (int)fVar3;
  return 0;
}
