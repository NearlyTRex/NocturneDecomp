// Name: core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
// Address: 00455430
// Address Range: [[00455430, 00455451]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430
          (CDemonCubeTriangle *this_ptr,CVector3f *vertex0,CVector3f *vertex1,CVector3f *vertex2)

{
  this_ptr->vertices[0] = vertex0;
  this_ptr->vertices[1] = vertex1;
  this_ptr->vertices[2] = vertex2;
  core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(this_ptr);
  return;
}
