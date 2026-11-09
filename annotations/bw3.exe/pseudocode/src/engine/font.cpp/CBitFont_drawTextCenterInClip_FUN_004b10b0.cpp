// Name: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0
// Address: 004b10b0
// Address Range: [[004b10b0, 004b1100]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c6b5a8 + _DAT_01c6b5b0;
  iVar1 = engine_font_cpp_FUN_004b2a80(this_ptr,text);
  iVar1 = engine_font_cpp_FUN_004b0cb0
                    (this_ptr,((iVar2 + 1) - iVar1) / 2,y,color_mode,color_value,text);
  return iVar1;
}
