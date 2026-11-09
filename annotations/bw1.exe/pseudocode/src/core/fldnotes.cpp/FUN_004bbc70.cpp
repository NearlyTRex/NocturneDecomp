// Name: core_fldnotes.cpp_FUN_004bbc70
// Address: 004bbc70
// Address Range: [[004bbc70, 004bbca1]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bbc70(int param_1,int param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bbc70(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    core_fldnotes_cpp_FUN_004bb160(param_2 * 0x144 + *(int *)(param_1 + 0x3c));
    return;
  }
  return;
}
