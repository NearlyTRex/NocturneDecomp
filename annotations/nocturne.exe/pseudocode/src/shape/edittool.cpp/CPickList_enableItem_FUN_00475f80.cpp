// Name: shape_edittool.cpp_CPickList_enableItem_FUN_00475f80
// Address: 00475f80
// Address Range: [[00475f80, 0047603e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(CPickList *this_ptr,int item_index,int enable_flag)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3578;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    piVar1 = (int *)realloc
                       (this_ptr->enabled_array,(this_ptr->base).item_count << 2);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 3585;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(enable_flag != 0);
  return;
}
