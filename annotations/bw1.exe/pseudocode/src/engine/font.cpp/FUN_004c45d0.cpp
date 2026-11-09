// Name: engine_font.cpp_FUN_004c45d0
// Address: 004c45d0
// Address Range: [[004c45d0, 004c45de]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004c45d0(CBitFont *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004c45d0(CBitFont *this_ptr,int value)

{
  *(int *)(this_ptr + 0x4204) = value;
  return;
}
