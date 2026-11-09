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
      _DAT_0202a844 = *(uint *)position;
      _DAT_0202a84c = *(uint *)&position->field_0x8;
      _DAT_0202a848 = *(uint *)&position->field_0x4;
    }
    if (orientation != (UOrientationVector *)&DAT_0202a850) {
      _DAT_0202a850 = *(uint *)orientation;
      _DAT_0202a858 = *(uint *)((int)orientation + 8);
      _DAT_0202a854 = *(uint *)((int)orientation + 4);
    }
    if (aabb_min != (CVector3f *)&DAT_0202a85c) {
      _DAT_0202a85c = *(uint *)aabb_min;
      _DAT_0202a864 = *(uint *)&aabb_min->field_0x8;
      _DAT_0202a860 = *(uint *)&aabb_min->field_0x4;
    }
    if (aabb_max != (CVector3f *)&DAT_0202a868) {
      _DAT_0202a868 = *(uint *)aabb_max;
      _DAT_0202a870 = *(uint *)&aabb_max->field_0x8;
      _DAT_0202a86c = *(uint *)&aabb_max->field_0x4;
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
      rotation_matrix = rotation_matrix + 4;
      puVar2 = puVar2 + 1;
    }
    _DAT_0202a840 = 2;
  }
  return;
}
