// Name: engine_font.cpp_CBitFont_drawTextF_FUN_004a90e0
// Address: 004a90e0
// Address Range: [[004a90e0, 004a9123]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004a90e0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_drawTextF_FUN_004a90e0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string)

{
  int iVar1;
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  iVar1 = engine_font_cpp_CBitFont_drawTextFV_FUN_004a9130
                    (this_ptr,x,y,color_mode,color_value,format_string,(va_list_t)&puStack_14);
  return iVar1;
}
