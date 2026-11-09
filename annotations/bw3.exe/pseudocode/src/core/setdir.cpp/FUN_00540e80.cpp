// Name: core_setdir.cpp_FUN_00540e80
// Address: 00540e80
// Address Range: [[00540e80, 00540eac]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_00540e80(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_setdir_cpp_FUN_00540e80(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01c5faec + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
