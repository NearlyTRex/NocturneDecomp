// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
// Address: 004cdd20
// Address Range: [[004cdd20, 004cdd63]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd20(CBitFont *this_ptr,int x,int y,int color,char *format,...)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printfRight_FUN_004cdd20(CBitFont *this_ptr,int x,int y,int color,char *format,...)

{
  char *in_stack_00000018;
  va_list_t local_14;
  
  local_14.value[0] = (char * [1])&stack0x0000001c;
  engine_font_cpp_CBitFont_printfRightF_FUN_004cdd70
            (this_ptr,x,y,color,(int)format,in_stack_00000018,(va_list_t)&local_14);
  return;
}
