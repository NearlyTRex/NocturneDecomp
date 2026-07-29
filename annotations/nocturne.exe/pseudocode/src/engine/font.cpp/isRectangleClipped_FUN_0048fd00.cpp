// Name: engine_font.cpp_isRectangleClipped_FUN_0048fd00
// Address: 0048fd00
// Address Range: [[0048fd00, 0048fd46]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_isRectangleClipped_FUN_0048fd00(int rect_width,int rect_height,int rect_x,int rect_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_isRectangleClipped_FUN_0048fd00(int rect_width,int rect_height,int rect_x,int rect_y)

{
  if ((((_DAT_01c00c58 <= rect_x) && (_DAT_01c00c5c <= rect_y)) &&
      (rect_x <= (_DAT_01c00c60 + 1) - rect_width)) && (rect_y <= (_DAT_01c00c64 + 1) - rect_height)
     ) {
    return 0;
  }
  return 1;
}
