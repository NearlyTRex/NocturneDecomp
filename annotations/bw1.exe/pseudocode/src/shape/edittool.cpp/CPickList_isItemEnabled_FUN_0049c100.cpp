// Name: shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
// Address: 0049c100
// Address Range: [[0049c100, 0049c15b]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList *this_ptr,int item_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList *this_ptr,int item_index)

{
  if ((item_index < 0) || (*(int *)this_ptr <= item_index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x1185;
    core_main_c_FUN_005030e0("CPickList::isItemEnabled - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1ac <= item_index) {
    return 1;
  }
  return (uint)(*(int *)(*(int *)&this_ptr->field_0x1b0 + item_index * 4) != 0);
}
