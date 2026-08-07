// Name: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0
// Address: 00490ef0
// Address Range: [[00490ef0, 00490f40]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_00490ef0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_ClipLeft + g_ClipRight;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(this_ptr,text);
  iVar1 = engine_font_cpp_CBitFont_drawTextWrapper_FUN_00490af0
                    (this_ptr,((iVar2 + 1) - iVar1) / 2,y,color_mode,color_value,text);
  return iVar1;
}
