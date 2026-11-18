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
  float *pfVar2;
  
  if (position == (CVector3f *)0x0) {
    g_LightingSystemDirty = 1;
  }
  else {
    if (position != (CVector3f *)&g_FLOAT_0202a844) {
      g_FLOAT_0202a844 = position->x;
      g_FLOAT_0202a84c = position->z;
      _DAT_0202a848 = position->y;
    }
    if (orientation != (UOrientationVector *)&g_FLOAT_0202a850) {
      g_FLOAT_0202a850 = (orientation->vec).x;
      g_FLOAT_0202a858 = (orientation->vec).z;
      _DAT_0202a854 = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&g_FLOAT_0202a85c) {
      g_FLOAT_0202a85c = aabb_min->x;
      g_FLOAT_0202a864 = aabb_min->z;
      _DAT_0202a860 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&g_FLOAT_0202a868) {
      g_FLOAT_0202a868 = aabb_max->x;
      g_FLOAT_0202a870 = aabb_max->z;
      _DAT_0202a86c = aabb_max->y;
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
