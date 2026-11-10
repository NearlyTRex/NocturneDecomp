// Name: engine_font.cpp_CBitFont_getCharYOffset_FUN_004ab590
// Address: 004ab590
// Address Range: [[004ab590, 004ab5b1]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004ab590(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharYOffset_FUN_004ab590(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return *(int *)(this_ptr + char_code * 4 + 0x3de8);
  }
  return 0;
}
