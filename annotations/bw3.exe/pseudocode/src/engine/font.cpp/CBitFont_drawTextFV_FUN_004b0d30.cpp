// Name: engine_font.cpp_CBitFont_drawTextFV_FUN_004b0d30
// Address: 004b0d30
// Address Range: [[004b0d30, 004b0d94]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004b0d30(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextFV_FUN_004b0d30(CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string,va_list_t args)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,args.value[0]);
  iVar1 = engine_font_cpp_CBitFont_drawTextWrapper_FUN_004b0cb0
                    (this_ptr,x_pos,y_pos,color_mode,color_value,acStack_1010);
  return iVar1;
}
