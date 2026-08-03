// Name: core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
// Address: 0046d4e0
// Address Range: [[0046d4e0, 0046d66e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0046d4e0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipLineToPlane_FUN_0046d4e0(CVector3f *point1_ptr,CVector3f *point2_ptr,CVector3f *result_ptr,double plane_nx,double plane_ny,double plane_nz,double plane_d)

{
  double dVar1;
  float fVar2;
  int local_28;
  
  fVar2 = (point2_ptr->z - point1_ptr->z) * (float)plane_nz +
          (point2_ptr->x - point1_ptr->x) * (float)plane_nx +
          (point2_ptr->y - point1_ptr->y) * (float)plane_ny;
  dVar1 = (double)fVar2;
  local_28 = SUB84(__BITCAST_UINT64(dVar1),0);
  if ((((ulonglong)dVar1 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dtri.cpp";
    g_INT_01cc4804 = 0x457;
    core_main_c_FUN_004c8440("Bad clip!");
  }
  fVar2 = -(point1_ptr->z * (float)plane_nz +
           point1_ptr->y * (float)plane_ny + (float)plane_nx * point1_ptr->x + (float)plane_d) /
          fVar2;
  result_ptr->x = (point2_ptr->x - point1_ptr->x) * fVar2 + point1_ptr->x;
  result_ptr->y = (point2_ptr->y - point1_ptr->y) * fVar2 + point1_ptr->y;
  result_ptr->z = (point2_ptr->z - point1_ptr->z) * fVar2 + point1_ptr->z;
  if ((((((ulonglong)plane_nx & 0x7fffffff00000000) != 0) || (plane_nx._0_4_ != 0)) &&
      (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) &&
     (((plane_ny._0_4_ == 0 && (((ulonglong)plane_nz & 0x7fffffff00000000) == 0)) &&
      (plane_nz._0_4_ == 0)))) {
    result_ptr->x = (float)(-(float10)plane_nx * (float10)plane_d);
  }
  if (((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
     (((((ulonglong)plane_ny & 0x7fffffff00000000) != 0 || (plane_ny._0_4_ != 0)) &&
      ((((ulonglong)plane_nz & 0x7fffffff00000000) == 0 && (plane_nz._0_4_ == 0)))))) {
    result_ptr->y = (float)(-(float10)plane_ny * (float10)plane_d);
  }
  if (((((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
       (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) && (plane_ny._0_4_ == 0)) &&
     ((((ulonglong)plane_nz & 0x7fffffff00000000) != 0 || (plane_nz._0_4_ != 0)))) {
    result_ptr->z = (float)(-(float10)plane_nz * (float10)plane_d);
    return;
  }
  return;
}
