// Name: core_dcube.cpp_CDemonCubeTriangle_init_FUN_00449120
// Address: 00449120
// Address Range: [[00449120, 00449141]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(CDemonCubeTriangle *this_ptr,CVector3f *vertex0,CVector3f *vertex1,CVector3f *vertex2)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(CDemonCubeTriangle *this_ptr,CVector3f *vertex0,CVector3f *vertex1,CVector3f *vertex2)

{
  (this_ptr->triangle).vertices[0] = vertex0;
  (this_ptr->triangle).vertices[1] = vertex1;
  (this_ptr->triangle).vertices[2] = vertex2;
  core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(this_ptr);
  return;
}
