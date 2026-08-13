// Name: core_mobster.cpp_getObjectGrabPointLocal_FUN_004da000
// Address: 004da000
// Address Range: [[004da000, 004da06d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointLocal_FUN_004da000(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointLocal_FUN_004da000(CVector3f *out,CDemonActor *actor)

{
  float fVar1;
  CBoundingBox3D CStack_30;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_30);
  fVar1 = _DAT_0058a161;
  out->x = (CStack_30.min.x + CStack_30.max.x) * _DAT_0058a161;
  out->y = fVar1 * (CStack_30.min.y + CStack_30.max.y);
  out->z = CStack_30.min.z + (float)_DAT_0058a169;
  return out;
}
