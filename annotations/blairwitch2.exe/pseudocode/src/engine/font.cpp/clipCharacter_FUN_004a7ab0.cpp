// Name: engine_font.cpp_clipCharacter_FUN_004a7ab0
// Address: 004a7ab0
// Address Range: [[004a7ab0, 004a7b62]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_clipCharacter_FUN_004a7ab0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_clipCharacter_FUN_004a7ab0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

{
  if (*left_x < _DAT_01c35e48) {
    if (*right_x < _DAT_01c35e48) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c35e48 - *left_x);
    *left_x = _DAT_01c35e48;
  }
  if (_DAT_01c35e50 < *right_x) {
    if (_DAT_01c35e50 < *left_x) {
      return 1;
    }
    *right_x = _DAT_01c35e50;
  }
  if (*top_y < _DAT_01c35e4c) {
    if (*bottom_y < _DAT_01c35e4c) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c35e4c - *top_y) * bitmap_width;
    *top_y = _DAT_01c35e4c;
  }
  if (_DAT_01c35e54 < *bottom_y) {
    if (_DAT_01c35e54 < *top_y) {
      return 1;
    }
    *bottom_y = _DAT_01c35e54;
  }
  return 0;
}
