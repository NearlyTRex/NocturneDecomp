// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
// Address: 00530980
// Address Range: [[00530980, 00530a9b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  uint *puVar2;
  
  if (position == (CVector3f *)0x0) {
    _DAT_0200e88c = 1;
  }
  else {
    if (position != (CVector3f *)&DAT_0200e890) {
      _DAT_0200e890 = position->x;
      _DAT_0200e898 = position->z;
      _DAT_0200e894 = position->y;
    }
    if (orientation != (UOrientationVector *)&DAT_0200e89c) {
      _DAT_0200e89c = (orientation->vec).x;
      _DAT_0200e8a4 = (orientation->vec).z;
      _DAT_0200e8a0 = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&DAT_0200e8a8) {
      _DAT_0200e8a8 = aabb_min->x;
      _DAT_0200e8b0 = aabb_min->z;
      _DAT_0200e8ac = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&DAT_0200e8b4) {
      _DAT_0200e8b4 = aabb_max->x;
      _DAT_0200e8bc = aabb_max->z;
      _DAT_0200e8b8 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      _DAT_0200e8c4 = rotation_matrix;
      _DAT_0200e8c8 = rotation_matrix;
      _DAT_0200e8cc = rotation_matrix;
      _DAT_0200e8d4 = rotation_matrix;
      _DAT_0200e8d8 = rotation_matrix;
      _DAT_0200e8dc = rotation_matrix;
      _DAT_0200e8d0 = 0x3f800000;
      _DAT_0200e8e0 = 0x3f800000;
      _DAT_0200e8c0 = 0x3f800000;
      _DAT_0200e88c = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0200e8c0;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(uint *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      puVar2 = puVar2 + 1;
    }
    _DAT_0200e88c = 2;
  }
  return;
}
