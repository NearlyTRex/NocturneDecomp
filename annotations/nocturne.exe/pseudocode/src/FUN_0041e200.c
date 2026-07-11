// Name: FUN_0041e200
// Address: 0041e200
// Address Range: [[0041e200, 0041e257]]
// Convention: unknown
// Signature: bool FUN_0041e200(undefined4 param_1,float *param_2,float param_3)

#include "nocturne.h"

bool FUN_0041e200(uint param_1,float *param_2,float param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_0041e160(param_1,&local_20,param_2);
  return (local_18 - param_2[2]) * (local_18 - param_2[2]) +
         (local_1c - param_2[1]) * (local_1c - param_2[1]) +
         (local_20 - *param_2) * (local_20 - *param_2) <= param_3 * param_3;
}
