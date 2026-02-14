// Name: engine_font.cpp_clipCharacter_FUN_004ccdd0
// Address: 004ccdd0
// Address Range: [[004ccdd0, 004cce82]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_clipCharacter_FUN_004ccdd0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

#include "nocturne.h"

int __cdecl engine_font_cpp_clipCharacter_FUN_004ccdd0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

{
  if (*left_x < g_ClipLeft) {
    if (*right_x < g_ClipLeft) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (g_ClipLeft - *left_x);
    *left_x = g_ClipLeft;
  }
  if (g_ClipRight < *right_x) {
    if (g_ClipRight < *left_x) {
      return 1;
    }
    *right_x = g_ClipRight;
  }
  if (*top_y < g_ClipTop) {
    if (*bottom_y < g_ClipTop) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (g_ClipTop - *top_y) * bitmap_width;
    *top_y = g_ClipTop;
  }
  if (g_ClipBottom < *bottom_y) {
    if (g_ClipBottom < *top_y) {
      return 1;
    }
    *bottom_y = g_ClipBottom;
  }
  return 0;
}
