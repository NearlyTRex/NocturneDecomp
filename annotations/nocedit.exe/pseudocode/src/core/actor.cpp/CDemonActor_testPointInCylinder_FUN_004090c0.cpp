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
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  float in_stack_00000024;
  SCollisionInfo SStack_2c;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffffd0);
  SStack_2c.ray_type = 0;
  iVar3 = (**(code **)((int)collision_result[0xc].position.y + 0x34))
                    ((CDemonActor *)collision_result,&SStack_2c);
  if ((((iVar3 == 2) && (unaff_EBX - in_stack_00000024 <= (collision_result->position).y)) &&
      ((collision_result->position).y <= unaff_retaddr + in_stack_00000024)) &&
     (fVar1 = (collision_result->position).z, fVar2 = (collision_result->position).x,
     fVar2 * fVar2 + fVar1 * fVar1 <=
     ((float)this_ptr + in_stack_00000024) * ((float)this_ptr + in_stack_00000024))) {
    return 1;
  }
  return 0;
}
