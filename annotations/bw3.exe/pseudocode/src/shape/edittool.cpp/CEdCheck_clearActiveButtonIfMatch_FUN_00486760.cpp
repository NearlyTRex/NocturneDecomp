// Name: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00486760
// Address: 00486760
// Address Range: [[00486760, 00486770]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00486760(CEdCheck *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_00486760(CEdCheck *this_ptr)

{
  if (this_ptr != (CEdCheck *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
