// Name: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00481f00
// Address: 00481f00
// Address Range: [[00481f00, 00481f1e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00481f00(CEditorTools *this_ptr,int enable)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00481f00(CEditorTools *this_ptr,int enable)

{
  g_INT_01c5baec = enable;
  if (g_CBitFont_PTR_01c5b0e0 == (CBitFont *)0x0) {
    return;
  }
  engine_font_cpp_CBitFont_setAcceleration_FUN_004afbf0(g_CBitFont_PTR_01c5b0e0,enable);
  return;
}
