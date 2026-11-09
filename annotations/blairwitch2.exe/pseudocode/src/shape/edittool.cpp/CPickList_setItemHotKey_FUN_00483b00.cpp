// Name: shape_edittool.cpp_CPickList_setItemHotKey_FUN_00483b00
// Address: 00483b00
// Address Range: [[00483b00, 00483bc6]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_00483b00(CPickList *this_ptr,int item_index,int hotkey_code)

{
  void *pvVar1;
  
  if ((item_index < 0) || (*(int *)this_ptr <= item_index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0x1115;
    core_main_c_FUN_004e4500("CPickList::setItemHotKey - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1b4 <= item_index) {
    if (hotkey_code == -1) {
      return;
    }
    pvVar1 = realloc
                       (*(void **)&this_ptr->field_0x1b8,*(int *)this_ptr << 2);
    *(void **)&this_ptr->field_0x1b8 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x111d;
      core_main_c_FUN_004e4500("Out of memory");
    }
    while (*(int *)&this_ptr->field_0x1b4 < *(int *)this_ptr) {
      *(uint *)(*(int *)&this_ptr->field_0x1b8 + *(int *)&this_ptr->field_0x1b4 * 4) =
           0xffffffff;
      *(int *)&this_ptr->field_0x1b4 = *(int *)&this_ptr->field_0x1b4 + 1;
    }
  }
  *(int *)(*(int *)&this_ptr->field_0x1b8 + item_index * 4) = hotkey_code;
  return;
}
