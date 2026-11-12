// Name: engine_font.cpp_CBitFont_printCenterFV_FUN_004a9550
// Address: 004a9550
// Address Range: [[004a9550, 004a95ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004a9550(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_printCenterFV_FUN_004a9550(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format_string,va_list_t args)

{
  int iVar1;
  char acStack_1010 [4096];
  
  _vsprintf(acStack_1010,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004a94b0
                    (this_ptr,y,color_mode,color_value,acStack_1010);
  return iVar1;
}
