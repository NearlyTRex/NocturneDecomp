// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30
// Address: 00490e30
// Address Range: [[00490e30, 00490e78]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_00490e30(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string)

{
  int iVar1;
  byte *local_14;
  
  local_14 = &stack0x00000020;
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_00490e80
                    (this_ptr,left_x,right_x,y,color_mode,color_value,format_string,
                     (va_list_t)&local_14);
  return iVar1;
}
