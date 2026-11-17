// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_00493bd0
// Address: 00493bd0
// Address Range: [[00493bd0, 00493c26]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0(CEditorTools *this_ptr,uint flags)

{
  while (0 < g_INT_01c3eb5c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(this_ptr);
  }
  if (g_CHAR_PTR_01c3eb58 == (char *)0x0) {
    return this_ptr;
  }
  debugFree(g_CHAR_PTR_01c3eb58);
  g_CHAR_PTR_01c3eb58 = (char *)0x0;
  return this_ptr;
}
