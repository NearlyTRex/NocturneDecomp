// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
// Address: 00478a50
// Address Range: [[00478a50, 00478ab1]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

{
  if (this_ptr != (CDemonTriangle *)vertex1) {
    *(uint *)this_ptr = *(uint *)vertex1;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&vertex1->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&vertex1->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0xc != vertex2) {
    *(uint *)&this_ptr->field_0xc = *(uint *)vertex2;
    *(uint *)&this_ptr->field_0x10 = *(uint *)&vertex2->field_0x4;
    *(uint *)&this_ptr->field_0x14 = *(uint *)&vertex2->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0x18 != vertex3) {
    *(uint *)&this_ptr->field_0x18 = *(uint *)vertex3;
    *(uint *)&this_ptr->field_0x1c = *(uint *)&vertex3->field_0x4;
    *(uint *)&this_ptr->field_0x20 = *(uint *)&vertex3->field_0x8;
  }
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_00478900(this_ptr);
  return;
}
