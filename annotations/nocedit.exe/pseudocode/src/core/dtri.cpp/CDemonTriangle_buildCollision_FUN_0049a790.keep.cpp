// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
// Address: 0049a790
// MANUAL RECONSTRUCTION
// Address Range: [[0049a790, 0049a7f1]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

{
  if (this_ptr != (CDemonTriangle *)vertex1) {
    this_ptr->vertex1 = *vertex1;
  }
  if (&this_ptr->vertex2 != vertex2) {
    this_ptr->vertex2 = *vertex2;
  }
  if (&this_ptr->vertex3 != vertex3) {
    this_ptr->vertex3 = *vertex3;
  }
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(this_ptr);
  return;
}
