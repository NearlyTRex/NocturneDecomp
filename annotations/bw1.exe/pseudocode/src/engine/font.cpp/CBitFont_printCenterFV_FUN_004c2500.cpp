// Name: engine_font.cpp_CBitFont_printCenterFV_FUN_004c2500
// Address: 004c2500
// Address Range: [[004c2500, 004c255c]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004c2500(CBitFont *this_ptr,int y,int color_mode,int color_value,undefined4 format_string,undefined4 param_6)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004c2500(CBitFont *this_ptr,int y,int color_mode,int color_value,uint format_string,uint param_6)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,param_6);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004c2460
                    (this_ptr,y,color_mode,color_value,acStack_1010);
  return iVar1;
}
