// Name: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00485560
// Address: 00485560
// Address Range: [[00485560, 00485570]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00485560(CEdCheck *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00485560(CEdCheck *this_ptr)

{
  if (this_ptr != (CEdCheck *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
