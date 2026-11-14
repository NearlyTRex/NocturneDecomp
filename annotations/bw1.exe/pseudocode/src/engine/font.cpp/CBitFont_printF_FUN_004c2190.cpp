// Name: engine_font.cpp_CBitFont_printF_FUN_004c2190
// Address: 004c2190
// Address Range: [[004c2190, 004c21d3]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printF_FUN_004c2190(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printF_FUN_004c2190(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

{
  byte *puStack_14;
  
  puStack_14 = &stack0x0000001c;
  engine_font_cpp_CBitFont_printFV_FUN_004c21e0
            (this_ptr,x,y,color_mode,color_value,format,(va_list_t)&puStack_14);
  return;
}
