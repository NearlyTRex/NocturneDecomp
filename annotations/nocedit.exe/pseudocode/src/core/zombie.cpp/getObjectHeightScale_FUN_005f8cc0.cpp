// Name: core_zombie.cpp_getObjectHeightScale_FUN_005f8cc0
// Address: 005f8cc0
// Address Range: [[005f8cc0, 005f8d24]]
// Convention: __cdecl
// Signature: float __cdecl core_zombie_cpp_getObjectHeightScale_FUN_005f8cc0(CDemonActor *actor)

#include "nocturne.h"

float __cdecl core_zombie_cpp_getObjectHeightScale_FUN_005f8cc0(CDemonActor *actor)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_30;
  
  if (actor == (CDemonActor *)0x0) {
    return 1.0;
  }
  pCVar1 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_30);
  return ((pCVar1->max).z - (pCVar1->min).z) * (float)0.5 + 1.0;
}
