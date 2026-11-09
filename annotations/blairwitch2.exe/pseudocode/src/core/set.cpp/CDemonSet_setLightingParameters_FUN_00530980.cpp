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
      _DAT_0200e890 = *(uint *)position;
      _DAT_0200e898 = *(uint *)&position->field_0x8;
      _DAT_0200e894 = *(uint *)&position->field_0x4;
    }
    if (orientation != (UOrientationVector *)&DAT_0200e89c) {
      _DAT_0200e89c = *(uint *)orientation;
      _DAT_0200e8a4 = *(uint *)((int)orientation + 8);
      _DAT_0200e8a0 = *(uint *)((int)orientation + 4);
    }
    if (aabb_min != (CVector3f *)&DAT_0200e8a8) {
      _DAT_0200e8a8 = *(uint *)aabb_min;
      _DAT_0200e8b0 = *(uint *)&aabb_min->field_0x8;
      _DAT_0200e8ac = *(uint *)&aabb_min->field_0x4;
    }
    if (aabb_max != (CVector3f *)&DAT_0200e8b4) {
      _DAT_0200e8b4 = *(uint *)aabb_max;
      _DAT_0200e8bc = *(uint *)&aabb_max->field_0x8;
      _DAT_0200e8b8 = *(uint *)&aabb_max->field_0x4;
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
      rotation_matrix = rotation_matrix + 4;
      puVar2 = puVar2 + 1;
    }
    _DAT_0200e88c = 2;
  }
  return;
}
