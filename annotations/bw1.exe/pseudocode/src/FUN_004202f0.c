// Name: FUN_004202f0
// Address: 004202f0
// Address Range: [[004202f0, 00420442]]
// Convention: unknown
// Signature: void FUN_004202f0(float *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004202f0(float *param_1,uint param_2,uint param_3)

{
  FUN_005c03c0();
  FUN_005c03c0(param_2,"%s%d\n",param_3,1);
  FUN_005c03c0();
  FUN_005c03c0(param_2,"%s%f,%f,%f\n",param_3,(double)*param_1,(double)param_1[1],
               (double)param_1[2]);
  FUN_005c03c0(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[3],(double)param_1[5],
               (double)param_1[4]);
  FUN_005c03c0(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x29],(double)param_1[0x2a],
               (double)param_1[0x2b]);
  FUN_005c03c0();
  FUN_005c03c0(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x13],(double)param_1[0x14],
               (double)param_1[0x15]);
  FUN_005c03c0(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x1c],(double)param_1[0x1d],
               (double)param_1[0x1e]);
  FUN_005c03c0(param_2,"%s%d\n",param_3,param_1[0x95]);
  return;
}
