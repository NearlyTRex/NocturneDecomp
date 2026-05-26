// Name: core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00574440
// Address: 00574440
// MANUAL RECONSTRUCTION
// Address Range: [[00574440, 005744c1]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00574440(CDemonSet *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_castVoxelShadow_FUN_00574440(CDemonSet *this_ptr,CDemonActor *actor)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_34;
  CBoundingBox3D CStack_1c;
  
  pCVar1 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_34);
  if (&CStack_1c != pCVar1) {
    CStack_1c.min = pCVar1->min;
  }
  if (&CStack_1c.max != &pCVar1->max) {
    CStack_1c.max = pCVar1->max;
  }
  core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_00499c20
            (&g_CDemonRaytraceInstance,&(actor->location).position,&(actor->orient).vec,
             &CStack_1c.min,&CStack_1c.max);
  core_path_cpp_resetAllPathMaps_FUN_00548590();
  return;
}
