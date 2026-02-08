// Name: engine_font.cpp_CBitFont_printfRightF_FUN_004cdd70
// Address: 004cdd70
// Address Range: [[004cdd70, 004cddd4]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_printfRightF_FUN_004cdd70 (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args )

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRightF_FUN_004cdd70
          (CBitFont *this_ptr,int x,int y,int color_mode,int color_value,char *format,va_list_t args
          )

{
  char local_1010 [4096];
  
  _vsprintf(local_1010,format,args);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            (this_ptr,x,y,color_mode,color_value,local_1010);
  return;
}
