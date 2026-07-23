// Name: core_gore.cpp_CBloodPool_save_FUN_004af820
// Address: 004af820
// Address Range: [[004af820, 004af895]]
// Convention: unknown
// Signature: void core_gore_cpp_CBloodPool_save_FUN_004af820(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void core_gore_cpp_CBloodPool_save_FUN_004af820(uint *param_1,uint param_2)

{
  _fprintf(param_2,"%f,%f,%f\n",(double)(float)param_1[1],(double)(float)param_1[2],
             (double)(float)param_1[3]);
  _fprintf(param_2,"%d,%d\n",*param_1,param_1[4]);
  _fprintf(param_2,"%d,%f,%d,%d,%d\n",param_1[5],(double)(float)param_1[6],param_1[7],param_1[8]
             ,param_1[9]);
  return;
}
