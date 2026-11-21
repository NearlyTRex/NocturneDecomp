// Name: shape_edittool.cpp_CPickList_enableItem_FUN_004839d0
// Address: 004839d0
// Address Range: [[004839d0, 00483a9d]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004839d0(CPickList *this_ptr,int item_index,int enable_flag)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4331;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    if (enable_flag != 0) {
      return;
    }
    piVar1 = (int *)realloc
                       (this_ptr->enabled_array,(this_ptr->base).item_count << 2);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 4339;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(enable_flag != 0);
  return;
}
