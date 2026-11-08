// Name: FUN_00504250
// Address: 00504250
// Address Range: [[00504250, 005042d6]]
// Convention: unknown
// Signature: void FUN_00504250(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504250(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((char)param_1[0xc] == '\0') {
    if (*param_1 == 0) {
      _DAT_01d046a0 = "..\\core\\motion.cpp";
      _DAT_01d046a4 = 0x581;
      FUN_004e4500();
    }
    uVar1 = FUN_005035c0(param_1,(double)(float)param_1[2]);
    FUN_005b8010(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,uVar1);
    return;
  }
  FUN_005b8010(param_2,"%s\"%s\",%g // current motion name, curFrameNumber\n",param_3,param_1 + 0xc,
               (double)(float)param_1[2]);
  return;
}
