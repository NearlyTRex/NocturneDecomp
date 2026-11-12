// Name: engine_font.cpp_CBitFont_printF_FUN_004b0de0
// Address: 004b0de0
// Address Range: [[004b0de0, 004b0e23]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printF_FUN_004b0de0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printF_FUN_004b0de0(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

{
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  engine_font_cpp_CBitFont_printFV_FUN_004b0e30
            (this_ptr,x,y,color_mode,color_value,format,(va_list_t)&puStack_14);
  return;
}
