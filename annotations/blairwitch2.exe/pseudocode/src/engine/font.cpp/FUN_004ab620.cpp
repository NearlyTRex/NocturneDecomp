// Name: engine_font.cpp_FUN_004ab620
// Address: 004ab620
// Address Range: [[004ab620, 004ab62e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004ab620(CBitFont *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004ab620(CBitFont *this_ptr,int value)

{
  *(int *)(this_ptr + 0x4204) = value;
  return;
}
