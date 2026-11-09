// Name: core_fldnotes.cpp_FUN_004bb0c0
// Address: 004bb0c0
// Address Range: [[004bb0c0, 004bb10a]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bb0c0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bb0c0(int *param_1,int param_2)

{
  if (*param_1 < 0x50) {
    param_1[*param_1 + 1] = param_2;
    *param_1 = *param_1 + 1;
    return;
  }
  _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
  _DAT_01d1d404 = 0x484;
  core_main_c_FUN_005030e0("TextPage::addResource - too many resources!");
  param_1[*param_1 + 1] = param_2;
  *param_1 = *param_1 + 1;
  return;
}
