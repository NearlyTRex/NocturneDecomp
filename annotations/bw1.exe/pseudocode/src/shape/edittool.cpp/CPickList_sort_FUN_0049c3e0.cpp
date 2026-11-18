// Name: shape_edittool.cpp_CPickList_sort_FUN_0049c3e0
// Address: 0049c3e0
// Address Range: [[0049c3e0, 0049c465]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_sort_FUN_0049c3e0(CPickList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_sort_FUN_0049c3e0(CPickList *this_ptr,int start_index,int end_index)

{
  char **ppcVar1;
  int iVar2;
  int index1;
  int iVar3;
  
  if ((this_ptr->enabled_capacity <= start_index) && (this_ptr->hotkey_capacity <= start_index)) {
    shape_edittool_cpp_CStrList_sort_FUN_00499830(&this_ptr->base,start_index,end_index);
    return;
  }
  for (; start_index < end_index; end_index = end_index + -1) {
    if (start_index < end_index) {
      iVar3 = start_index * 4;
      index1 = start_index;
      do {
        ppcVar1 = (this_ptr->base).data_array;
        iVar2 = _stricmp
                          (*(char **)(iVar3 + (int)ppcVar1),*(char **)(iVar3 + 4 + (int)ppcVar1));
        if (0 < iVar2) {
          (*((this_ptr->base).vtable._us)->swap)(&this_ptr->base,index1,index1 + 1);
        }
        index1 = index1 + 1;
        iVar3 = iVar3 + 4;
      } while (index1 < end_index);
    }
  }
  return;
}
