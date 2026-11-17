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
  float *pfVar2;
  
  if (position == (CVector3f *)0x0) {
    g_LightingSystemDirty = 1;
  }
  else {
    if (position != (CVector3f *)&g_FLOAT_01fff54c) {
      g_FLOAT_01fff54c = position->x;
      g_FLOAT_01fff554 = position->z;
      _DAT_01fff550 = position->y;
    }
    if (orientation != (UOrientationVector *)&g_FLOAT_01fff558) {
      g_FLOAT_01fff558 = (orientation->vec).x;
      g_FLOAT_01fff560 = (orientation->vec).z;
      _DAT_01fff55c = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&g_FLOAT_01fff564) {
      g_FLOAT_01fff564 = aabb_min->x;
      g_FLOAT_01fff56c = aabb_min->z;
      _DAT_01fff568 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&g_FLOAT_01fff570) {
      g_FLOAT_01fff570 = aabb_max->x;
      g_FLOAT_01fff578 = aabb_max->z;
      _DAT_01fff574 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      g_LightingRotationMatrix.m[0].y = (float)rotation_matrix;
      g_LightingRotationMatrix.m[0].z = (float)rotation_matrix;
      g_LightingRotationMatrix.m[1].x = (float)rotation_matrix;
      g_LightingRotationMatrix.m[1].z = (float)rotation_matrix;
      g_LightingRotationMatrix.m[2].x = (float)rotation_matrix;
      g_LightingRotationMatrix.m[2].y = (float)rotation_matrix;
      g_LightingRotationMatrix.m[1].y = 1.0;
      g_LightingRotationMatrix.m[2].z = 1.0;
      g_LightingRotationMatrix.m[0].x = 1.0;
      g_LightingSystemDirty = 2;
      return;
    }
    pfVar2 = (float *)&g_LightingRotationMatrix;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = *(float *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      pfVar2 = pfVar2 + 1;
    }
    g_LightingSystemDirty = 2;
  }
  return;
}
