// Name: shape_edittool.cpp_CPickList_enableItem_FUN_00484bd0
// Address: 00484bd0
// Address Range: [[00484bd0, 00484c9d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00484bd0(CPickList *this_ptr,int item_index,int enable_flag)

{
  void *pvVar1;
  
  if ((item_index < 0) || (*(int *)this_ptr <= item_index)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x116f;
    core_main_c_FUN_004e4330("CPickList::enableItem - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1ac <= item_index) {
    if (enable_flag != 0) {
      return;
    }
    pvVar1 = realloc
                       (*(void **)&this_ptr->field_0x1b0,*(int *)this_ptr << 2);
    *(void **)&this_ptr->field_0x1b0 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0x1177;
      core_main_c_FUN_004e4330("Out of memory");
    }
    while (*(int *)&this_ptr->field_0x1ac < *(int *)this_ptr) {
      *(uint *)(*(int *)&this_ptr->field_0x1b0 + *(int *)&this_ptr->field_0x1ac * 4) = 1;
      *(int *)&this_ptr->field_0x1ac = *(int *)&this_ptr->field_0x1ac + 1;
    }
  }
  *(uint *)(*(int *)&this_ptr->field_0x1b0 + item_index * 4) = (uint)(enable_flag != 0);
  return;
}
