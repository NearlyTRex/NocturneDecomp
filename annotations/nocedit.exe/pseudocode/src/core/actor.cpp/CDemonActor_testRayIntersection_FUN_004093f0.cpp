// Name: core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0
// Address: 004093f0
// Address Range: [[004093f0, 0040946a]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_hit_normal, void * unused)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_testRayIntersection_FUN_004093f0
          (CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_hit_normal,void *unused)

{
  int bbox_type;
  float fVar1;
  CVector3f *in_stack_00000018;
  CBoundingBox3D *in_stack_00000020;
  SCollisionInfo SStack_2c;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffffcc);
  bbox_type = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)&stack0xffffffcc);
  if (bbox_type == 0) {
    return 0x40000000;
  }
  fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                    (this_ptr,out_hit_normal,unused,in_stack_00000018,&SStack_2c,bbox_type,
                     in_stack_00000020);
  return (int)fVar1;
}
