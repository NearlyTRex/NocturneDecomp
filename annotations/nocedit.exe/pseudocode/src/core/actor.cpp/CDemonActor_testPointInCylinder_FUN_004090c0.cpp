// Name: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
// Address: 004090c0
// Address Range: [[004090c0, 00409148]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor * this_ptr, SCollisionReturnInfo * collision_result, float tolerance_radius)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
          (CDemonActor *this_ptr,SCollisionReturnInfo *collision_result,float tolerance_radius)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float in_stack_00000014;
  SCollisionInfo local_30;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_30);
  local_30.ray_type = 0;
  iVar3 = (*this_ptr->vtable->hasCollision)(this_ptr,&local_30);
  if ((((iVar3 == 2) &&
       (local_30.cylinder_radius - in_stack_00000014 <= (collision_result->position).y)) &&
      ((collision_result->position).y <= (float)local_30.result_ptr + in_stack_00000014)) &&
     (fVar1 = (collision_result->position).z, fVar2 = (collision_result->position).x,
     fVar2 * fVar2 + fVar1 * fVar1 <=
     ((float)local_30.field9_0x24 + in_stack_00000014) *
     ((float)local_30.field9_0x24 + in_stack_00000014))) {
    return 1;
  }
  return 0;
}
