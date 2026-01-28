// Name: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
// Address: 004cdee0
// Address Range: [[004cdee0, 004cdf2a]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value, char *text_string)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
          (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(((left_x + right_x + 1) - iVar1) / 2),y_pos,color_mode,
                     color_value,(int)text_string);
  return iVar1;
}
