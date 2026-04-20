// Name: core_setdir.cpp_setPixelGrayscale_FUN_005748a0
// Address: 005748a0
// MANUAL RECONSTRUCTION
// Address Range: [[005748a0, 005748cc]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005748a0(int x,int y,int grayscale_value)

#include "nocturne.h"

void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005748a0(int x,int y,int grayscale_value)

{
  ((int *)g_ScreenBufferArray[y])[x] = grayscale_value * 0x10101;
  return;
}
