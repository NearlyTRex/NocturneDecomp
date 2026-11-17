// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0046fa20
// Address: 0046fa20
// Address Range: [[0046fa20, 0046fa76]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0046fa20(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0046fa20(CEditorTools *this_ptr,uint flags)

{
  while (0 < g_INT_01bcd07c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(this_ptr);
  }
  if (g_CHAR_PTR_01bcd078 == (char *)0x0) {
    return this_ptr;
  }
  free(g_CHAR_PTR_01bcd078);
  g_CHAR_PTR_01bcd078 = (char *)0x0;
  return this_ptr;
}
