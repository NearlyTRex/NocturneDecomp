// Name: core_manpuz.cpp_FUN_004cbdb0
// Address: 004cbdb0
// Address Range: [[004cbdb0, 004cbdcb]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004cbdb0(int param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004cbdb0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2cc)) {
    return;
  }
  *(uint *)(param_1 + 0x2cc) = 0;
  return;
}
