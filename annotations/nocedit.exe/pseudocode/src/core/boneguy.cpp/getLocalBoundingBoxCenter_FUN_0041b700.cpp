// Name: core_boneguy.cpp_getLocalBoundingBoxCenter_FUN_0041b700
// Address: 0041b700
// Address Range: [[0041b700, 0041b76d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_0041b700(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

CVector3f * __cdecl core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_0041b700(CVector3f *out,CDemonActor *actor)

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
