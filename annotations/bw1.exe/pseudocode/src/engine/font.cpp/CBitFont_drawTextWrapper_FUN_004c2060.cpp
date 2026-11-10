// Name: engine_font.cpp_CBitFont_drawTextWrapper_FUN_004c2060
// Address: 004c2060
// Address Range: [[004c2060, 004c208e]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_004c2060(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_004c2060(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_FUN_004c1dd0(this_ptr,text,x,y,color_mode,color_value);
  return iVar1;
}
