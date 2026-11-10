// Name: engine_font.cpp_CBitFont_drawTextFV_FUN_004c20e0
// Address: 004c20e0
// Address Range: [[004c20e0, 004c2144]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004c20e0(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_7)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004c20e0(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,uint format_string,uint param_7)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,param_7);
  iVar1 = engine_font_cpp_CBitFont_drawTextWrapper_FUN_004c2060
                    (this_ptr,x_pos,y_pos,color_mode,color_value,acStack_1010);
  return iVar1;
}
