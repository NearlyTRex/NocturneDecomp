// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0047b690
// Address: 0047b690
// Address Range: [[0047b690, 0047b6e6]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047b690(CEditorTools *this_ptr,uint flags)

{
  while (0 < _DAT_01c2559c) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(this_ptr);
  }
  if (_DAT_01c25598 == 0) {
    return this_ptr;
  }
  FUN_005b86a0(_DAT_01c25598);
  _DAT_01c25598 = 0;
  return this_ptr;
}
