// Name: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
// Address: 004cdff0
// Address Range: [[004cdff0, 004ce040]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *text_string)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
          (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *text_string)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_ClipLeft + g_ClipRight;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(((iVar2 + 1) - iVar1) / 2),y_pos,color_mode,color_value,
                     (int)text_string);
  return iVar1;
}
