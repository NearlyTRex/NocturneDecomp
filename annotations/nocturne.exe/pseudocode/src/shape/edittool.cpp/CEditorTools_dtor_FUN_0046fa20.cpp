// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0046fa20
// Address: 0046fa20
// Address Range: [[0046fa20, 0046fa76]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0046fa20(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0046fa20(CEditorTools *this_ptr,uint flags)

{
  while (0 < _DAT_01bcd07c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(this_ptr);
  }
  if (_DAT_01bcd078 == (void *)0x0) {
    return this_ptr;
  }
  free(_DAT_01bcd078);
  _DAT_01bcd078 = (void *)0x0;
  return this_ptr;
}
