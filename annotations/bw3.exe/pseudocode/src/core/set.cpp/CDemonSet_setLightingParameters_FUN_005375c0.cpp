// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
// Address: 005375c0
// Address Range: [[005375c0, 005376db]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  uint *puVar2;
  
  if (position == (CVector3f *)0x0) {
    _DAT_0207ffa8 = 1;
  }
  else {
    if (position != (CVector3f *)&DAT_0207ffac) {
      _DAT_0207ffac = position->x;
      _DAT_0207ffb4 = position->z;
      _DAT_0207ffb0 = position->y;
    }
    if (orientation != (UOrientationVector *)&DAT_0207ffb8) {
      _DAT_0207ffb8 = (orientation->vec).x;
      _DAT_0207ffc0 = (orientation->vec).z;
      _DAT_0207ffbc = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&DAT_0207ffc4) {
      _DAT_0207ffc4 = aabb_min->x;
      _DAT_0207ffcc = aabb_min->z;
      _DAT_0207ffc8 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&DAT_0207ffd0) {
      _DAT_0207ffd0 = aabb_max->x;
      _DAT_0207ffd8 = aabb_max->z;
      _DAT_0207ffd4 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      _DAT_0207ffe0 = rotation_matrix;
      _DAT_0207ffe4 = rotation_matrix;
      _DAT_0207ffe8 = rotation_matrix;
      _DAT_0207fff0 = rotation_matrix;
      _DAT_0207fff4 = rotation_matrix;
      _DAT_0207fff8 = rotation_matrix;
      _DAT_0207ffec = 0x3f800000;
      _DAT_0207fffc = 0x3f800000;
      _DAT_0207ffdc = 0x3f800000;
      _DAT_0207ffa8 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_0207ffdc;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(uint *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      puVar2 = puVar2 + 1;
    }
    _DAT_0207ffa8 = 2;
  }
  return;
}
