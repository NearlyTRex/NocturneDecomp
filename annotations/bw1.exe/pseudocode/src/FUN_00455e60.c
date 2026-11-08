// Name: FUN_00455e60
// Address: 00455e60
// Address Range: [[00455e60, 00455edd]]
// Convention: unknown
// Signature: void FUN_00455e60(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455e60(int *param_1,uint param_2,int param_3)

{
  FUN_005c0b10(&DAT_0152c2cc,3,4,param_2);
  *param_1 = param_3 + _DAT_0152c2cc * 0xc;
  param_1[1] = param_3 + _DAT_0152c2d0 * 0xc;
  param_1[2] = param_3 + _DAT_0152c2d4 * 0xc;
  FUN_005c0b10(param_1 + 3,0x14,1,param_2);
  return;
}
