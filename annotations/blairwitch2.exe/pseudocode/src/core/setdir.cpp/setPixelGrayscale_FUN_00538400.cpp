// Name: core_setdir.cpp_setPixelGrayscale_FUN_00538400
// Address: 00538400
// Address Range: [[00538400, 0053842c]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_00538400(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_00538400(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c2a38c + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
