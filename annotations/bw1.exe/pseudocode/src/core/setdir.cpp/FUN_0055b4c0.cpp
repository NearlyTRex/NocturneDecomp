// Name: core_setdir.cpp_FUN_0055b4c0
// Address: 0055b4c0
// Address Range: [[0055b4c0, 0055b4ec]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_0055b4c0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_setdir_cpp_FUN_0055b4c0(int param_1,int param_2,int param_3)

{
  *(int *)(*(int *)(&DAT_01c4354c + param_2 * 4) + param_1 * 4) = param_3 * 0x10101;
  return;
}
