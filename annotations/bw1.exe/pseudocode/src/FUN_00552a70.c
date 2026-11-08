// Name: FUN_00552a70
// Address: 00552a70
// Address Range: [[00552a70, 00552ad3]]
// Convention: unknown
// Signature: undefined4 * FUN_00552a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

uint * FUN_00552a70(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  
  FUN_00552710(param_1,param_2,param_3,param_4,0);
  puVar1 = &DAT_00629044 + param_4 * 0xc;
  while (param_5 = param_5 + -1, 0 < param_5) {
    puVar1[8] = (&DAT_00629034)[param_4 * 0xc];
    puVar1[9] = (&DAT_00629038)[param_4 * 0xc];
    puVar1[10] = (&DAT_0062903c)[param_4 * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return puVar1;
}
