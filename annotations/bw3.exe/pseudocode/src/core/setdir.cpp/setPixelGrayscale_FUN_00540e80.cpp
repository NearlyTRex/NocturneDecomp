// Name: core_setdir.cpp_setPixelGrayscale_FUN_00540e80
// Address: 00540e80
// Address Range: [[00540e80, 00540eac]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_00540e80(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_00540e80(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c5faec + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
