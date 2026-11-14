// Name: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460
// Address: 004c2460
// Address Range: [[004c2460, 004c24b0]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004c2460(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004c2460(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c4f008 + _DAT_01c4f010;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(this_ptr,text);
  iVar1 = engine_font_cpp_CBitFont_drawTextWrapper_FUN_004c2060
                    (this_ptr,((iVar2 + 1) - iVar1) / 2,y,color_mode,color_value,text);
  return iVar1;
}
