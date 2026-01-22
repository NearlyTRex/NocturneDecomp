// Name: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
// Address: 004547d0
// Address Range: [[004547d0, 0045495e]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipEdgeToPlane_FUN_004547d0(CVector3f * vertex1, CVector3f * vertex2, CVector3f * output_vertex, double plane_nx, double plane_ny, double plane_nz, double plane_d)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
          (CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,
          double plane_ny,double plane_nz,double plane_d)

{
  double dVar1;
  float fVar2;
  int local_28;
  
  fVar2 = (vertex2->z - vertex1->z) * (float)plane_nz +
          (vertex2->x - vertex1->x) * (float)plane_nx + (vertex2->y - vertex1->y) * (float)plane_ny;
  dVar1 = (double)fVar2;
  local_28 = SUB84(dVar1,0);
  if ((((ulonglong)dVar1 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x6e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar2 = -(vertex1->z * (float)plane_nz +
           vertex1->y * (float)plane_ny + (float)plane_nx * vertex1->x + (float)plane_d) / fVar2;
  output_vertex->x = (vertex2->x - vertex1->x) * fVar2 + vertex1->x;
  output_vertex->y = (vertex2->y - vertex1->y) * fVar2 + vertex1->y;
  output_vertex->z = (vertex2->z - vertex1->z) * fVar2 + vertex1->z;
  if ((((((ulonglong)plane_nx & 0x7fffffff00000000) != 0) || (plane_nx._0_4_ != 0)) &&
      (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) &&
     (((plane_ny._0_4_ == 0 && (((ulonglong)plane_nz & 0x7fffffff00000000) == 0)) &&
      (plane_nz._0_4_ == 0)))) {
    output_vertex->x = (float)(-(float10)plane_nx * (float10)plane_d);
  }
  if (((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
     (((((ulonglong)plane_ny & 0x7fffffff00000000) != 0 || (plane_ny._0_4_ != 0)) &&
      ((((ulonglong)plane_nz & 0x7fffffff00000000) == 0 && (plane_nz._0_4_ == 0)))))) {
    output_vertex->y = (float)(-(float10)plane_ny * (float10)plane_d);
  }
  if (((((((ulonglong)plane_nx & 0x7fffffff00000000) == 0) && (plane_nx._0_4_ == 0)) &&
       (((ulonglong)plane_ny & 0x7fffffff00000000) == 0)) && (plane_ny._0_4_ == 0)) &&
     ((((ulonglong)plane_nz & 0x7fffffff00000000) != 0 || (plane_nz._0_4_ != 0)))) {
    output_vertex->z = (float)(-(float10)plane_nz * (float10)plane_d);
    return;
  }
  return;
}
