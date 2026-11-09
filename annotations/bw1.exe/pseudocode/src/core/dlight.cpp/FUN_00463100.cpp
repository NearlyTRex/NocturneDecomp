// Name: core_dlight.cpp_FUN_00463100
// Address: 00463100
// Address Range: [[00463100, 0046312c]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_00463100(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_dlight_cpp_FUN_00463100(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01c4354c + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
