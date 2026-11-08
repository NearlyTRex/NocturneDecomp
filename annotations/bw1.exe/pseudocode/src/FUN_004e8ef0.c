// Name: FUN_004e8ef0
// Address: 004e8ef0
// Address Range: [[004e8ef0, 004e8f6f]]
// Convention: unknown
// Signature: float FUN_004e8ef0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004e8ef0(int param_1)

{
  float fStack_c;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  fStack_c = (float)FUN_0040cc00(0x41700000,0x41c80000);
  if (*(int *)(0x01CCF390 + 0xd0) == 3) {
    fStack_c = fStack_c * _DAT_005e43fb;
  }
  return fStack_c;
}
