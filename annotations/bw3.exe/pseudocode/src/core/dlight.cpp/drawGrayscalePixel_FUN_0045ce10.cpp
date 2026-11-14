// Name: core_dlight.cpp_drawGrayscalePixel_FUN_0045ce10
// Address: 0045ce10
// Address Range: [[0045ce10, 0045ce3c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0045ce10(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0045ce10(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c5faec + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
