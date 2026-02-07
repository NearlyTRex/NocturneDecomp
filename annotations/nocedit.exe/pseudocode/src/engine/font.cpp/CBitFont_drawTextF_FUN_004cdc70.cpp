// Name: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// Address: 004cdc70
// Address Range: [[004cdc70, 004cdcd4]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70 (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string ,va_list_t args)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,va_list_t args)

{
  int iVar1;
  char local_1010 [4096];
  
  vsprintf(local_1010,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextWrapper_FUN_004cdbf0
                    (this_ptr,x_pos,y_pos,color_mode,color_value,local_1010);
  return iVar1;
}
