// Name: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
// Address: 004a6b50
// Address Range: [[004a6b50, 004a6b60]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck *this_ptr)

{
  if (this_ptr != (CEdCheck *)g_ActiveButton) {
    return;
  }
  g_ActiveButton = (CEdButton *)0x0;
  return;
}
