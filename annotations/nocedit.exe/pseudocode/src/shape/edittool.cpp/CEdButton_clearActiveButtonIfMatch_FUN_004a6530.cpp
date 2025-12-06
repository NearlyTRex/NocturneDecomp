// Name: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530
// Address: 004a6530
// Address Range: [[004a6530, 004a6540]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(CEdButton * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(CEdButton *this_ptr)

{
  if (this_ptr != g_ActiveButton) {
    return;
  }
  g_ActiveButton = (CEdButton *)0x0;
  return;
}
