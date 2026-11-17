// Name: core_mobster.cpp_getObjectGrabPointLocal_FUN_004da000
// Address: 004da000
// Address Range: [[004da000, 004da06d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointLocal_FUN_004da000(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointLocal_FUN_004da000(CVector3f *out,CDemonActor *actor)

{
  float fVar1;
  CBoundingBox3D CStack_30;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_30);
  fVar1 = 0.5f;
  out->x = (CStack_30.min.x + CStack_30.max.x) * 0.5f;
  out->y = fVar1 * (CStack_30.min.y + CStack_30.max.y);
  out->z = CStack_30.min.z + (float)0.40000000000000002;
  return out;
}
