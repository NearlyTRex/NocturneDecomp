// Name: engine_font.cpp_CBitFont_printCenterF_FUN_004ce050
// Address: 004ce050
// Address Range: [[004ce050, 004ce08e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_004ce050(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format,...)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_printCenterF_FUN_004ce050(CBitFont *this_ptr,int y,int color_mode,int color_value,char *format,...)

{
  va_list_t local_14;
  
  VA_START_T(local_14, format);
  engine_font_cpp_CBitFont_printCenterFV_FUN_004ce090
            (this_ptr,y,color_mode,color_value,format,local_14);
  return;
}
