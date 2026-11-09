// Name: engine_font.cpp_clipCharacter_FUN_004c0a80
// Address: 004c0a80
// Address Range: [[004c0a80, 004c0b32]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_clipCharacter_FUN_004c0a80(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_clipCharacter_FUN_004c0a80(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

{
  if (*left_x < _DAT_01c4f008) {
    if (*right_x < _DAT_01c4f008) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c4f008 - *left_x);
    *left_x = _DAT_01c4f008;
  }
  if (_DAT_01c4f010 < *right_x) {
    if (_DAT_01c4f010 < *left_x) {
      return 1;
    }
    *right_x = _DAT_01c4f010;
  }
  if (*top_y < _DAT_01c4f00c) {
    if (*bottom_y < _DAT_01c4f00c) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c4f00c - *top_y) * bitmap_width;
    *top_y = _DAT_01c4f00c;
  }
  if (_DAT_01c4f014 < *bottom_y) {
    if (_DAT_01c4f014 < *top_y) {
      return 1;
    }
    *bottom_y = _DAT_01c4f014;
  }
  return 0;
}
