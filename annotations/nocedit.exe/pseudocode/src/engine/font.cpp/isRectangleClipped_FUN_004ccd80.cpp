// Name: engine_font.cpp_isRectangleClipped_FUN_004ccd80
// Address: 004ccd80
// Address Range: [[004ccd80, 004ccdc6]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_isRectangleClipped_FUN_004ccd80 (int rect_width,int rect_height,int rect_x,int rect_y)

#include "nocturne.h"

int __cdecl
engine_font_cpp_isRectangleClipped_FUN_004ccd80
          (int rect_width,int rect_height,int rect_x,int rect_y)

{
  if ((((g_ClipLeft <= rect_x) && (g_ClipTop <= rect_y)) &&
      (rect_x <= (g_ClipRight + 1) - rect_width)) && (rect_y <= (g_ClipBottom + 1) - rect_height)) {
    return 0;
  }
  return 1;
}
