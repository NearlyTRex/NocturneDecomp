// Name: FUN_004fcd30
// Address: 004fcd30
// Address Range: [[004fcd30, 004fcdb6]]
// Convention: unknown
// Signature: void FUN_004fcd30(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fcd30(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((char)param_1[0xc] == '\0') {
    if (*param_1 == 0) {
      _DAT_01d71de0 = "..\\core\\motion.cpp";
      _DAT_01d71de4 = 0x59b;
      FUN_004e4330();
    }
    uVar1 = FUN_004fc070(param_1,(double)(float)param_1[2]);
    FUN_005a3140(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,uVar1);
    return;
  }
  FUN_005a3140(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,param_1 + 0xc,
               (double)(float)param_1[2]);
  return;
}
