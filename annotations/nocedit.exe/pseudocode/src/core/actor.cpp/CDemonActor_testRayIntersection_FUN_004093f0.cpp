// Name: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
// Address: 004093f0
// Address Range: [[004093f0, 0040946a]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,void *unused)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,void *unused)

{
  int bbox_type;
  float fVar1;
  CBoundingBox3D *in_stack_00000018;
  SCollisionInfo local_34;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_34);
  local_34.ray_type = (int)unused;
  bbox_type = (*((this_ptr->vtable)._ub)->hasCollision)(this_ptr,&local_34);
  if (bbox_type == 0) {
    return 0x40000000;
  }
  fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                    (this_ptr,ray_origin,ray_direction,out_hit_normal,&local_34,bbox_type,
                     in_stack_00000018);
  return (int)fVar1;
}
