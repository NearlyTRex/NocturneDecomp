// Name: engine_font.cpp_CBitFont_drawTextCenter_FUN_004b0ea0
// Address: 004b0ea0
// Address Range: [[004b0ea0, 004b0edf]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenter_FUN_004b0ea0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_FUN_004b2a80(this_ptr,text);
  iVar1 = engine_font_cpp_FUN_004b0cb0(this_ptr,x - iVar1 / 2,y,color_mode,color_value,text);
  return iVar1;
}
