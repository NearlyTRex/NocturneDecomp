// Name: core_prye.cpp_FUN_0051c100
// Address: 0051c100
// Address Range: [[0051c100, 0051c1bf]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_0051c100(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_0051c100(int param_1)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1048 [1016];
  int bone_index;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  CVector3f local_3c;
  float local_30;
  float local_2c [4];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
            ((CDeformableModelInstance *)(param_1 + 0x158),_DAT_01ed3714,&local_48);
  local_30 = local_48.x;
  local_2c[(uint)bVar1 * -2] = *(float *)((int)&local_48 + (uint)bVar1 * -8 + 4);
  bone_index = _DAT_01ed3710;
  local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_48 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
            ((CDeformableModelInstance *)(param_1 + 0x158),bone_index,&local_3c);
  local_60 = local_3c.x;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8) =
       *(uint *)((int)&local_3c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&local_3c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  local_54 = local_60 + local_30;
  local_50 = local_5c + local_2c[0];
  local_4c = local_58 + local_2c[1];
  local_2c[2] = local_60 + local_30;
  local_2c[(uint)bVar1 * -2 + 3] = *(float *)((int)&stack0xffffffb0 + (uint)bVar1 * -8);
  local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)((int)&stack0xffffffb4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  local_18 = local_2c[2] * _DAT_005cd317;
  local_14 = local_2c[3] * _DAT_005cd317;
  local_10 = local_1c * _DAT_005cd317;
  *unaff_ESI = local_2c[2] * _DAT_005cd317;
  unaff_ESI[(uint)bVar1 * -2 + 1] = local_2c[(uint)bVar1 * -2 + 6];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  return;
}
