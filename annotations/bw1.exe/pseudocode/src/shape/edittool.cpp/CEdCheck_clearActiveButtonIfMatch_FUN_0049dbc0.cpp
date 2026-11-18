// Name: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_0049dbc0
// Address: 0049dbc0
// Address Range: [[0049dbc0, 0049dbd0]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_0049dbc0(CEdCheck *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_0049dbc0(CEdCheck *this_ptr)

{
  if (this_ptr != (CEdCheck *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
