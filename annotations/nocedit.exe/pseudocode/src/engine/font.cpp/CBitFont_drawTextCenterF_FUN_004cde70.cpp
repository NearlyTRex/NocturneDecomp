// Name: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
// Address: 004cde70
// Address Range: [[004cde70, 004cded4]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70
          (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,
          char *format_string,va_list_t *args)

{
  int iVar1;
  char local_1010 [4096];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(local_1010,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
                    (this_ptr,center_x,y_pos,color_mode,color_value,local_1010);
  return iVar1;
}
