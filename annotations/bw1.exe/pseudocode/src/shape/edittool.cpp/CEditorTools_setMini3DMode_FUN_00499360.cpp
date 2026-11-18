// Name: shape_edittool.cpp_CEditorTools_setMini3DMode_FUN_00499360
// Address: 00499360
// Address Range: [[00499360, 0049937e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00499360(CEditorTools *this_ptr,int enable)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setMini3DMode_FUN_00499360(CEditorTools *this_ptr,int enable)

{
  g_INT_01c3f544 = enable;
  if (g_CBitFont_PTR_01c3eb50 == (CBitFont *)0x0) {
    return;
  }
  engine_font_cpp_CBitFont_setAcceleration_FUN_004c0fa0(g_CBitFont_PTR_01c3eb50,enable);
  return;
}
