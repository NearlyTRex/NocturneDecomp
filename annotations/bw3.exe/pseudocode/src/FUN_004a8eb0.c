// Name: FUN_004a8eb0
// Address: 004a8eb0
// Address Range: [[004a8eb0, 004a8ecf]]
// Convention: unknown
// Signature: void FUN_004a8eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004a8eb0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}
