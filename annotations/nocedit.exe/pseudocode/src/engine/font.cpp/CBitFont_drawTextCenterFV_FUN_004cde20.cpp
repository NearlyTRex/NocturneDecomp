// Name: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20
// Address: 004cde20
// Address Range: [[004cde20, 004cde63]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004cde20 (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,...)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004cde20
          (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format_string,...)

{
  int iVar1;
  byte *local_14;
  
  local_14 = &stack0x0000001c;
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70
                    (this_ptr,x,y,color_mode,color_value,format_string,(va_list_t)&local_14);
  return iVar1;
}
