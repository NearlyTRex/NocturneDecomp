// Name: shape_edittool.cpp_CStrList_clear_FUN_00473c50
// Address: 00473c50
// Address Range: [[00473c50, 00473caa]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (this_ptr->data_array != (char **)0x0) {
    iVar1 = 0;
    if (0 < this_ptr->item_count) {
      iVar2 = 0;
      do {
        ptr = *(void **)((int)this_ptr->data_array + iVar2);
        if (ptr != (void *)0x0) {
          free(ptr);
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < this_ptr->item_count);
    }
    free(this_ptr->data_array);
  }
  this_ptr->data_array = (char **)0x0;
  this_ptr->capacity = 0;
  this_ptr->item_count = 0;
  return;
}
