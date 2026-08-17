// Name: crt_unknown.c_FUN_0056d488
// Address: 0056d488
// Address Range: [[0056d488, 0056d4aa]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056d488(time_t *param_1,_tm *param_2)

#include "nocturne.h"

void FUN_0056d488(time_t *param_1,_tm *param_2)

{
  param_2->tm_isdst = 0;
  gmtime_r(0x63df,*param_1,0,param_2);
  return;
}
