// Name: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// Address: 004cdc70
// Address Range: [[004cdc70, 004cdcd4]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, int color_value, char * format_string, ...)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  va_list_t *in_stack_0000001c;
  byte auStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,in_stack_0000001c);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    ((CBitFont *)x_pos,(char *)y_pos,color_mode,color_value,(int)format_string,
                     (int)auStack_100c);
  return iVar1;
}
