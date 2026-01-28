// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
// Address: 004cdd20
// Address Range: [[004cdd20, 004cdd63]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd20 (CBitFont *font_ptr,int x,int y,int color,char *format,...)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRight_FUN_004cdd20
          (CBitFont *font_ptr,int x,int y,int color,char *format,...)

{
  uint in_stack_00000018;
  byte *local_14;
  
  local_14 = &stack0x0000001c;
  engine_font_cpp_CBitFont_printfRight_FUN_004cdd70
            (font_ptr,x,y,color,format,in_stack_00000018,&local_14);
  return;
}
