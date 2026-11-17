// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0047c770
// Address: 0047c770
// Address Range: [[0047c770, 0047c7c6]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770(CEditorTools *this_ptr,uint flags)

{
  while (0 < g_INT_01c5b104) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(this_ptr);
  }
  if (g_CHAR_PTR_01c5b0e8 == (char *)0x0) {
    return this_ptr;
  }
  debugFree(g_CHAR_PTR_01c5b0e8);
  g_CHAR_PTR_01c5b0e8 = (char *)0x0;
  return this_ptr;
}
