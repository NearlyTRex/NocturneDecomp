// Name: core_setdir.cpp_setPixelGrayscale_FUN_005383fe
// Address: 005383fe
// Address Range: [[005383fe, 0053842c]]
// Convention: unknown
// Signature: void core_setdir_cpp_setPixelGrayscale_FUN_005383fe(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_setdir_cpp_setPixelGrayscale_FUN_005383fe(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01c2a38c + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
