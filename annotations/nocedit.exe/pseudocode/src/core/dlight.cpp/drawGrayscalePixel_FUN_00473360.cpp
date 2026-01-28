// Name: core_dlight.cpp_drawGrayscalePixel_FUN_00473360
// Address: 00473360
// Address Range: [[00473360, 0047338c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00473360(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00473360(int x,int y,int grayscale_value)

{
  *(int *)((int)g_ScreenBufferArray[y] + x * 4) = grayscale_value * 0x10101;
  return;
}
