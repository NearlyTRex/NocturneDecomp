// Name: shape_edittool.cpp_CPickList_enableItem_FUN_0049c030
// Address: 0049c030
// Address Range: [[0049c030, 0049c0fd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_0049c030(CPickList *this_ptr,int item_index,int enable_flag)

{
  void *pvVar1;
  
  if ((item_index < 0) || (*(int *)this_ptr <= item_index)) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0x116c;
    core_main_c_FUN_005030e0("CPickList::enableItem - invalid index");
  }
  if (*(int *)&this_ptr->field_0x1ac <= item_index) {
    if (enable_flag != 0) {
      return;
    }
    pvVar1 = realloc
                       (*(void **)&this_ptr->field_0x1b0,*(int *)this_ptr << 2);
    *(void **)&this_ptr->field_0x1b0 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x1174;
      core_main_c_FUN_005030e0("Out of memory");
    }
    while (*(int *)&this_ptr->field_0x1ac < *(int *)this_ptr) {
      *(uint *)(*(int *)&this_ptr->field_0x1b0 + *(int *)&this_ptr->field_0x1ac * 4) = 1;
      *(int *)&this_ptr->field_0x1ac = *(int *)&this_ptr->field_0x1ac + 1;
    }
  }
  *(uint *)(*(int *)&this_ptr->field_0x1b0 + item_index * 4) = (uint)(enable_flag != 0);
  return;
}
