// Name: shape_edittool.cpp_FUN_0049c370
// Address: 0049c370
// Address Range: [[0049c370, 0049c3d3]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_0049c370(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_0049c370(CPickList *this_ptr)

{
  if (*(int *)&this_ptr->field_0x1b0 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x1b0);
    *(uint *)&this_ptr->field_0x1b0 = 0;
  }
  *(uint *)&this_ptr->field_0x1ac = 0;
  if (*(int *)&this_ptr->field_0x1b8 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x1b8);
    *(uint *)&this_ptr->field_0x1b8 = 0;
  }
  *(uint *)&this_ptr->field_0x1b4 = 0;
  shape_edittool_cpp_CStrList_clear_FUN_00499470((CStrList *)this_ptr);
  return;
}
