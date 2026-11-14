// Name: core_dlight.cpp_drawGrayscalePixel_FUN_0044a900
// Address: 0044a900
// Address Range: [[0044a900, 0044a92c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0044a900(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0044a900(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
