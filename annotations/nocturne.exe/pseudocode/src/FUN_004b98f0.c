// Name: FUN_004b98f0
// Address: 004b98f0
// Address Range: [[004b98f0, 004b99aa]]
// Convention: unknown
// Signature: undefined4 FUN_004b98f0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004b98f0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_28,_DAT_01cae1e0);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_1c,_DAT_01cae204);
  if (param_2 + 3 != puVar1) {
    param_2[3] = *puVar1;
    param_2[4] = puVar1[1];
    param_2[5] = puVar1[2];
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_34,_DAT_01cae20c);
  if (param_2 + 6 == puVar1) {
    return 3;
  }
  param_2[6] = *puVar1;
  param_2[7] = puVar1[1];
  param_2[8] = puVar1[2];
  return 3;
}
