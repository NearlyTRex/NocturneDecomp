// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
// Address: 004cdd70
// Address Range: [[004cdd70, 004cddd4]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd70 (CBitFont *font_ptr,int x,int y,int color,char *format,...)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRight_FUN_004cdd70
          (CBitFont *font_ptr,int x,int y,int color,char *format,...)

{
  char *in_stack_00000018;
  va_list_t *in_stack_0000001c;
  char local_1010 [4096];
  
  vsprintf(local_1010,in_stack_00000018,in_stack_0000001c);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0(font_ptr,x,y,color,(int)format,local_1010);
  return;
}
