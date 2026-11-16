// Name: FUN_004e6d80
// Address: 004e6d80
// Address Range: [[004e6d80, 004e6e0a]]
// Convention: unknown
// Signature: int FUN_004e6d80(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e6d80(int param_1)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_1c;
  int iStack_18;
  
  bVar1 = 0;
  iStack_4c = param_1;
  uStack_50 = 0;
  iStack_48 = 0;
  FUN_004e5410(&stack0xffffffb0);
  uStack_50 = uStack_44;
  (&stack0xffffffb4)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < iStack_48) {
    iStack_1c = param_1;
    iStack_18 = iStack_48;
    dVar2 = round
                      (((-(double)param_1 * (double)_DAT_01c6b59c) / (double)iStack_48) /
                       (double)DAT_005fba44);
    return (int)ROUND(dVar2);
  }
  return -1;
}
