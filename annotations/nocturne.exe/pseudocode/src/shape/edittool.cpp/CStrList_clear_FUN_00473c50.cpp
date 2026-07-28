// Name: shape_edittool.cpp_CStrList_clear_FUN_00473c50
// Address: 00473c50
// Address Range: [[00473c50, 00473caa]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->data_array != (char **)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->item_count) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)((int)this_ptr->data_array + iVar3);
        if (iVar1 != 0) {
          FUN_005638d0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->item_count);
    }
    FUN_005638d0(this_ptr->data_array);
  }
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->item_count = 0;
  return;
}
