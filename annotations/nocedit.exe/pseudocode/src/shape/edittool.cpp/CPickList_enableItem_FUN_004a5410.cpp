// Name: shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
// Address: 004a5410
// Address Range: [[004a5410, 004a54d8]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(CPickList *this_ptr,int item_index,int enable_flag)

{
  int *piVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 4133;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::enableItem - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    piVar1 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->enabled_array,(this_ptr->base).item_count << 2,
                        "..\\shape\\edittool.cpp",4139);
    this_ptr->enabled_array = piVar1;
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 4140;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    while (this_ptr->enabled_capacity < (this_ptr->base).item_count) {
      this_ptr->enabled_array[this_ptr->enabled_capacity] = 1;
      this_ptr->enabled_capacity = this_ptr->enabled_capacity + 1;
    }
  }
  this_ptr->enabled_array[item_index] = (uint)(enable_flag != 0);
  return;
}
