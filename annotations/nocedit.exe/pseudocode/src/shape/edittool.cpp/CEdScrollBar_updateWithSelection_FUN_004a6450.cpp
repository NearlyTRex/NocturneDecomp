// Name: shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
// Address: 004a6450
// Address Range: [[004a6450, 004a6485]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (CEdScrollBar *this_ptr,int *selection_index_ptr)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
          (CEdScrollBar *this_ptr,int *selection_index_ptr)

{
  shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0(this_ptr,selection_index_ptr);
  shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420(this_ptr,*selection_index_ptr);
  shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(this_ptr);
  shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0(this_ptr,selection_index_ptr);
  return;
}
