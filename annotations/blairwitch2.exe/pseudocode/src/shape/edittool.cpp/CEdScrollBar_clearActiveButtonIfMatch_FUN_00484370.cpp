// Name: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370
// Address: 00484370
// Address Range: [[00484370, 00484385]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370(CEdScrollBar *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_00484370(CEdScrollBar *this_ptr)

{
  if (this_ptr != (CEdScrollBar *)g_ActiveControl) {
    return;
  }
  g_ActiveControl = (byte *)0x0;
  return;
}
