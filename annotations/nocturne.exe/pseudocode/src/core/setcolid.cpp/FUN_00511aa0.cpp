// Name: core_setcolid.cpp_FUN_00511aa0
// Address: 00511aa0
// Address Range: [[00511aa0, 00511b21]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_FUN_00511aa0(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_FUN_00511aa0(CDemonSet *this_ptr,CDemonActor *actor)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_34;
  CBoundingBox3D CStack_1c;
  
  pCVar1 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_34);
  if (&CStack_1c != pCVar1) {
    CStack_1c.min.x = (pCVar1->min).x;
    CStack_1c.min.y = (pCVar1->min).y;
    CStack_1c.min.z = (pCVar1->min).z;
  }
  if (&CStack_1c.max != &pCVar1->max) {
    CStack_1c.max.x = (pCVar1->max).x;
    CStack_1c.max.y = (pCVar1->max).y;
    CStack_1c.max.z = (pCVar1->max).z;
  }
  core_dtrace_cpp_CDemonRaytrace_transferShadowVoxels_FUN_0046bd90
            (&g_CDemonRaytrace_01fba938,&(actor->location).position,&(actor->orient).vec,
             &CStack_1c.min,&CStack_1c.max);
  core_path_cpp_resetAllPathMaps_FUN_004f1e90();
  return;
}
