// Name: core_dtri.cpp_clipLineToPlane_FUN_0049b6c0
// Address: 0049b6c0
// MANUAL RECONSTRUCTION
// Address Range: [[0049b6c0, 0049b84e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0049b6c0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0049b6c0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)

{
  float fVar1;
  float fVar2;

  fVar2 = (point2_ptr->z - point1_ptr->z) * (float)plane_nz +
          (point2_ptr->x - point1_ptr->x) * (float)plane_nx +
          (point2_ptr->y - point1_ptr->y) * (float)plane_ny;
  if (fVar2 == 0.0) {
    g_CurrentFilename = "..\\core\\dtri.cpp";
    g_CurrentLineNumber = 1111;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar1 = -(point1_ptr->z * (float)plane_nz +
           point1_ptr->y * (float)plane_ny + (float)plane_nx * point1_ptr->x + (float)plane_d) /
          fVar2;
  result_ptr->x = (point2_ptr->x - point1_ptr->x) * fVar1 + point1_ptr->x;
  result_ptr->y = (point2_ptr->y - point1_ptr->y) * fVar1 + point1_ptr->y;
  result_ptr->z = (point2_ptr->z - point1_ptr->z) * fVar1 + point1_ptr->z;
  if (plane_nx != 0.0 && plane_ny == 0.0 && plane_nz == 0.0) {
    result_ptr->x = (float)(-plane_nx * plane_d);
  }
  if (plane_nx == 0.0 && plane_ny != 0.0 && plane_nz == 0.0) {
    result_ptr->y = (float)(-plane_ny * plane_d);
  }
  if (plane_nx == 0.0 && plane_ny == 0.0 && plane_nz != 0.0) {
    result_ptr->z = (float)(-plane_nz * plane_d);
  }
  return;
}
