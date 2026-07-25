// Name: FUN_00534e90
// Address: 00534e90
// Address Range: [[00534e90, 00534ecd]]
// Convention: unknown
// Signature: float FUN_00534e90(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

#include "nocturne.h"

float FUN_00534e90(uint param_1,uint param_2,float param_3,int param_4)

{
  double dVar1;
  
  dVar1 = 0.40000000000000002;
  if ((0 < param_4) && (dVar1 = 0.69999999999999996, param_4 != 1)) {
    return param_3;
  }
  return param_3 * (float)dVar1;
}
