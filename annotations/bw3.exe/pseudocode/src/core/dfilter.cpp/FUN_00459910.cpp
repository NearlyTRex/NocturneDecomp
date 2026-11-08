// Name: FUN_00459910
// Address: 00459910
// Address Range: [[00459910, 0045995c]]
// Convention: unknown
// Signature: void FUN_00459910(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459910(int *param_1)

{
  int iVar1;
  
  FUN_00459960(param_1);
  iVar1 = FUN_005a3650(*param_1 * param_1[1]);
  param_1[0x12] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dfilter.cpp";
  _DAT_01d71de4 = 0x8d;
  FUN_004e4330("CDemonFilter::allocMemory - Out of memory");
  return;
}
