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
  float *pfVar2;
  
  if (position == (CVector3f *)0x0) {
    g_INT_0200e88c = 1;
  }
  else {
    if (position != (CVector3f *)&g_FLOAT_0200e890) {
      g_FLOAT_0200e890 = position->x;
      g_FLOAT_0200e898 = position->z;
      _DAT_0200e894 = position->y;
    }
    if (orientation != (UOrientationVector *)&g_FLOAT_0200e89c) {
      g_FLOAT_0200e89c = (orientation->vec).x;
      g_FLOAT_0200e8a4 = (orientation->vec).z;
      _DAT_0200e8a0 = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&g_FLOAT_0200e8a8) {
      g_FLOAT_0200e8a8 = aabb_min->x;
      g_FLOAT_0200e8b0 = aabb_min->z;
      _DAT_0200e8ac = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&g_FLOAT_0200e8b4) {
      g_FLOAT_0200e8b4 = aabb_max->x;
      g_FLOAT_0200e8bc = aabb_max->z;
      _DAT_0200e8b8 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      g_CMatrix3x3f_0200e8c0.m[0].y = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[0].z = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[1].x = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[1].z = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[2].x = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[2].y = (float)rotation_matrix;
      g_CMatrix3x3f_0200e8c0.m[1].y = 1.0;
      g_CMatrix3x3f_0200e8c0.m[2].z = 1.0;
      g_CMatrix3x3f_0200e8c0.m[0].x = 1.0;
      g_INT_0200e88c = 2;
      return;
    }
    pfVar2 = (float *)&g_CMatrix3x3f_0200e8c0;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = *(float *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      pfVar2 = pfVar2 + 1;
    }
    g_INT_0200e88c = 2;
  }
  return;
}
