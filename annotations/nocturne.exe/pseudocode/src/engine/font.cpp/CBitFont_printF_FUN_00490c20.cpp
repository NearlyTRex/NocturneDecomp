// Name: engine_font.cpp_CBitFont_printF_FUN_00490c20
// Address: 00490c20
// Address Range: [[00490c20, 00490c63]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printF_FUN_00490c20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printF_FUN_00490c20(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format)

{
  byte *local_14;
  
  local_14 = &stack0x0000001c;
  engine_font_cpp_CBitFont_FUN_00490c70
            (this_ptr,x,y,color_mode,color_value,format,(va_list_t)&local_14);
  return;
}
