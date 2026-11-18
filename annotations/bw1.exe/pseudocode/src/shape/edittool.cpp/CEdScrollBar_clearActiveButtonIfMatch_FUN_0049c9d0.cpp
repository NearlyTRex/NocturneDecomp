// Name: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0
// Address: 0049c9d0
// Address Range: [[0049c9d0, 0049c9e5]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_0049c9d0(CEdScrollBar *this_ptr)

{
  if (this_ptr != (CEdScrollBar *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
