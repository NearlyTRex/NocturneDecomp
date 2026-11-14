// Name: core_doc.cpp_FUN_00453cc0
// Address: 00453cc0
// Address Range: [[00453cc0, 00453d7f]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00453cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00453cc0(int param_1)

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
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            ((CDeformableModelInstance *)(param_1 + 0x2b4),_DAT_01b4d290,&local_48);
  local_30 = local_48.x;
  local_2c[(uint)bVar1 * -2] = *(float *)((int)&local_48 + (uint)bVar1 * -8 + 4);
  bone_index = _DAT_01b4d28c;
  local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_48 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
            ((CDeformableModelInstance *)(param_1 + 0x2b4),bone_index,&local_3c);
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
  local_18 = local_2c[2] * _DAT_005d013f;
  local_14 = local_2c[3] * _DAT_005d013f;
  local_10 = local_1c * _DAT_005d013f;
  *unaff_ESI = local_2c[2] * _DAT_005d013f;
  unaff_ESI[(uint)bVar1 * -2 + 1] = local_2c[(uint)bVar1 * -2 + 6];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       local_2c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  return;
}
