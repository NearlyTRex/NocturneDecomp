// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
// Address: 00478a50
// Address Range: [[00478a50, 00478ab1]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

{
  if (this_ptr != (CDemonTriangle *)vertex1) {
    (this_ptr->vertex1).x = vertex1->x;
    (this_ptr->vertex1).y = vertex1->y;
    (this_ptr->vertex1).z = vertex1->z;
  }
  if (&this_ptr->vertex2 != vertex2) {
    (this_ptr->vertex2).x = vertex2->x;
    (this_ptr->vertex2).y = vertex2->y;
    (this_ptr->vertex2).z = vertex2->z;
  }
  if (&this_ptr->vertex3 != vertex3) {
    (this_ptr->vertex3).x = vertex3->x;
    (this_ptr->vertex3).y = vertex3->y;
    (this_ptr->vertex3).z = vertex3->z;
  }
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_00478900(this_ptr);
  return;
}
