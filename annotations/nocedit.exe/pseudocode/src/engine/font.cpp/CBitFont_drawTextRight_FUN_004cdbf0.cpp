// Name: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
// Address: 004cdbf0
// Address Range: [[004cdbf0, 004cdc1e]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, int color_mode, int color_value)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
          (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,(char *)color_value,(int)text_string,x_pos,y_pos,color_mode);
  return iVar1;
}
