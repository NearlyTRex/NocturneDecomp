// Name: FUN_00487e90
// Address: 00487e90
// Address Range: [[00487e90, 00487fca]]
// Convention: unknown
// Signature: void FUN_00487e90(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00487e90(uint *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  
  FUN_005644f0(param_2,"%d,%d,%f,%f\n",*param_1,param_1[1],(double)(float)param_1[2],
               (double)(float)param_1[6]);
  FUN_005644f0(param_2,"%f,%f,%f\n",(double)(float)param_1[3],(double)(float)param_1[4],
               (double)(float)param_1[5]);
  puVar4 = param_1;
  do {
    pfVar1 = (float *)(puVar4 + 9);
    pfVar2 = (float *)(puVar4 + 8);
    pfVar3 = (float *)(puVar4 + 7);
    puVar4 = puVar4 + 3;
    FUN_005644f0(param_2,"%f,%f,%f\n",(double)*pfVar3,(double)*pfVar2,(double)*pfVar1);
  } while (puVar4 != param_1 + 9);
  FUN_005644f0(param_2,"%f,%f,%f\n",(double)(float)param_1[0x10],(double)(float)param_1[0x11]
               ,(double)(float)param_1[0x12]);
  FUN_005644f0(param_2,"%f,%f,%f\n",(double)(float)param_1[0x13],(double)(float)param_1[0x14]
               ,(double)(float)param_1[0x15]);
  FUN_005644f0(param_2,"%f,%f,%f\n",(double)(float)param_1[0x16],(double)(float)param_1[0x17]
               ,(double)(float)param_1[0x18]);
  FUN_005644f0(param_2,"%f,%f,%f\n",(double)(float)param_1[0x19],(double)(float)param_1[0x1a]
               ,(double)(float)param_1[0x1b]);
  return;
}
