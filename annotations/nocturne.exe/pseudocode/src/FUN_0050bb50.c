// Name: FUN_0050bb50
// Address: 0050bb50
// Address Range: [[0050bb50, 0050bbb3]]
// Convention: unknown
// Signature: undefined4 * FUN_0050bb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

uint * FUN_0050bb50(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  
  FUN_0050b7f0(param_1,param_2,param_3,param_4,0);
  puVar1 = &DAT_005c5044 + param_4 * 0xc;
  while (param_5 = param_5 + -1, 0 < param_5) {
    puVar1[8] = (&DAT_005c5034)[param_4 * 0xc];
    puVar1[9] = (&DAT_005c5038)[param_4 * 0xc];
    puVar1[10] = (&DAT_005c503c)[param_4 * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return puVar1;
}
