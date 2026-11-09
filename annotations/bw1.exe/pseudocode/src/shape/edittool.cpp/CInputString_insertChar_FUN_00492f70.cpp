// Name: shape_edittool.cpp_CInputString_insertChar_FUN_00492f70
// Address: 00492f70
// Address Range: [[00492f70, 00492ff2]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_00492f70(CInputString *this_ptr,char character,int advance_cursor)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_00492f70(CInputString *this_ptr,char character,int advance_cursor)

{
  int iVar1;
  
  if (*(int *)(this_ptr + 0x134) < *(int *)(this_ptr + 300) + -1) {
    if (*(int *)(this_ptr + 0x130) < *(int *)(this_ptr + 300) + -1) {
      *(int *)(this_ptr + 0x130) = *(int *)(this_ptr + 0x130) + 1;
    }
    iVar1 = *(int *)(this_ptr + 0x134);
    memmove
              (this_ptr + iVar1 + 1,this_ptr + iVar1,*(int *)(this_ptr + 0x130) - iVar1);
    this_ptr[*(int *)(this_ptr + 0x134)] = (CInputString)character;
    if (advance_cursor != 0) {
      *(int *)(this_ptr + 0x134) = *(int *)(this_ptr + 0x134) + 1;
      this_ptr[*(int *)(this_ptr + 0x130)] = (CInputString)0x0;
      return;
    }
  }
  this_ptr[*(int *)(this_ptr + 0x130)] = (CInputString)0x0;
  return;
}
