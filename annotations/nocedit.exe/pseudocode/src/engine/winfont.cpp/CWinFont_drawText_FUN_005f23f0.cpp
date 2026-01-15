// Name: engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0
// Address: 005f23f0
// Address Range: [[005f23f0, 005f2438]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0(CWinFont * this_ptr, int x_position, int y_position, char * text_string, int text_color, int draw_flags)

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_drawText_FUN_005f23f0
          (CWinFont *this_ptr,int x_position,int y_position,char *text_string,int text_color,
          int draw_flags)

{
  int iVar1;
  
  iVar1 = engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860(this_ptr,-1,-1);
  if (iVar1 == 0) {
    return 0;
  }
  engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440
            (this_ptr,this_ptr->deviceContextHandle,x_position,y_position,text_string,text_color,
             draw_flags);
  return 0;
}
