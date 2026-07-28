// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_0050adc0
// Address: 0050adc0
// Address Range: [[0050adc0, 0050aedb]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  int iVar1;
  uint *puVar2;
  
  if (position == (CVector3f *)0x0) {
    _DAT_01fff548 = 1;
  }
  else {
    if (position != (CVector3f *)&DAT_01fff54c) {
      _DAT_01fff54c = position->x;
      _DAT_01fff554 = position->z;
      _DAT_01fff550 = position->y;
    }
    if (orientation != (UOrientationVector *)&DAT_01fff558) {
      _DAT_01fff558 = (orientation->vec).x;
      _DAT_01fff560 = (orientation->vec).z;
      _DAT_01fff55c = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&DAT_01fff564) {
      _DAT_01fff564 = aabb_min->x;
      _DAT_01fff56c = aabb_min->z;
      _DAT_01fff568 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&DAT_01fff570) {
      _DAT_01fff570 = aabb_max->x;
      _DAT_01fff578 = aabb_max->z;
      _DAT_01fff574 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      _DAT_01fff580 = rotation_matrix;
      _DAT_01fff584 = rotation_matrix;
      _DAT_01fff588 = rotation_matrix;
      _DAT_01fff590 = rotation_matrix;
      _DAT_01fff594 = rotation_matrix;
      _DAT_01fff598 = rotation_matrix;
      _DAT_01fff58c = 0x3f800000;
      _DAT_01fff59c = 0x3f800000;
      _DAT_01fff57c = 0x3f800000;
      _DAT_01fff548 = 2;
      return;
    }
    puVar2 = (uint *)&DAT_01fff57c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(uint *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      puVar2 = puVar2 + 1;
    }
    _DAT_01fff548 = 2;
  }
  return;
}
