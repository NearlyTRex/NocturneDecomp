// Name: core_dcube.cpp_clipEdgeToPlane_FUN_004547d0
// Address: 004547d0
// MANUAL RECONSTRUCTION
// Address Range: [[004547d0, 0045495e]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipEdgeToPlane_FUN_004547d0(CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,double plane_ny,double plane_nz,double plane_d)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipEdgeToPlane_FUN_004547d0(CVector3f *vertex1,CVector3f *vertex2,CVector3f *output_vertex,double plane_nx,double plane_ny,double plane_nz,double plane_d)

{
  float fVar1;
  float fVar2;

  fVar2 = (vertex2->z - vertex1->z) * (float)plane_nz +
          (vertex2->x - vertex1->x) * (float)plane_nx + (vertex2->y - vertex1->y) * (float)plane_ny;
  if (fVar2 == 0.0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 110;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar1 = -(vertex1->z * (float)plane_nz +
           vertex1->y * (float)plane_ny + (float)plane_nx * vertex1->x + (float)plane_d) / fVar2;
  output_vertex->x = (vertex2->x - vertex1->x) * fVar1 + vertex1->x;
  output_vertex->y = (vertex2->y - vertex1->y) * fVar1 + vertex1->y;
  output_vertex->z = (vertex2->z - vertex1->z) * fVar1 + vertex1->z;
  if (plane_nx != 0.0 && plane_ny == 0.0 && plane_nz == 0.0) {
    output_vertex->x = (float)(-plane_nx * plane_d);
  }
  if (plane_nx == 0.0 && plane_ny != 0.0 && plane_nz == 0.0) {
    output_vertex->y = (float)(-plane_ny * plane_d);
  }
  if (plane_nx == 0.0 && plane_ny == 0.0 && plane_nz != 0.0) {
    output_vertex->z = (float)(-plane_nz * plane_d);
  }
  return;
}
