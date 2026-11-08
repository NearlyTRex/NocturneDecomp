// Name: FUN_005389b0
// Address: 005389b0
// Address Range: [[005389b0, 00538a2e]]
// Convention: unknown
// Signature: void FUN_005389b0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005389b0(int *param_1)

{
  _DAT_020b1518 = DAT_006141b8;
  _DAT_020b151c = DAT_006141bc;
  DAT_006141b8 = *param_1;
  DAT_006141bc = param_1[1];
  FUN_0046b710(DAT_0060b280,0,0,*param_1 + -1,DAT_006141bc + -1);
  FUN_0046afb0(DAT_0060b280,param_1 + 2);
  FUN_0046b4d0(DAT_0060b280,param_1[8]);
  FUN_0046b030(DAT_0060b280,param_1 + 5);
  return;
}
