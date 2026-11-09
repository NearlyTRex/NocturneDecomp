// Name: core_fldnotes.cpp_FUN_004bb6c0
// Address: 004bb6c0
// Address Range: [[004bb6c0, 004bb6eb]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bb6c0(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bb6c0(int param_1)

{
  core_fldnotes_cpp_FUN_004bb570(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x20);
  core_fldnotes_cpp_FUN_004bbbf0(param_1);
  return;
}
