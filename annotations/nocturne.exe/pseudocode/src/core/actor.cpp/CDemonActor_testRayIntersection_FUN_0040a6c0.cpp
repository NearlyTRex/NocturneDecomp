// Name: core_actor.cpp_CDemonActor_testRayIntersection_FUN_0040a6c0
// Address: 0040a6c0
// Address Range: [[0040a6c0, 0040a73a]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_0040a6c0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,int ray_type,CBoundingBox3D *clip_bounds)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_testRayIntersection_FUN_0040a6c0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,SActorRayHit *out_hit,int ray_type,CBoundingBox3D *clip_bounds)

{
  ECollisionType bbox_type;
  float fVar1;
  SCollisionInfo SStack_34;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_34);
  SStack_34.ray_query.ray_type = ray_type;
  bbox_type = (*((this_ptr->vtable)._ub)->getCollisionType)(this_ptr,&SStack_34);
  if (bbox_type == COLLISION_TYPE_NONE) {
    return 2.0;
  }
  fVar1 = core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                    (this_ptr,ray_origin,ray_direction,out_hit,&SStack_34,bbox_type,clip_bounds);
  return fVar1;
}
