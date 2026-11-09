// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440
// Address: 004a9440
// Address Range: [[004a9440, 004a94ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,undefined4 format_string,undefined4 param_8)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004a9440(CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,uint format_string,uint param_8)

{
  int iVar1;
  char local_1010 [4096];
  
  _vsprintf(local_1010,format_string,param_8);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004a93a0
                    (this_ptr,left_x,right_x,y_pos,color_mode,color_value,local_1010);
  return iVar1;
}
