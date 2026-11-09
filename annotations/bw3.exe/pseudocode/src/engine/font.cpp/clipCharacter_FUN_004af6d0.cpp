// Name: engine_font.cpp_clipCharacter_FUN_004af6d0
// Address: 004af6d0
// Address Range: [[004af6d0, 004af782]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_clipCharacter_FUN_004af6d0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_font_cpp_clipCharacter_FUN_004af6d0(int *bitmap_offset,int *left_x,int *top_y,int *right_x,int *bottom_y,int bitmap_width )

{
  if (*left_x < _DAT_01c6b5a8) {
    if (*right_x < _DAT_01c6b5a8) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c6b5a8 - *left_x);
    *left_x = _DAT_01c6b5a8;
  }
  if (_DAT_01c6b5b0 < *right_x) {
    if (_DAT_01c6b5b0 < *left_x) {
      return 1;
    }
    *right_x = _DAT_01c6b5b0;
  }
  if (*top_y < _DAT_01c6b5ac) {
    if (*bottom_y < _DAT_01c6b5ac) {
      return 1;
    }
    *bitmap_offset = *bitmap_offset + (_DAT_01c6b5ac - *top_y) * bitmap_width;
    *top_y = _DAT_01c6b5ac;
  }
  if (_DAT_01c6b5b4 < *bottom_y) {
    if (_DAT_01c6b5b4 < *top_y) {
      return 1;
    }
    *bottom_y = _DAT_01c6b5b4;
  }
  return 0;
}
