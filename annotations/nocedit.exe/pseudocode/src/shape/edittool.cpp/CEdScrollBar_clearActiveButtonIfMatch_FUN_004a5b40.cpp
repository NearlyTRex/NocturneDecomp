// Name: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
// Address: 004a5b40
// Address Range: [[004a5b40, 004a5b55]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar *this_ptr)

{
  if (this_ptr != g_ActiveControl) {
    return;
  }
  g_ActiveControl = (void *)0x0;
  return;
}
