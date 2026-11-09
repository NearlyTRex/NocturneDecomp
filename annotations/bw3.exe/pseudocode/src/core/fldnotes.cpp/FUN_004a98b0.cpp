// Name: core_fldnotes.cpp_FUN_004a98b0
// Address: 004a98b0
// Address Range: [[004a98b0, 004a98e1]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a98b0(int param_1,int param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a98b0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    core_fldnotes_cpp_FUN_004a8da0(param_2 * 0x144 + *(int *)(param_1 + 0x3c));
    return;
  }
  return;
}
