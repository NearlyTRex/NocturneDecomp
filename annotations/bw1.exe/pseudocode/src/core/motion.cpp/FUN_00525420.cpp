// Name: FUN_00525420
// Address: 00525420
// Address Range: [[00525420, 005254a6]]
// Convention: unknown
// Signature: void FUN_00525420(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525420(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((char)param_1[0xc] == '\0') {
    if (*param_1 == 0) {
      _DAT_01d1d400 = "..\\core\\motion.cpp";
      _DAT_01d1d404 = 0x596;
      FUN_005030e0();
    }
    uVar1 = FUN_00524770(param_1,(double)(float)param_1[2]);
    FUN_005c03c0(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,uVar1);
    return;
  }
  FUN_005c03c0(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,param_1 + 0xc,
               (double)(float)param_1[2]);
  return;
}
