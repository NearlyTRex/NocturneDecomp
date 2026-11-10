// Name: engine_font.cpp_CBitFont_getCharWidth_FUN_004c44e0
// Address: 004c44e0
// Address Range: [[004c44e0, 004c4501]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004c44e0(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharWidth_FUN_004c44e0(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return *(int *)(this_ptr + char_code * 4 + 0x35e8);
  }
  return 0;
}
