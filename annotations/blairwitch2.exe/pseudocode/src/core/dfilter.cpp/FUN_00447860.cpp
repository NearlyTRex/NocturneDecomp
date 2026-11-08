// Name: FUN_00447860
// Address: 00447860
// Address Range: [[00447860, 004478ac]]
// Convention: unknown
// Signature: void FUN_00447860(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447860(int *param_1)

{
  int iVar1;
  
  FUN_004478b0(param_1);
  iVar1 = FUN_005b8580(*param_1 * param_1[1]);
  param_1[0x12] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dfilter.cpp";
  _DAT_01d046a4 = 0x8d;
  FUN_004e4500("CDemonFilter::allocMemory - Out of memory");
  return;
}
