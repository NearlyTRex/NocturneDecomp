// Name: core_dtri.cpp_CDemonTriangle_buildCollision_FUN_004779e0
// Address: 004779e0
// Address Range: [[004779e0, 00477a41]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

#include "nocturne.h"

void __cdecl core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0(CDemonTriangle *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3)

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
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_00477890(this_ptr);
  return;
}
