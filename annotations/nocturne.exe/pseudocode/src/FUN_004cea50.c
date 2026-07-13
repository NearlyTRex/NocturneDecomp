// Name: FUN_004cea50
// Address: 004cea50
// Address Range: [[004cea50, 004ceada]]
// Convention: unknown
// Signature: int FUN_004cea50(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cea50(int param_1)

{
  byte bVar1;
  float10 fVar2;
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
  FUN_004cd0e0(&stack0xffffffb0);
  uStack_50 = uStack_44;
  (&stack0xffffffb4)[(uint)bVar1 * 0xfffffffe] =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < iStack_48) {
    iStack_1c = param_1;
    iStack_18 = iStack_48;
    fVar2 = ((-(float10)param_1 * (float10)_DAT_01c00c4c) / (float10)iStack_48) /
            (float10)DAT_005b7648;
    FUN_00563a30();
    return (int)ROUND(fVar2);
  }
  return -1;
}
