// Name: engine_font.cpp_CBitFont_printCenterF_FUN_00490f50
// Address: 00490f50
// Address Range: [[00490f50, 00490f8e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_00490f50(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_00490f50(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format)

{
  byte *local_14;
  
  local_14 = &stack0x00000018;
  engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90
            (this_ptr,y,color_mode,color_value,format,(va_list_t)&local_14);
  return;
}
