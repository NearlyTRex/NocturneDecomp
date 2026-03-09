// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30
// Address: 004cdf30
// Address Range: [[004cdf30, 004cdf78]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string,...)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf30(CBitFont *this_ptr,int left_x,int right_x,int y,int color_mode,int color_value,char *format_string,...)

{
  int iVar1;
  va_list_t local_14;
  
  VA_START_T(local_14, format_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf80
                    (this_ptr,left_x,right_x,y,color_mode,color_value,format_string,
                     local_14);
  return iVar1;
}
