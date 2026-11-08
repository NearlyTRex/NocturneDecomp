// Name: FUN_004a26e0
// Address: 004a26e0
// Address Range: [[004a26e0, 004a272a]]
// Convention: unknown
// Signature: void FUN_004a26e0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a26e0(int *param_1,int param_2)

{
  if (*param_1 < 0x50) {
    param_1[*param_1 + 1] = param_2;
    *param_1 = *param_1 + 1;
    return;
  }
  _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
  _DAT_01d046a4 = 0x450;
  FUN_004e4500("TextPage::addResource - too many resources!");
  param_1[*param_1 + 1] = param_2;
  *param_1 = *param_1 + 1;
  return;
}
