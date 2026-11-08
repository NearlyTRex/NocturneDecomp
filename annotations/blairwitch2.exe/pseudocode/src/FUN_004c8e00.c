// Name: FUN_004c8e00
// Address: 004c8e00
// Address Range: [[004c8e00, 004c8e75]]
// Convention: unknown
// Signature: void FUN_004c8e00(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004c8e00(uint *param_1,uint param_2)

{
  FUN_005b8010(param_2,"%f,%f,%f\n",(double)(float)param_1[1],(double)(float)param_1[2],
               (double)(float)param_1[3]);
  FUN_005b8010(param_2,"%d,%d\n",*param_1,param_1[4]);
  FUN_005b8010(param_2,"%d,%f,%d,%d,%d\n",param_1[5],(double)(float)param_1[6],param_1[7],
               param_1[8],param_1[9]);
  return;
}
