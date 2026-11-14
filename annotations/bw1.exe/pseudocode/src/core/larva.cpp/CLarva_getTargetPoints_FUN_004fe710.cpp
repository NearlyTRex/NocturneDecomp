// Name: core_larva.cpp_CLarva_getTargetPoints_FUN_004fe710
// Address: 004fe710
// Address Range: [[004fe710, 004fe76d]]
// Convention: __cdecl
// Signature: int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_004fe710(CLarva *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_larva_cpp_CLarva_getTargetPoints_FUN_004fe710(CLarva *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,0,&CStack_18);
  CStack_24.x = CStack_18.x;
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array == &CStack_24) {
    return 1;
  }
  out_points_array->x = CStack_24.x;
  out_points_array->y = CStack_24.y;
  out_points_array->z = CStack_24.z;
  return 1;
}
