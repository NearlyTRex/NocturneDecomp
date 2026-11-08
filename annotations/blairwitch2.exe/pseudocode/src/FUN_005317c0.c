// Name: FUN_005317c0
// Address: 005317c0
// Address Range: [[005317c0, 00531823]]
// Convention: unknown
// Signature: undefined4 * FUN_005317c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

uint * FUN_005317c0(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  
  FUN_00531460(param_1,param_2,param_3,param_4,0);
  puVar1 = &DAT_00622044 + param_4 * 0xc;
  while (param_5 = param_5 + -1, 0 < param_5) {
    puVar1[8] = (&DAT_00622034)[param_4 * 0xc];
    puVar1[9] = (&DAT_00622038)[param_4 * 0xc];
    puVar1[10] = (&DAT_0062203c)[param_4 * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return puVar1;
}
