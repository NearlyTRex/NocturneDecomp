// Name: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
// Address: 004090c0
// Address Range: [[004090c0, 00409148]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor *this_ptr,SCollisionReturnInfo *collision_info,float tolerance)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SCollisionInfo local_30;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_30);
  local_30.ray_type = 0;
  iVar3 = (*((this_ptr->vtable)._ub)->hasCollision)(this_ptr,&local_30);
  if ((((iVar3 == 2) && (local_30.cylinder_bottom_y - tolerance <= (collision_info->position).y)) &&
      ((collision_info->position).y <= local_30.cylinder_top_y + tolerance)) &&
     (fVar1 = (collision_info->position).z, fVar2 = (collision_info->position).x,
     fVar2 * fVar2 + fVar1 * fVar1 <=
     (local_30.cylinder_radius + tolerance) * (local_30.cylinder_radius + tolerance))) {
    return 1;
  }
  return 0;
}
