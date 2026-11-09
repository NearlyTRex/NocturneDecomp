// Name: unkaddr_0057b9a0.cpp_FUN_0057cf40
// Address: 0057cf40
// Address Range: [[0057cf40, 0057cf74]]
// Convention: unknown
// Signature: undefined4 unkaddr_0057b9a0_cpp_FUN_0057cf40(int param_1,int param_2)

#include "nocturne.h"

uint unkaddr_0057b9a0_cpp_FUN_0057cf40(int param_1,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (*(int *)(param_1 + 4) != 0)) &&
     (0 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    return 1;
  }
  return 0;
}
