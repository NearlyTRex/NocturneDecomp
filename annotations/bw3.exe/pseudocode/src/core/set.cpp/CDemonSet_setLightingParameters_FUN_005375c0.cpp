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
  float *pfVar2;
  
  if (position == (CVector3f *)0x0) {
    g_INT_0207ffa8 = 1;
  }
  else {
    if (position != (CVector3f *)&g_FLOAT_0207ffac) {
      g_FLOAT_0207ffac = position->x;
      g_FLOAT_0207ffb4 = position->z;
      _DAT_0207ffb0 = position->y;
    }
    if (orientation != (UOrientationVector *)&g_FLOAT_0207ffb8) {
      g_FLOAT_0207ffb8 = (orientation->vec).x;
      g_FLOAT_0207ffc0 = (orientation->vec).z;
      _DAT_0207ffbc = (orientation->vec).y;
    }
    if (aabb_min != (CVector3f *)&g_FLOAT_0207ffc4) {
      g_FLOAT_0207ffc4 = aabb_min->x;
      g_FLOAT_0207ffcc = aabb_min->z;
      _DAT_0207ffc8 = aabb_min->y;
    }
    if (aabb_max != (CVector3f *)&g_FLOAT_0207ffd0) {
      g_FLOAT_0207ffd0 = aabb_max->x;
      g_FLOAT_0207ffd8 = aabb_max->z;
      _DAT_0207ffd4 = aabb_max->y;
    }
    if (rotation_matrix == (CMatrix3x3f *)0x0) {
      g_CMatrix3x3f_0207ffdc.m[0].y = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[0].z = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[1].x = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[1].z = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[2].x = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[2].y = (float)rotation_matrix;
      g_CMatrix3x3f_0207ffdc.m[1].y = 1.0;
      g_CMatrix3x3f_0207ffdc.m[2].z = 1.0;
      g_CMatrix3x3f_0207ffdc.m[0].x = 1.0;
      g_INT_0207ffa8 = 2;
      return;
    }
    pfVar2 = (float *)&g_CMatrix3x3f_0207ffdc;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = *(float *)rotation_matrix;
      rotation_matrix = (CMatrix3x3f *)((int)rotation_matrix + 4);
      pfVar2 = pfVar2 + 1;
    }
    g_INT_0207ffa8 = 2;
  }
  return;
}
