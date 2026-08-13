// Name: core_dlight.cpp_drawGrayscalePixel_FUN_0044ed50
// Address: 0044ed50
// Address Range: [[0044ed50, 0044ed7c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0044ed50(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0044ed50(int x,int y,int grayscale_value)

{
  *(int *)((int)g_ScreenBufferArray[y] + x * 4) = grayscale_value * 0x10101;
  return;
}
