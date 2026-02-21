// Name: core_dtrace.cpp_STriangleRef_copy_FUN_0049a3b0
// Address: 0049a3b0
// Address Range: [[0049a3b0, 0049a3f9]]
// Convention: __cdecl
// Signature: STriangleRef * __cdecl core_dtrace_cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef *this_ptr,STriangleRef *other)

#include "nocturne.h"

STriangleRef * __cdecl core_dtrace_cpp_STriangleRef_copy_FUN_0049a3b0(STriangleRef *this_ptr,STriangleRef *other)

{
  this_ptr->vertices[0] = other->vertices[0];
  this_ptr->vertices[1] = other->vertices[1];
  this_ptr->vertices[2] = other->vertices[2];
  (this_ptr->normal).x = (other->normal).x;
  (this_ptr->normal).y = (other->normal).y;
  (this_ptr->normal).z = (other->normal).z;
  this_ptr->plane_distance = other->plane_distance;
  return this_ptr;
}
