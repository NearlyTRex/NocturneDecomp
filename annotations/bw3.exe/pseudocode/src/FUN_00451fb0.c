// Name: FUN_00451fb0
// Address: 00451fb0
// Address Range: [[00451fb0, 0045202d]]
// Convention: unknown
// Signature: void FUN_00451fb0(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451fb0(int *param_1,uint param_2,int param_3)

{
  FUN_005a3890(&DAT_01548b7c,3,4,param_2);
  *param_1 = param_3 + _DAT_01548b7c * 0xc;
  param_1[1] = param_3 + _DAT_01548b80 * 0xc;
  param_1[2] = param_3 + _DAT_01548b84 * 0xc;
  FUN_005a3890(param_1 + 3,0x14,1,param_2);
  return;
}
