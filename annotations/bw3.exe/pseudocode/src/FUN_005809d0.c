// Name: FUN_005809d0
// Address: 005809d0
// Address Range: [[005809d0, 005809f3]]
// Convention: unknown
// Signature: void FUN_005809d0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005809d0(int param_1,int param_2)

{
  SetCursorPos(param_1,param_2);
  _DAT_01c5fadc = param_1;
  _DAT_01c5fae0 = param_2;
  return;
}
