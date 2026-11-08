// Name: FUN_005b44b0
// Address: 005b44b0
// Address Range: [[005b44b0, 005b4602]]
// Convention: unknown
// Signature: void FUN_005b44b0(float *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b44b0(float *param_1,uint param_2,uint param_3)

{
  FUN_005b8010();
  FUN_005b8010(param_2,"%s%d\n",param_3,1);
  FUN_005b8010();
  FUN_005b8010(param_2,"%s%f,%f,%f\n",param_3,(double)*param_1,(double)param_1[1],
               (double)param_1[2]);
  FUN_005b8010(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[3],(double)param_1[5],
               (double)param_1[4]);
  FUN_005b8010(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x29],(double)param_1[0x2a],
               (double)param_1[0x2b]);
  FUN_005b8010();
  FUN_005b8010(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x13],(double)param_1[0x14],
               (double)param_1[0x15]);
  FUN_005b8010(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x1c],(double)param_1[0x1d],
               (double)param_1[0x1e]);
  FUN_005b8010(param_2,"%s%d\n",param_3,param_1[0x95]);
  return;
}
