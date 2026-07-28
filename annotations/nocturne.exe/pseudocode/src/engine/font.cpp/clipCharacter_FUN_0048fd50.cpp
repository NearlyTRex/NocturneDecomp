// Name: engine_font.cpp_clipCharacter_FUN_0048fd50
// Address: 0048fd50
// Address Range: [[0048fd50, 0048fe02]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_clipCharacter_FUN_0048fd50(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_clipCharacter_FUN_0048fd50(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

{
  if (*left_x < _DAT_01c00c58) {
    if (*right_x < _DAT_01c00c58) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c00c58 - *left_x);
    *left_x = _DAT_01c00c58;
  }
  if (_DAT_01c00c60 < *right_x) {
    if (_DAT_01c00c60 < *left_x) {
      return 1;
    }
    *right_x = _DAT_01c00c60;
  }
  if (*top_y < _DAT_01c00c5c) {
    if (*bottom_y < _DAT_01c00c5c) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c00c5c - *top_y) * bitmap_width;
    *top_y = _DAT_01c00c5c;
  }
  if (_DAT_01c00c64 < *bottom_y) {
    if (_DAT_01c00c64 < *top_y) {
      return 1;
    }
    *bottom_y = _DAT_01c00c64;
  }
  return 0;
}
