// Name: shape_edittool.cpp_FUN_00483d10
// Address: 00483d10
// Address Range: [[00483d10, 00483d73]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_00483d10(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_00483d10(CPickList *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1b0 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x1b0);
    *(uint *)&this_ptr->field_0x1b0 = 0;
  }
  *(uint *)&this_ptr->field_0x1ac = 0;
  if (*(int *)&this_ptr->field_0x1b8 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x1b8);
    *(uint *)&this_ptr->field_0x1b8 = 0;
  }
  *(uint *)&this_ptr->field_0x1b4 = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00480e10((CStrList *)this_ptr);
  return;
}
