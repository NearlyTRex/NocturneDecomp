// Name: crt_unknown.c_FUN_0056d488
// Address: 0056d488
// Address Range: [[0056d488, 0056d4aa]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056d488(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_0056d488(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 0x20) = 0;
  gmtime_r(0x63df,*param_1,0,param_2);
  return;
}
