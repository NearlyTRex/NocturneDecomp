// Name: core_biggs.cpp_CBiggs_getTargetPoints_FUN_00415390
// Address: 00415390
// Address Range: [[00415390, 004153ed]]
// Convention: __cdecl
// Signature: int __cdecl core_biggs_cpp_CBiggs_getTargetPoints_FUN_00415390(CBiggs *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_biggs_cpp_CBiggs_getTargetPoints_FUN_00415390(CBiggs *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_100c [1016];
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
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
