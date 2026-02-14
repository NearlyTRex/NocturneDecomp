// Name: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
// Address: 004cdc20
// Address Range: [[004cdc20, 004cdc63]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,... )

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,... )

{
  int iVar1;
  va_list_t local_14;
  
  local_14.value[0] = (char * [1])&stack0x0000001c;
  iVar1 = engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
                    (this_ptr,x,y,color_mode,color_value,format_string,(va_list_t)&local_14);
  return iVar1;
}
