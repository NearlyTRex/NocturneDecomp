// Name: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00484e70
// Address: 00484e70
// Address Range: [[00484e70, 00484e80]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_00484e70(CEdButton *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_00484e70(CEdButton *this_ptr)

{
  if (this_ptr != (CEdButton *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
