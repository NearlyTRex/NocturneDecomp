// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_00493bd0
// Address: 00493bd0
// Address Range: [[00493bd0, 00493c26]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_00493bd0(CEditorTools *this_ptr,uint flags)

{
  while (0 < _DAT_01c3eb5c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_00496df0(this_ptr);
  }
  if (_DAT_01c3eb58 == 0) {
    return this_ptr;
  }
  FUN_005c09f0(_DAT_01c3eb58);
  _DAT_01c3eb58 = 0;
  return this_ptr;
}
