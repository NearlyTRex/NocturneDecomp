// Name: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00480d00
// Address: 00480d00
// Address Range: [[00480d00, 00480d1e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00480d00(CEditorTools *this_ptr,int enable)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00480d00(CEditorTools *this_ptr,int enable)

{
  _DAT_01c25f84 = enable;
  if (_DAT_01c25590 == (CBitFont *)0x0) {
    return;
  }
  engine_font_cpp_CBitFont_setAcceleration_FUN_004a7fd0(_DAT_01c25590,enable);
  return;
}
