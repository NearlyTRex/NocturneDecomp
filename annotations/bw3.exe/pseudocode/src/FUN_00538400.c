// Name: FUN_00538400
// Address: 00538400
// Address Range: [[00538400, 00538463]]
// Convention: unknown
// Signature: undefined4 * FUN_00538400(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

#include "nocturne.h"

uint * FUN_00538400(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  
  FUN_005380a0(param_1,param_2,param_3,param_4,0);
  puVar1 = &DAT_0060b044 + param_4 * 0xc;
  while (param_5 = param_5 + -1, 0 < param_5) {
    puVar1[8] = (&DAT_0060b034)[param_4 * 0xc];
    puVar1[9] = (&DAT_0060b038)[param_4 * 0xc];
    puVar1[10] = (&DAT_0060b03c)[param_4 * 0xc];
    puVar1 = puVar1 + 0xc;
  }
  return puVar1;
}
