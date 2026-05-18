// Name: core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
// Address: 0056d380
// MANUAL RECONSTRUCTION
// Address Range: [[0056d380, 0056d49b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{

  if (position == (CVector3f *)0x0) {
    g_LightingSystemDirty = 1;
  }
  else {
    if (position != &g_LightingReferencePosition) {
      g_LightingReferencePosition = *position;
    }
    if (orientation != (UOrientationVector *)&g_LightingOrientation) {
      g_LightingOrientation = orientation->vec;
    }
    if (aabb_min != &g_LightingAABBMin) {
      g_LightingAABBMin = *aabb_min;
    }
    if (aabb_max != &g_LightingAABBMax) {
      g_LightingAABBMax = *aabb_max;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      g_LightingRotationMatrix.m[0].y = 0.0f;
      g_LightingRotationMatrix.m[0].z = 0.0f;
      g_LightingRotationMatrix.m[1].x = 0.0f;
      g_LightingRotationMatrix.m[1].z = 0.0f;
      g_LightingRotationMatrix.m[2].x = 0.0f;
      g_LightingRotationMatrix.m[2].y = 0.0f;
      g_LightingRotationMatrix.m[1].y = 1.0;
      g_LightingRotationMatrix.m[2].z = 1.0;
      g_LightingRotationMatrix.m[0].x = 1.0;
      g_LightingSystemDirty = 2;
      return;
    }
    g_LightingRotationMatrix = *rotation_matrix;
    g_LightingSystemDirty = 2;
  }
  return;
}
