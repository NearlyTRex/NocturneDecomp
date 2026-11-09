// Name: unkafter_bird.cpp_FUN_0040fe60
// Address: 0040fe60
// Address Range: [[0040fe60, 0040fe89]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_0040fe60(int param_1,int param_2)

#include "nocturne.h"

void unkafter_bird_cpp_FUN_0040fe60(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x206ac) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x24fc) = 1;
    }
    core_charactr_cpp_FUN_0042e300(param_1,param_2);
  }
  return;
}
