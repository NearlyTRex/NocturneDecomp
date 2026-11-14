// Name: core_setdir.cpp_setPixelGrayscale_FUN_0055b4c0
// Address: 0055b4c0
// Address Range: [[0055b4c0, 0055b4ec]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_0055b4c0(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_0055b4c0(int x,int y,int grayscale_value)

{
  *(int *)(*(int *)(&DAT_01c4354c + y * 4) + x * 4) = grayscale_value * 0x10101;
  return;
}
