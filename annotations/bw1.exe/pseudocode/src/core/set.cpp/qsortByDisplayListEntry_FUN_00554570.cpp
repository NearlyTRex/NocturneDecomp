// Name: core_set.cpp_qsortByDisplayListEntry_FUN_00554570
// Address: 00554570
// Address Range: [[00554570, 0055459c]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00554570(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_00554570(int param_1,int param_2)

{
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 1;
  }
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 0xffffffff;
  }
  return 0;
}
