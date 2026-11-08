// Name: FUN_00495e40
// Address: 00495e40
// Address Range: [[00495e40, 00495e5e]]
// Convention: unknown
// Signature: void FUN_00495e40(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00495e40(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}
