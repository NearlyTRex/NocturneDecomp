// Name: core_box.cpp_FUN_004215d0
// Address: 004215d0
// Address Range: [[004215c4, 004215c9] [004215d0, 0042161a]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_FUN_004215d0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

int __cdecl core_box_cpp_FUN_004215d0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if ((((*(float *)this_ptr <= *(float *)&other->field_0xc) &&
       (*(float *)other <= *(float *)&this_ptr->field_0xc)) &&
      (*(float *)&this_ptr->field_0x4 <= *(float *)&other->field_0x10)) &&
     (((*(float *)&other->field_0x4 <= *(float *)&this_ptr->field_0x10 &&
       (*(float *)&this_ptr->field_0x8 <= *(float *)&other->field_0x14)) &&
      (*(float *)&other->field_0x8 <= *(float *)&this_ptr->field_0x14)))) {
    return 1;
  }
  return 0;
}
