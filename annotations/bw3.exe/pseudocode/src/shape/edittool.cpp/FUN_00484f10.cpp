// Name: shape_edittool.cpp_FUN_00484f10
// Address: 00484f10
// Address Range: [[00484f10, 00484f73]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_00484f10(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_00484f10(CPickList *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1b0 != 0) {
    FUN_005a3770(*(int *)&this_ptr->field_0x1b0);
    *(uint *)&this_ptr->field_0x1b0 = 0;
  }
  *(uint *)&this_ptr->field_0x1ac = 0;
  if (*(int *)&this_ptr->field_0x1b8 != 0) {
    FUN_005a3770(*(int *)&this_ptr->field_0x1b8);
    *(uint *)&this_ptr->field_0x1b8 = 0;
  }
  *(uint *)&this_ptr->field_0x1b4 = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00482010((CStrList *)this_ptr);
  return;
}
