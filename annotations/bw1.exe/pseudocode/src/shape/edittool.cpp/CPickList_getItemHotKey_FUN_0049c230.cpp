// Name: shape_edittool.cpp_CPickList_getItemHotKey_FUN_0049c230
// Address: 0049c230
// Address Range: [[0049c230, 0049c289]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList *this_ptr,int index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_0049c230(CPickList *this_ptr,int index)

{
  if ((index < 0) || (*(int *)this_ptr <= index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x11af;
    core_main_c_FUN_005030e0("CPickList::getItemHotKey - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1b4 <= index) {
    return -1;
  }
  return *(int *)(*(int *)&this_ptr->field_0x1b8 + index * 4);
}
