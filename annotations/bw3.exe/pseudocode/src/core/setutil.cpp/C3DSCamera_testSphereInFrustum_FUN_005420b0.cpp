// Name: core_setutil.cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0
// Address: 005420b0
// Address Range: [[005420b0, 00542197]]
// Convention: __cdecl
// Signature: int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

#include "nocturne.h"

int __cdecl core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0(C3DSCamera *this_ptr,CVector3f *world_position,float radius)

{
  byte bVar1;
  float afStackY_1018 [1013];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  bVar1 = 0;
  local_3c = world_position->x - (this_ptr->position).x;
  local_38 = world_position->y - (this_ptr->position).y;
  local_34 = world_position->z - (this_ptr->position).z;
  local_18 = local_3c;
  fStack_14 = local_38;
  fStack_10 = local_34;
  core_dirmat_cpp_FUN_0045b870(&this_ptr->rotation_matrix,&local_18);
  local_30 = local_24;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (((((this_ptr->box).min.x <= local_30 + radius) && ((this_ptr->box).min.y <= local_2c + radius)
       ) && ((this_ptr->box).min.z <= local_28 + radius)) &&
     (((local_30 - radius <= (this_ptr->box).max.x && (local_2c - radius <= (this_ptr->box).max.y))
      && (local_28 - radius <= (this_ptr->box).max.z)))) {
    return 1;
  }
  return 0;
}
