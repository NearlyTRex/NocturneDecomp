// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0047b690
// Address: 0047b690
// Address Range: [[0047b690, 0047b6e6]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690(CEditorTools *this_ptr,uint flags)

{
  while (0 < g_INT_01c2559c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(this_ptr);
  }
  if (g_CHAR_PTR_01c25598 == (char *)0x0) {
    return this_ptr;
  }
  debugFree(g_CHAR_PTR_01c25598);
  g_CHAR_PTR_01c25598 = (char *)0x0;
  return this_ptr;
}
