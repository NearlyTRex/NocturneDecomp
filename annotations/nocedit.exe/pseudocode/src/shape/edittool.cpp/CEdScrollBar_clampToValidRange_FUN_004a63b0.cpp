// Name: shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
// Address: 004a63b0
// Address Range: [[004a63b0, 004a63da]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0 (CEdScrollBar *this_ptr,int *value_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
          (CEdScrollBar *this_ptr,int *value_ptr)

{
  if (*value_ptr < this_ptr->current_value) {
    if (-1 < *value_ptr) {
      return;
    }
  }
  else {
    *value_ptr = this_ptr->current_value + -1;
    if (-1 < *value_ptr) {
      return;
    }
  }
  *value_ptr = 0;
  return;
}
