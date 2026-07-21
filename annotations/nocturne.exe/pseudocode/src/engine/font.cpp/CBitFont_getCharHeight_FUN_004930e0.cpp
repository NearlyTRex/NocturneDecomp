// Name: engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
// Address: 004930e0
// Address Range: [[004930e0, 00493107]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(int param_1,int param_2)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    param_1 = param_1 + param_2 * 4;
    return *(int *)(param_1 + 0x2968) + *(int *)(param_1 + 0x2d68);
  }
  return 0;
}
