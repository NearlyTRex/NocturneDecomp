// Name: engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
// Address: 004cdde0
// Address Range: [[004cdde0, 004cde1f]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, int color_value, char * text_string)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
          (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(y_pos - iVar1 / 2),color_mode,color_value,(int)text_string,
                     unaff_ESI);
  return iVar1;
}
