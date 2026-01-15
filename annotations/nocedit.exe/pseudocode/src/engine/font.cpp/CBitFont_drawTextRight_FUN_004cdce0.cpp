// Name: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
// Address: 004cdce0
// Address Range: [[004cdce0, 004cdd19]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int right_edge_x, int y_pos, int color_mode, int color_value, char * text_string)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
          (CBitFont *this_ptr,int right_edge_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)((right_edge_x - iVar1) + 1),y_pos,color_mode,color_value,
                     (int)text_string);
  return iVar1;
}
