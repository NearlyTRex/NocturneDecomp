// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
// Address: 004cdf80
// Address Range: [[004cdf80, 004cdfec]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80(CBitFont * this_ptr, int left_x, int right_x, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
          (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,
          char *format_string,va_list_t *args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                    ((CBitFont *)left_x,right_x,y_pos,color_mode,color_value,(int)format_string,
                     acStack_100c);
  return iVar1;
}
