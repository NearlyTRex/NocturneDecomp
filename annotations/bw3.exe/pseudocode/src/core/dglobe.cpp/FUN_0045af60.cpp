// Name: core_dglobe.cpp_FUN_0045af60
// Address: 0045af60
// Address Range: [[0045af60, 0045b069]]
// Convention: __cdecl
// Signature: int __cdecl core_dglobe_cpp_FUN_0045af60(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

int __cdecl core_dglobe_cpp_FUN_0045af60(CDemonGlobe *this_ptr,CVector3f *reference_position,CMatrix3x3f *rotation_matrix,CVector3f *aabb_min,CVector3f *aabb_max)

{
  byte bVar1;
  float afStackY_1028 [1016];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  local_28 = *(float *)(this_ptr + 0x24) - *(float *)reference_position;
  local_24 = *(float *)(this_ptr + 0x28) - *(float *)&reference_position->field_0x4;
  local_20 = *(float *)(this_ptr + 0x2c) - *(float *)&reference_position->field_0x8;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  core_dirmat_cpp_FUN_0045b870(rotation_matrix,&local_1c);
  local_40 = local_34;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&local_1c != &stack0xffffffc0) {
    local_1c = local_40;
    local_18 = local_3c;
    local_14 = local_38;
  }
  if ((((*(float *)aabb_min <= local_1c + *(float *)(this_ptr + 0x30)) &&
       (*(float *)&aabb_min->field_0x4 <= local_18 + *(float *)(this_ptr + 0x30))) &&
      (*(float *)&aabb_min->field_0x8 <= local_14 + *(float *)(this_ptr + 0x30))) &&
     (((local_1c - *(float *)(this_ptr + 0x30) <= *(float *)aabb_max &&
       (local_18 - *(float *)(this_ptr + 0x30) <= *(float *)&aabb_max->field_0x4)) &&
      (local_14 - *(float *)(this_ptr + 0x30) <= *(float *)&aabb_max->field_0x8)))) {
    return 1;
  }
  return 0;
}
