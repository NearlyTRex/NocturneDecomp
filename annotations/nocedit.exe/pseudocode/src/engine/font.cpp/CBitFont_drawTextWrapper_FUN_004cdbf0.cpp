// Name: engine_font.cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
// Address: 004cdbf0
// Address Range: [[004cdbf0, 004cdc1e]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextWrapper_FUN_004cdbf0 (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
          (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_drawText_FUN_004cda80(this_ptr,text,x,y,color_mode,color_value);
  return iVar1;
}
