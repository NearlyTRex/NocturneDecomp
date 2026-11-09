// Name: core_fldnotes.cpp_FUN_004bac50
// Address: 004bac50
// Address Range: [[004bac50, 004bac80]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004bac50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004bac50(int param_1,int param_2)

{
  if (_DAT_01cc4200 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    return 1;
  }
  core_fldnotes_cpp_FUN_004baf50(_DAT_01cc4200,param_1 + 0x2c);
  return 1;
}
