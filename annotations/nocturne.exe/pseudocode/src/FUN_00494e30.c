// Name: FUN_00494e30
// Address: 00494e30
// Address Range: [[00494e30, 00494e7b]]
// Convention: unknown
// Signature: void FUN_00494e30(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00494e30(int param_1,float param_2,uint param_3)

{
  if ((_DAT_01c71340 <= param_2) && (param_2 < *(float *)(param_1 + 0x154))) {
    FUN_00526340();
    FUN_00525fc0(param_1 + 0x488);
    FUN_005265a0(param_3);
    FUN_005263c0();
    return;
  }
  return;
}
