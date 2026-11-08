// Name: FUN_004e7690
// Address: 004e7690
// Address Range: [[004e7690, 004e7779]]
// Convention: unknown
// Signature: void FUN_004e7690(int *param_1,uint param_2,uint param_3)

#include "nocturne.h"

void FUN_004e7690(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = FUN_004e7670(param_1,(param_3 - param_1[0xc]) + param_1[5],
                       (param_2 - param_1[0xb]) + param_1[4]);
  local_1c = param_1[7] * param_2 * 0x100;
  local_14 = param_1[7] * param_3 * 0x100;
  local_18 = param_1[8] *
             (int)*(short *)(param_1[9] +
                            ((param_3 & param_1[3]) * *param_1 + (param_2 & param_1[2])) * 4);
  FUN_0058043c(&DAT_00629014 + iVar1 * 0xc,&local_1c);
  (&DAT_00629034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_00629038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0062903c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_0062901c)[iVar1 * 0xc] < 0) {
    (&DAT_00629040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_0062901c)[iVar1 * 0xc] << 8) / (param_1[4] * param_1[7]);
    (&DAT_00629040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_00629040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
