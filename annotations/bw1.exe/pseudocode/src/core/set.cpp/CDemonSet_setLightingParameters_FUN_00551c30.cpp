// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
// Address: 00551c30
// Address Range: [[00551c30, 00551d4b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  uint *puVar2;
  
  if (position == (CVector3f *)0x0) {
    _DAT_0202a840 = 1;
  }
  else {
    if (position != (CVector3f *)&DAT_0202a844) {
      _DAT_0202a844 = position->x;
      _DAT_0202a84c = position->z;
      _DAT_0202a848 = position->y;
    }
    if (orientation != (UOrientationVector *)&DAT_0202a850) {
      _DAT_0202a850 = (orientation->vec).x;
      _DAT_0202a858 = (orientation->vec).z;
      _DAT_0202a854 = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&DAT_0202a85c) {
      _DAT_0202a85c = aabb_min->x;
      _DAT_0202a864 = aabb_min->z;
      _DAT_0202a860 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&DAT_0202a868) {
      _DAT_0202a868 = aabb_max->x;
      _DAT_0202a870 = aabb_max->z;
      _DAT_0202a86c = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      _DAT_0202a878 = rotation_matrix;
      _DAT_0202a87c = rotation_matrix;
      _DAT_0202a880 = rotation_matrix;
      _DAT_0202a888 = rotation_matrix;
      _DAT_0202a88c = rotation_matrix;
      _DAT_0202a890 = rotation_matrix;
      _DAT_0202a884 = 0x3f800000;
      _DAT_0202a894 = 0x3f800000;
      _DAT_0202a874 = 0x3f800000;
      _DAT_0202a840 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0202a874;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(uint *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      puVar2 = puVar2 + 1;
    }
    _DAT_0202a840 = 2;
  }
  return;
}
