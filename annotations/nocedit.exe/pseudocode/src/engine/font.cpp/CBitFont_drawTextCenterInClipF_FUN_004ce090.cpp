// Name: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
// Address: 004ce090
// Address Range: [[004ce090, 004ce0ec]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(CBitFont * this_ptr, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
          (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *format_string,
          va_list_t *args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
                    ((CBitFont *)y_pos,color_mode,color_value,(int)format_string,acStack_100c);
  return iVar1;
}
