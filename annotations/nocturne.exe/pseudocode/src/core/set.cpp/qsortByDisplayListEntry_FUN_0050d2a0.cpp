// Name: core_set.cpp_qsortByDisplayListEntry_FUN_0050d2a0
// Address: 0050d2a0
// Address Range: [[0050d2a0, 0050d2cc]]
// Convention: unknown
// Signature: undefined4 core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0(int param_1,int param_2)

#include "nocturne.h"

uint core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0(int param_1,int param_2)

{
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 1;
  }
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 0xffffffff;
  }
  return 0;
}
