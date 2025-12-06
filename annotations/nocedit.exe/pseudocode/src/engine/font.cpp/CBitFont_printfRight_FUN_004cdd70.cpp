// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
// Address: 004cdd70
// Address Range: [[004cdd70, 004cddd4]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_printfRight_FUN_004cdd70(CBitFont * font_ptr, int x, int y, int color, char * format, ...)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRight_FUN_004cdd70
          (CBitFont *font_ptr,int x,int y,int color,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000018;
  va_list_t *in_stack_0000001c;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,in_stack_00000018,in_stack_0000001c);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            ((CBitFont *)x,y,color,(int)format,(int)in_stack_00000018,acStack_100c);
  return;
}
