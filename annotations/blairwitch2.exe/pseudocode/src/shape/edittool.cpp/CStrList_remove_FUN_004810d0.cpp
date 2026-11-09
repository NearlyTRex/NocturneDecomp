// Name: shape_edittool.cpp_CStrList_remove_FUN_004810d0
// Address: 004810d0
// Address Range: [[004810d0, 00481181]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004810d0(CStrList *this_ptr,int start_index,int end_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004810d0(CStrList *this_ptr,int start_index,int end_index)

{
  int iVar1;
  int iVar2;
  
  if (((start_index < 0) || (*(int *)this_ptr <= end_index)) || (end_index < start_index)) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xbfb;
    core_main_c_FUN_004e4500("CStrList::remove - invalid range");
  }
  if (start_index <= end_index) {
    iVar2 = start_index * 4;
    do {
      iVar1 = *(int *)(*(int *)&this_ptr->field_0x8 + iVar2);
      if (iVar1 != 0) {
        FUN_005b86a0(iVar1);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 <= end_index * 4);
  }
  iVar2 = *(int *)this_ptr - ((end_index - start_index) + 1);
  *(int *)this_ptr = iVar2;
  memmove
            ((void *)(*(int *)&this_ptr->field_0x8 + start_index * 4),
             (void *)(end_index * 4 + 4 + *(int *)&this_ptr->field_0x8),(iVar2 - start_index) * 4);
  return;
}
