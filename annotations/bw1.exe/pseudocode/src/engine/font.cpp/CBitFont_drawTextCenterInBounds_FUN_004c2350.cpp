// Name: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350
// Address: 004c2350
// Address Range: [[004c2350, 004c239a]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_FUN_004c3ea0(this_ptr,text);
  iVar1 = engine_font_cpp_FUN_004c2060
                    (this_ptr,((left_x + right_x + 1) - iVar1) / 2,y,color_mode,color_value,text);
  return iVar1;
}
