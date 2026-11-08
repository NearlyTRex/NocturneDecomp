// Name: FUN_004d2620
// Address: 004d2620
// Address Range: [[004d2620, 004d26ae]]
// Convention: unknown
// Signature: void FUN_004d2620(int param_1)

#include "nocturne.h"

void FUN_004d2620(int param_1)

{
  int iVar1;
  
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005e1534;
  iVar1 = 0;
  do {
    if (param_1 == *(int *)(iVar1 + 0x1d5ba04)) {
      *(uint *)(iVar1 + 0x1d5ba04) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = FUN_004da420(param_1 + 0x206e8,0);
  iVar1 = FUN_0050ad40(iVar1 + -0x138e0,0);
  iVar1 = FUN_00410370(iVar1 + -0x95ac,0);
  iVar1 = FUN_0043f900(iVar1 + -0x954,0);
  iVar1 = FUN_0054bf80(iVar1 + -0x2db0,0);
  FUN_00408770(iVar1 + -0x158,1);
  return;
}
