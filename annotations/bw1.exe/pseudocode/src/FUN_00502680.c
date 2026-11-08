// Name: FUN_00502680
// Address: 00502680
// Address Range: [[00502680, 005026e8]]
// Convention: unknown
// Signature: float FUN_00502680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00502680(int param_1)

{
  uint uStack_8;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  uStack_8 = (float)FUN_0040cc00(0x41900000,0x420c0000);
  if (*(int *)(0x01CCF390 + 0xd0) == 3) {
    uStack_8 = uStack_8 * _DAT_005e701e;
  }
  return uStack_8;
}
