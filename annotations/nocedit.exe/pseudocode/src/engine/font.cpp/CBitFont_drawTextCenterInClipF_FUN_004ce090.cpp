// Name: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
// Address: 004ce090
// Address Range: [[004ce090, 004ce0ec]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(CBitFont * this_ptr, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
          (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *format_string,
          va_list_t *args)

{
  int iVar1;
  char local_1010 [4096];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(local_1010,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
                    (this_ptr,y_pos,color_mode,color_value,local_1010);
  return iVar1;
}
