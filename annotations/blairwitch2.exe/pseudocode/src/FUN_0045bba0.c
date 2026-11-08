// Name: FUN_0045bba0
// Address: 0045bba0
// Address Range: [[0045bba0, 0045bc0b]]
// Convention: unknown
// Signature: void FUN_0045bba0(int param_1)

#include "nocturne.h"

void FUN_0045bba0(int param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_1014 [1006];
  byte local_54 [40];
  uint local_2c;
  uint auStack_28 [8];
  
  bVar1 = 0;
  auStack_28[2] = *(uint *)(param_1 + 0x2565c);
  auStack_28[4] = 0;
  auStack_28[3] = 0;
  FUN_00449280(local_54,auStack_28 + 2);
  auStack_28[7] = *(uint *)(param_1 + 0x25650);
  auStack_28[5] = 0;
  auStack_28[6] = 0;
  FUN_00449530(local_54,auStack_28 + 5);
  *unaff_ESI = local_2c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_28[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
