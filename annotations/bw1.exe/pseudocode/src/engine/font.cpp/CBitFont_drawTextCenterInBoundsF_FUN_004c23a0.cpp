// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0
// Address: 004c23a0
// Address Range: [[004c23a0, 004c23e8]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004c23a0(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)

{
  int iVar1;
  byte *local_14;
  
  local_14 = &stack0x00000020;
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004c23f0
                    (this_ptr,left_x,right_x,y,color_mode,color_value,format_string,&local_14);
  return iVar1;
}
