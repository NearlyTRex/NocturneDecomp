// Name: FUN_004cdbe0
// Address: 004cdbe0
// Address Range: [[004cdbe0, 004cdc89]]
// Convention: unknown
// Signature: void FUN_004cdbe0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004cdbe0(uint *param_1,uint param_2)

{
  FUN_005a3140(param_2,"%f,%f,%f,%d\n",(double)(float)param_1[1],(double)(float)param_1[2],
               (double)(float)param_1[3],param_1[4]);
  FUN_005a3140(param_2,"%d,%d,%d\n",param_1[5],param_1[6],*param_1);
  FUN_005a3140(param_2,"%f,%f,%f\n",(double)(float)param_1[7],(double)(float)param_1[9],
               (double)(float)param_1[8]);
  FUN_005a3140(param_2,"%d,%d,%d,%d,%d,%d,%d\n",param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],
               param_1[0xf],param_1[0x10],param_1[0x11]);
  return;
}
