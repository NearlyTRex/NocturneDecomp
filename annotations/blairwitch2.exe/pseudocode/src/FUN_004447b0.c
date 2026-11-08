// Name: FUN_004447b0
// Address: 004447b0
// Address Range: [[004447b0, 0044482d]]
// Convention: unknown
// Signature: void FUN_004447b0(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004447b0(int *param_1,uint param_2,int param_3)

{
  FUN_005b87c0(&DAT_01510dcc,3,4,param_2);
  *param_1 = param_3 + _DAT_01510dcc * 0xc;
  param_1[1] = param_3 + _DAT_01510dd0 * 0xc;
  param_1[2] = param_3 + _DAT_01510dd4 * 0xc;
  FUN_005b87c0(param_1 + 3,0x14,1,param_2);
  return;
}
