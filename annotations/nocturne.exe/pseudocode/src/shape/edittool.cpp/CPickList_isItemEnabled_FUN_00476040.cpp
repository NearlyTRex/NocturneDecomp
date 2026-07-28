// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
// Address: 00476040
// Address Range: [[00476040, 0047609b]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(CPickList *this_ptr,int item_index)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xe12;
    core_main_c_FUN_004c8440("CPickList::isItemEnabled - invalid index");
  }
  if (*(int *)(this_ptr->search_text_buffer + 0x24) <= item_index) {
    return 1;
  }
  return (uint)(*(int *)(*(int *)(this_ptr->search_text_buffer + 0x28) + item_index * 4) != 0);
}
