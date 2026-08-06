// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
// Address: 00476040
// Address Range: [[00476040, 0047609b]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(CPickList *this_ptr,int item_index)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3602;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPickList::isItemEnabled - invalid index");
  }
  if (this_ptr->enabled_capacity <= item_index) {
    return 1;
  }
  return (uint)(this_ptr->enabled_array[item_index] != 0);
}
