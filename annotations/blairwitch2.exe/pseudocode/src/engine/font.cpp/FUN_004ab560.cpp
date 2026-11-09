// Name: engine_font.cpp_FUN_004ab560
// Address: 004ab560
// Address Range: [[004ab560, 004ab587]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_FUN_004ab560(CBitFont *this_ptr,int char_code)

#include "nocturne.h"

int __cdecl engine_font_cpp_FUN_004ab560(CBitFont *this_ptr,int char_code)

{
  if ((-1 < char_code) && (char_code < 0x100)) {
    return *(int *)(this_ptr + char_code * 4 + 0x39e8) + *(int *)(this_ptr + char_code * 4 + 0x3de8)
    ;
  }
  return 0;
}
