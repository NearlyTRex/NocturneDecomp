// Name: FUN_00500f20
// Address: 00500f20
// Address Range: [[00500f20, 00500f88]]
// Convention: unknown
// Signature: float FUN_00500f20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00500f20(int param_1)

{
  uint uStack_8;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  uStack_8 = (float)FUN_0040cc00(0x41a00000,0x42480000);
  if (*(int *)(0x01CCF390 + 0xd0) == 3) {
    uStack_8 = uStack_8 * _DAT_005e6ef6;
  }
  return uStack_8;
}
