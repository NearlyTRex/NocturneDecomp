// Name: engine_font.cpp_CBitFont_drawTextWrapper_FUN_00490af0
// Address: 00490af0
// Address Range: [[00490af0, 00490b1e]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_drawText_FUN_00490980(this_ptr,text,x,y,color_mode,color_value);
  return iVar1;
}
