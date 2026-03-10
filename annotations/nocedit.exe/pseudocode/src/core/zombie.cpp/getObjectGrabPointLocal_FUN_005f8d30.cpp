// Name: core_zombie.cpp_getObjectGrabPointLocal_FUN_005f8d30
// Address: 005f8d30
// Address Range: [[005f8d30, 005f8d9d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_zombie_cpp_getObjectGrabPointLocal_FUN_005f8d30(CVector3f *out_point,CDemonActor *actor)

#include "nocturne.h"

CVector3f * __cdecl core_zombie_cpp_getObjectGrabPointLocal_FUN_005f8d30(CVector3f *out_point,CDemonActor *actor)

{
  float fVar1;
  CBoundingBox3D CStack_30;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_30);
  fVar1 = 0.5f;
  out_point->x = (CStack_30.min.x + CStack_30.max.x) * 0.5f;
  out_point->y = fVar1 * (CStack_30.min.y + CStack_30.max.y);
  out_point->z = CStack_30.min.z + (float)0.40000000000000002;
  return out_point;
}
