// Name: FUN_00448f40
// Address: 00448f40
// Address Range: [[00448f40, 00448fa5]]
// Convention: unknown
// Signature: void FUN_00448f40(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448f40(int *param_1,uint param_2,int param_3)

{
  _DAT_014b8a0c = (uint)(*param_1 - param_3) / 0xc;
  _DAT_014b8a10 = (uint)(param_1[1] - param_3) / 0xc;
  _DAT_014b8a14 = (uint)(param_1[2] - param_3) / 0xc;
  _fwrite(&DAT_014b8a0c,3,4,param_2);
  _fwrite(param_1 + 3,0x14,1,param_2);
  return;
}
