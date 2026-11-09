// Name: shape_edittool.cpp_CStrList_swap_FUN_004826c0
// Address: 004826c0
// Address Range: [[004826c0, 00482733]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004826c0(CStrList *this_ptr,int index1,int index2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004826c0(CStrList *this_ptr,int index1,int index2)

{
  uint uVar1;
  uint *puVar2;
  
  if ((((index1 < 0) || (*(int *)this_ptr <= index1)) || (index2 < 0)) ||
     (*(int *)this_ptr <= index2)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xd2a;
    core_main_c_FUN_004e4330("CStrList::swap - invalid indices");
    if (index1 == index2) {
      return;
    }
  }
  else if (index1 == index2) {
    return;
  }
  puVar2 = (uint *)(index1 * 4 + *(int *)&this_ptr->field_0x8);
  uVar1 = *puVar2;
  *puVar2 = *(uint *)(*(int *)&this_ptr->field_0x8 + index2 * 4);
  *(uint *)(*(int *)&this_ptr->field_0x8 + index2 * 4) = uVar1;
  return;
}
