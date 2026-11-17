// Name: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570
// Address: 00485570
// Address Range: [[00485570, 00485585]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00485570(CEdScrollBar *this_ptr)

{
  if (this_ptr != (CEdScrollBar *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
