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
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000020;
  CVector3f *in_stack_00000024;
  CVector3f *in_stack_00000028;
  CBoundingBox3D *in_stack_00000030;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)&stack0xffffffcc);
  bbox_type = (*this_ptr->vtable->hasCollision)(this_ptr,(SCollisionInfo *)&stack0xffffffd0);
  if (bbox_type == 0) {
    return 0x40000000;
  }
  fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470
                    (this_ptr,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                     (SCollisionInfo *)&stack0xffffffe4,bbox_type,in_stack_00000030);
  return (int)fVar1;
}
