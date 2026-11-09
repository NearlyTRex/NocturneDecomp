// Name: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0
// Address: 00485ec0
// Address Range: [[00485ec0, 00485eea]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar *this_ptr)

{
  if (*(int *)(this_ptr + 4) - *(int *)(this_ptr + 8) < *(int *)this_ptr) {
    *(int *)this_ptr = *(int *)(this_ptr + 4) - *(int *)(this_ptr + 8);
    if (-1 < *(int *)this_ptr) {
      return;
    }
  }
  else if (-1 < *(int *)this_ptr) {
    return;
  }
  *(uint *)this_ptr = 0;
  return;
}
