// Name: core_boneguy.cpp_getLocalBoundingBoxCenter_FUN_00418180
// Address: 00418180
// Address Range: [[00418180, 004181ed]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_00418180(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_00418180(CVector3f *out,CDemonActor *actor)

{
  float fVar1;
  CBoundingBox3D CStack_30;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_30);
  fVar1 = _DAT_0057912e;
  out->x = (CStack_30.min.x + CStack_30.max.x) * _DAT_0057912e;
  out->y = fVar1 * (CStack_30.min.y + CStack_30.max.y);
  out->z = CStack_30.min.z + (float)_DAT_00579136;
  return out;
}
