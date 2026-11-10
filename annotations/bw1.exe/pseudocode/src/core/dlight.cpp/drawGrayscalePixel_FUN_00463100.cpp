// Name: core_dlight.cpp_drawGrayscalePixel_FUN_00463100
// Address: 00463100
// Address Range: [[00463100, 0046312c]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00463100(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00463100(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c4354c + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
