// Name: FUN_004bb270
// Address: 004bb270
// Address Range: [[004bb270, 004bb28f]]
// Convention: unknown
// Signature: void FUN_004bb270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004bb270(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}
