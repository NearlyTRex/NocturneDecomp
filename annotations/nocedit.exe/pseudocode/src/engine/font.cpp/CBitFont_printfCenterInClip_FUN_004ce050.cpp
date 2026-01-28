// Name: engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050
// Address: 004ce050
// Address Range: [[004ce050, 004ce08e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printfCenterInClip_FUN_004ce050 (CBitFont *this_ptr,int x,int y,int color,char *format,...)

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfCenterInClip_FUN_004ce050
          (CBitFont *this_ptr,int x,int y,int color,char *format,...)

{
  va_list_t local_14;
  
  local_14 = &stack0x00000018;
  engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(this_ptr,x,y,color,format,&local_14);
  return;
}
