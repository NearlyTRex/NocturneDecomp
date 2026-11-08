// Name: FUN_004b4730
// Address: 004b4730
// Address Range: [[004b4730, 004b47c9]]
// Convention: unknown
// Signature: void FUN_004b4730(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4730(int param_1,uint param_2,int param_3,uint param_4,float param_5)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = 2;
  if (param_5 < (float)_DAT_005c2208) {
    uVar1 = 0xfb;
  }
  if (param_5 < (float)_DAT_005c2210) {
    uVar1 = 1;
  }
  FUN_00403250(param_1,param_2,param_3,param_4,0,0);
  fVar2 = (float10)((param_3 - param_1) + 1) * (float10)param_5;
  FUN_005a3120();
  if ((int)ROUND(fVar2) < 1) {
    return;
  }
  FUN_004031c0(param_1,param_2,param_1 + (int)ROUND(fVar2),param_4,uVar1);
  return;
}
