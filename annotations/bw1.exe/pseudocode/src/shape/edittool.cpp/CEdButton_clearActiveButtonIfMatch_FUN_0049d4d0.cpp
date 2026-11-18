// Name: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_0049d4d0
// Address: 0049d4d0
// Address Range: [[0049d4d0, 0049d4e0]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_0049d4d0(CEdButton *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_0049d4d0(CEdButton *this_ptr)

{
  if (this_ptr != (CEdButton *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
