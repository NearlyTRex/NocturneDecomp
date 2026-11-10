// Name: core_fire.cpp_FUN_00497290
// Address: 00497290
// Address Range: [[00497290, 0049753a]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00497290(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00497290(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1070 [967];
  byte local_e8 [48];
  CMatrix3x4f local_b8;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c [4];
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
  float afStack_30 [5];
  float local_1c;
  
  bVar5 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  local_4c = *param_3 * _DAT_005c0504;
  local_48 = param_3[1] * _DAT_005c0504;
  local_44 = param_3[2] * _DAT_005c0504;
  local_84[2] = *param_1 + local_4c;
  local_84[3] = param_1[1] + local_48;
  local_74 = param_1[2] + local_44;
  if (param_1 != local_84 + 2) {
    *param_1 = local_84[2];
    param_1[1] = local_84[3];
    param_1[2] = local_74;
  }
  fVar6 = (float10)param_3[1];
  local_58 = local_84[2];
  local_54 = local_84[3];
  local_50 = local_74;
  local_40 = local_4c;
  local_3c = local_48;
  local_38 = local_44;
  atan2();
  param_1[7] = 0.0;
  param_1[5] = (float)-fVar6;
  fVar6 = (float10)*param_3;
  atan2();
  param_1[6] = (float)fVar6;
  fVar1 = (float)core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
  param_1[3] = 1.4013e-45;
  param_1[8] = fVar1;
  param_1[0xf] = param_5;
  param_1[4] = param_4;
  if (param_4 != 0.0) {
    core_xform_cpp_FUN_00583940(local_e8,param_1,param_1 + 5);
    core_xform_cpp_FUN_00583800
              (&local_b8,(CVector3f *)((int)param_1[4] + 0x20),(CVector3f *)((int)param_1[4] + 0x30)
              );
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(local_e8,&local_b8);
    puVar3 = (uint *)&stack0xfffffeb8;
    puVar4 = (uint *)&stack0xfffffee8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_FUN_00584450(&stack0xfffffee8);
    local_6c[2] = local_34;
    local_6c[(uint)bVar5 * -2 + 3] = afStack_30[(uint)bVar5 * -2];
    local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (param_1 + 9 != local_6c + 2) {
      param_1[9] = local_6c[2];
      param_1[10] = local_6c[3];
      param_1[0xb] = local_5c;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(&stack0xfffffee8);
    local_70 = local_1c;
    local_6c[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 6];
    local_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    if (param_1 + 5 != &local_70) {
      param_1[5] = local_70;
      param_1[6] = local_6c[0];
      param_1[7] = local_6c[1];
    }
    core_actor_cpp_FUN_00408b40(param_1[4],param_3);
    local_88 = afStack_30[2];
    local_84[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 3];
    local_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    if (param_1 + 0xc != &local_88) {
      param_1[0xc] = local_88;
      param_1[0xd] = local_84[0];
      param_1[0xe] = local_84[1];
      return;
    }
  }
  return;
}
