// Name: FUN_0059d330
// Address: 0059d330
// Address Range: [[0059d330, 0059d354]]
// Convention: unknown
// Signature: void FUN_0059d330(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0059d330(uint *param_1,uint param_2)

{
  param_1[0x202] = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[0x203] = param_1 + 2;
  return;
}
