// Name: FUN_004e0000
// Address: 004e0000
// Address Range: [[004e0000, 004e0083]]
// Convention: unknown
// Signature: void FUN_004e0000(int *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_004e0000(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    if (param_3 != 0) {
      FUN_004031c0(0,0,DAT_005fba18 + -1,DAT_005fba1c + -1,0);
    }
    if (DAT_005fba1c == 0x1e0) {
      iVar1 = *param_1;
      *param_1 = iVar1 + 1;
      if (param_1[1] < iVar1 + 1) {
        *param_1 = param_1[1];
      }
      FUN_0040d6f0(0x1d70be8,0x4b,0x12a,(*param_1 / param_1[1]) * 0xd8ef + 10000);
      FUN_0057a8a0();
    }
  }
  return;
}
