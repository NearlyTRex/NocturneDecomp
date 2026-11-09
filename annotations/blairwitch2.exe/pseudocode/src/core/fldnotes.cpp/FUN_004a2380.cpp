// Name: core_fldnotes.cpp_FUN_004a2380
// Address: 004a2380
// Address Range: [[004a2380, 004a23b0]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a2380(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a2380(int param_1,int param_2)

{
  if (_DAT_01cab780 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    return 1;
  }
  core_fldnotes_cpp_FUN_004a2620(_DAT_01cab780,param_1 + 0x2c);
  return 1;
}
