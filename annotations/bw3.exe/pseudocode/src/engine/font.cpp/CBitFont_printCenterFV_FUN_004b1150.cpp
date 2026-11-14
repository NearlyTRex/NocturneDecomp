// Name: engine_font.cpp_CBitFont_printCenterFV_FUN_004b1150
// Address: 004b1150
// Address Range: [[004b1150, 004b11ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004b1150(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004b1150(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004b10b0
                    (this_ptr,y,color_mode,color_value,acStack_1010);
  return iVar1;
}
