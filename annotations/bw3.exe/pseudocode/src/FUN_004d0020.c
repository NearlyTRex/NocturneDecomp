// Name: FUN_004d0020
// Address: 004d0020
// Address Range: [[004d0020, 004d0109]]
// Convention: unknown
// Signature: void FUN_004d0020(int *param_1,uint param_2,uint param_3)

#include "nocturne.h"

void FUN_004d0020(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = FUN_004d0000(param_1,(param_3 - param_1[0xc]) + param_1[5],
                       (param_2 - param_1[0xb]) + param_1[4]);
  local_1c = param_1[7] * param_2 * 0x100;
  local_14 = param_1[7] * param_3 * 0x100;
  local_18 = param_1[8] *
             (int)*(short *)(param_1[9] +
                            ((param_3 & param_1[3]) * *param_1 + (param_2 & param_1[2])) * 4);
  FUN_0056356c(&DAT_0060b014 + iVar1 * 0xc,&local_1c);
  (&DAT_0060b034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b03c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_0060b01c)[iVar1 * 0xc] < 0) {
    (&DAT_0060b040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_0060b01c)[iVar1 * 0xc] << 8) / (param_1[4] * param_1[7]);
    (&DAT_0060b040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_0060b040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
