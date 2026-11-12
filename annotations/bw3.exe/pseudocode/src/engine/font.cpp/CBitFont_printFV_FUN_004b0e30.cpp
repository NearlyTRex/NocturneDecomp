// Name: engine_font.cpp_CBitFont_printFV_FUN_004b0e30
// Address: 004b0e30
// Address Range: [[004b0e30, 004b0e94]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printFV_FUN_004b0e30(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printFV_FUN_004b0e30(CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args)

{
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format,args);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004b0da0
            (this_ptr,x,y,color_mode,color_value,acStack_1010);
  return;
}
