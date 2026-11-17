// Name: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0053cff0
// Address: 0053cff0
// Address Range: [[0053cff0, 0053d26f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0053cff0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0053cff0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float afStackY_10a4 [1012];
  CDemonSet *this_ptr_00;
  CVector3f *ray_origin;
  CVector3f *ray_target;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58 [4];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  local_a4.x = start_pos->x;
  local_a4.y = start_pos->y;
  local_a4.z = start_pos->z;
  iVar5 = 0;
  local_1c = 0.0;
  local_38 = direction->x;
  local_34 = direction->y;
  local_30 = direction->z;
  local_18 = 0.0;
  local_28 = 0;
  local_2c = -0.16;
  do {
    fVar4 = local_a4.z;
    fVar3 = local_a4.y;
    fVar2 = local_a4.x;
    fVar1 = local_30 * 0.1f;
    local_20 = 0.1;
    local_5c = local_18;
    local_58[0] = local_2c;
    local_94[2] = local_38 * 0.1f;
    local_58[1] = (float)local_28;
    local_94[3] = local_34 * 0.1f;
    local_44 = local_18;
    local_58[(uint)bVar6 * -2 + 6] = local_58[(uint)bVar6 * -2];
    local_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         local_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    ray_target = &local_68;
    local_84 = fVar1;
    local_58[2] = local_94[2];
    local_58[(uint)bVar6 * -2 + 3] = local_94[(uint)bVar6 * -2 + 3];
    local_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         local_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    ray_origin = &local_a4;
    local_b0 = fVar2 + local_58[2];
    local_ac = fVar3 + local_58[3];
    local_a8 = fVar4 + local_48;
    local_74 = fVar2 + local_58[2];
    local_94[(uint)bVar6 * -2 + 9] = *(float *)((int)&stack0xffffff54 + (uint)bVar6 * -8);
    local_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         *(float *)((int)&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    local_98 = local_74 + local_44;
    local_94[0] = local_70 + local_40;
    local_94[1] = local_6c + local_3c;
    local_68.x = local_74 + local_44;
    *(float *)((int)&local_68 + (uint)bVar6 * -8 + 4) = local_94[(uint)bVar6 * -2];
    this_ptr_00 = this_ptr;
    *(float *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         local_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    local_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_0053ccc0(this_ptr_00,ray_origin,ray_target);
    if ((0.0 <= local_14) && (local_14 <= 1.0)) {
      return local_14 * 0.1f + local_1c;
    }
    if (&local_a4 != &local_68) {
      local_a4.x = local_68.x;
      local_a4.y = local_68.y;
      local_a4.z = local_68.z;
    }
    fVar1 = local_20 * 0.0;
    iVar5 = iVar5 + 1;
    local_80 = fVar1;
    local_78 = fVar1;
    local_7c = local_20 * -32.0f;
    *(float *)((int)&stack0xffffff48 + (uint)bVar6 * -8) = local_94[(uint)bVar6 * -2 + 6];
    *(float *)((int)&stack0xffffff4c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    local_1c = local_1c + local_20;
    local_38 = local_38 + fVar1;
    local_34 = local_34 + local_b8;
    local_30 = local_30 + local_b4;
  } while (iVar5 < 100);
  return -1.0;
}
