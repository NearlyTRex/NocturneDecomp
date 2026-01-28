// Name: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// Address: 004cdc70
// Address Range: [[004cdc70, 004cdcd4]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,...)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,...)

{
  int iVar1;
  va_list_t *in_stack_0000001c;
  char local_1010 [4096];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(local_1010,format_string,in_stack_0000001c);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)x_pos,y_pos,color_mode,color_value,(int)local_1010);
  return iVar1;
}
